#include "Character/AuraEnemy.h"
#include "AbuilitySystem/AuraAbilitysystemComponent.h"
#include "Aura/Aura.h" //included part of the interface that highlights

AAuraEnemy::AAuraEneny()

{
  AbilitySystemComponent = CreateDefaultSubObject<UAuraAbilitySystemComponent>("AbilitySystemComponent");
  AbilitySYstemComponent->SetIsReplicated(true); //this is for when you want it on the server for multiplayer
  AttributeSet = CreateDefaultSubobject<UAuraAttributeSet>("AttributeSet");
  
  
    


  
}
