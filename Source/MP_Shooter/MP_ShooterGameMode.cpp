// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "MP_ShooterGameMode.h"
#include "MP_ShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMP_ShooterGameMode::AMP_ShooterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
