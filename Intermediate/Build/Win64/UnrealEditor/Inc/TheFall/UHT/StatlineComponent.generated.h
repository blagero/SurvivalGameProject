// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/StatlineComponent.h"

#ifdef THEFALL_StatlineComponent_generated_h
#error "StatlineComponent.generated.h already included, missing '#pragma once' in StatlineComponent.h"
#endif
#define THEFALL_StatlineComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class ECoreStat : uint8;

// ********** Begin ScriptStruct FCoreStat *********************************************************
#define FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Public_Components_StatlineComponent_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCoreStat_Statics; \
	THEFALL_API static class UScriptStruct* StaticStruct();


struct FCoreStat;
// ********** End ScriptStruct FCoreStat ***********************************************************

// ********** Begin Class UStatlineComponent *******************************************************
#define FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Public_Components_StatlineComponent_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStatPercentile);


THEFALL_API UClass* Z_Construct_UClass_UStatlineComponent_NoRegister();

#define FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Public_Components_StatlineComponent_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatlineComponent(); \
	friend struct Z_Construct_UClass_UStatlineComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend THEFALL_API UClass* Z_Construct_UClass_UStatlineComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UStatlineComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheFall"), Z_Construct_UClass_UStatlineComponent_NoRegister) \
	DECLARE_SERIALIZER(UStatlineComponent)


#define FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Public_Components_StatlineComponent_h_66_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStatlineComponent(UStatlineComponent&&) = delete; \
	UStatlineComponent(const UStatlineComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatlineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatlineComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStatlineComponent) \
	NO_API virtual ~UStatlineComponent();


#define FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Public_Components_StatlineComponent_h_63_PROLOG
#define FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Public_Components_StatlineComponent_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Public_Components_StatlineComponent_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Public_Components_StatlineComponent_h_66_INCLASS_NO_PURE_DECLS \
	FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Public_Components_StatlineComponent_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStatlineComponent;

// ********** End Class UStatlineComponent *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Public_Components_StatlineComponent_h

// ********** Begin Enum ECoreStat *****************************************************************
#define FOREACH_ENUM_ECORESTAT(op) \
	op(ECoreStat::CS_HEALTH) \
	op(ECoreStat::CS_STAMINA) \
	op(ECoreStat::CS_HUNGER) \
	op(ECoreStat::CS_THIRST) 

enum class ECoreStat : uint8;
template<> struct TIsUEnumClass<ECoreStat> { enum { Value = true }; };
template<> THEFALL_API UEnum* StaticEnum<ECoreStat>();
// ********** End Enum ECoreStat *******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
