// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dialogue/DialogueDefinition.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDialogueDefinition() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
KINGOFSLACKER_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueStruct();
UPackage* Z_Construct_UPackage__Script_KingofSlacker();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FDialogueStruct ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDialogueStruct;
class UScriptStruct* FDialogueStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDialogueStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDialogueStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueStruct, (UObject*)Z_Construct_UPackage__Script_KingofSlacker(), TEXT("DialogueStruct"));
	}
	return Z_Registration_Info_UScriptStruct_FDialogueStruct.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDialogueStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Dialogue/DialogueDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueSpeaker_MetaData[] = {
		{ "Category", "DialogueDefinition" },
		{ "ModuleRelativePath", "Public/Dialogue/DialogueDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueContext_MetaData[] = {
		{ "Category", "DialogueDefinition" },
		{ "ModuleRelativePath", "Public/Dialogue/DialogueDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerAvatar_MetaData[] = {
		{ "Category", "DialogueDefinition" },
		{ "ModuleRelativePath", "Public/Dialogue/DialogueDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DialogueSpeaker;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DialogueContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeakerAvatar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDialogueStruct_Statics::NewProp_DialogueSpeaker = { "DialogueSpeaker", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueStruct, DialogueSpeaker), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueSpeaker_MetaData), NewProp_DialogueSpeaker_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDialogueStruct_Statics::NewProp_DialogueContext = { "DialogueContext", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueStruct, DialogueContext), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueContext_MetaData), NewProp_DialogueContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueStruct_Statics::NewProp_SpeakerAvatar = { "SpeakerAvatar", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueStruct, SpeakerAvatar), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerAvatar_MetaData), NewProp_SpeakerAvatar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueStruct_Statics::NewProp_DialogueSpeaker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueStruct_Statics::NewProp_DialogueContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueStruct_Statics::NewProp_SpeakerAvatar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KingofSlacker,
	nullptr,
	&NewStructOps,
	"DialogueStruct",
	Z_Construct_UScriptStruct_FDialogueStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueStruct_Statics::PropPointers),
	sizeof(FDialogueStruct),
	alignof(FDialogueStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogueStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDialogueStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDialogueStruct.InnerSingleton, Z_Construct_UScriptStruct_FDialogueStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDialogueStruct.InnerSingleton;
}
// ********** End ScriptStruct FDialogueStruct *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Dialogue_DialogueDefinition_h__Script_KingofSlacker_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDialogueStruct::StaticStruct, Z_Construct_UScriptStruct_FDialogueStruct_Statics::NewStructOps, TEXT("DialogueStruct"), &Z_Registration_Info_UScriptStruct_FDialogueStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueStruct), 2200901601U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Dialogue_DialogueDefinition_h__Script_KingofSlacker_2567768103(TEXT("/Script/KingofSlacker"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Dialogue_DialogueDefinition_h__Script_KingofSlacker_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Dialogue_DialogueDefinition_h__Script_KingofSlacker_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
