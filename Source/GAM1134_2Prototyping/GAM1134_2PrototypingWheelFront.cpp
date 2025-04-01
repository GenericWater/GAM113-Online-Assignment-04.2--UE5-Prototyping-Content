// Copyright Epic Games, Inc. All Rights Reserved.

#include "GAM1134_2PrototypingWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UGAM1134_2PrototypingWheelFront::UGAM1134_2PrototypingWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}