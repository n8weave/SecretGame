#pragma once

#include "CoreMinimal.h"
#include "LevelNames.h"
#include "FLowController.generated.h"
/**
 * 
 */
UCLASS()
class SECRETGGAME_API UFLowController : public UObject
{
	GENERATED_UCLASS_BODY()
public:
	static UWorld* GetWorld();
	UFUNCTION(BlueprintCallable, Category = "FlowController")
	static void LoadLevel(ELevelNames LevelName);

	// get level name
	UFUNCTION(BlueprintCallable, Category = "FlowController")
	static FString GetLevelName(const ELevelNames LevelName)
	{
		return ::GetLevelName(LevelName);
	}

	// get levels as options for dropdown
	UFUNCTION(BlueprintCallable, Category = "FlowController")
	static TArray<FString> GetLevelNames();

};
