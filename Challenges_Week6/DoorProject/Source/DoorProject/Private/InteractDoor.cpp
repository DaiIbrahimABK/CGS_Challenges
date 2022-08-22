// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractDoor.h"
#include "DoorInteractionActorComponent.h"

AInteractDoor::AInteractDoor()
{
	DoorInteractComponent = CreateDefaultSubobject<UDoorInteractionActorComponent>(TEXT("DoorInteractComponent"));
}

