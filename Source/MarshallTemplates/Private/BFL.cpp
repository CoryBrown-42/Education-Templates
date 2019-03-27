// Fill out your copyright notice in the Description page of Project Settings.

#include "BFL.h"
#include "MarshallTemplates.h"
//#include "Components/StaticMeshComponent.h"




FString UBFL::Test()
{
	return FString("Testing");
}

float UBFL::AddPickup(float CurrentVal, float PickupValue)
{
		return CurrentVal += PickupValue;

}



//void UBFL::ChangeMaterial(UStaticMeshComponent* Mesh, int32 Index, UMaterialInterface* Material)
//{
//	Mesh->SetMaterial(Index, Material);
//}






