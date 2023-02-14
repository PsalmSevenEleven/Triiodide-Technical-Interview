// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_EnvironmentLight.h"

#include "Kismet/KismetMathLibrary.h"

// Sets default values
ACPP_EnvironmentLight::ACPP_EnvironmentLight()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Light = CreateDefaultSubobject<UPointLightComponent>("Light");
	Light->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ACPP_EnvironmentLight::BeginPlay()
{
	Super::BeginPlay();

	StartFlickerCheckTimer();
}

// Called every frame
void ACPP_EnvironmentLight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACPP_EnvironmentLight::FlickerCheck()
{
	if (UKismetMathLibrary::RandomBoolWithWeight(FlickerChance))
	{
		Flicker();
	}
	else
	{
		StartFlickerCheckTimer();
	}
}

void ACPP_EnvironmentLight::StartFlickerCheckTimer()
{
	FTimerHandle Handle = FTimerHandle();
	GetWorld()->GetTimerManager().SetTimer(Handle, FTimerDelegate::CreateLambda([&] {FlickerCheck(); }), FlickerCheckTime, false, 1.f);
}


