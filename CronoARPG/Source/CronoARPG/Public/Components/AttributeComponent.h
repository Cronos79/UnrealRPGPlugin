// Copyright 2016-2018 CronoSoft. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CRPGAttribute.h"
#include "GameplayEffect.h"
#include "AttributeComponent.generated.h"


UCLASS(Blueprintable, ClassGroup = (CRPG), meta = (BlueprintSpawnableComponent))
class CRONOARPG_API UAttributeComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, Category = "AttributesComp")
	UDataTable* AttributesTable;
	UCRPGAttribute* AttributeHelper;	

	/***************** Buff system *****************/
	TMap<FName, FTimerHandle> EffectTimerHandles;
	TMap<FName, FGameplayEffectData> ActiveEffects;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AttributesComp")
	UDataTable* EffectsTable;
	UGameplayEffect* EffectsHelper;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AttributesComp")
	TMap<FName, FCRPGAttributeData> AttributesMap;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AttributesComp")
	TMap<FName, FGameplayEffectData> EffectsMap;

public:	
	// Sets default values for this component's properties
	UAttributeComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void InitAttributes();
	void InitEffects();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/***************** Attributes *****************/
	UFUNCTION(BlueprintCallable, Category = "AttributesComp")
	virtual void ModifyAttributeValue(FName AttributeName, float Amount, bool CanGoOverMax);
	UFUNCTION(BlueprintCallable, Category = "AttributesComp")
	virtual void ModifyAttributeMaxValue(FName AttributeName, float Amount, bool AffectValue);
	UFUNCTION(BlueprintCallable, Category = "AttributesComp")
	virtual FCRPGAttributeData GetAttribute(FName AttributeName);
	
	/***************** Buff system *****************/
	void StartEffectTimer(FGameplayEffectData Effect);
	UFUNCTION(BlueprintCallable, Category = "AttributesComp")
	bool ApplyEffect(FName EffectName, int32 StackAmount);
	UFUNCTION(BlueprintCallable, Category = "AttributesComp")
	void RemoveEffect(FGameplayEffectData Effect);
	UFUNCTION(BlueprintCallable, Category = "AttributesComp")
	FGameplayEffectData GetEffect(FName Name, bool &Found);

	/***************** Events *****************/
	UFUNCTION(BlueprintNativeEvent, Category = "AttributesComp")
	void OnAttributeChange(FCRPGAttributeData AttributeChanged);
};
