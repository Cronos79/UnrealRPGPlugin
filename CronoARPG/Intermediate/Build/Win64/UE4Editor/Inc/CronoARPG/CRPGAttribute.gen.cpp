// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CronoARPG/Public/Attributes/CRPGAttribute.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCRPGAttribute() {}
// Cross Module References
	CRONOARPG_API UScriptStruct* Z_Construct_UScriptStruct_FCRPGAttributeData();
	UPackage* Z_Construct_UPackage__Script_CronoARPG();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CRONOARPG_API UScriptStruct* Z_Construct_UScriptStruct_FEffectAttributeValues();
	CRONOARPG_API UClass* Z_Construct_UClass_UCRPGAttribute_NoRegister();
	CRONOARPG_API UClass* Z_Construct_UClass_UCRPGAttribute();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRONOARPG_API UFunction* Z_Construct_UFunction_UCRPGAttribute_InitAttributes();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
class UScriptStruct* FCRPGAttributeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRONOARPG_API uint32 Get_Z_Construct_UScriptStruct_FCRPGAttributeData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCRPGAttributeData, Z_Construct_UPackage__Script_CronoARPG(), TEXT("CRPGAttributeData"), sizeof(FCRPGAttributeData), Get_Z_Construct_UScriptStruct_FCRPGAttributeData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCRPGAttributeData(FCRPGAttributeData::StaticStruct, TEXT("/Script/CronoARPG"), TEXT("CRPGAttributeData"), false, nullptr, nullptr);
static struct FScriptStruct_CronoARPG_StaticRegisterNativesFCRPGAttributeData
{
	FScriptStruct_CronoARPG_StaticRegisterNativesFCRPGAttributeData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CRPGAttributeData")),new UScriptStruct::TCppStructOps<FCRPGAttributeData>);
	}
} ScriptStruct_CronoARPG_StaticRegisterNativesFCRPGAttributeData;
	struct Z_Construct_UScriptStruct_FCRPGAttributeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectAttribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EffectAttribute;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectAttribute_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeValueOnMaxChange_MetaData[];
#endif
		static void NewProp_ChangeValueOnMaxChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ChangeValueOnMaxChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Attributes/CRPGAttribute.h" },
		{ "ToolTip", "<summary> Holds basic attribute data </summary>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCRPGAttributeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_EffectAttribute_MetaData[] = {
		{ "Category", "CRPGAttribute" },
		{ "ModuleRelativePath", "Public/Attributes/CRPGAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_EffectAttribute = { UE4CodeGen_Private::EPropertyClass::Array, "EffectAttribute", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCRPGAttributeData, EffectAttribute), METADATA_PARAMS(Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_EffectAttribute_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_EffectAttribute_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_EffectAttribute_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "EffectAttribute", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FEffectAttributeValues, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_ChangeValueOnMaxChange_MetaData[] = {
		{ "Category", "CRPGAttribute" },
		{ "ModuleRelativePath", "Public/Attributes/CRPGAttribute.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_ChangeValueOnMaxChange_SetBit(void* Obj)
	{
		((FCRPGAttributeData*)Obj)->ChangeValueOnMaxChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_ChangeValueOnMaxChange = { UE4CodeGen_Private::EPropertyClass::Bool, "ChangeValueOnMaxChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FCRPGAttributeData), &Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_ChangeValueOnMaxChange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_ChangeValueOnMaxChange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_ChangeValueOnMaxChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_MaxValue_MetaData[] = {
		{ "Category", "CRPGAttribute" },
		{ "ModuleRelativePath", "Public/Attributes/CRPGAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_MaxValue = { UE4CodeGen_Private::EPropertyClass::Float, "MaxValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCRPGAttributeData, MaxValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_MaxValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_MaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "CRPGAttribute" },
		{ "ModuleRelativePath", "Public/Attributes/CRPGAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCRPGAttributeData, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "CRPGAttribute" },
		{ "ModuleRelativePath", "Public/Attributes/CRPGAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_DisplayName = { UE4CodeGen_Private::EPropertyClass::Str, "DisplayName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCRPGAttributeData, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_DisplayName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "CRPGAttribute" },
		{ "ModuleRelativePath", "Public/Attributes/CRPGAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCRPGAttributeData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_EffectAttribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_EffectAttribute_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_ChangeValueOnMaxChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_MaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CronoARPG,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CRPGAttributeData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FCRPGAttributeData),
		alignof(FCRPGAttributeData),
		Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCRPGAttributeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCRPGAttributeData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CronoARPG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CRPGAttributeData"), sizeof(FCRPGAttributeData), Get_Z_Construct_UScriptStruct_FCRPGAttributeData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCRPGAttributeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCRPGAttributeData_CRC() { return 3531787785U; }
class UScriptStruct* FEffectAttributeValues::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRONOARPG_API uint32 Get_Z_Construct_UScriptStruct_FEffectAttributeValues_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffectAttributeValues, Z_Construct_UPackage__Script_CronoARPG(), TEXT("EffectAttributeValues"), sizeof(FEffectAttributeValues), Get_Z_Construct_UScriptStruct_FEffectAttributeValues_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEffectAttributeValues(FEffectAttributeValues::StaticStruct, TEXT("/Script/CronoARPG"), TEXT("EffectAttributeValues"), false, nullptr, nullptr);
static struct FScriptStruct_CronoARPG_StaticRegisterNativesFEffectAttributeValues
{
	FScriptStruct_CronoARPG_StaticRegisterNativesFEffectAttributeValues()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EffectAttributeValues")),new UScriptStruct::TCppStructOps<FEffectAttributeValues>);
	}
} ScriptStruct_CronoARPG_StaticRegisterNativesFEffectAttributeValues;
	struct Z_Construct_UScriptStruct_FEffectAttributeValues_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmountPerPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmountPerPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectAttributeValues_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Attributes/CRPGAttribute.h" },
		{ "ToolTip", "<summary> Holds basic attribute data </summary>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEffectAttributeValues_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffectAttributeValues>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectAttributeValues_Statics::NewProp_AmountPerPoint_MetaData[] = {
		{ "Category", "CRPGAttribute" },
		{ "ModuleRelativePath", "Public/Attributes/CRPGAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEffectAttributeValues_Statics::NewProp_AmountPerPoint = { UE4CodeGen_Private::EPropertyClass::Float, "AmountPerPoint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEffectAttributeValues, AmountPerPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectAttributeValues_Statics::NewProp_AmountPerPoint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectAttributeValues_Statics::NewProp_AmountPerPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectAttributeValues_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "CRPGAttribute" },
		{ "ModuleRelativePath", "Public/Attributes/CRPGAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEffectAttributeValues_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEffectAttributeValues, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectAttributeValues_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectAttributeValues_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffectAttributeValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectAttributeValues_Statics::NewProp_AmountPerPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectAttributeValues_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffectAttributeValues_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CronoARPG,
		nullptr,
		&NewStructOps,
		"EffectAttributeValues",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FEffectAttributeValues),
		alignof(FEffectAttributeValues),
		Z_Construct_UScriptStruct_FEffectAttributeValues_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectAttributeValues_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectAttributeValues_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectAttributeValues_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEffectAttributeValues()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEffectAttributeValues_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CronoARPG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EffectAttributeValues"), sizeof(FEffectAttributeValues), Get_Z_Construct_UScriptStruct_FEffectAttributeValues_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEffectAttributeValues_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEffectAttributeValues_CRC() { return 2550145059U; }
	void UCRPGAttribute::StaticRegisterNativesUCRPGAttribute()
	{
		UClass* Class = UCRPGAttribute::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitAttributes", &UCRPGAttribute::execInitAttributes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCRPGAttribute_InitAttributes_Statics
	{
		struct CRPGAttribute_eventInitAttributes_Parms
		{
			UDataTable* LocalAttributesTable;
			TMap<FName,FCRPGAttributeData> ReturnValue;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocalAttributesTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCRPGAttribute_InitAttributes_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Map, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CRPGAttribute_eventInitAttributes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCRPGAttribute_InitAttributes_Statics::NewProp_ReturnValue_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCRPGAttribute_InitAttributes_Statics::NewProp_ReturnValue_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FCRPGAttributeData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCRPGAttribute_InitAttributes_Statics::NewProp_LocalAttributesTable = { UE4CodeGen_Private::EPropertyClass::Object, "LocalAttributesTable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CRPGAttribute_eventInitAttributes_Parms, LocalAttributesTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCRPGAttribute_InitAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCRPGAttribute_InitAttributes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCRPGAttribute_InitAttributes_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCRPGAttribute_InitAttributes_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCRPGAttribute_InitAttributes_Statics::NewProp_LocalAttributesTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCRPGAttribute_InitAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "CRPGAttribute" },
		{ "ModuleRelativePath", "Public/Attributes/CRPGAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCRPGAttribute_InitAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCRPGAttribute, "InitAttributes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CRPGAttribute_eventInitAttributes_Parms), Z_Construct_UFunction_UCRPGAttribute_InitAttributes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCRPGAttribute_InitAttributes_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCRPGAttribute_InitAttributes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCRPGAttribute_InitAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCRPGAttribute_InitAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCRPGAttribute_InitAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCRPGAttribute_NoRegister()
	{
		return UCRPGAttribute::StaticClass();
	}
	struct Z_Construct_UClass_UCRPGAttribute_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCRPGAttribute_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CronoARPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCRPGAttribute_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCRPGAttribute_InitAttributes, "InitAttributes" }, // 2838978054
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCRPGAttribute_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Attributes/CRPGAttribute.h" },
		{ "ModuleRelativePath", "Public/Attributes/CRPGAttribute.h" },
		{ "ToolTip", "<summary> Handles attribute changes </summary>" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCRPGAttribute_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCRPGAttribute>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCRPGAttribute_Statics::ClassParams = {
		&UCRPGAttribute::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCRPGAttribute_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCRPGAttribute_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCRPGAttribute()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCRPGAttribute_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCRPGAttribute, 2658613180);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCRPGAttribute(Z_Construct_UClass_UCRPGAttribute, &UCRPGAttribute::StaticClass, TEXT("/Script/CronoARPG"), TEXT("UCRPGAttribute"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCRPGAttribute);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
