// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "BomberManPrototypeGameMode.h"
#include "BomberManPrototypePawn.h"

ABomberManPrototypeGameMode::ABomberManPrototypeGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ABomberManPrototypePawn::StaticClass();
}

