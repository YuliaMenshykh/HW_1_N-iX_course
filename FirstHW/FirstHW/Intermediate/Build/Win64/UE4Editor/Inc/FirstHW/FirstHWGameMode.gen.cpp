// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstHW/FirstHWGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstHWGameMode() {}
// Cross Module References
	FIRSTHW_API UClass* Z_Construct_UClass_AFirstHWGameMode_NoRegister();
	FIRSTHW_API UClass* Z_Construct_UClass_AFirstHWGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FirstHW();
// End Cross Module References
	void AFirstHWGameMode::StaticRegisterNativesAFirstHWGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFirstHWGameMode_NoRegister()
	{
		return AFirstHWGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFirstHWGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstHWGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstHW,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstHWGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FirstHWGameMode.h" },
		{ "ModuleRelativePath", "FirstHWGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstHWGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstHWGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirstHWGameMode_Statics::ClassParams = {
		&AFirstHWGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFirstHWGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstHWGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstHWGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirstHWGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirstHWGameMode, 2512630559);
	template<> FIRSTHW_API UClass* StaticClass<AFirstHWGameMode>()
	{
		return AFirstHWGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstHWGameMode(Z_Construct_UClass_AFirstHWGameMode, &AFirstHWGameMode::StaticClass, TEXT("/Script/FirstHW"), TEXT("AFirstHWGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstHWGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
