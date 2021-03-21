// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VPPlayground/Public/Launchable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaunchable() {}
// Cross Module References
	VPPLAYGROUND_API UClass* Z_Construct_UClass_ULaunchable_NoRegister();
	VPPLAYGROUND_API UClass* Z_Construct_UClass_ULaunchable();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_VPPlayground();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULaunchable::execLaunch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Launch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULaunchable::execPlayEffects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayEffects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULaunchable::execOnBeginOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void ULaunchable::StaticRegisterNativesULaunchable()
	{
		UClass* Class = ULaunchable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Launch", &ULaunchable::execLaunch },
			{ "OnBeginOverlap", &ULaunchable::execOnBeginOverlap },
			{ "PlayEffects", &ULaunchable::execPlayEffects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULaunchable_Launch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULaunchable_Launch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Launch Owner" },
		{ "ModuleRelativePath", "Public/Launchable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULaunchable_Launch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULaunchable, nullptr, "Launch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULaunchable_Launch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULaunchable_Launch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULaunchable_Launch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULaunchable_Launch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULaunchable_OnBeginOverlap_Statics
	{
		struct Launchable_eventOnBeginOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULaunchable_OnBeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Launchable_eventOnBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULaunchable_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Launchable_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULaunchable_OnBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULaunchable_OnBeginOverlap_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULaunchable_OnBeginOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULaunchable_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Launchable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULaunchable_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULaunchable, nullptr, "OnBeginOverlap", nullptr, nullptr, sizeof(Launchable_eventOnBeginOverlap_Parms), Z_Construct_UFunction_ULaunchable_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULaunchable_OnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULaunchable_OnBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULaunchable_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULaunchable_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULaunchable_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULaunchable_PlayEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULaunchable_PlayEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Launch Effects" },
		{ "ModuleRelativePath", "Public/Launchable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULaunchable_PlayEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULaunchable, nullptr, "PlayEffects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULaunchable_PlayEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULaunchable_PlayEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULaunchable_PlayEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULaunchable_PlayEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULaunchable_NoRegister()
	{
		return ULaunchable::StaticClass();
	}
	struct Z_Construct_UClass_ULaunchable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveActorAfterLaunch_MetaData[];
#endif
		static void NewProp_RemoveActorAfterLaunch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RemoveActorAfterLaunch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RemoveDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableRagdoll_MetaData[];
#endif
		static void NewProp_EnableRagdoll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableRagdoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpwardForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpwardForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULaunchable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VPPlayground,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULaunchable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULaunchable_Launch, "Launch" }, // 3331561756
		{ &Z_Construct_UFunction_ULaunchable_OnBeginOverlap, "OnBeginOverlap" }, // 1538843301
		{ &Z_Construct_UFunction_ULaunchable_PlayEffects, "PlayEffects" }, // 876655002
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULaunchable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Launchable.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Launchable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULaunchable_Statics::NewProp_RemoveActorAfterLaunch_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// CONFIGURABLE PROPERTIES\n" },
		{ "ModuleRelativePath", "Public/Launchable.h" },
		{ "ToolTip", "CONFIGURABLE PROPERTIES" },
	};
#endif
	void Z_Construct_UClass_ULaunchable_Statics::NewProp_RemoveActorAfterLaunch_SetBit(void* Obj)
	{
		((ULaunchable*)Obj)->RemoveActorAfterLaunch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULaunchable_Statics::NewProp_RemoveActorAfterLaunch = { "RemoveActorAfterLaunch", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULaunchable), &Z_Construct_UClass_ULaunchable_Statics::NewProp_RemoveActorAfterLaunch_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULaunchable_Statics::NewProp_RemoveActorAfterLaunch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULaunchable_Statics::NewProp_RemoveActorAfterLaunch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULaunchable_Statics::NewProp_RemoveDelay_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/Launchable.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULaunchable_Statics::NewProp_RemoveDelay = { "RemoveDelay", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULaunchable, RemoveDelay), METADATA_PARAMS(Z_Construct_UClass_ULaunchable_Statics::NewProp_RemoveDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULaunchable_Statics::NewProp_RemoveDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULaunchable_Statics::NewProp_EnableRagdoll_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/Launchable.h" },
	};
#endif
	void Z_Construct_UClass_ULaunchable_Statics::NewProp_EnableRagdoll_SetBit(void* Obj)
	{
		((ULaunchable*)Obj)->EnableRagdoll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULaunchable_Statics::NewProp_EnableRagdoll = { "EnableRagdoll", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULaunchable), &Z_Construct_UClass_ULaunchable_Statics::NewProp_EnableRagdoll_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULaunchable_Statics::NewProp_EnableRagdoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULaunchable_Statics::NewProp_EnableRagdoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULaunchable_Statics::NewProp_LaunchAngle_MetaData[] = {
		{ "Category", "Direction" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Launchable.h" },
		{ "Umax", "360.0" },
		{ "UMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULaunchable_Statics::NewProp_LaunchAngle = { "LaunchAngle", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULaunchable, LaunchAngle), METADATA_PARAMS(Z_Construct_UClass_ULaunchable_Statics::NewProp_LaunchAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULaunchable_Statics::NewProp_LaunchAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULaunchable_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Direction" },
		{ "ModuleRelativePath", "Public/Launchable.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULaunchable_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULaunchable, Velocity), METADATA_PARAMS(Z_Construct_UClass_ULaunchable_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULaunchable_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULaunchable_Statics::NewProp_UpwardForce_MetaData[] = {
		{ "Category", "Direction" },
		{ "ModuleRelativePath", "Public/Launchable.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULaunchable_Statics::NewProp_UpwardForce = { "UpwardForce", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULaunchable, UpwardForce), METADATA_PARAMS(Z_Construct_UClass_ULaunchable_Statics::NewProp_UpwardForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULaunchable_Statics::NewProp_UpwardForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULaunchable_Statics::NewProp_HitParticle_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/Launchable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULaunchable_Statics::NewProp_HitParticle = { "HitParticle", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULaunchable, HitParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULaunchable_Statics::NewProp_HitParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULaunchable_Statics::NewProp_HitParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULaunchable_Statics::NewProp_HitSound_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/Launchable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULaunchable_Statics::NewProp_HitSound = { "HitSound", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULaunchable, HitSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULaunchable_Statics::NewProp_HitSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULaunchable_Statics::NewProp_HitSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULaunchable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULaunchable_Statics::NewProp_RemoveActorAfterLaunch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULaunchable_Statics::NewProp_RemoveDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULaunchable_Statics::NewProp_EnableRagdoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULaunchable_Statics::NewProp_LaunchAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULaunchable_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULaunchable_Statics::NewProp_UpwardForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULaunchable_Statics::NewProp_HitParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULaunchable_Statics::NewProp_HitSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULaunchable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULaunchable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULaunchable_Statics::ClassParams = {
		&ULaunchable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULaunchable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULaunchable_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULaunchable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULaunchable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULaunchable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULaunchable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULaunchable, 2728725280);
	template<> VPPLAYGROUND_API UClass* StaticClass<ULaunchable>()
	{
		return ULaunchable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULaunchable(Z_Construct_UClass_ULaunchable, &ULaunchable::StaticClass, TEXT("/Script/VPPlayground"), TEXT("ULaunchable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULaunchable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
