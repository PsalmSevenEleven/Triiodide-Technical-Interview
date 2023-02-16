// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SkeletalMeshComponent.h"
#include "CPP_ExitKey.h"
#include "CPP_ExitHatch.generated.h"

UCLASS()
class TRIIODIDE_INTERVIEW_API ACPP_ExitHatch : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP_ExitHatch();

	UPROPERTY(EditAnywhere)
		USkeletalMeshComponent* SkeletalMesh;

	UPROPERTY(EditAnywhere)
		TSubclassOf<ACPP_ExitKey> ExitKeyClass;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void CreateKeys(class ACPP_MazeGenerator* ParentGenerator);

	UFUNCTION(BlueprintImplementableEvent)
		void Unlock();

};
