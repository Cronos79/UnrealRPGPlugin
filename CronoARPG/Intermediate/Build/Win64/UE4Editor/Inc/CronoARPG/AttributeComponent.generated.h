// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCRPGAttributeData;
struct FGameplayEffectData;
#ifdef CRONOARPG_AttributeComponent_generated_h
#error "AttributeComponent.generated.h already included, missing '#pragma once' in AttributeComponent.h"
#endif
#define CRONOARPG_AttributeComponent_generated_h

#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Components_AttributeComponent_h_15_RPC_WRAPPERS \
	virtual void OnAttributeChange_Implementation(FCRPGAttributeData AttributeChanged); \
 \
	DECLARE_FUNCTION(execOnAttributeChange) \
	{ \
		P_GET_STRUCT(FCRPGAttributeData,Z_Param_AttributeChanged); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAttributeChange_Implementation(Z_Param_AttributeChanged); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEffect) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_GET_UBOOL_REF(Z_Param_Out_Found); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGameplayEffectData*)Z_Param__Result=P_THIS->GetEffect(Z_Param_Name,Z_Param_Out_Found); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveEffect) \
	{ \
		P_GET_STRUCT(FGameplayEffectData,Z_Param_Effect); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveEffect(Z_Param_Effect); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyEffect) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_EffectName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StackAmount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ApplyEffect(Z_Param_EffectName,Z_Param_StackAmount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttribute) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_AttributeName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FCRPGAttributeData*)Z_Param__Result=P_THIS->GetAttribute(Z_Param_AttributeName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execModifyAttributeMaxValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_AttributeName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_GET_UBOOL(Z_Param_AffectValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ModifyAttributeMaxValue(Z_Param_AttributeName,Z_Param_Amount,Z_Param_AffectValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execModifyAttributeValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_AttributeName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_GET_UBOOL(Z_Param_CanGoOverMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ModifyAttributeValue(Z_Param_AttributeName,Z_Param_Amount,Z_Param_CanGoOverMax); \
		P_NATIVE_END; \
	}


#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Components_AttributeComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnAttributeChange_Implementation(FCRPGAttributeData AttributeChanged); \
 \
	DECLARE_FUNCTION(execOnAttributeChange) \
	{ \
		P_GET_STRUCT(FCRPGAttributeData,Z_Param_AttributeChanged); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAttributeChange_Implementation(Z_Param_AttributeChanged); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEffect) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_GET_UBOOL_REF(Z_Param_Out_Found); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGameplayEffectData*)Z_Param__Result=P_THIS->GetEffect(Z_Param_Name,Z_Param_Out_Found); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveEffect) \
	{ \
		P_GET_STRUCT(FGameplayEffectData,Z_Param_Effect); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveEffect(Z_Param_Effect); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyEffect) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_EffectName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StackAmount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ApplyEffect(Z_Param_EffectName,Z_Param_StackAmount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttribute) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_AttributeName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FCRPGAttributeData*)Z_Param__Result=P_THIS->GetAttribute(Z_Param_AttributeName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execModifyAttributeMaxValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_AttributeName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_GET_UBOOL(Z_Param_AffectValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ModifyAttributeMaxValue(Z_Param_AttributeName,Z_Param_Amount,Z_Param_AffectValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execModifyAttributeValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_AttributeName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_GET_UBOOL(Z_Param_CanGoOverMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ModifyAttributeValue(Z_Param_AttributeName,Z_Param_Amount,Z_Param_CanGoOverMax); \
		P_NATIVE_END; \
	}


#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Components_AttributeComponent_h_15_EVENT_PARMS \
	struct AttributeComponent_eventOnAttributeChange_Parms \
	{ \
		FCRPGAttributeData AttributeChanged; \
	};


#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Components_AttributeComponent_h_15_CALLBACK_WRAPPERS
#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Components_AttributeComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttributeComponent(); \
	friend struct Z_Construct_UClass_UAttributeComponent_Statics; \
public: \
	DECLARE_CLASS(UAttributeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CronoARPG"), NO_API) \
	DECLARE_SERIALIZER(UAttributeComponent)


#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Components_AttributeComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAttributeComponent(); \
	friend struct Z_Construct_UClass_UAttributeComponent_Statics; \
public: \
	DECLARE_CLASS(UAttributeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CronoARPG"), NO_API) \
	DECLARE_SERIALIZER(UAttributeComponent)


#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Components_AttributeComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttributeComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttributeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributeComponent(UAttributeComponent&&); \
	NO_API UAttributeComponent(const UAttributeComponent&); \
public:


#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Components_AttributeComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributeComponent(UAttributeComponent&&); \
	NO_API UAttributeComponent(const UAttributeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAttributeComponent)


#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Components_AttributeComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AttributesTable() { return STRUCT_OFFSET(UAttributeComponent, AttributesTable); } \
	FORCEINLINE static uint32 __PPO__EffectsTable() { return STRUCT_OFFSET(UAttributeComponent, EffectsTable); }


#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Components_AttributeComponent_h_12_PROLOG \
	Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Components_AttributeComponent_h_15_EVENT_PARMS


#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Components_AttributeComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Components_AttributeComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Components_AttributeComponent_h_15_RPC_WRAPPERS \
	Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Components_AttributeComponent_h_15_CALLBACK_WRAPPERS \
	Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Components_AttributeComponent_h_15_INCLASS \
	Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Components_AttributeComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Components_AttributeComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Components_AttributeComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Components_AttributeComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Components_AttributeComponent_h_15_CALLBACK_WRAPPERS \
	Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Components_AttributeComponent_h_15_INCLASS_NO_PURE_DECLS \
	Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Components_AttributeComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Components_AttributeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
