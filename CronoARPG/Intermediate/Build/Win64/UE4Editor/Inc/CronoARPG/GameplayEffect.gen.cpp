// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CronoARPG/Public/GameplayEffects/GameplayEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayEffect() {}
// Cross Module References
	CRONOARPG_API UEnum* Z_Construct_UEnum_CronoARPG_EGameplayEffectExpirationPolicy();
	UPackage* Z_Construct_UPackage__Script_CronoARPG();
	CRONOARPG_API UEnum* Z_Construct_UEnum_CronoARPG_EGameplayEffectStackingPolicy();
	CRONOARPG_API UEnum* Z_Construct_UEnum_CronoARPG_EGameplayEffectDurationPolicy();
	CRONOARPG_API UEnum* Z_Construct_UEnum_CronoARPG_EGameplayEffectType();
	CRONOARPG_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CRONOARPG_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeModifier();
	CRONOARPG_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	CRONOARPG_API UClass* Z_Construct_UClass_UGameplayEffect();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRONOARPG_API UFunction* Z_Construct_UFunction_UGameplayEffect_GetAllEffects();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	static UEnum* EGameplayEffectExpirationPolicy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CronoARPG_EGameplayEffectExpirationPolicy, Z_Construct_UPackage__Script_CronoARPG(), TEXT("EGameplayEffectExpirationPolicy"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayEffectExpirationPolicy(EGameplayEffectExpirationPolicy_StaticEnum, TEXT("/Script/CronoARPG"), TEXT("EGameplayEffectExpirationPolicy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CronoARPG_EGameplayEffectExpirationPolicy_CRC() { return 474239733U; }
	UEnum* Z_Construct_UEnum_CronoARPG_EGameplayEffectExpirationPolicy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CronoARPG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayEffectExpirationPolicy"), 0, Get_Z_Construct_UEnum_CronoARPG_EGameplayEffectExpirationPolicy_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayEffectExpirationPolicy::ClearEntireStack", (int64)EGameplayEffectExpirationPolicy::ClearEntireStack },
				{ "EGameplayEffectExpirationPolicy::RemoveOneFromStack", (int64)EGameplayEffectExpirationPolicy::RemoveOneFromStack },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ClearEntireStack.DisplayName", "Clear Entire Stack" },
				{ "ModuleRelativePath", "Public/GameplayEffects/GameplayEffect.h" },
				{ "RemoveOneFromStack.DisplayName", "Remove One From Stack" },
				{ "ToolTip", "<summary> When the effect timer hits 0 does it remove one stack or all stacks </summary>" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CronoARPG,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGameplayEffectExpirationPolicy",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EGameplayEffectExpirationPolicy",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGameplayEffectStackingPolicy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CronoARPG_EGameplayEffectStackingPolicy, Z_Construct_UPackage__Script_CronoARPG(), TEXT("EGameplayEffectStackingPolicy"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayEffectStackingPolicy(EGameplayEffectStackingPolicy_StaticEnum, TEXT("/Script/CronoARPG"), TEXT("EGameplayEffectStackingPolicy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CronoARPG_EGameplayEffectStackingPolicy_CRC() { return 2604050671U; }
	UEnum* Z_Construct_UEnum_CronoARPG_EGameplayEffectStackingPolicy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CronoARPG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayEffectStackingPolicy"), 0, Get_Z_Construct_UEnum_CronoARPG_EGameplayEffectStackingPolicy_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayEffectStackingPolicy::Refresh", (int64)EGameplayEffectStackingPolicy::Refresh },
				{ "EGameplayEffectStackingPolicy::NeverRefresh", (int64)EGameplayEffectStackingPolicy::NeverRefresh },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/GameplayEffects/GameplayEffect.h" },
				{ "NeverRefresh.DisplayName", "Never Refresh" },
				{ "Refresh.DisplayName", "Refresh" },
				{ "ToolTip", "<summary> Does the timer for the duration reset when a new stack is added </summary>" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CronoARPG,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGameplayEffectStackingPolicy",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EGameplayEffectStackingPolicy",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGameplayEffectDurationPolicy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CronoARPG_EGameplayEffectDurationPolicy, Z_Construct_UPackage__Script_CronoARPG(), TEXT("EGameplayEffectDurationPolicy"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayEffectDurationPolicy(EGameplayEffectDurationPolicy_StaticEnum, TEXT("/Script/CronoARPG"), TEXT("EGameplayEffectDurationPolicy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CronoARPG_EGameplayEffectDurationPolicy_CRC() { return 1915901515U; }
	UEnum* Z_Construct_UEnum_CronoARPG_EGameplayEffectDurationPolicy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CronoARPG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayEffectDurationPolicy"), 0, Get_Z_Construct_UEnum_CronoARPG_EGameplayEffectDurationPolicy_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayEffectDurationPolicy::Instant", (int64)EGameplayEffectDurationPolicy::Instant },
				{ "EGameplayEffectDurationPolicy::HasDuration", (int64)EGameplayEffectDurationPolicy::HasDuration },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HasDuration.DisplayName", "Has Duration" },
				{ "Instant.DisplayName", "Instant" },
				{ "ModuleRelativePath", "Public/GameplayEffects/GameplayEffect.h" },
				{ "ToolTip", "<summary> Does the effect happen instantly once, or multiple times over a duration </summary>" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CronoARPG,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGameplayEffectDurationPolicy",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EGameplayEffectDurationPolicy",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGameplayEffectType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CronoARPG_EGameplayEffectType, Z_Construct_UPackage__Script_CronoARPG(), TEXT("EGameplayEffectType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayEffectType(EGameplayEffectType_StaticEnum, TEXT("/Script/CronoARPG"), TEXT("EGameplayEffectType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CronoARPG_EGameplayEffectType_CRC() { return 3607131649U; }
	UEnum* Z_Construct_UEnum_CronoARPG_EGameplayEffectType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CronoARPG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayEffectType"), 0, Get_Z_Construct_UEnum_CronoARPG_EGameplayEffectType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayEffectType::Buff", (int64)EGameplayEffectType::Buff },
				{ "EGameplayEffectType::Debuff", (int64)EGameplayEffectType::Debuff },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Buff.DisplayName", "Buff" },
				{ "Debuff.DisplayName", "Debuff" },
				{ "ModuleRelativePath", "Public/GameplayEffects/GameplayEffect.h" },
				{ "ToolTip", "<summary> Lets the user know if this is intended as a Buff or Debuff </summary>" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CronoARPG,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGameplayEffectType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EGameplayEffectType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FGameplayEffectData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRONOARPG_API uint32 Get_Z_Construct_UScriptStruct_FGameplayEffectData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectData, Z_Construct_UPackage__Script_CronoARPG(), TEXT("GameplayEffectData"), sizeof(FGameplayEffectData), Get_Z_Construct_UScriptStruct_FGameplayEffectData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayEffectData(FGameplayEffectData::StaticStruct, TEXT("/Script/CronoARPG"), TEXT("GameplayEffectData"), false, nullptr, nullptr);
static struct FScriptStruct_CronoARPG_StaticRegisterNativesFGameplayEffectData
{
	FScriptStruct_CronoARPG_StaticRegisterNativesFGameplayEffectData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayEffectData")),new UScriptStruct::TCppStructOps<FGameplayEffectData>);
	}
} ScriptStruct_CronoARPG_StaticRegisterNativesFGameplayEffectData;
	struct Z_Construct_UScriptStruct_FGameplayEffectData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributesToEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttributesToEffect;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttributesToEffect_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpirationPolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ExpirationPolicy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ExpirationPolicy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentStacks_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentStacks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StackLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackingPolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StackingPolicy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StackingPolicy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationPolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DurationPolicy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DurationPolicy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EffectType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EffectType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameplayEffects/GameplayEffect.h" },
		{ "ToolTip", "<summary> Struct for holding the effects data </summary>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_AttributesToEffect_MetaData[] = {
		{ "Category", "Gameplay Effect" },
		{ "ModuleRelativePath", "Public/GameplayEffects/GameplayEffect.h" },
		{ "ToolTip", "When the effect timer hits 0 does it remove one stack or all stacks" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_AttributesToEffect = { UE4CodeGen_Private::EPropertyClass::Array, "AttributesToEffect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameplayEffectData, AttributesToEffect), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_AttributesToEffect_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_AttributesToEffect_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_AttributesToEffect_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AttributesToEffect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAttributeModifier, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_ExpirationPolicy_MetaData[] = {
		{ "Category", "Gameplay Effect" },
		{ "ModuleRelativePath", "Public/GameplayEffects/GameplayEffect.h" },
		{ "ToolTip", "The current amount of stacks for the effect" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_ExpirationPolicy = { UE4CodeGen_Private::EPropertyClass::Enum, "ExpirationPolicy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameplayEffectData, ExpirationPolicy), Z_Construct_UEnum_CronoARPG_EGameplayEffectExpirationPolicy, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_ExpirationPolicy_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_ExpirationPolicy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_ExpirationPolicy_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_CurrentStacks_MetaData[] = {
		{ "Category", "Gameplay Effect" },
		{ "ModuleRelativePath", "Public/GameplayEffects/GameplayEffect.h" },
		{ "ToolTip", "Max amount of stacks a effect can have, -1 for unlimited" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_CurrentStacks = { UE4CodeGen_Private::EPropertyClass::Int, "CurrentStacks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameplayEffectData, CurrentStacks), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_CurrentStacks_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_CurrentStacks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_StackLimit_MetaData[] = {
		{ "Category", "Gameplay Effect" },
		{ "ModuleRelativePath", "Public/GameplayEffects/GameplayEffect.h" },
		{ "ToolTip", "Does the timer for the duration reset when a new stack is added" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_StackLimit = { UE4CodeGen_Private::EPropertyClass::Int, "StackLimit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameplayEffectData, StackLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_StackLimit_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_StackLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_StackingPolicy_MetaData[] = {
		{ "Category", "Gameplay Effect" },
		{ "ModuleRelativePath", "Public/GameplayEffects/GameplayEffect.h" },
		{ "ToolTip", "If it has a HasDuration policy how long will the effect last" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_StackingPolicy = { UE4CodeGen_Private::EPropertyClass::Enum, "StackingPolicy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameplayEffectData, StackingPolicy), Z_Construct_UEnum_CronoARPG_EGameplayEffectStackingPolicy, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_StackingPolicy_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_StackingPolicy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_StackingPolicy_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Gameplay Effect" },
		{ "ModuleRelativePath", "Public/GameplayEffects/GameplayEffect.h" },
		{ "ToolTip", "Does the effect happen instantly once, or multiple times over a duration" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_Duration = { UE4CodeGen_Private::EPropertyClass::Float, "Duration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameplayEffectData, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_Duration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_DurationPolicy_MetaData[] = {
		{ "Category", "Gameplay Effect" },
		{ "ModuleRelativePath", "Public/GameplayEffects/GameplayEffect.h" },
		{ "ToolTip", "Effect type, as a Buff or Debuff" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_DurationPolicy = { UE4CodeGen_Private::EPropertyClass::Enum, "DurationPolicy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameplayEffectData, DurationPolicy), Z_Construct_UEnum_CronoARPG_EGameplayEffectDurationPolicy, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_DurationPolicy_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_DurationPolicy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_DurationPolicy_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_EffectType_MetaData[] = {
		{ "Category", "Gameplay Effect" },
		{ "ModuleRelativePath", "Public/GameplayEffects/GameplayEffect.h" },
		{ "ToolTip", "The effects Display name." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_EffectType = { UE4CodeGen_Private::EPropertyClass::Enum, "EffectType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameplayEffectData, EffectType), Z_Construct_UEnum_CronoARPG_EGameplayEffectType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_EffectType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_EffectType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_EffectType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Gameplay Effect" },
		{ "ModuleRelativePath", "Public/GameplayEffects/GameplayEffect.h" },
		{ "ToolTip", "The effects name." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_DisplayName = { UE4CodeGen_Private::EPropertyClass::Str, "DisplayName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameplayEffectData, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_DisplayName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Gameplay Effect" },
		{ "ModuleRelativePath", "Public/GameplayEffects/GameplayEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameplayEffectData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_AttributesToEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_AttributesToEffect_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_ExpirationPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_ExpirationPolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_CurrentStacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_StackLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_StackingPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_StackingPolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_DurationPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_DurationPolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_EffectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_EffectType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectData_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CronoARPG,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"GameplayEffectData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FGameplayEffectData),
		alignof(FGameplayEffectData),
		Z_Construct_UScriptStruct_FGameplayEffectData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayEffectData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CronoARPG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayEffectData"), sizeof(FGameplayEffectData), Get_Z_Construct_UScriptStruct_FGameplayEffectData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayEffectData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayEffectData_CRC() { return 1421468784U; }
class UScriptStruct* FAttributeModifier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRONOARPG_API uint32 Get_Z_Construct_UScriptStruct_FAttributeModifier_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributeModifier, Z_Construct_UPackage__Script_CronoARPG(), TEXT("AttributeModifier"), sizeof(FAttributeModifier), Get_Z_Construct_UScriptStruct_FAttributeModifier_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAttributeModifier(FAttributeModifier::StaticStruct, TEXT("/Script/CronoARPG"), TEXT("AttributeModifier"), false, nullptr, nullptr);
static struct FScriptStruct_CronoARPG_StaticRegisterNativesFAttributeModifier
{
	FScriptStruct_CronoARPG_StaticRegisterNativesFAttributeModifier()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AttributeModifier")),new UScriptStruct::TCppStructOps<FAttributeModifier>);
	}
} ScriptStruct_CronoARPG_StaticRegisterNativesFAttributeModifier;
	struct Z_Construct_UScriptStruct_FAttributeModifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanGoOverMax_MetaData[];
#endif
		static void NewProp_bCanGoOverMax_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanGoOverMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAmountIsPercent_MetaData[];
#endif
		static void NewProp_bAmountIsPercent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAmountIsPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeModifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameplayEffects/GameplayEffect.h" },
		{ "ToolTip", "<summary> What attributes does the effect modify </summary>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributeModifier>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_bCanGoOverMax_MetaData[] = {
		{ "Category", "Gameplay Effect" },
		{ "ModuleRelativePath", "Public/GameplayEffects/GameplayEffect.h" },
		{ "ToolTip", "Treat the amount as a 0.0 to 1.0 percent" },
	};
#endif
	void Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_bCanGoOverMax_SetBit(void* Obj)
	{
		((FAttributeModifier*)Obj)->bCanGoOverMax = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_bCanGoOverMax = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanGoOverMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAttributeModifier), &Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_bCanGoOverMax_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_bCanGoOverMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_bCanGoOverMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_bAmountIsPercent_MetaData[] = {
		{ "Category", "Gameplay Effect" },
		{ "ModuleRelativePath", "Public/GameplayEffects/GameplayEffect.h" },
		{ "ToolTip", "The amount to effect the attribute by. Can be negative." },
	};
#endif
	void Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_bAmountIsPercent_SetBit(void* Obj)
	{
		((FAttributeModifier*)Obj)->bAmountIsPercent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_bAmountIsPercent = { UE4CodeGen_Private::EPropertyClass::Bool, "bAmountIsPercent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAttributeModifier), &Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_bAmountIsPercent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_bAmountIsPercent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_bAmountIsPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "Gameplay Attribute" },
		{ "ModuleRelativePath", "Public/GameplayEffects/GameplayEffect.h" },
		{ "ToolTip", "The name of the attribute to effect." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_Amount = { UE4CodeGen_Private::EPropertyClass::Float, "Amount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAttributeModifier, Amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_Amount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_Amount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_AttributeName_MetaData[] = {
		{ "Category", "Gameplay Attribute" },
		{ "ModuleRelativePath", "Public/GameplayEffects/GameplayEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_AttributeName = { UE4CodeGen_Private::EPropertyClass::Name, "AttributeName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAttributeModifier, AttributeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_AttributeName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_AttributeName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributeModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_bCanGoOverMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_bAmountIsPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_AttributeName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributeModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CronoARPG,
		nullptr,
		&NewStructOps,
		"AttributeModifier",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAttributeModifier),
		alignof(FAttributeModifier),
		Z_Construct_UScriptStruct_FAttributeModifier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeModifier_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeModifier_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeModifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttributeModifier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAttributeModifier_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CronoARPG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AttributeModifier"), sizeof(FAttributeModifier), Get_Z_Construct_UScriptStruct_FAttributeModifier_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAttributeModifier_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAttributeModifier_CRC() { return 1043801476U; }
	void UGameplayEffect::StaticRegisterNativesUGameplayEffect()
	{
		UClass* Class = UGameplayEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllEffects", &UGameplayEffect::execGetAllEffects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayEffect_GetAllEffects_Statics
	{
		struct GameplayEffect_eventGetAllEffects_Parms
		{
			UDataTable* EffectsTable;
			TMap<FName,FGameplayEffectData> ReturnValue;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectsTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UGameplayEffect_GetAllEffects_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Map, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameplayEffect_eventGetAllEffects_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayEffect_GetAllEffects_Statics::NewProp_ReturnValue_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayEffect_GetAllEffects_Statics::NewProp_ReturnValue_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FGameplayEffectData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayEffect_GetAllEffects_Statics::NewProp_EffectsTable = { UE4CodeGen_Private::EPropertyClass::Object, "EffectsTable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameplayEffect_eventGetAllEffects_Parms, EffectsTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayEffect_GetAllEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayEffect_GetAllEffects_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayEffect_GetAllEffects_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayEffect_GetAllEffects_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayEffect_GetAllEffects_Statics::NewProp_EffectsTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayEffect_GetAllEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay Effect" },
		{ "ModuleRelativePath", "Public/GameplayEffects/GameplayEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayEffect_GetAllEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayEffect, "GetAllEffects", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(GameplayEffect_eventGetAllEffects_Parms), Z_Construct_UFunction_UGameplayEffect_GetAllEffects_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameplayEffect_GetAllEffects_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayEffect_GetAllEffects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameplayEffect_GetAllEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayEffect_GetAllEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayEffect_GetAllEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameplayEffect_NoRegister()
	{
		return UGameplayEffect::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CronoARPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayEffect_GetAllEffects, "GetAllEffects" }, // 2294680432
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameplayEffects/GameplayEffect.h" },
		{ "ModuleRelativePath", "Public/GameplayEffects/GameplayEffect.h" },
		{ "ToolTip", "<summary> A holder for all the effects in the DataTable </summary>" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameplayEffect_Statics::ClassParams = {
		&UGameplayEffect::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameplayEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayEffect, 499364348);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayEffect(Z_Construct_UClass_UGameplayEffect, &UGameplayEffect::StaticClass, TEXT("/Script/CronoARPG"), TEXT("UGameplayEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
