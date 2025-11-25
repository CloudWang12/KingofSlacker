// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gameplay/KS_HUD.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKS_HUD() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AHUD();
KINGOFSLACKER_API UClass* Z_Construct_UClass_AKS_HUD();
KINGOFSLACKER_API UClass* Z_Construct_UClass_AKS_HUD_NoRegister();
UPackage* Z_Construct_UPackage__Script_KingofSlacker();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AKS_HUD ******************************************************************
void AKS_HUD::StaticRegisterNativesAKS_HUD()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AKS_HUD;
UClass* AKS_HUD::GetPrivateStaticClass()
{
	using TClass = AKS_HUD;
	if (!Z_Registration_Info_UClass_AKS_HUD.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KS_HUD"),
			Z_Registration_Info_UClass_AKS_HUD.InnerSingleton,
			StaticRegisterNativesAKS_HUD,
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
	return Z_Registration_Info_UClass_AKS_HUD.InnerSingleton;
}
UClass* Z_Construct_UClass_AKS_HUD_NoRegister()
{
	return AKS_HUD::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AKS_HUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Gameplay/KS_HUD.h" },
		{ "ModuleRelativePath", "Public/Gameplay/KS_HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKS_HUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AKS_HUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_KingofSlacker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKS_HUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKS_HUD_Statics::ClassParams = {
	&AKS_HUD::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKS_HUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AKS_HUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKS_HUD()
{
	if (!Z_Registration_Info_UClass_AKS_HUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKS_HUD.OuterSingleton, Z_Construct_UClass_AKS_HUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKS_HUD.OuterSingleton;
}
AKS_HUD::AKS_HUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKS_HUD);
AKS_HUD::~AKS_HUD() {}
// ********** End Class AKS_HUD ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_HUD_h__Script_KingofSlacker_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKS_HUD, AKS_HUD::StaticClass, TEXT("AKS_HUD"), &Z_Registration_Info_UClass_AKS_HUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKS_HUD), 3888929438U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_HUD_h__Script_KingofSlacker_4180233101(TEXT("/Script/KingofSlacker"),
	Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_HUD_h__Script_KingofSlacker_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_HUD_h__Script_KingofSlacker_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
