// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/StatlineComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStatlineComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
THEFALL_API UClass* Z_Construct_UClass_UStatlineComponent();
THEFALL_API UClass* Z_Construct_UClass_UStatlineComponent_NoRegister();
THEFALL_API UEnum* Z_Construct_UEnum_TheFall_ECoreStat();
THEFALL_API UScriptStruct* Z_Construct_UScriptStruct_FCoreStat();
UPackage* Z_Construct_UPackage__Script_TheFall();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECoreStat *****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECoreStat;
static UEnum* ECoreStat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECoreStat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECoreStat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TheFall_ECoreStat, (UObject*)Z_Construct_UPackage__Script_TheFall(), TEXT("ECoreStat"));
	}
	return Z_Registration_Info_UEnum_ECoreStat.OuterSingleton;
}
template<> THEFALL_API UEnum* StaticEnum<ECoreStat>()
{
	return ECoreStat_StaticEnum();
}
struct Z_Construct_UEnum_TheFall_ECoreStat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CS_HEALTH.DisplayName", "Health" },
		{ "CS_HEALTH.Name", "ECoreStat::CS_HEALTH" },
		{ "CS_HUNGER.DisplayName", "Hunger" },
		{ "CS_HUNGER.Name", "ECoreStat::CS_HUNGER" },
		{ "CS_STAMINA.DisplayName", "Stamina" },
		{ "CS_STAMINA.Name", "ECoreStat::CS_STAMINA" },
		{ "CS_THIRST.DisplayName", "Thirst" },
		{ "CS_THIRST.Name", "ECoreStat::CS_THIRST" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECoreStat::CS_HEALTH", (int64)ECoreStat::CS_HEALTH },
		{ "ECoreStat::CS_STAMINA", (int64)ECoreStat::CS_STAMINA },
		{ "ECoreStat::CS_HUNGER", (int64)ECoreStat::CS_HUNGER },
		{ "ECoreStat::CS_THIRST", (int64)ECoreStat::CS_THIRST },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TheFall_ECoreStat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TheFall,
	nullptr,
	"ECoreStat",
	"ECoreStat",
	Z_Construct_UEnum_TheFall_ECoreStat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TheFall_ECoreStat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TheFall_ECoreStat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TheFall_ECoreStat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TheFall_ECoreStat()
{
	if (!Z_Registration_Info_UEnum_ECoreStat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECoreStat.InnerSingleton, Z_Construct_UEnum_TheFall_ECoreStat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECoreStat.InnerSingleton;
}
// ********** End Enum ECoreStat *******************************************************************

// ********** Begin ScriptStruct FCoreStat *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCoreStat;
class UScriptStruct* FCoreStat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCoreStat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCoreStat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoreStat, (UObject*)Z_Construct_UPackage__Script_TheFall(), TEXT("CoreStat"));
	}
	return Z_Registration_Info_UScriptStruct_FCoreStat.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCoreStat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Can be used in blueprints\n//\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Can be used in blueprints" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CoreStat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Visible in Details, cant be edited only see, AllowPrivate access- allows to work on variable\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Visible in Details, cant be edited only see, AllowPrivate access- allows to work on variable" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CoreStat" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerSecondTick_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CoreStat" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Current;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PerSecondTick;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoreStat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoreStat_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreStat, Current), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Current_MetaData), NewProp_Current_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoreStat_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreStat, Max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoreStat_Statics::NewProp_PerSecondTick = { "PerSecondTick", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreStat, PerSecondTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerSecondTick_MetaData), NewProp_PerSecondTick_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoreStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreStat_Statics::NewProp_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreStat_Statics::NewProp_Max,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreStat_Statics::NewProp_PerSecondTick,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoreStat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TheFall,
	nullptr,
	&NewStructOps,
	"CoreStat",
	Z_Construct_UScriptStruct_FCoreStat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreStat_Statics::PropPointers),
	sizeof(FCoreStat),
	alignof(FCoreStat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreStat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCoreStat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCoreStat()
{
	if (!Z_Registration_Info_UScriptStruct_FCoreStat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCoreStat.InnerSingleton, Z_Construct_UScriptStruct_FCoreStat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCoreStat.InnerSingleton;
}
// ********** End ScriptStruct FCoreStat ***********************************************************

// ********** Begin Class UStatlineComponent Function GetStatPercentile ****************************
struct Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics
{
	struct StatlineComponent_eventGetStatPercentile_Parms
	{
		ECoreStat Stat;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Stat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Stat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::NewProp_Stat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatlineComponent_eventGetStatPercentile_Parms, Stat), Z_Construct_UEnum_TheFall_ECoreStat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stat_MetaData), NewProp_Stat_MetaData) }; // 2985996630
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatlineComponent_eventGetStatPercentile_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::NewProp_Stat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::NewProp_Stat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatlineComponent, nullptr, "GetStatPercentile", Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::StatlineComponent_eventGetStatPercentile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::StatlineComponent_eventGetStatPercentile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatlineComponent_GetStatPercentile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatlineComponent::execGetStatPercentile)
{
	P_GET_ENUM(ECoreStat,Z_Param_Stat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStatPercentile(ECoreStat(Z_Param_Stat));
	P_NATIVE_END;
}
// ********** End Class UStatlineComponent Function GetStatPercentile ******************************

// ********** Begin Class UStatlineComponent *******************************************************
void UStatlineComponent::StaticRegisterNativesUStatlineComponent()
{
	UClass* Class = UStatlineComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetStatPercentile", &UStatlineComponent::execGetStatPercentile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UStatlineComponent;
UClass* UStatlineComponent::GetPrivateStaticClass()
{
	using TClass = UStatlineComponent;
	if (!Z_Registration_Info_UClass_UStatlineComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("StatlineComponent"),
			Z_Registration_Info_UClass_UStatlineComponent.InnerSingleton,
			StaticRegisterNativesUStatlineComponent,
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
	return Z_Registration_Info_UClass_UStatlineComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UStatlineComponent_NoRegister()
{
	return UStatlineComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UStatlineComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/StatlineComponent.h" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StatlineComponent" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StatlineComponent" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hunger_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StatlineComponent" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thirst_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StatlineComponent" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hunger;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Thirst;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatlineComponent_GetStatPercentile, "GetStatPercentile" }, // 3809888930
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatlineComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatlineComponent_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatlineComponent, Health), Z_Construct_UScriptStruct_FCoreStat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 3464509048
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatlineComponent_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatlineComponent, Stamina), Z_Construct_UScriptStruct_FCoreStat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) }; // 3464509048
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatlineComponent_Statics::NewProp_Hunger = { "Hunger", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatlineComponent, Hunger), Z_Construct_UScriptStruct_FCoreStat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hunger_MetaData), NewProp_Hunger_MetaData) }; // 3464509048
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatlineComponent_Statics::NewProp_Thirst = { "Thirst", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatlineComponent, Thirst), Z_Construct_UScriptStruct_FCoreStat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thirst_MetaData), NewProp_Thirst_MetaData) }; // 3464509048
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatlineComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatlineComponent_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatlineComponent_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatlineComponent_Statics::NewProp_Hunger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatlineComponent_Statics::NewProp_Thirst,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatlineComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStatlineComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TheFall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatlineComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatlineComponent_Statics::ClassParams = {
	&UStatlineComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStatlineComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStatlineComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatlineComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatlineComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatlineComponent()
{
	if (!Z_Registration_Info_UClass_UStatlineComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatlineComponent.OuterSingleton, Z_Construct_UClass_UStatlineComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatlineComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatlineComponent);
UStatlineComponent::~UStatlineComponent() {}
// ********** End Class UStatlineComponent *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Public_Components_StatlineComponent_h__Script_TheFall_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECoreStat_StaticEnum, TEXT("ECoreStat"), &Z_Registration_Info_UEnum_ECoreStat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2985996630U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCoreStat::StaticStruct, Z_Construct_UScriptStruct_FCoreStat_Statics::NewStructOps, TEXT("CoreStat"), &Z_Registration_Info_UScriptStruct_FCoreStat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoreStat), 3464509048U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatlineComponent, UStatlineComponent::StaticClass, TEXT("UStatlineComponent"), &Z_Registration_Info_UClass_UStatlineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatlineComponent), 1504901733U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Public_Components_StatlineComponent_h__Script_TheFall_585597626(TEXT("/Script/TheFall"),
	Z_CompiledInDeferFile_FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Public_Components_StatlineComponent_h__Script_TheFall_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Public_Components_StatlineComponent_h__Script_TheFall_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Public_Components_StatlineComponent_h__Script_TheFall_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Public_Components_StatlineComponent_h__Script_TheFall_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Public_Components_StatlineComponent_h__Script_TheFall_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Admin_Documents_Unreal_Projects_TheFall_Source_TheFall_Public_Components_StatlineComponent_h__Script_TheFall_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
