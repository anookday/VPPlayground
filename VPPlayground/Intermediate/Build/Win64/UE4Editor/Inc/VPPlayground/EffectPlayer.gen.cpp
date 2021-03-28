// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VPPlayground/Public/EffectPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffectPlayer() {}
// Cross Module References
	VPPLAYGROUND_API UClass* Z_Construct_UClass_UEffectPlayer_NoRegister();
	VPPLAYGROUND_API UClass* Z_Construct_UClass_UEffectPlayer();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_VPPlayground();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEffectPlayer::execPlayEffects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayEffects();
		P_NATIVE_END;
	}
	void UEffectPlayer::StaticRegisterNativesUEffectPlayer()
	{
		UClass* Class = UEffectPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayEffects", &UEffectPlayer::execPlayEffects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEffectPlayer_PlayEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffectPlayer_PlayEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/EffectPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffectPlayer_PlayEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffectPlayer, nullptr, "PlayEffects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffectPlayer_PlayEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffectPlayer_PlayEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffectPlayer_PlayEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffectPlayer_PlayEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEffectPlayer_NoRegister()
	{
		return UEffectPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UEffectPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VisualEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowTarget_MetaData[];
#endif
		static void NewProp_FollowTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FollowTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEffectPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VPPlayground,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEffectPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEffectPlayer_PlayEffects, "PlayEffects" }, // 1135760068
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffectPlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "EffectPlayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EffectPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffectPlayer_Statics::NewProp_VisualEffect_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/EffectPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffectPlayer_Statics::NewProp_VisualEffect = { "VisualEffect", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffectPlayer, VisualEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffectPlayer_Statics::NewProp_VisualEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffectPlayer_Statics::NewProp_VisualEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffectPlayer_Statics::NewProp_AudioEffect_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/EffectPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffectPlayer_Statics::NewProp_AudioEffect = { "AudioEffect", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffectPlayer, AudioEffect), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffectPlayer_Statics::NewProp_AudioEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffectPlayer_Statics::NewProp_AudioEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffectPlayer_Statics::NewProp_FollowTarget_MetaData[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Public/EffectPlayer.h" },
	};
#endif
	void Z_Construct_UClass_UEffectPlayer_Statics::NewProp_FollowTarget_SetBit(void* Obj)
	{
		((UEffectPlayer*)Obj)->FollowTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEffectPlayer_Statics::NewProp_FollowTarget = { "FollowTarget", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEffectPlayer), &Z_Construct_UClass_UEffectPlayer_Statics::NewProp_FollowTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEffectPlayer_Statics::NewProp_FollowTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffectPlayer_Statics::NewProp_FollowTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEffectPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffectPlayer_Statics::NewProp_VisualEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffectPlayer_Statics::NewProp_AudioEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffectPlayer_Statics::NewProp_FollowTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEffectPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEffectPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEffectPlayer_Statics::ClassParams = {
		&UEffectPlayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEffectPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEffectPlayer_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEffectPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEffectPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEffectPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEffectPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEffectPlayer, 171427437);
	template<> VPPLAYGROUND_API UClass* StaticClass<UEffectPlayer>()
	{
		return UEffectPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEffectPlayer(Z_Construct_UClass_UEffectPlayer, &UEffectPlayer::StaticClass, TEXT("/Script/VPPlayground"), TEXT("UEffectPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEffectPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
