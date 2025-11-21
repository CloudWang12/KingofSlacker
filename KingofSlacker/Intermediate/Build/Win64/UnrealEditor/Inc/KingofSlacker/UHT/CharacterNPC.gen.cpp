// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/CharacterNPC.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharacterNPC() {}

// ********** Begin Cross Module References ********************************************************
KINGOFSLACKER_API UClass* Z_Construct_UClass_ACharacterNPC();
KINGOFSLACKER_API UClass* Z_Construct_UClass_ACharacterNPC_NoRegister();
KINGOFSLACKER_API UClass* Z_Construct_UClass_ACharacterTemplate();
UPackage* Z_Construct_UPackage__Script_KingofSlacker();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACharacterNPC ************************************************************
void ACharacterNPC::StaticRegisterNativesACharacterNPC()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACharacterNPC;
UClass* ACharacterNPC::GetPrivateStaticClass()
{
	using TClass = ACharacterNPC;
	if (!Z_Registration_Info_UClass_ACharacterNPC.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CharacterNPC"),
			Z_Registration_Info_UClass_ACharacterNPC.InnerSingleton,
			StaticRegisterNativesACharacterNPC,
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
	return Z_Registration_Info_UClass_ACharacterNPC.InnerSingleton;
}
UClass* Z_Construct_UClass_ACharacterNPC_NoRegister()
{
	return ACharacterNPC::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACharacterNPC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/CharacterNPC.h" },
		{ "ModuleRelativePath", "Public/Character/CharacterNPC.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterNPC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACharacterNPC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacterTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_KingofSlacker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterNPC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterNPC_Statics::ClassParams = {
	&ACharacterNPC::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterNPC_Statics::Class_MetaDataParams), Z_Construct_UClass_ACharacterNPC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACharacterNPC()
{
	if (!Z_Registration_Info_UClass_ACharacterNPC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterNPC.OuterSingleton, Z_Construct_UClass_ACharacterNPC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACharacterNPC.OuterSingleton;
}
ACharacterNPC::ACharacterNPC() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterNPC);
ACharacterNPC::~ACharacterNPC() {}
// ********** End Class ACharacterNPC **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterNPC_h__Script_KingofSlacker_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterNPC, ACharacterNPC::StaticClass, TEXT("ACharacterNPC"), &Z_Registration_Info_UClass_ACharacterNPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterNPC), 1925796507U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterNPC_h__Script_KingofSlacker_278314572(TEXT("/Script/KingofSlacker"),
	Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterNPC_h__Script_KingofSlacker_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterNPC_h__Script_KingofSlacker_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
