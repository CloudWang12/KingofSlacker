// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gameplay/KS_PlayerState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKS_PlayerState() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
KINGOFSLACKER_API UClass* Z_Construct_UClass_AKS_PlayerState();
KINGOFSLACKER_API UClass* Z_Construct_UClass_AKS_PlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_KingofSlacker();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AKS_PlayerState **********************************************************
void AKS_PlayerState::StaticRegisterNativesAKS_PlayerState()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AKS_PlayerState;
UClass* AKS_PlayerState::GetPrivateStaticClass()
{
	using TClass = AKS_PlayerState;
	if (!Z_Registration_Info_UClass_AKS_PlayerState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KS_PlayerState"),
			Z_Registration_Info_UClass_AKS_PlayerState.InnerSingleton,
			StaticRegisterNativesAKS_PlayerState,
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
	return Z_Registration_Info_UClass_AKS_PlayerState.InnerSingleton;
}
UClass* Z_Construct_UClass_AKS_PlayerState_NoRegister()
{
	return AKS_PlayerState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AKS_PlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Gameplay/KS_PlayerState.h" },
		{ "ModuleRelativePath", "Public/Gameplay/KS_PlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Money_MetaData[] = {
		{ "Category", "Attributes | Global" },
		{ "ModuleRelativePath", "Public/Gameplay/KS_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Income_MetaData[] = {
		{ "Category", "Attributes | Global" },
		{ "ModuleRelativePath", "Public/Gameplay/KS_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OKR_MetaData[] = {
		{ "Category", "Attributes | Global" },
		{ "ModuleRelativePath", "Public/Gameplay/KS_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Expenditure_MetaData[] = {
		{ "Category", "Attributes | Global" },
		{ "ModuleRelativePath", "Public/Gameplay/KS_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_selfStrive_MetaData[] = {
		{ "Category", "Attributes | Global" },
		{ "ModuleRelativePath", "Public/Gameplay/KS_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_groupStrive_MetaData[] = {
		{ "Category", "Attributes | Global" },
		{ "ModuleRelativePath", "Public/Gameplay/KS_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_selfInfect_MetaData[] = {
		{ "Category", "Attributes | Global" },
		{ "ModuleRelativePath", "Public/Gameplay/KS_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_groupInfect_MetaData[] = {
		{ "Category", "Attributes | Global" },
		{ "ModuleRelativePath", "Public/Gameplay/KS_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Energy_Cap_MetaData[] = {
		{ "Category", "Attributes | Player" },
		{ "ModuleRelativePath", "Public/Gameplay/KS_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Personal_Struggle_MetaData[] = {
		{ "Category", "Attributes | Player" },
		{ "ModuleRelativePath", "Public/Gameplay/KS_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fish_Energy_MetaData[] = {
		{ "Category", "Attributes | Player" },
		{ "ModuleRelativePath", "Public/Gameplay/KS_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Work_Efficiency_MetaData[] = {
		{ "Category", "Attributes | Player" },
		{ "ModuleRelativePath", "Public/Gameplay/KS_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stealth_Skill_MetaData[] = {
		{ "Category", "Attributes | Player" },
		{ "ModuleRelativePath", "Public/Gameplay/KS_PlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Money;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Income;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OKR;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Expenditure;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_selfStrive;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_groupStrive;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_selfInfect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_groupInfect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Energy_Cap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Personal_Struggle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Fish_Energy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Work_Efficiency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stealth_Skill;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKS_PlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AKS_PlayerState_Statics::NewProp_Money = { "Money", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKS_PlayerState, Money), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Money_MetaData), NewProp_Money_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AKS_PlayerState_Statics::NewProp_Income = { "Income", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKS_PlayerState, Income), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Income_MetaData), NewProp_Income_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKS_PlayerState_Statics::NewProp_OKR = { "OKR", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKS_PlayerState, OKR), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OKR_MetaData), NewProp_OKR_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AKS_PlayerState_Statics::NewProp_Expenditure = { "Expenditure", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKS_PlayerState, Expenditure), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Expenditure_MetaData), NewProp_Expenditure_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKS_PlayerState_Statics::NewProp_selfStrive = { "selfStrive", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKS_PlayerState, selfStrive), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_selfStrive_MetaData), NewProp_selfStrive_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKS_PlayerState_Statics::NewProp_groupStrive = { "groupStrive", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKS_PlayerState, groupStrive), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_groupStrive_MetaData), NewProp_groupStrive_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKS_PlayerState_Statics::NewProp_selfInfect = { "selfInfect", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKS_PlayerState, selfInfect), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_selfInfect_MetaData), NewProp_selfInfect_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKS_PlayerState_Statics::NewProp_groupInfect = { "groupInfect", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKS_PlayerState, groupInfect), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_groupInfect_MetaData), NewProp_groupInfect_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKS_PlayerState_Statics::NewProp_Energy_Cap = { "Energy_Cap", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKS_PlayerState, Energy_Cap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Energy_Cap_MetaData), NewProp_Energy_Cap_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKS_PlayerState_Statics::NewProp_Personal_Struggle = { "Personal_Struggle", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKS_PlayerState, Personal_Struggle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Personal_Struggle_MetaData), NewProp_Personal_Struggle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKS_PlayerState_Statics::NewProp_Fish_Energy = { "Fish_Energy", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKS_PlayerState, Fish_Energy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fish_Energy_MetaData), NewProp_Fish_Energy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKS_PlayerState_Statics::NewProp_Work_Efficiency = { "Work_Efficiency", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKS_PlayerState, Work_Efficiency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Work_Efficiency_MetaData), NewProp_Work_Efficiency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKS_PlayerState_Statics::NewProp_Stealth_Skill = { "Stealth_Skill", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKS_PlayerState, Stealth_Skill), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stealth_Skill_MetaData), NewProp_Stealth_Skill_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKS_PlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKS_PlayerState_Statics::NewProp_Money,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKS_PlayerState_Statics::NewProp_Income,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKS_PlayerState_Statics::NewProp_OKR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKS_PlayerState_Statics::NewProp_Expenditure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKS_PlayerState_Statics::NewProp_selfStrive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKS_PlayerState_Statics::NewProp_groupStrive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKS_PlayerState_Statics::NewProp_selfInfect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKS_PlayerState_Statics::NewProp_groupInfect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKS_PlayerState_Statics::NewProp_Energy_Cap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKS_PlayerState_Statics::NewProp_Personal_Struggle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKS_PlayerState_Statics::NewProp_Fish_Energy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKS_PlayerState_Statics::NewProp_Work_Efficiency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKS_PlayerState_Statics::NewProp_Stealth_Skill,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKS_PlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AKS_PlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_KingofSlacker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKS_PlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKS_PlayerState_Statics::ClassParams = {
	&AKS_PlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AKS_PlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AKS_PlayerState_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKS_PlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AKS_PlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKS_PlayerState()
{
	if (!Z_Registration_Info_UClass_AKS_PlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKS_PlayerState.OuterSingleton, Z_Construct_UClass_AKS_PlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKS_PlayerState.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKS_PlayerState);
AKS_PlayerState::~AKS_PlayerState() {}
// ********** End Class AKS_PlayerState ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_PlayerState_h__Script_KingofSlacker_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKS_PlayerState, AKS_PlayerState::StaticClass, TEXT("AKS_PlayerState"), &Z_Registration_Info_UClass_AKS_PlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKS_PlayerState), 3993899332U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_PlayerState_h__Script_KingofSlacker_1934144349(TEXT("/Script/KingofSlacker"),
	Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_PlayerState_h__Script_KingofSlacker_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_PlayerState_h__Script_KingofSlacker_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
