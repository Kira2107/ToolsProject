// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolsProject_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ToolsProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ToolsProject()
	{
		if (!Z_Registration_Info_UPackage__Script_ToolsProject.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ToolsProject",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x6DEB7339,
				0xCAB15C01,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ToolsProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ToolsProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ToolsProject(Z_Construct_UPackage__Script_ToolsProject, TEXT("/Script/ToolsProject"), Z_Registration_Info_UPackage__Script_ToolsProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6DEB7339, 0xCAB15C01));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
