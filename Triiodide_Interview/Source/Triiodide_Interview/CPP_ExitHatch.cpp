// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_ExitHatch.h"

// Sets default values
ACPP_ExitHatch::ACPP_ExitHatch()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>("Skeletal Mesh");
	SkeletalMesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ACPP_ExitHatch::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_ExitHatch::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACPP_ExitHatch::CreateKeys(class ACPP_MazeGenerator* ParentGenerator)
{

}

