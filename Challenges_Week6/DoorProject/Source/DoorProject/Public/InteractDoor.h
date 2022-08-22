// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "InteractDoor.generated.h"

class UDoorInteractionActorComponent;
UCLASS()
class DOORPROJECT_API AInteractDoor : public AStaticMeshActor
{
	GENERATED_BODY()
public:
	AInteractDoor();
protected:
	UPROPERTY(EditAnywhere, NoClear)
		UDoorInteractionActorComponent* DoorInteractComponent;
};
