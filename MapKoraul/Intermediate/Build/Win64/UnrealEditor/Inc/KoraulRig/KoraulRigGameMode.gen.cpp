// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KoraulRig/KoraulRigGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKoraulRigGameMode() {}
// Cross Module References
	KORAULRIG_API UClass* Z_Construct_UClass_AKoraulRigGameMode_NoRegister();
	KORAULRIG_API UClass* Z_Construct_UClass_AKoraulRigGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_KoraulRig();
// End Cross Module References
	void AKoraulRigGameMode::StaticRegisterNativesAKoraulRigGameMode()
	{
	}
	UClass* Z_Construct_UClass_AKoraulRigGameMode_NoRegister()
	{
		return AKoraulRigGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AKoraulRigGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKoraulRigGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KoraulRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKoraulRigGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering LOD WorldPartition DataLayers Utilities|Transformation" },
		{ "IncludePath", "KoraulRigGameMode.h" },
		{ "ModuleRelativePath", "KoraulRigGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKoraulRigGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKoraulRigGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AKoraulRigGameMode_Statics::ClassParams = {
		&AKoraulRigGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AKoraulRigGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKoraulRigGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKoraulRigGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKoraulRigGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKoraulRigGameMode, 2696545150);
	template<> KORAULRIG_API UClass* StaticClass<AKoraulRigGameMode>()
	{
		return AKoraulRigGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKoraulRigGameMode(Z_Construct_UClass_AKoraulRigGameMode, &AKoraulRigGameMode::StaticClass, TEXT("/Script/KoraulRig"), TEXT("AKoraulRigGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKoraulRigGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
