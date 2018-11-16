// Copyright 2016-2018 CronoSoft. All Rights Reserved.

#include "AttributeComponent.h"


// Sets default values for this component's properties
UAttributeComponent::UAttributeComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	AttributeHelper = NewObject<UCRPGAttribute>(UCRPGAttribute::StaticClass());
	EffectsHelper = NewObject<UGameplayEffect>(UCRPGAttribute::StaticClass());
}


// Called when the game starts
void UAttributeComponent::BeginPlay()
{
	Super::BeginPlay();
	
	InitAttributes();
}

// Called every frame
void UAttributeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UAttributeComponent::InitAttributes()
{
	AttributesMap = AttributeHelper->InitAttributes(AttributesTable);

	// #00TODO Add values from saved data.

	// Will loop all attributes and add values to attributes effected by others
	TMap<FName, FCRPGAttributeData> TempAttributesMap;
	TempAttributesMap = AttributesMap;
	for (const TPair<FName, FCRPGAttributeData>& pair : TempAttributesMap)
	{
		if (pair.Value.EffectAttribute.Num() > 0)
		{
			for (FEffectAttributeValues e : pair.Value.EffectAttribute)
			{
				if (AttributesMap.Contains(e.Name))
				{
					float OldMax = AttributesMap[e.Name].MaxValue;
					AttributesMap[e.Name].SetMaxValue((pair.Value.Value * e.AmountPerPoint) + OldMax);
				}
			}
		}
	}
}

void UAttributeComponent::InitEffects()
{
	EffectsMap = EffectsHelper->GetAllEffects(EffectsTable);
}

/// <summary> Modifies the value of an attribute not allowing it to go below 0, and clamping at max value or letting it go over max </summary>
void UAttributeComponent::ModifyAttributeValue(FName AttributeName, float Amount, bool CanGoOverMax)
{
	if (AttributesMap.Contains(AttributeName))
	{
		float OldValue = AttributesMap[AttributeName].Value;
		if (CanGoOverMax)
		{
			AttributesMap[AttributeName].Value = FMath::Max(0.0f, OldValue += Amount);
		}
		else
		{
			AttributesMap[AttributeName].Value = FMath::Clamp(OldValue += Amount, 0.0f, AttributesMap[AttributeName].MaxValue);
		}
		OnAttributeChange(AttributesMap[AttributeName]);
	}
}

/// <summary> Modifies the max value of an attribute and can also modify the value to match </summary>
void UAttributeComponent::ModifyAttributeMaxValue(FName AttributeName, float Amount, bool AffectValue)
{
	if (AttributesMap.Contains(AttributeName))
	{
		float OldMax = AttributesMap[AttributeName].MaxValue;
		AttributesMap[AttributeName].SetMaxValue(Amount + OldMax, AffectValue);
		OnAttributeChange(AttributesMap[AttributeName]);
	}
}

/// <summary> Gets the attribute if it exist </summary>
FCRPGAttributeData UAttributeComponent::GetAttribute(FName AttributeName)
{
	if (AttributesMap.Contains(AttributeName))
	{
		return AttributesMap[AttributeName];
	}
	return FCRPGAttributeData();
}

void UAttributeComponent::StartEffectTimer(FGameplayEffectData Effect)
{
	// https://docs.unrealengine.com/en-US/Programming/UnrealArchitecture/Timers
	FTimerDelegate TimerDel;
	FTimerHandle TimerHandle;
	float EffectTime = 0.0f;
	if (ActiveEffects.Contains(Effect.Name))
	{
//		// Set the duration of the buff
		if (Effect.StackingPolicy == EGameplayEffectStackingPolicy::Refresh)
		{
			EffectTime = Effect.Duration;
		}
		else
		{
			EffectTime = GetOwner()->GetWorldTimerManager().GetTimerRemaining(EffectTimerHandles[Effect.Name]);
		}


		TimerHandle = EffectTimerHandles[Effect.Name];
	}

	//Binding the function with specific variables
	TimerDel.BindUFunction(this, FName("RemoveEffect"), Effect);
	//Calling RemoveBuff after x seconds without looping
	GetOwner()->GetWorldTimerManager().SetTimer(TimerHandle, TimerDel, EffectTime, false);

	EffectTimerHandles.Add(Effect.Name, TimerHandle);
	ActiveEffects.Add(Effect.Name, Effect);
}

bool UAttributeComponent::ApplyEffect(FName EffectName, int32 StackAmount)
{
	bool foundEffect = false;
	FGameplayEffectData Effect;
	// Lookup the effect. If it exist Create Buff and continue. Otherwise return
	if (ActiveEffects.Contains(EffectName))
	{
		// Get the active effect
		Effect = ActiveEffects[EffectName];
		foundEffect = true;
	}
	else if (EffectsMap.Contains(EffectName))
	{
		// Start a new effect
		Effect = EffectsMap[EffectName];
		foundEffect = true;
	}

	if (foundEffect)
	{
		if (StackAmount + Effect.CurrentStacks > Effect.StackLimit)
		{
			StackAmount = Effect.StackLimit - Effect.CurrentStacks;
		}

		for (FAttributeModifier attmod : Effect.AttributesToEffect)
		{
			ModifyAttributeValue(attmod.AttributeName, attmod.Amount * StackAmount, attmod.bCanGoOverMax);
		}

		// If the buff has a time limit, Set timer to remove it
		if (Effect.DurationPolicy == EGameplayEffectDurationPolicy::HasDuration)
		{
			Effect.CurrentStacks += StackAmount;
			StartEffectTimer(Effect);
		}
	}

	return foundEffect;
}

void UAttributeComponent::RemoveEffect(FGameplayEffectData Effect)
{
	// #00TODO Add effect stuff
	if (ActiveEffects.Contains(Effect.Name))
	{
		// Get the active effect
	}

	// #00TODO Clear Timer before removing?
	EffectTimerHandles.Remove(Effect.Name);
	// #00TODO Remove buff or one from stack and refresh timer
	for (FAttributeModifier Att : Effect.AttributesToEffect)
	{
		float AmountToRemove = 0.0f;
		switch (Effect.ExpirationPolicy)
		{
		case EGameplayEffectExpirationPolicy::ClearEntireStack:
			AmountToRemove = Att.Amount * Effect.CurrentStacks;
			break;
		case EGameplayEffectExpirationPolicy::RemoveOneFromStack:
			AmountToRemove = Att.Amount;
			break;
		default:
			break;
		}

		ModifyAttributeValue(Att.AttributeName, AmountToRemove * -1, Att.bCanGoOverMax);
	}	

	switch (Effect.ExpirationPolicy)
	{
	case EGameplayEffectExpirationPolicy::ClearEntireStack:
		ActiveEffects[Effect.Name].CurrentStacks = 0;
		break;
	case EGameplayEffectExpirationPolicy::RemoveOneFromStack:
		ActiveEffects[Effect.Name].CurrentStacks -= 1;
		break;
	default:
		break;
	}

	if (ActiveEffects[Effect.Name].CurrentStacks > 0)
	{
		StartEffectTimer(ActiveEffects[Effect.Name]);
	}
	else
	{
		ActiveEffects.Remove(Effect.Name);
	}
}

FGameplayEffectData UAttributeComponent::GetEffect(FName Name, bool &Found)
{
	if (ActiveEffects.Contains(Name))
	{
		Found = true;
		return ActiveEffects[Name];
	}
	else if (EffectsMap.Contains(Name))
	{
		Found = true;
		return EffectsMap[Name];
	}

	Found = false;
	return FGameplayEffectData();
}

void UAttributeComponent::OnAttributeChange_Implementation(FCRPGAttributeData AttributeChanged)
{

}

