// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VPPLAYGROUND_EffectPlayer_generated_h
#error "EffectPlayer.generated.h already included, missing '#pragma once' in EffectPlayer.h"
#endif
#define VPPLAYGROUND_EffectPlayer_generated_h

#define HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_EffectPlayer_h_13_SPARSE_DATA
#define HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_EffectPlayer_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayEffects);


#define HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_EffectPlayer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayEffects);


#define HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_EffectPlayer_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEffectPlayer(); \
	friend struct Z_Construct_UClass_UEffectPlayer_Statics; \
public: \
	DECLARE_CLASS(UEffectPlayer, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VPPlayground"), NO_API) \
	DECLARE_SERIALIZER(UEffectPlayer)


#define HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_EffectPlayer_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUEffectPlayer(); \
	friend struct Z_Construct_UClass_UEffectPlayer_Statics; \
public: \
	DECLARE_CLASS(UEffectPlayer, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VPPlayground"), NO_API) \
	DECLARE_SERIALIZER(UEffectPlayer)


#define HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_EffectPlayer_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEffectPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEffectPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEffectPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEffectPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEffectPlayer(UEffectPlayer&&); \
	NO_API UEffectPlayer(const UEffectPlayer&); \
public:


#define HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_EffectPlayer_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEffectPlayer(UEffectPlayer&&); \
	NO_API UEffectPlayer(const UEffectPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEffectPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEffectPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEffectPlayer)


#define HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_EffectPlayer_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VisualEffect() { return STRUCT_OFFSET(UEffectPlayer, VisualEffect); } \
	FORCEINLINE static uint32 __PPO__AudioEffect() { return STRUCT_OFFSET(UEffectPlayer, AudioEffect); } \
	FORCEINLINE static uint32 __PPO__FollowTarget() { return STRUCT_OFFSET(UEffectPlayer, FollowTarget); }


#define HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_EffectPlayer_h_10_PROLOG
#define HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_EffectPlayer_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_EffectPlayer_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_EffectPlayer_h_13_SPARSE_DATA \
	HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_EffectPlayer_h_13_RPC_WRAPPERS \
	HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_EffectPlayer_h_13_INCLASS \
	HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_EffectPlayer_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_EffectPlayer_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_EffectPlayer_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_EffectPlayer_h_13_SPARSE_DATA \
	HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_EffectPlayer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_EffectPlayer_h_13_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_EffectPlayer_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VPPLAYGROUND_API UClass* StaticClass<class UEffectPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VPPlayground_Source_VPPlayground_Public_EffectPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
