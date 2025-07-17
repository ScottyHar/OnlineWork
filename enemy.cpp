#include "Character/AuraEnemy.h"
#include "AbuilitySystem/AuraAbilitysystemComponent.h"
#include "Aura/Aura.h" //included part of the interface that highlights

AAuraEnemy::AAuraEneny()

{
  AbilitySystemComponent = CreateDefaultSubObject<UAuraAbilitySystemComponent>("AbilitySystemComponent");
    


  
}
