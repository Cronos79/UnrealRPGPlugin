// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataTable;
 struct FGameplayEffectData;
#ifdef CRONOARPG_GameplayEffect_generated_h
#error "GameplayEffect.generated.h already included, missing '#pragma once' in GameplayEffect.h"
#endif
#define CRONOARPG_GameplayEffect_generated_h

#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_GameplayEffects_GameplayEffect_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayEffectData_Statics; \
	CRONOARPG_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_GameplayEffects_GameplayEffect_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttributeModifier_Statics; \
	CRONOARPG_API static class UScriptStruct* StaticStruct();


#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_GameplayEffects_GameplayEffect_h_116_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllEffects) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_EffectsTable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<FName,FGameplayEffectData>*)Z_Param__Result=P_THIS->GetAllEffects(Z_Param_EffectsTable); \
		P_NATIVE_END; \
	}


#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_GameplayEffects_GameplayEffect_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllEffects) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_EffectsTable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<FName,FGameplayEffectData>*)Z_Param__Result=P_THIS->GetAllEffects(Z_Param_EffectsTable); \
		P_NATIVE_END; \
	}


#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_GameplayEffects_GameplayEffect_h_116_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayEffect(); \
	friend struct Z_Construct_UClass_UGameplayEffect_Statics; \
public: \
	DECLARE_CLASS(UGameplayEffect, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CronoARPG"), NO_API) \
	DECLARE_SERIALIZER(UGameplayEffect)


#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_GameplayEffects_GameplayEffect_h_116_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayEffect(); \
	friend struct Z_Construct_UClass_UGameplayEffect_Statics; \
public: \
	DECLARE_CLASS(UGameplayEffect, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CronoARPG"), NO_API) \
	DECLARE_SERIALIZER(UGameplayEffect)


#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_GameplayEffects_GameplayEffect_h_116_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayEffect(UGameplayEffect&&); \
	NO_API UGameplayEffect(const UGameplayEffect&); \
public:


#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_GameplayEffects_GameplayEffect_h_116_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayEffect(UGameplayEffect&&); \
	NO_API UGameplayEffect(const UGameplayEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayEffect); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayEffect)


#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_GameplayEffects_GameplayEffect_h_116_PRIVATE_PROPERTY_OFFSET
#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_GameplayEffects_GameplayEffect_h_113_PROLOG
#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_GameplayEffects_GameplayEffect_h_116_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_GameplayEffects_GameplayEffect_h_116_PRIVATE_PROPERTY_OFFSET \
	Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_GameplayEffects_GameplayEffect_h_116_RPC_WRAPPERS \
	Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_GameplayEffects_GameplayEffect_h_116_INCLASS \
	Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_GameplayEffects_GameplayEffect_h_116_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_GameplayEffects_GameplayEffect_h_116_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_GameplayEffects_GameplayEffect_h_116_PRIVATE_PROPERTY_OFFSET \
	Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_GameplayEffects_GameplayEffect_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_GameplayEffects_GameplayEffect_h_116_INCLASS_NO_PURE_DECLS \
	Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_GameplayEffects_GameplayEffect_h_116_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_GameplayEffects_GameplayEffect_h


#define FOREACH_ENUM_EGAMEPLAYEFFECTEXPIRATIONPOLICY(op) \
	op(EGameplayEffectExpirationPolicy::ClearEntireStack) \
	op(EGameplayEffectExpirationPolicy::RemoveOneFromStack) 
#define FOREACH_ENUM_EGAMEPLAYEFFECTSTACKINGPOLICY(op) \
	op(EGameplayEffectStackingPolicy::Refresh) \
	op(EGameplayEffectStackingPolicy::NeverRefresh) 
#define FOREACH_ENUM_EGAMEPLAYEFFECTDURATIONPOLICY(op) \
	op(EGameplayEffectDurationPolicy::Instant) \
	op(EGameplayEffectDurationPolicy::HasDuration) 
#define FOREACH_ENUM_EGAMEPLAYEFFECTTYPE(op) \
	op(EGameplayEffectType::Buff) \
	op(EGameplayEffectType::Debuff) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
