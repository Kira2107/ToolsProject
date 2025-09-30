// Copyright Epic Games, Inc. All Rights Reserved.

#include "ToolsProjectGameMode.h"
#include "ToolsProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AToolsProjectGameMode::AToolsProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
