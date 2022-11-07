// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstHW/Public/Disappearing.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisappearing() {}
// Cross Module References
	FIRSTHW_API UClass* Z_Construct_UClass_ADisappearing_NoRegister();
	FIRSTHW_API UClass* Z_Construct_UClass_ADisappearing();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FirstHW();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ADisappearing::StaticRegisterNativesADisappearing()
	{
	}
	UClass* Z_Construct_UClass_ADisappearing_NoRegister()
	{
		return ADisappearing::StaticClass();
	}
	struct Z_Construct_UClass_ADisappearing_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SampleMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_spawnTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADisappearing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstHW,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisappearing_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Disappearing.h" },
		{ "ModuleRelativePath", "Public/Disappearing.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisappearing_Statics::NewProp_SampleMesh_MetaData[] = {
		{ "Category", "Disappearing" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Disappearing.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADisappearing_Statics::NewProp_SampleMesh = { "SampleMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADisappearing, SampleMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADisappearing_Statics::NewProp_SampleMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisappearing_Statics::NewProp_SampleMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisappearing_Statics::NewProp_spawnTime_MetaData[] = {
		{ "Category", "Disappearing" },
		{ "ModuleRelativePath", "Public/Disappearing.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADisappearing_Statics::NewProp_spawnTime = { "spawnTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADisappearing, spawnTime), METADATA_PARAMS(Z_Construct_UClass_ADisappearing_Statics::NewProp_spawnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisappearing_Statics::NewProp_spawnTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADisappearing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisappearing_Statics::NewProp_SampleMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisappearing_Statics::NewProp_spawnTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADisappearing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADisappearing>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADisappearing_Statics::ClassParams = {
		&ADisappearing::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADisappearing_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADisappearing_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADisappearing_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADisappearing_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADisappearing()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADisappearing_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADisappearing, 1289075149);
	template<> FIRSTHW_API UClass* StaticClass<ADisappearing>()
	{
		return ADisappearing::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADisappearing(Z_Construct_UClass_ADisappearing, &ADisappearing::StaticClass, TEXT("/Script/FirstHW"), TEXT("ADisappearing"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADisappearing);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
