// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TaskHUD.generated.h"

class UTexture2D;

UCLASS()
class ATaskHUD : public AHUD
{
	GENERATED_BODY()

private:

	UPROPERTY()
	UTexture2D* CrosshairTex = nullptr;

protected:

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	TSoftObjectPtr<UTexture2D> CrosshairTexture;


public:
	ATaskHUD();

	virtual void BeginPlay() override;

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;
};

