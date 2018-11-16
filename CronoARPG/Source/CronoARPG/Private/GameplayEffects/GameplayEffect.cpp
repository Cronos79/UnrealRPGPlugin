// Copyright 2016-2018 CronoSoft. All Rights Reserved.

#include "GameplayEffect.h"

TMap<FName, FGameplayEffectData> UGameplayEffect::GetAllEffects(UDataTable* EffectsTable)
{
	TMap<FName, FGameplayEffectData> EffectsMap;
	// Create an empty array
	TArray<FGameplayEffectData*> EffectsArray;
	// If EffectsTable is not null, Fill the array
	static const TCHAR* ContextString(TEXT("GENERAL"));
	if (EffectsTable != nullptr)
	{
		EffectsTable->GetAllRows<FGameplayEffectData>(ContextString, EffectsArray);
	}
	// Loop the array and fill the Effects TMap
	for (FGameplayEffectData* e : EffectsArray)
	{
		EffectsMap.Add(e->Name, *e);
	}

	return EffectsMap;
}
