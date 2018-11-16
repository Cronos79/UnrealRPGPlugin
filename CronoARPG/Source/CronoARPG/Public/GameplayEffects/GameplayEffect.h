// Copyright 2016-2018 CronoSoft. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <Engine/DataTable.h>
#include "GameplayEffect.generated.h"

/// <summary> Lets the user know if this is intended as a Buff or Debuff </summary>
UENUM(BlueprintType)
enum class EGameplayEffectType : uint8
{
	Buff	UMETA(DisplayName = "Buff"),
	Debuff	UMETA(DisplayName = "Debuff")
};

/// <summary> Does the effect happen instantly once, or multiple times over a duration </summary>
UENUM(BlueprintType)
enum class EGameplayEffectDurationPolicy : uint8
{
	Instant 	UMETA(DisplayName = "Instant"),
	HasDuration	UMETA(DisplayName = "Has Duration")
};

/// <summary> Does the timer for the duration reset when a new stack is added </summary>
UENUM(BlueprintType)
enum class EGameplayEffectStackingPolicy : uint8
{
	Refresh				UMETA(DisplayName = "Refresh"),
	NeverRefresh		UMETA(DisplayName = "Never Refresh")
};

/// <summary> When the effect timer hits 0 does it remove one stack or all stacks </summary>
UENUM(BlueprintType)
enum class EGameplayEffectExpirationPolicy : uint8
{
	ClearEntireStack	UMETA(DisplayName = "Clear Entire Stack"),
	RemoveOneFromStack	UMETA(DisplayName = "Remove One From Stack")
};

/// <summary> What attributes does the effect modify </summary>
USTRUCT(BlueprintType)
struct FAttributeModifier
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay Attribute")
	FName AttributeName; // The name of the attribute to effect.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay Attribute")
	float Amount; // The amount to effect the attribute by. Can be negative.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay Effect")
	bool bAmountIsPercent; // Treat the amount as a 0.0 to 1.0 percent
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay Effect")
	bool bCanGoOverMax; // Can the effect make the attribute go over its max value

	// Default constructor
	FAttributeModifier()
	{
		AttributeName = {};
		Amount = 0.0f;
		bAmountIsPercent = false;
		bCanGoOverMax = false;
	}
};

/// <summary> Struct for holding the effects data </summary>
USTRUCT(BlueprintType)
struct FGameplayEffectData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay Effect")
	FName Name; // The effects name.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay Effect")
	FString DisplayName; // The effects Display name.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay Effect")
	EGameplayEffectType EffectType; // Effect type, as a Buff or Debuff
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay Effect")
	EGameplayEffectDurationPolicy DurationPolicy; // Does the effect happen instantly once, or multiple times over a duration
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay Effect")
	float Duration; // If it has a HasDuration policy how long will the effect last
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay Effect")
	EGameplayEffectStackingPolicy StackingPolicy; // Does the timer for the duration reset when a new stack is added
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay Effect")
	int32 StackLimit; // Max amount of stacks a effect can have, -1 for unlimited
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay Effect")
	int32 CurrentStacks; // The current amount of stacks for the effect
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay Effect")
	EGameplayEffectExpirationPolicy ExpirationPolicy; // When the effect timer hits 0 does it remove one stack or all stacks
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay Effect")
	TArray<FAttributeModifier> AttributesToEffect;	// List of attributes to effect and how much

	// Default constructor
	FGameplayEffectData()
	{
		Name = {};
		DisplayName = {};
		EffectType = {};
		Duration = {};
		DurationPolicy = {};
		Duration = {};
		StackingPolicy = {};
		StackLimit = {};
		CurrentStacks = {};
		ExpirationPolicy = {};
		AttributesToEffect = {};
		// #00TODO: niagara effect
	}
};

/// <summary> A holder for all the effects in the DataTable </summary>
UCLASS(BlueprintType)
class CRONOARPG_API UGameplayEffect : public UObject
{
	GENERATED_BODY()	

public:
	UFUNCTION(BlueprintCallable, Category = "Gameplay Effect")
	TMap<FName, FGameplayEffectData> GetAllEffects(UDataTable* EffectsTable);
};
