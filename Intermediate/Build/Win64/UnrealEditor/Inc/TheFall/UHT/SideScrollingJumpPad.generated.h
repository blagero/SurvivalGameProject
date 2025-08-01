// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_SideScrolling/Gameplay/SideScrollingJumpPad.h"

#ifdef THEFALL_SideScrollingJumpPad_generated_h
#error "SideScrollingJumpPad.generated.h already included, missing '#pragma once' in SideScrollingJumpPad.h"
#endif
#define THEFALL_SideScrollingJumpPad_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Class ASideScrollingJumpPad ****************************************************
#define FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Variant_SideScrolling_Gameplay_SideScrollingJumpPad_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBeginOverlap);


THEFALL_API UClass* Z_Construct_UClass_ASideScrollingJumpPad_NoRegister();

#define FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Variant_SideScrolling_Gameplay_SideScrollingJumpPad_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASideScrollingJumpPad(); \
	friend struct Z_Construct_UClass_ASideScrollingJumpPad_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend THEFALL_API UClass* Z_Construct_UClass_ASideScrollingJumpPad_NoRegister(); \
public: \
	DECLARE_CLASS2(ASideScrollingJumpPad, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheFall"), Z_Construct_UClass_ASideScrollingJumpPad_NoRegister) \
	DECLARE_SERIALIZER(ASideScrollingJumpPad)


#define FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Variant_SideScrolling_Gameplay_SideScrollingJumpPad_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASideScrollingJumpPad(ASideScrollingJumpPad&&) = delete; \
	ASideScrollingJumpPad(const ASideScrollingJumpPad&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASideScrollingJumpPad); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASideScrollingJumpPad); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ASideScrollingJumpPad) \
	NO_API virtual ~ASideScrollingJumpPad();


#define FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Variant_SideScrolling_Gameplay_SideScrollingJumpPad_h_14_PROLOG
#define FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Variant_SideScrolling_Gameplay_SideScrollingJumpPad_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Variant_SideScrolling_Gameplay_SideScrollingJumpPad_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Variant_SideScrolling_Gameplay_SideScrollingJumpPad_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Variant_SideScrolling_Gameplay_SideScrollingJumpPad_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASideScrollingJumpPad;

// ********** End Class ASideScrollingJumpPad ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Variant_SideScrolling_Gameplay_SideScrollingJumpPad_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
