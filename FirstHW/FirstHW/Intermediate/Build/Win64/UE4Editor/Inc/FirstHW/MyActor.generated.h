// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTHW_MyActor_generated_h
#error "MyActor.generated.h already included, missing '#pragma once' in MyActor.h"
#endif
#define FIRSTHW_MyActor_generated_h

#define FirstHW_Source_FirstHW_Public_MyActor_h_12_SPARSE_DATA
#define FirstHW_Source_FirstHW_Public_MyActor_h_12_RPC_WRAPPERS
#define FirstHW_Source_FirstHW_Public_MyActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FirstHW_Source_FirstHW_Public_MyActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyActor(); \
	friend struct Z_Construct_UClass_AMyActor_Statics; \
public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstHW"), NO_API) \
	DECLARE_SERIALIZER(AMyActor)


#define FirstHW_Source_FirstHW_Public_MyActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyActor(); \
	friend struct Z_Construct_UClass_AMyActor_Statics; \
public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstHW"), NO_API) \
	DECLARE_SERIALIZER(AMyActor)


#define FirstHW_Source_FirstHW_Public_MyActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor(AMyActor&&); \
	NO_API AMyActor(const AMyActor&); \
public:


#define FirstHW_Source_FirstHW_Public_MyActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor(AMyActor&&); \
	NO_API AMyActor(const AMyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyActor)


#define FirstHW_Source_FirstHW_Public_MyActor_h_12_PRIVATE_PROPERTY_OFFSET
#define FirstHW_Source_FirstHW_Public_MyActor_h_9_PROLOG
#define FirstHW_Source_FirstHW_Public_MyActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstHW_Source_FirstHW_Public_MyActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FirstHW_Source_FirstHW_Public_MyActor_h_12_SPARSE_DATA \
	FirstHW_Source_FirstHW_Public_MyActor_h_12_RPC_WRAPPERS \
	FirstHW_Source_FirstHW_Public_MyActor_h_12_INCLASS \
	FirstHW_Source_FirstHW_Public_MyActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstHW_Source_FirstHW_Public_MyActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstHW_Source_FirstHW_Public_MyActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FirstHW_Source_FirstHW_Public_MyActor_h_12_SPARSE_DATA \
	FirstHW_Source_FirstHW_Public_MyActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstHW_Source_FirstHW_Public_MyActor_h_12_INCLASS_NO_PURE_DECLS \
	FirstHW_Source_FirstHW_Public_MyActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTHW_API UClass* StaticClass<class AMyActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstHW_Source_FirstHW_Public_MyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
