// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseClass/TFPlayerCharacter.h"

#ifdef THEFALL_TFPlayerCharacter_generated_h
#error "TFPlayerCharacter.generated.h already included, missing '#pragma once' in TFPlayerCharacter.h"
#endif
#define THEFALL_TFPlayerCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATFPlayerCharacter *******************************************************
#define FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Public_BaseClass_TFPlayerCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


THEFALL_API UClass* Z_Construct_UClass_ATFPlayerCharacter_NoRegister();

#define FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Public_BaseClass_TFPlayerCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATFPlayerCharacter(); \
	friend struct Z_Construct_UClass_ATFPlayerCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend THEFALL_API UClass* Z_Construct_UClass_ATFPlayerCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ATFPlayerCharacter, ATFCharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheFall"), Z_Construct_UClass_ATFPlayerCharacter_NoRegister) \
	DECLARE_SERIALIZER(ATFPlayerCharacter)


#define FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Public_BaseClass_TFPlayerCharacter_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATFPlayerCharacter(ATFPlayerCharacter&&) = delete; \
	ATFPlayerCharacter(const ATFPlayerCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATFPlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATFPlayerCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ATFPlayerCharacter) \
	NO_API virtual ~ATFPlayerCharacter();


#define FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Public_BaseClass_TFPlayerCharacter_h_18_PROLOG
#define FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Public_BaseClass_TFPlayerCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Public_BaseClass_TFPlayerCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Public_BaseClass_TFPlayerCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Public_BaseClass_TFPlayerCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATFPlayerCharacter;

// ********** End Class ATFPlayerCharacter *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Public_BaseClass_TFPlayerCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
