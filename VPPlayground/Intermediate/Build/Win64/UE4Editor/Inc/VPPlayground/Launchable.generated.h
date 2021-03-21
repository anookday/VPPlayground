// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
struct FHitResult;
#ifdef VPPLAYGROUND_Launchable_generated_h
#error "Launchable.generated.h already included, missing '#pragma once' in Launchable.h"
#endif
#define VPPLAYGROUND_Launchable_generated_h

#define HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_Launchable_h_13_SPARSE_DATA
#define HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_Launchable_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_Launchable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_Launchable_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULaunchable(); \
	friend struct Z_Construct_UClass_ULaunchable_Statics; \
public: \
	DECLARE_CLASS(ULaunchable, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VPPlayground"), NO_API) \
	DECLARE_SERIALIZER(ULaunchable)


#define HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_Launchable_h_13_INCLASS \
private: \
	static void StaticRegisterNativesULaunchable(); \
	friend struct Z_Construct_UClass_ULaunchable_Statics; \
public: \
	DECLARE_CLASS(ULaunchable, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VPPlayground"), NO_API) \
	DECLARE_SERIALIZER(ULaunchable)


#define HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_Launchable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULaunchable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULaunchable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULaunchable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULaunchable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULaunchable(ULaunchable&&); \
	NO_API ULaunchable(const ULaunchable&); \
public:


#define HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_Launchable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULaunchable(ULaunchable&&); \
	NO_API ULaunchable(const ULaunchable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULaunchable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULaunchable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULaunchable)


#define HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_Launchable_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RemoveActorAfterLaunch() { return STRUCT_OFFSET(ULaunchable, RemoveActorAfterLaunch); } \
	FORCEINLINE static uint32 __PPO__RemoveDelay() { return STRUCT_OFFSET(ULaunchable, RemoveDelay); } \
	FORCEINLINE static uint32 __PPO__Velocity() { return STRUCT_OFFSET(ULaunchable, Velocity); } \
	FORCEINLINE static uint32 __PPO__UpwardForce() { return STRUCT_OFFSET(ULaunchable, UpwardForce); } \
	FORCEINLINE static uint32 __PPO__HitParticle() { return STRUCT_OFFSET(ULaunchable, HitParticle); } \
	FORCEINLINE static uint32 __PPO__HitSound() { return STRUCT_OFFSET(ULaunchable, HitSound); }


#define HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_Launchable_h_10_PROLOG
#define HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_Launchable_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_Launchable_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_Launchable_h_13_SPARSE_DATA \
	HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_Launchable_h_13_RPC_WRAPPERS \
	HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_Launchable_h_13_INCLASS \
	HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_Launchable_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_Launchable_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_Launchable_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_Launchable_h_13_SPARSE_DATA \
	HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_Launchable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_Launchable_h_13_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_Launchable_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VPPLAYGROUND_API UClass* StaticClass<class ULaunchable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_Launchable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
