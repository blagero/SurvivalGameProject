// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheFall/Variant_Combat/AnimNotify_CheckChargedAttack.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAnimNotify_CheckChargedAttack() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
THEFALL_API UClass* Z_Construct_UClass_UAnimNotify_CheckChargedAttack();
THEFALL_API UClass* Z_Construct_UClass_UAnimNotify_CheckChargedAttack_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheFall();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAnimNotify_CheckChargedAttack *******************************************
void UAnimNotify_CheckChargedAttack::StaticRegisterNativesUAnimNotify_CheckChargedAttack()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAnimNotify_CheckChargedAttack;
UClass* UAnimNotify_CheckChargedAttack::GetPrivateStaticClass()
{
	using TClass = UAnimNotify_CheckChargedAttack;
	if (!Z_Registration_Info_UClass_UAnimNotify_CheckChargedAttack.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AnimNotify_CheckChargedAttack"),
			Z_Registration_Info_UClass_UAnimNotify_CheckChargedAttack.InnerSingleton,
			StaticRegisterNativesUAnimNotify_CheckChargedAttack,
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
	return Z_Registration_Info_UClass_UAnimNotify_CheckChargedAttack.InnerSingleton;
}
UClass* Z_Construct_UClass_UAnimNotify_CheckChargedAttack_NoRegister()
{
	return UAnimNotify_CheckChargedAttack::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAnimNotify_CheckChargedAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  AnimNotify to perform a charged attack hold check.\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "Variant_Combat/AnimNotify_CheckChargedAttack.h" },
		{ "ModuleRelativePath", "Variant_Combat/AnimNotify_CheckChargedAttack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AnimNotify to perform a charged attack hold check." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_CheckChargedAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimNotify_CheckChargedAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_TheFall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_CheckChargedAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_CheckChargedAttack_Statics::ClassParams = {
	&UAnimNotify_CheckChargedAttack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_CheckChargedAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_CheckChargedAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_CheckChargedAttack()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_CheckChargedAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_CheckChargedAttack.OuterSingleton, Z_Construct_UClass_UAnimNotify_CheckChargedAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_CheckChargedAttack.OuterSingleton;
}
UAnimNotify_CheckChargedAttack::UAnimNotify_CheckChargedAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_CheckChargedAttack);
UAnimNotify_CheckChargedAttack::~UAnimNotify_CheckChargedAttack() {}
// ********** End Class UAnimNotify_CheckChargedAttack *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Variant_Combat_AnimNotify_CheckChargedAttack_h__Script_TheFall_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_CheckChargedAttack, UAnimNotify_CheckChargedAttack::StaticClass, TEXT("UAnimNotify_CheckChargedAttack"), &Z_Registration_Info_UClass_UAnimNotify_CheckChargedAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_CheckChargedAttack), 1597633024U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Variant_Combat_AnimNotify_CheckChargedAttack_h__Script_TheFall_230319573(TEXT("/Script/TheFall"),
	Z_CompiledInDeferFile_FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Variant_Combat_AnimNotify_CheckChargedAttack_h__Script_TheFall_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Variant_Combat_AnimNotify_CheckChargedAttack_h__Script_TheFall_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
