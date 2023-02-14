// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/PointLightComponent.h"
#include "Components/TimelineComponent.h"
#include "CPP_EnvironmentLight.generated.h"

UCLASS()
class TRIIODIDE_INTERVIEW_API ACPP_EnvironmentLight : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP_EnvironmentLight();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UPointLightComponent* Light;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float LightIntensity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float FlickerCheckTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float FlickerMinMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float FlickerChance;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void FlickerCheck();

	UFUNCTION(BlueprintImplementableEvent)
	void Flicker();

	UFUNCTION(BlueprintCallable)
		void StartFlickerCheckTimer();

};
