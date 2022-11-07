// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstHW/Public/ChangingColor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChangingColor() {}
// Cross Module References
	FIRSTHW_API UClass* Z_Construct_UClass_AChangingColor_NoRegister();
	FIRSTHW_API UClass* Z_Construct_UClass_AChangingColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FirstHW();
// End Cross Module References
	void AChangingColor::StaticRegisterNativesAChangingColor()
	{
	}
	UClass* Z_Construct_UClass_AChangingColor_NoRegister()
	{
		return AChangingColor::StaticClass();
	}
	struct Z_Construct_UClass_AChangingColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChangingColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstHW,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChangingColor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChangingColor.h" },
		{ "ModuleRelativePath", "Public/ChangingColor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChangingColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChangingColor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChangingColor_Statics::ClassParams = {
		&AChangingColor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChangingColor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChangingColor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChangingColor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChangingColor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChangingColor, 1117951699);
	template<> FIRSTHW_API UClass* StaticClass<AChangingColor>()
	{
		return AChangingColor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChangingColor(Z_Construct_UClass_AChangingColor, &AChangingColor::StaticClass, TEXT("/Script/FirstHW"), TEXT("AChangingColor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChangingColor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
