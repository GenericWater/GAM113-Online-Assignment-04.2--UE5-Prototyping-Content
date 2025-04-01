// Copyright Epic Games, Inc. All Rights Reserved.

#include "GAM1134_2PrototypingWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UGAM1134_2PrototypingWheelRear::UGAM1134_2PrototypingWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}