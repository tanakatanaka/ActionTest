// Copyright Epic Games, Inc. All Rights Reserved.

#include "ActionTwoGameMode.h"
#include "ActionTwoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AActionTwoGameMode::AActionTwoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
