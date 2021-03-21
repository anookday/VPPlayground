// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VPPlayground/Public/Launcher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLauncher() {}
// Cross Module References
	VPPLAYGROUND_API UClass* Z_Construct_UClass_ULauncher_NoRegister();
	VPPLAYGROUND_API UClass* Z_Construct_UClass_ULauncher();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_VPPlayground();
// End Cross Module References
	void ULauncher::StaticRegisterNativesULauncher()
	{
	}
	UClass* Z_Construct_UClass_ULauncher_NoRegister()
	{
		return ULauncher::StaticClass();
	}
	struct Z_Construct_UClass_ULauncher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULauncher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VPPlayground,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULauncher_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Launcher.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Launcher.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULauncher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULauncher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULauncher_Statics::ClassParams = {
		&ULauncher::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULauncher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULauncher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULauncher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULauncher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULauncher, 3703991486);
	template<> VPPLAYGROUND_API UClass* StaticClass<ULauncher>()
	{
		return ULauncher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULauncher(Z_Construct_UClass_ULauncher, &ULauncher::StaticClass, TEXT("/Script/VPPlayground"), TEXT("ULauncher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULauncher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
