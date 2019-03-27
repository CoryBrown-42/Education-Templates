// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BFL.generated.h"

/**
 * 
 */
UCLASS()
class MARSHALLTEMPLATES_API UBFL : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	//Property
		//UPROPERTY(EditAnywhere, VisibleAnywhere)
		//UStaticMeshComponent* Mesh;
		//
		//UPROPERTY(EditAnywhere, VisibleAnywhere)
		//class UMaterial* Material;



	//Functions
		UFUNCTION(BlueprintCallable, Category = "BFL")
		static FString Test();

		UFUNCTION(BlueprintCallable, Category = "BFL")
		static float AddPickup(float CurrentVal, float PickUpValue);

		//UFUNCTION(BlueprintCallable, Category = "BFL")
		//static void ChangeMaterial(UStaticMeshComponent* Mesh, int32 Index, UMaterialInterface* Material);

	
	
	
	
};


