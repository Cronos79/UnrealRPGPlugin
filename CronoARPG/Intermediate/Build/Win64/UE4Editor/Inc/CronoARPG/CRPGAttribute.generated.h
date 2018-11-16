// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataTable;
 struct FCRPGAttributeData;
#ifdef CRONOARPG_CRPGAttribute_generated_h
#error "CRPGAttribute.generated.h already included, missing '#pragma once' in CRPGAttribute.h"
#endif
#define CRONOARPG_CRPGAttribute_generated_h

#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Attributes_CRPGAttribute_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCRPGAttributeData_Statics; \
	CRONOARPG_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Attributes_CRPGAttribute_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEffectAttributeValues_Statics; \
	CRONOARPG_API static class UScriptStruct* StaticStruct();


#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Attributes_CRPGAttribute_h_80_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitAttributes) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_LocalAttributesTable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<FName,FCRPGAttributeData>*)Z_Param__Result=P_THIS->InitAttributes(Z_Param_LocalAttributesTable); \
		P_NATIVE_END; \
	}


#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Attributes_CRPGAttribute_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitAttributes) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_LocalAttributesTable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<FName,FCRPGAttributeData>*)Z_Param__Result=P_THIS->InitAttributes(Z_Param_LocalAttributesTable); \
		P_NATIVE_END; \
	}


#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Attributes_CRPGAttribute_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCRPGAttribute(); \
	friend struct Z_Construct_UClass_UCRPGAttribute_Statics; \
public: \
	DECLARE_CLASS(UCRPGAttribute, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CronoARPG"), NO_API) \
	DECLARE_SERIALIZER(UCRPGAttribute)


#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Attributes_CRPGAttribute_h_80_INCLASS \
private: \
	static void StaticRegisterNativesUCRPGAttribute(); \
	friend struct Z_Construct_UClass_UCRPGAttribute_Statics; \
public: \
	DECLARE_CLASS(UCRPGAttribute, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CronoARPG"), NO_API) \
	DECLARE_SERIALIZER(UCRPGAttribute)


#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Attributes_CRPGAttribute_h_80_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCRPGAttribute(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCRPGAttribute) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCRPGAttribute); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCRPGAttribute); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCRPGAttribute(UCRPGAttribute&&); \
	NO_API UCRPGAttribute(const UCRPGAttribute&); \
public:


#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Attributes_CRPGAttribute_h_80_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCRPGAttribute(UCRPGAttribute&&); \
	NO_API UCRPGAttribute(const UCRPGAttribute&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCRPGAttribute); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCRPGAttribute); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCRPGAttribute)


#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Attributes_CRPGAttribute_h_80_PRIVATE_PROPERTY_OFFSET
#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Attributes_CRPGAttribute_h_77_PROLOG
#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Attributes_CRPGAttribute_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Attributes_CRPGAttribute_h_80_PRIVATE_PROPERTY_OFFSET \
	Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Attributes_CRPGAttribute_h_80_RPC_WRAPPERS \
	Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Attributes_CRPGAttribute_h_80_INCLASS \
	Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Attributes_CRPGAttribute_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Attributes_CRPGAttribute_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Attributes_CRPGAttribute_h_80_PRIVATE_PROPERTY_OFFSET \
	Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Attributes_CRPGAttribute_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Attributes_CRPGAttribute_h_80_INCLASS_NO_PURE_DECLS \
	Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Attributes_CRPGAttribute_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Genesis_Plugins_CronoARPG_Source_CronoARPG_Public_Attributes_CRPGAttribute_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
