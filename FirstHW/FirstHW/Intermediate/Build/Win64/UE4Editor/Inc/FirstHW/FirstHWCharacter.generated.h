// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTHW_FirstHWCharacter_generated_h
#error "FirstHWCharacter.generated.h already included, missing '#pragma once' in FirstHWCharacter.h"
#endif
#define FIRSTHW_FirstHWCharacter_generated_h

#define FirstHW_Source_FirstHW_FirstHWCharacter_h_12_SPARSE_DATA
#define FirstHW_Source_FirstHW_FirstHWCharacter_h_12_RPC_WRAPPERS
#define FirstHW_Source_FirstHW_FirstHWCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FirstHW_Source_FirstHW_FirstHWCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstHWCharacter(); \
	friend struct Z_Construct_UClass_AFirstHWCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirstHWCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstHW"), NO_API) \
	DECLARE_SERIALIZER(AFirstHWCharacter)


#define FirstHW_Source_FirstHW_FirstHWCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFirstHWCharacter(); \
	friend struct Z_Construct_UClass_AFirstHWCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirstHWCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstHW"), NO_API) \
	DECLARE_SERIALIZER(AFirstHWCharacter)


#define FirstHW_Source_FirstHW_FirstHWCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstHWCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstHWCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstHWCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstHWCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstHWCharacter(AFirstHWCharacter&&); \
	NO_API AFirstHWCharacter(const AFirstHWCharacter&); \
public:


#define FirstHW_Source_FirstHW_FirstHWCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstHWCharacter(AFirstHWCharacter&&); \
	NO_API AFirstHWCharacter(const AFirstHWCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstHWCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstHWCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstHWCharacter)


#define FirstHW_Source_FirstHW_FirstHWCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AFirstHWCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AFirstHWCharacter, FollowCamera); }


#define FirstHW_Source_FirstHW_FirstHWCharacter_h_9_PROLOG
#define FirstHW_Source_FirstHW_FirstHWCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstHW_Source_FirstHW_FirstHWCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FirstHW_Source_FirstHW_FirstHWCharacter_h_12_SPARSE_DATA \
	FirstHW_Source_FirstHW_FirstHWCharacter_h_12_RPC_WRAPPERS \
	FirstHW_Source_FirstHW_FirstHWCharacter_h_12_INCLASS \
	FirstHW_Source_FirstHW_FirstHWCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstHW_Source_FirstHW_FirstHWCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstHW_Source_FirstHW_FirstHWCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FirstHW_Source_FirstHW_FirstHWCharacter_h_12_SPARSE_DATA \
	FirstHW_Source_FirstHW_FirstHWCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstHW_Source_FirstHW_FirstHWCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FirstHW_Source_FirstHW_FirstHWCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTHW_API UClass* StaticClass<class AFirstHWCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstHW_Source_FirstHW_FirstHWCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
