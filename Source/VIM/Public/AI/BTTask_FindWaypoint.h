// copyright The Perfect Game Company 2016

#pragma once

#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_FindWaypoint.generated.h"

/**
 * 
 */
UCLASS()
class VIM_API UBTTask_FindWaypoint : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
		virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
	
};
