


#include "UI/HUD/AuraHUD.h"
#include "UI/Widget/AuraUserWidget.h"

void AAuraHUD::BeginPlay()
{
	Super::BeginPlay();

	// Create the overlay widget
	UUserWidget* Widget = CreateWidget<UAuraUserWidget>(GetWorld(), OverlayWidgetClass);
	if (Widget)
	{
		Widget->AddToViewport();
	}
}
