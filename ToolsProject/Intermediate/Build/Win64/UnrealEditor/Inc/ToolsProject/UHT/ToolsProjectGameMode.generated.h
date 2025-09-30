// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolsProjectGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOOLSPROJECT_ToolsProjectGameMode_generated_h
#error "ToolsProjectGameMode.generated.h already included, missing '#pragma once' in ToolsProjectGameMode.h"
#endif
#define TOOLSPROJECT_ToolsProjectGameMode_generated_h

#define FID_ToolsProject_Source_ToolsProject_ToolsProjectGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAToolsProjectGameMode(); \
	friend struct Z_Construct_UClass_AToolsProjectGameMode_Statics; \
public: \
	DECLARE_CLASS(AToolsProjectGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToolsProject"), TOOLSPROJECT_API) \
	DECLARE_SERIALIZER(AToolsProjectGameMode)


#define FID_ToolsProject_Source_ToolsProject_ToolsProjectGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AToolsProjectGameMode(AToolsProjectGameMode&&); \
	AToolsProjectGameMode(const AToolsProjectGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TOOLSPROJECT_API, AToolsProjectGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AToolsProjectGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AToolsProjectGameMode) \
	TOOLSPROJECT_API virtual ~AToolsProjectGameMode();


#define FID_ToolsProject_Source_ToolsProject_ToolsProjectGameMode_h_9_PROLOG
#define FID_ToolsProject_Source_ToolsProject_ToolsProjectGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ToolsProject_Source_ToolsProject_ToolsProjectGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_ToolsProject_Source_ToolsProject_ToolsProjectGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOOLSPROJECT_API UClass* StaticClass<class AToolsProjectGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ToolsProject_Source_ToolsProject_ToolsProjectGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
