// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "SpiritTownGameMode.h"
#include "SpiritTownCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASpiritTownGameMode::ASpiritTownGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
