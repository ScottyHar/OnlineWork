
AAuraPlayerState::AAuraPlayerState()
{
AbilitySystemComponent = CreateDefaultSubObject<UAuraAbilitySystemComponent>("AbilitySystemComponent");
  AbilitySYstemComponent->SetIsReplicated(true); //this is for when you want it on the server for multiplayer
  AttributeSet = CreateDefaultSubobject<UAuraAttributeSet>("AttributeSet");

  NetUpdatefrequency = 100.f; //use whenchecking the server for updates
}
