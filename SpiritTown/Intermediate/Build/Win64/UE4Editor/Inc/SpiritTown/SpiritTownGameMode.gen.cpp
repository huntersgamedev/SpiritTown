// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpiritTown/SpiritTownGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpiritTownGameMode() {}
// Cross Module References
	SPIRITTOWN_API UClass* Z_Construct_UClass_ASpiritTownGameMode_NoRegister();
	SPIRITTOWN_API UClass* Z_Construct_UClass_ASpiritTownGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SpiritTown();
// End Cross Module References
	void ASpiritTownGameMode::StaticRegisterNativesASpiritTownGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASpiritTownGameMode_NoRegister()
	{
		return ASpiritTownGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASpiritTownGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpiritTownGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SpiritTown,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiritTownGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SpiritTownGameMode.h" },
		{ "ModuleRelativePath", "SpiritTownGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpiritTownGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpiritTownGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpiritTownGameMode_Statics::ClassParams = {
		&ASpiritTownGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASpiritTownGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpiritTownGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpiritTownGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpiritTownGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpiritTownGameMode, 557479827);
	template<> SPIRITTOWN_API UClass* StaticClass<ASpiritTownGameMode>()
	{
		return ASpiritTownGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpiritTownGameMode(Z_Construct_UClass_ASpiritTownGameMode, &ASpiritTownGameMode::StaticClass, TEXT("/Script/SpiritTown"), TEXT("ASpiritTownGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpiritTownGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
