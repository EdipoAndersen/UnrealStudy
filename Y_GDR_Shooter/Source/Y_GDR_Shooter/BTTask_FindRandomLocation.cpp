#include "BTTask_FindRandomLocation.h"
#include "NavigationSystem.h"
#include "NPC_AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_FindRandomLocation::UBTTask_FindRandomLocation(FObjectInitializer const& ObjectInitializer)
{
    NodeName = "Find Random Location in NavMesh";
}

EBTNodeResult::Type UBTTask_FindRandomLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    UE_LOG(LogTemp, Warning, TEXT("Find Random Location task started"));

    // Get AI controller and its NPC
    if (auto* const Controller = Cast<ANPC_AIController>(OwnerComp.GetAIOwner()))
    {
        UE_LOG(LogTemp, Warning, TEXT("AI Controller found: %s"), *Controller->GetName());

        if (auto* const NPC = Controller->GetPawn())
        {
            UE_LOG(LogTemp, Warning, TEXT("NPC Pawn found: %s"), *NPC->GetName());

            // Obtain NPC location to use as an origin
            auto const Origin = NPC->GetActorLocation();
            UE_LOG(LogTemp, Warning, TEXT("Origin Location: %s"), *Origin.ToString());

            // Get the navigation system and generate a random location
            if (auto* const NavSys = UNavigationSystemV1::GetCurrent(GetWorld()))
            {
                FNavLocation Loc;
                if (NavSys->GetRandomPointInNavigableRadius(Origin, SearchRadius, Loc))
                {
                    UE_LOG(LogTemp, Warning, TEXT("Generated Random Location: %s"), *Loc.Location.ToString());

                    // Set the random location in the Blackboard
                    OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), Loc.Location);

                    // Task succeeded
                    FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
                    return EBTNodeResult::Succeeded;
                }
                else
                {
                    UE_LOG(LogTemp, Error, TEXT("Failed to generate random location in navigable radius"));
                }
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("Navigation System is null"));
            }
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to get NPC Pawn"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to get AI Controller"));
    }

    UE_LOG(LogTemp, Warning, TEXT("Find Random Location task failed"));
    return EBTNodeResult::Failed;
}
