// Copyright Epic Games, Inc. All Rights Reserved.

#include "MidnightBeyondGameMode.h"
#include "MidnightBeyondCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMidnightBeyondGameMode::AMidnightBeyondGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
