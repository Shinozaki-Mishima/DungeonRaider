// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONRAIDER_DungeonRaiderCharacter_generated_h
#error "DungeonRaiderCharacter.generated.h already included, missing '#pragma once' in DungeonRaiderCharacter.h"
#endif
#define DUNGEONRAIDER_DungeonRaiderCharacter_generated_h

#define FID_DungeonRaider_Source_DungeonRaider_DungeonRaiderCharacter_h_18_DELEGATE \
static inline void FOnUseItem_DelegateWrapper(const FMulticastScriptDelegate& OnUseItem) \
{ \
	OnUseItem.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_DungeonRaider_Source_DungeonRaider_DungeonRaiderCharacter_h_23_SPARSE_DATA
#define FID_DungeonRaider_Source_DungeonRaider_DungeonRaiderCharacter_h_23_RPC_WRAPPERS
#define FID_DungeonRaider_Source_DungeonRaider_DungeonRaiderCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_DungeonRaider_Source_DungeonRaider_DungeonRaiderCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeonRaiderCharacter(); \
	friend struct Z_Construct_UClass_ADungeonRaiderCharacter_Statics; \
public: \
	DECLARE_CLASS(ADungeonRaiderCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonRaider"), NO_API) \
	DECLARE_SERIALIZER(ADungeonRaiderCharacter)


#define FID_DungeonRaider_Source_DungeonRaider_DungeonRaiderCharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesADungeonRaiderCharacter(); \
	friend struct Z_Construct_UClass_ADungeonRaiderCharacter_Statics; \
public: \
	DECLARE_CLASS(ADungeonRaiderCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonRaider"), NO_API) \
	DECLARE_SERIALIZER(ADungeonRaiderCharacter)


#define FID_DungeonRaider_Source_DungeonRaider_DungeonRaiderCharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADungeonRaiderCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADungeonRaiderCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonRaiderCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonRaiderCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADungeonRaiderCharacter(ADungeonRaiderCharacter&&); \
	NO_API ADungeonRaiderCharacter(const ADungeonRaiderCharacter&); \
public:


#define FID_DungeonRaider_Source_DungeonRaider_DungeonRaiderCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADungeonRaiderCharacter(ADungeonRaiderCharacter&&); \
	NO_API ADungeonRaiderCharacter(const ADungeonRaiderCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonRaiderCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonRaiderCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADungeonRaiderCharacter)


#define FID_DungeonRaider_Source_DungeonRaider_DungeonRaiderCharacter_h_20_PROLOG
#define FID_DungeonRaider_Source_DungeonRaider_DungeonRaiderCharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DungeonRaider_Source_DungeonRaider_DungeonRaiderCharacter_h_23_SPARSE_DATA \
	FID_DungeonRaider_Source_DungeonRaider_DungeonRaiderCharacter_h_23_RPC_WRAPPERS \
	FID_DungeonRaider_Source_DungeonRaider_DungeonRaiderCharacter_h_23_INCLASS \
	FID_DungeonRaider_Source_DungeonRaider_DungeonRaiderCharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DungeonRaider_Source_DungeonRaider_DungeonRaiderCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DungeonRaider_Source_DungeonRaider_DungeonRaiderCharacter_h_23_SPARSE_DATA \
	FID_DungeonRaider_Source_DungeonRaider_DungeonRaiderCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DungeonRaider_Source_DungeonRaider_DungeonRaiderCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_DungeonRaider_Source_DungeonRaider_DungeonRaiderCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONRAIDER_API UClass* StaticClass<class ADungeonRaiderCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DungeonRaider_Source_DungeonRaider_DungeonRaiderCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
