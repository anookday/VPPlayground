// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VPPlayground/Public/Grabbable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrabbable() {}
// Cross Module References
	VPPLAYGROUND_API UClass* Z_Construct_UClass_UGrabbable_NoRegister();
	VPPLAYGROUND_API UClass* Z_Construct_UClass_UGrabbable();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_VPPlayground();
// End Cross Module References
	void UGrabbable::StaticRegisterNativesUGrabbable()
	{
	}
	UClass* Z_Construct_UClass_UGrabbable_NoRegister()
	{
		return UGrabbable::StaticClass();
	}
	struct Z_Construct_UClass_UGrabbable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrabbable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VPPlayground,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabbable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Grabbable.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Grabbable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrabbable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrabbable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGrabbable_Statics::ClassParams = {
		&UGrabbable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGrabbable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabbable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrabbable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGrabbable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGrabbable, 4098128214);
	template<> VPPLAYGROUND_API UClass* StaticClass<UGrabbable>()
	{
		return UGrabbable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrabbable(Z_Construct_UClass_UGrabbable, &UGrabbable::StaticClass, TEXT("/Script/VPPlayground"), TEXT("UGrabbable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrabbable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
