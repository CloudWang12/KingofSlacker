// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/CharacterTemplate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharacterTemplate() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
KINGOFSLACKER_API UClass* Z_Construct_UClass_ACharacterTemplate();
KINGOFSLACKER_API UClass* Z_Construct_UClass_ACharacterTemplate_NoRegister();
UPackage* Z_Construct_UPackage__Script_KingofSlacker();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACharacterTemplate *******************************************************
void ACharacterTemplate::StaticRegisterNativesACharacterTemplate()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACharacterTemplate;
UClass* ACharacterTemplate::GetPrivateStaticClass()
{
	using TClass = ACharacterTemplate;
	if (!Z_Registration_Info_UClass_ACharacterTemplate.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CharacterTemplate"),
			Z_Registration_Info_UClass_ACharacterTemplate.InnerSingleton,
			StaticRegisterNativesACharacterTemplate,
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
	return Z_Registration_Info_UClass_ACharacterTemplate.InnerSingleton;
}
UClass* Z_Construct_UClass_ACharacterTemplate_NoRegister()
{
	return ACharacterTemplate::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACharacterTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/CharacterTemplate.h" },
		{ "ModuleRelativePath", "Public/Character/CharacterTemplate.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACharacterTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_KingofSlacker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterTemplate_Statics::ClassParams = {
	&ACharacterTemplate::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_ACharacterTemplate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACharacterTemplate()
{
	if (!Z_Registration_Info_UClass_ACharacterTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterTemplate.OuterSingleton, Z_Construct_UClass_ACharacterTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACharacterTemplate.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterTemplate);
ACharacterTemplate::~ACharacterTemplate() {}
// ********** End Class ACharacterTemplate *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterTemplate_h__Script_KingofSlacker_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterTemplate, ACharacterTemplate::StaticClass, TEXT("ACharacterTemplate"), &Z_Registration_Info_UClass_ACharacterTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterTemplate), 2545031528U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterTemplate_h__Script_KingofSlacker_3076223624(TEXT("/Script/KingofSlacker"),
	Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterTemplate_h__Script_KingofSlacker_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterTemplate_h__Script_KingofSlacker_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
