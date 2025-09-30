// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolsProject/ToolsProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolsProjectGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TOOLSPROJECT_API UClass* Z_Construct_UClass_AToolsProjectGameMode();
TOOLSPROJECT_API UClass* Z_Construct_UClass_AToolsProjectGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToolsProject();
// End Cross Module References

// Begin Class AToolsProjectGameMode
void AToolsProjectGameMode::StaticRegisterNativesAToolsProjectGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AToolsProjectGameMode);
UClass* Z_Construct_UClass_AToolsProjectGameMode_NoRegister()
{
	return AToolsProjectGameMode::StaticClass();
}
struct Z_Construct_UClass_AToolsProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ToolsProjectGameMode.h" },
		{ "ModuleRelativePath", "ToolsProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AToolsProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AToolsProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolsProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AToolsProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AToolsProjectGameMode_Statics::ClassParams = {
	&AToolsProjectGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AToolsProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AToolsProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AToolsProjectGameMode()
{
	if (!Z_Registration_Info_UClass_AToolsProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AToolsProjectGameMode.OuterSingleton, Z_Construct_UClass_AToolsProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AToolsProjectGameMode.OuterSingleton;
}
template<> TOOLSPROJECT_API UClass* StaticClass<AToolsProjectGameMode>()
{
	return AToolsProjectGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AToolsProjectGameMode);
AToolsProjectGameMode::~AToolsProjectGameMode() {}
// End Class AToolsProjectGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_ToolsProject_Source_ToolsProject_ToolsProjectGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AToolsProjectGameMode, AToolsProjectGameMode::StaticClass, TEXT("AToolsProjectGameMode"), &Z_Registration_Info_UClass_AToolsProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AToolsProjectGameMode), 1929425182U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ToolsProject_Source_ToolsProject_ToolsProjectGameMode_h_2851447041(TEXT("/Script/ToolsProject"),
	Z_CompiledInDeferFile_FID_ToolsProject_Source_ToolsProject_ToolsProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ToolsProject_Source_ToolsProject_ToolsProjectGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
