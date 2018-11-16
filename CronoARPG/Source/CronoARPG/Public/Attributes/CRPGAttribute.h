// Copyright 2016-2018 CronoSoft. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <Engine/DataTable.h>
#include "CRPGAttribute.generated.h"

/// <summary> Holds basic attribute data </summary>
USTRUCT(BlueprintType)
struct FEffectAttributeValues
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CRPGAttribute")
	FName Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CRPGAttribute")
	float AmountPerPoint;

	FEffectAttributeValues()
	{
		Name = {};
		AmountPerPoint = {};
	}
};

/// <summary> Holds basic attribute data </summary>
USTRUCT(BlueprintType)
struct FCRPGAttributeData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CRPGAttribute")
	FName Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CRPGAttribute")
	FString DisplayName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CRPGAttribute")
	float Value;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CRPGAttribute")
	float MaxValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CRPGAttribute")
	bool ChangeValueOnMaxChange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CRPGAttribute")
	TArray<FEffectAttributeValues> EffectAttribute;

	FCRPGAttributeData()
	{
		Name = {};
		DisplayName = {};
		Value = 0.0f;
		MaxValue = 0.0f;
		ChangeValueOnMaxChange = false;
		EffectAttribute = {};
	}

	void SetMaxValue(float Amount)
	{
		MaxValue = Amount;
		if (ChangeValueOnMaxChange)
		{
			Value = MaxValue;
		}
	}

	void SetMaxValue(float Amount, bool ChangeValue)
	{
		MaxValue = Amount;
		if (ChangeValue)
		{
			Value = MaxValue;
		}
	}
};

/// <summary> Handles attribute changes </summary>
UCLASS()
class CRONOARPG_API UCRPGAttribute : public UObject
{
	GENERATED_BODY()
public:
	UCRPGAttribute();

	UFUNCTION(BlueprintCallable, Category = "CRPGAttribute")
	TMap<FName, FCRPGAttributeData> InitAttributes(UDataTable* LocalAttributesTable);
};
