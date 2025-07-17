#include "GameFramework/CHaracter.h"
#include "AuraCharacterbase.Generated.h"
class UAbilitySystemCOmponent;
class UAttributeSet;

UCLASS(Abstract)

// * constructing variables in the base character that will be in enemy
* 
  */
protected UPROPERTY()
TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

protected UPROPERTY()
TObjectPtr<UAttributeSet> AttribtueSet;

