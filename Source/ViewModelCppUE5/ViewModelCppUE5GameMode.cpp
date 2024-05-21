// Copyright Epic Games, Inc. All Rights Reserved.

#include "ViewModelCppUE5GameMode.h"
#include "ViewModelCppUE5Character.h"
#include "UObject/ConstructorHelpers.h"

AViewModelCppUE5GameMode::AViewModelCppUE5GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
