// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gameplay/KS_GameModeBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKS_GameModeBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
KINGOFSLACKER_API UClass* Z_Construct_UClass_AKS_GameModeBase();
KINGOFSLACKER_API UClass* Z_Construct_UClass_AKS_GameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_KingofSlacker();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AKS_GameModeBase *********************************************************
void AKS_GameModeBase::StaticRegisterNativesAKS_GameModeBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AKS_GameModeBase;
UClass* AKS_GameModeBase::GetPrivateStaticClass()
{
	using TClass = AKS_GameModeBase;
	if (!Z_Registration_Info_UClass_AKS_GameModeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KS_GameModeBase"),
			Z_Registration_Info_UClass_AKS_GameModeBase.InnerSingleton,
			StaticRegisterNativesAKS_GameModeBase,
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
	return Z_Registration_Info_UClass_AKS_GameModeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AKS_GameModeBase_NoRegister()
{
	return AKS_GameModeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AKS_GameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Gameplay/KS_GameModeBase.h" },
		{ "ModuleRelativePath", "Public/Gameplay/KS_GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKS_GameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AKS_GameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_KingofSlacker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKS_GameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKS_GameModeBase_Statics::ClassParams = {
	&AKS_GameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKS_GameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AKS_GameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKS_GameModeBase()
{
	if (!Z_Registration_Info_UClass_AKS_GameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKS_GameModeBase.OuterSingleton, Z_Construct_UClass_AKS_GameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKS_GameModeBase.OuterSingleton;
}
AKS_GameModeBase::AKS_GameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKS_GameModeBase);
AKS_GameModeBase::~AKS_GameModeBase() {}
// ********** End Class AKS_GameModeBase ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_GameModeBase_h__Script_KingofSlacker_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKS_GameModeBase, AKS_GameModeBase::StaticClass, TEXT("AKS_GameModeBase"), &Z_Registration_Info_UClass_AKS_GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKS_GameModeBase), 394240761U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_GameModeBase_h__Script_KingofSlacker_1768160596(TEXT("/Script/KingofSlacker"),
	Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_GameModeBase_h__Script_KingofSlacker_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_GameModeBase_h__Script_KingofSlacker_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
