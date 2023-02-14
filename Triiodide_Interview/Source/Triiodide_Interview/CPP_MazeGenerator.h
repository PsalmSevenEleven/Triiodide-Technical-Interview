// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/HierarchicalInstancedStaticMeshComponent.h"

#include "CPP_EnvironmentLight.h"

#include "CPP_MazeGenerator.generated.h"

UCLASS()
class TRIIODIDE_INTERVIEW_API ACPP_MazeGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP_MazeGenerator();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int MazeWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int MazeHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float ClaustrophobiaScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float DarknessScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float FlickerScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int> Maze;

	//These are written to indicate places as opposed to values, 
	//letting me have 01111 represent an unvisited cell with all four directions as valid neighbors,
	//10001 represent a visited cell with only the north cell as a valid neighbor, etc.
	enum
	{
		PATH_NORTH = 0x01,
		PATH_SOUTH = 0x02,
		PATH_EAST = 0x04,
		PATH_WEST = 0x08,
		VISITED = 0x10,
	};

	//The stack of cells used in the generation algorithm
	TArray<FVector2D> Stack;

	//Number of "visited" cells for exiting the while loop
	int VisitedCells;

	//actual distance between cells, should be set based on floor tile size
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float GridSize;

	//It's the height... of the ceiling. Should be set based on the height of wall models
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CeilingHeight;


	//The actual mesh references to be used when building the maze
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMesh* MazeFloorMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMesh* MazeWallMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMesh* MazeCeilingMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<ACPP_EnvironmentLight> LightClass;

	//The Heirarchical Instanced Static Mesh component that handles the meshes in the world
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UHierarchicalInstancedStaticMeshComponent* MazeFloors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UHierarchicalInstancedStaticMeshComponent* MazeCeilings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UHierarchicalInstancedStaticMeshComponent* MazeWalls;

	
	//The seed used in the maze generation
	UPROPERTY(ReplicatedUsing = OnRep_Seed)
		int Seed;

	//Random stream which seeded by Seed, 
	//actually referenced in determining random directions to move during maze generator algorithm
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FRandomStream Stream;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	bool InitMaze();

	bool GenerateMaze();

	bool BuildMeshes();

	UFUNCTION()
	void OnRep_Seed();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
