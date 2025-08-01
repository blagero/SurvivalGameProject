// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheFall/Variant_Combat/CombatActivationVolume.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCombatActivationVolume() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
THEFALL_API UClass* Z_Construct_UClass_ACombatActivationVolume();
THEFALL_API UClass* Z_Construct_UClass_ACombatActivationVolume_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheFall();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACombatActivationVolume Function OnOverlap *******************************
struct Z_Construct_UFunction_ACombatActivationVolume_OnOverlap_Statics
{
	struct CombatActivationVolume_eventOnOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles overlaps with the box volume */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/CombatActivationVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles overlaps with the box volume" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACombatActivationVolume_OnOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatActivationVolume_eventOnOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACombatActivationVolume_OnOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatActivationVolume_eventOnOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACombatActivationVolume_OnOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatActivationVolume_eventOnOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACombatActivationVolume_OnOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatActivationVolume_eventOnOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ACombatActivationVolume_OnOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((CombatActivationVolume_eventOnOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACombatActivationVolume_OnOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatActivationVolume_eventOnOverlap_Parms), &Z_Construct_UFunction_ACombatActivationVolume_OnOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACombatActivationVolume_OnOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatActivationVolume_eventOnOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACombatActivationVolume_OnOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACombatActivationVolume_OnOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACombatActivationVolume_OnOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACombatActivationVolume_OnOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACombatActivationVolume_OnOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACombatActivationVolume_OnOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACombatActivationVolume_OnOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatActivationVolume_OnOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACombatActivationVolume_OnOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACombatActivationVolume, nullptr, "OnOverlap", Z_Construct_UFunction_ACombatActivationVolume_OnOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatActivationVolume_OnOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACombatActivationVolume_OnOverlap_Statics::CombatActivationVolume_eventOnOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatActivationVolume_OnOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACombatActivationVolume_OnOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACombatActivationVolume_OnOverlap_Statics::CombatActivationVolume_eventOnOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACombatActivationVolume_OnOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACombatActivationVolume_OnOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACombatActivationVolume::execOnOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class ACombatActivationVolume Function OnOverlap *********************************

// ********** Begin Class ACombatActivationVolume **************************************************
void ACombatActivationVolume::StaticRegisterNativesACombatActivationVolume()
{
	UClass* Class = ACombatActivationVolume::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOverlap", &ACombatActivationVolume::execOnOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACombatActivationVolume;
UClass* ACombatActivationVolume::GetPrivateStaticClass()
{
	using TClass = ACombatActivationVolume;
	if (!Z_Registration_Info_UClass_ACombatActivationVolume.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CombatActivationVolume"),
			Z_Registration_Info_UClass_ACombatActivationVolume.InnerSingleton,
			StaticRegisterNativesACombatActivationVolume,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ACombatActivationVolume.InnerSingleton;
}
UClass* Z_Construct_UClass_ACombatActivationVolume_NoRegister()
{
	return ACombatActivationVolume::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACombatActivationVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A simple volume that activates a list of actors when the player pawn enters.\n */" },
#endif
		{ "IncludePath", "Variant_Combat/CombatActivationVolume.h" },
		{ "ModuleRelativePath", "Variant_Combat/CombatActivationVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A simple volume that activates a list of actors when the player pawn enters." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collision box volume */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Variant_Combat/CombatActivationVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision box volume" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToActivate_MetaData[] = {
		{ "Category", "Activation Volume" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of actors to activate when this volume is entered */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/CombatActivationVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of actors to activate when this volume is entered" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Box;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToActivate_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToActivate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACombatActivationVolume_OnOverlap, "OnOverlap" }, // 2559488672
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACombatActivationVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombatActivationVolume_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatActivationVolume, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombatActivationVolume_Statics::NewProp_ActorsToActivate_Inner = { "ActorsToActivate", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACombatActivationVolume_Statics::NewProp_ActorsToActivate = { "ActorsToActivate", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatActivationVolume, ActorsToActivate), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToActivate_MetaData), NewProp_ActorsToActivate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACombatActivationVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatActivationVolume_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatActivationVolume_Statics::NewProp_ActorsToActivate_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatActivationVolume_Statics::NewProp_ActorsToActivate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatActivationVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACombatActivationVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TheFall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatActivationVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACombatActivationVolume_Statics::ClassParams = {
	&ACombatActivationVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACombatActivationVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACombatActivationVolume_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatActivationVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ACombatActivationVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACombatActivationVolume()
{
	if (!Z_Registration_Info_UClass_ACombatActivationVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACombatActivationVolume.OuterSingleton, Z_Construct_UClass_ACombatActivationVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACombatActivationVolume.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACombatActivationVolume);
ACombatActivationVolume::~ACombatActivationVolume() {}
// ********** End Class ACombatActivationVolume ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Variant_Combat_CombatActivationVolume_h__Script_TheFall_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACombatActivationVolume, ACombatActivationVolume::StaticClass, TEXT("ACombatActivationVolume"), &Z_Registration_Info_UClass_ACombatActivationVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACombatActivationVolume), 622235532U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Variant_Combat_CombatActivationVolume_h__Script_TheFall_3421967476(TEXT("/Script/TheFall"),
	Z_CompiledInDeferFile_FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Variant_Combat_CombatActivationVolume_h__Script_TheFall_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Variant_Combat_CombatActivationVolume_h__Script_TheFall_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
