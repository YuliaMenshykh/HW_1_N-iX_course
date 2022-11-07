// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstHWGameMode.h"
#include "FirstHWCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirstHWGameMode::AFirstHWGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
