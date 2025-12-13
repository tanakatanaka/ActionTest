// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionTwo/ActionTwoGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionTwoGameMode() {}
// Cross Module References
	ACTIONTWO_API UClass* Z_Construct_UClass_AActionTwoGameMode();
	ACTIONTWO_API UClass* Z_Construct_UClass_AActionTwoGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ActionTwo();
// End Cross Module References
	void AActionTwoGameMode::StaticRegisterNativesAActionTwoGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActionTwoGameMode);
	UClass* Z_Construct_UClass_AActionTwoGameMode_NoRegister()
	{
		return AActionTwoGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AActionTwoGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActionTwoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionTwo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActionTwoGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActionTwoGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ActionTwoGameMode.h" },
		{ "ModuleRelativePath", "ActionTwoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActionTwoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActionTwoGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AActionTwoGameMode_Statics::ClassParams = {
		&AActionTwoGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AActionTwoGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AActionTwoGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AActionTwoGameMode()
	{
		if (!Z_Registration_Info_UClass_AActionTwoGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActionTwoGameMode.OuterSingleton, Z_Construct_UClass_AActionTwoGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AActionTwoGameMode.OuterSingleton;
	}
	template<> ACTIONTWO_API UClass* StaticClass<AActionTwoGameMode>()
	{
		return AActionTwoGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActionTwoGameMode);
	AActionTwoGameMode::~AActionTwoGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_aiueo_Project_Project_ActionTest_ActionTwo_Source_ActionTwo_ActionTwoGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_aiueo_Project_Project_ActionTest_ActionTwo_Source_ActionTwo_ActionTwoGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AActionTwoGameMode, AActionTwoGameMode::StaticClass, TEXT("AActionTwoGameMode"), &Z_Registration_Info_UClass_AActionTwoGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActionTwoGameMode), 3537194986U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_aiueo_Project_Project_ActionTest_ActionTwo_Source_ActionTwo_ActionTwoGameMode_h_3587906464(TEXT("/Script/ActionTwo"),
		Z_CompiledInDeferFile_FID_Users_aiueo_Project_Project_ActionTest_ActionTwo_Source_ActionTwo_ActionTwoGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_aiueo_Project_Project_ActionTest_ActionTwo_Source_ActionTwo_ActionTwoGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
