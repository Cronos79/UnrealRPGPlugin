// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CronoARPG/Public/Components/AttributeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeComponent() {}
// Cross Module References
	CRONOARPG_API UClass* Z_Construct_UClass_UAttributeComponent_NoRegister();
	CRONOARPG_API UClass* Z_Construct_UClass_UAttributeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CronoARPG();
	CRONOARPG_API UFunction* Z_Construct_UFunction_UAttributeComponent_ApplyEffect();
	CRONOARPG_API UFunction* Z_Construct_UFunction_UAttributeComponent_GetAttribute();
	CRONOARPG_API UScriptStruct* Z_Construct_UScriptStruct_FCRPGAttributeData();
	CRONOARPG_API UFunction* Z_Construct_UFunction_UAttributeComponent_GetEffect();
	CRONOARPG_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectData();
	CRONOARPG_API UFunction* Z_Construct_UFunction_UAttributeComponent_ModifyAttributeMaxValue();
	CRONOARPG_API UFunction* Z_Construct_UFunction_UAttributeComponent_ModifyAttributeValue();
	CRONOARPG_API UFunction* Z_Construct_UFunction_UAttributeComponent_OnAttributeChange();
	CRONOARPG_API UFunction* Z_Construct_UFunction_UAttributeComponent_RemoveEffect();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	static FName NAME_UAttributeComponent_OnAttributeChange = FName(TEXT("OnAttributeChange"));
	void UAttributeComponent::OnAttributeChange(FCRPGAttributeData AttributeChanged)
	{
		AttributeComponent_eventOnAttributeChange_Parms Parms;
		Parms.AttributeChanged=AttributeChanged;
		ProcessEvent(FindFunctionChecked(NAME_UAttributeComponent_OnAttributeChange),&Parms);
	}
	void UAttributeComponent::StaticRegisterNativesUAttributeComponent()
	{
		UClass* Class = UAttributeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyEffect", &UAttributeComponent::execApplyEffect },
			{ "GetAttribute", &UAttributeComponent::execGetAttribute },
			{ "GetEffect", &UAttributeComponent::execGetEffect },
			{ "ModifyAttributeMaxValue", &UAttributeComponent::execModifyAttributeMaxValue },
			{ "ModifyAttributeValue", &UAttributeComponent::execModifyAttributeValue },
			{ "OnAttributeChange", &UAttributeComponent::execOnAttributeChange },
			{ "RemoveEffect", &UAttributeComponent::execRemoveEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttributeComponent_ApplyEffect_Statics
	{
		struct AttributeComponent_eventApplyEffect_Parms
		{
			FName EffectName;
			int32 StackAmount;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StackAmount;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EffectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAttributeComponent_ApplyEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AttributeComponent_eventApplyEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttributeComponent_ApplyEffect_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AttributeComponent_eventApplyEffect_Parms), &Z_Construct_UFunction_UAttributeComponent_ApplyEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAttributeComponent_ApplyEffect_Statics::NewProp_StackAmount = { UE4CodeGen_Private::EPropertyClass::Int, "StackAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AttributeComponent_eventApplyEffect_Parms, StackAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAttributeComponent_ApplyEffect_Statics::NewProp_EffectName = { UE4CodeGen_Private::EPropertyClass::Name, "EffectName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AttributeComponent_eventApplyEffect_Parms, EffectName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeComponent_ApplyEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_ApplyEffect_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_ApplyEffect_Statics::NewProp_StackAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_ApplyEffect_Statics::NewProp_EffectName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeComponent_ApplyEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributesComp" },
		{ "ModuleRelativePath", "Public/Components/AttributeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeComponent_ApplyEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeComponent, "ApplyEffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AttributeComponent_eventApplyEffect_Parms), Z_Construct_UFunction_UAttributeComponent_ApplyEffect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_ApplyEffect_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeComponent_ApplyEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_ApplyEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeComponent_ApplyEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAttributeComponent_ApplyEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeComponent_GetAttribute_Statics
	{
		struct AttributeComponent_eventGetAttribute_Parms
		{
			FName AttributeName;
			FCRPGAttributeData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeComponent_GetAttribute_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AttributeComponent_eventGetAttribute_Parms, ReturnValue), Z_Construct_UScriptStruct_FCRPGAttributeData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAttributeComponent_GetAttribute_Statics::NewProp_AttributeName = { UE4CodeGen_Private::EPropertyClass::Name, "AttributeName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AttributeComponent_eventGetAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeComponent_GetAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_GetAttribute_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_GetAttribute_Statics::NewProp_AttributeName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeComponent_GetAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributesComp" },
		{ "ModuleRelativePath", "Public/Components/AttributeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeComponent_GetAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeComponent, "GetAttribute", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(AttributeComponent_eventGetAttribute_Parms), Z_Construct_UFunction_UAttributeComponent_GetAttribute_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_GetAttribute_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeComponent_GetAttribute_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_GetAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeComponent_GetAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAttributeComponent_GetAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeComponent_GetEffect_Statics
	{
		struct AttributeComponent_eventGetEffect_Parms
		{
			FName Name;
			bool Found;
			FGameplayEffectData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_Found_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Found;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeComponent_GetEffect_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AttributeComponent_eventGetEffect_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayEffectData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAttributeComponent_GetEffect_Statics::NewProp_Found_SetBit(void* Obj)
	{
		((AttributeComponent_eventGetEffect_Parms*)Obj)->Found = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttributeComponent_GetEffect_Statics::NewProp_Found = { UE4CodeGen_Private::EPropertyClass::Bool, "Found", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AttributeComponent_eventGetEffect_Parms), &Z_Construct_UFunction_UAttributeComponent_GetEffect_Statics::NewProp_Found_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAttributeComponent_GetEffect_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AttributeComponent_eventGetEffect_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeComponent_GetEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_GetEffect_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_GetEffect_Statics::NewProp_Found,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_GetEffect_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeComponent_GetEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributesComp" },
		{ "ModuleRelativePath", "Public/Components/AttributeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeComponent_GetEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeComponent, "GetEffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(AttributeComponent_eventGetEffect_Parms), Z_Construct_UFunction_UAttributeComponent_GetEffect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_GetEffect_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeComponent_GetEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_GetEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeComponent_GetEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAttributeComponent_GetEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeComponent_ModifyAttributeMaxValue_Statics
	{
		struct AttributeComponent_eventModifyAttributeMaxValue_Parms
		{
			FName AttributeName;
			float Amount;
			bool AffectValue;
		};
		static void NewProp_AffectValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AffectValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAttributeComponent_ModifyAttributeMaxValue_Statics::NewProp_AffectValue_SetBit(void* Obj)
	{
		((AttributeComponent_eventModifyAttributeMaxValue_Parms*)Obj)->AffectValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttributeComponent_ModifyAttributeMaxValue_Statics::NewProp_AffectValue = { UE4CodeGen_Private::EPropertyClass::Bool, "AffectValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AttributeComponent_eventModifyAttributeMaxValue_Parms), &Z_Construct_UFunction_UAttributeComponent_ModifyAttributeMaxValue_Statics::NewProp_AffectValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeComponent_ModifyAttributeMaxValue_Statics::NewProp_Amount = { UE4CodeGen_Private::EPropertyClass::Float, "Amount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AttributeComponent_eventModifyAttributeMaxValue_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAttributeComponent_ModifyAttributeMaxValue_Statics::NewProp_AttributeName = { UE4CodeGen_Private::EPropertyClass::Name, "AttributeName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AttributeComponent_eventModifyAttributeMaxValue_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeComponent_ModifyAttributeMaxValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_ModifyAttributeMaxValue_Statics::NewProp_AffectValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_ModifyAttributeMaxValue_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_ModifyAttributeMaxValue_Statics::NewProp_AttributeName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeComponent_ModifyAttributeMaxValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributesComp" },
		{ "ModuleRelativePath", "Public/Components/AttributeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeComponent_ModifyAttributeMaxValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeComponent, "ModifyAttributeMaxValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(AttributeComponent_eventModifyAttributeMaxValue_Parms), Z_Construct_UFunction_UAttributeComponent_ModifyAttributeMaxValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_ModifyAttributeMaxValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeComponent_ModifyAttributeMaxValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_ModifyAttributeMaxValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeComponent_ModifyAttributeMaxValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAttributeComponent_ModifyAttributeMaxValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeComponent_ModifyAttributeValue_Statics
	{
		struct AttributeComponent_eventModifyAttributeValue_Parms
		{
			FName AttributeName;
			float Amount;
			bool CanGoOverMax;
		};
		static void NewProp_CanGoOverMax_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanGoOverMax;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAttributeComponent_ModifyAttributeValue_Statics::NewProp_CanGoOverMax_SetBit(void* Obj)
	{
		((AttributeComponent_eventModifyAttributeValue_Parms*)Obj)->CanGoOverMax = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttributeComponent_ModifyAttributeValue_Statics::NewProp_CanGoOverMax = { UE4CodeGen_Private::EPropertyClass::Bool, "CanGoOverMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AttributeComponent_eventModifyAttributeValue_Parms), &Z_Construct_UFunction_UAttributeComponent_ModifyAttributeValue_Statics::NewProp_CanGoOverMax_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeComponent_ModifyAttributeValue_Statics::NewProp_Amount = { UE4CodeGen_Private::EPropertyClass::Float, "Amount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AttributeComponent_eventModifyAttributeValue_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAttributeComponent_ModifyAttributeValue_Statics::NewProp_AttributeName = { UE4CodeGen_Private::EPropertyClass::Name, "AttributeName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AttributeComponent_eventModifyAttributeValue_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeComponent_ModifyAttributeValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_ModifyAttributeValue_Statics::NewProp_CanGoOverMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_ModifyAttributeValue_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_ModifyAttributeValue_Statics::NewProp_AttributeName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeComponent_ModifyAttributeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributesComp" },
		{ "ModuleRelativePath", "Public/Components/AttributeComponent.h" },
		{ "ToolTip", "************** Attributes ****************" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeComponent_ModifyAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeComponent, "ModifyAttributeValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(AttributeComponent_eventModifyAttributeValue_Parms), Z_Construct_UFunction_UAttributeComponent_ModifyAttributeValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_ModifyAttributeValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeComponent_ModifyAttributeValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_ModifyAttributeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeComponent_ModifyAttributeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAttributeComponent_ModifyAttributeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeComponent_OnAttributeChange_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttributeChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeComponent_OnAttributeChange_Statics::NewProp_AttributeChanged = { UE4CodeGen_Private::EPropertyClass::Struct, "AttributeChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AttributeComponent_eventOnAttributeChange_Parms, AttributeChanged), Z_Construct_UScriptStruct_FCRPGAttributeData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeComponent_OnAttributeChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_OnAttributeChange_Statics::NewProp_AttributeChanged,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeComponent_OnAttributeChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributesComp" },
		{ "ModuleRelativePath", "Public/Components/AttributeComponent.h" },
		{ "ToolTip", "************** Events ****************" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeComponent_OnAttributeChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeComponent, "OnAttributeChange", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(AttributeComponent_eventOnAttributeChange_Parms), Z_Construct_UFunction_UAttributeComponent_OnAttributeChange_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_OnAttributeChange_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeComponent_OnAttributeChange_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_OnAttributeChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeComponent_OnAttributeChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAttributeComponent_OnAttributeChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeComponent_RemoveEffect_Statics
	{
		struct AttributeComponent_eventRemoveEffect_Parms
		{
			FGameplayEffectData Effect;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Effect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeComponent_RemoveEffect_Statics::NewProp_Effect = { UE4CodeGen_Private::EPropertyClass::Struct, "Effect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AttributeComponent_eventRemoveEffect_Parms, Effect), Z_Construct_UScriptStruct_FGameplayEffectData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeComponent_RemoveEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_RemoveEffect_Statics::NewProp_Effect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeComponent_RemoveEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributesComp" },
		{ "ModuleRelativePath", "Public/Components/AttributeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeComponent_RemoveEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeComponent, "RemoveEffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AttributeComponent_eventRemoveEffect_Parms), Z_Construct_UFunction_UAttributeComponent_RemoveEffect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_RemoveEffect_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeComponent_RemoveEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_RemoveEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeComponent_RemoveEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAttributeComponent_RemoveEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAttributeComponent_NoRegister()
	{
		return UAttributeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectsMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_EffectsMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EffectsMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectsMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributesMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AttributesMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttributesMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttributesMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectsTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectsTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributesTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttributesTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CronoARPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttributeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttributeComponent_ApplyEffect, "ApplyEffect" }, // 4215847379
		{ &Z_Construct_UFunction_UAttributeComponent_GetAttribute, "GetAttribute" }, // 2812250409
		{ &Z_Construct_UFunction_UAttributeComponent_GetEffect, "GetEffect" }, // 604327710
		{ &Z_Construct_UFunction_UAttributeComponent_ModifyAttributeMaxValue, "ModifyAttributeMaxValue" }, // 2888351205
		{ &Z_Construct_UFunction_UAttributeComponent_ModifyAttributeValue, "ModifyAttributeValue" }, // 567722034
		{ &Z_Construct_UFunction_UAttributeComponent_OnAttributeChange, "OnAttributeChange" }, // 2766788506
		{ &Z_Construct_UFunction_UAttributeComponent_RemoveEffect, "RemoveEffect" }, // 3322529895
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "CRPG" },
		{ "IncludePath", "Components/AttributeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/AttributeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeComponent_Statics::NewProp_EffectsMap_MetaData[] = {
		{ "Category", "AttributesComp" },
		{ "ModuleRelativePath", "Public/Components/AttributeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_EffectsMap = { UE4CodeGen_Private::EPropertyClass::Map, "EffectsMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(UAttributeComponent, EffectsMap), METADATA_PARAMS(Z_Construct_UClass_UAttributeComponent_Statics::NewProp_EffectsMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::NewProp_EffectsMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_EffectsMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "EffectsMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_EffectsMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "EffectsMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020001, 1, nullptr, 1, Z_Construct_UScriptStruct_FGameplayEffectData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeComponent_Statics::NewProp_AttributesMap_MetaData[] = {
		{ "Category", "AttributesComp" },
		{ "ModuleRelativePath", "Public/Components/AttributeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_AttributesMap = { UE4CodeGen_Private::EPropertyClass::Map, "AttributesMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(UAttributeComponent, AttributesMap), METADATA_PARAMS(Z_Construct_UClass_UAttributeComponent_Statics::NewProp_AttributesMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::NewProp_AttributesMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_AttributesMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "AttributesMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_AttributesMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "AttributesMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020001, 1, nullptr, 1, Z_Construct_UScriptStruct_FCRPGAttributeData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeComponent_Statics::NewProp_EffectsTable_MetaData[] = {
		{ "Category", "AttributesComp" },
		{ "ModuleRelativePath", "Public/Components/AttributeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_EffectsTable = { UE4CodeGen_Private::EPropertyClass::Object, "EffectsTable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(UAttributeComponent, EffectsTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAttributeComponent_Statics::NewProp_EffectsTable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::NewProp_EffectsTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeComponent_Statics::NewProp_AttributesTable_MetaData[] = {
		{ "Category", "AttributesComp" },
		{ "ModuleRelativePath", "Public/Components/AttributeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_AttributesTable = { UE4CodeGen_Private::EPropertyClass::Object, "AttributesTable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UAttributeComponent, AttributesTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAttributeComponent_Statics::NewProp_AttributesTable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::NewProp_AttributesTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_EffectsMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_EffectsMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_EffectsMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_AttributesMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_AttributesMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_AttributesMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_EffectsTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_AttributesTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAttributeComponent_Statics::ClassParams = {
		&UAttributeComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UAttributeComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAttributeComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttributeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAttributeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAttributeComponent, 3471145093);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAttributeComponent(Z_Construct_UClass_UAttributeComponent, &UAttributeComponent::StaticClass, TEXT("/Script/CronoARPG"), TEXT("UAttributeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
