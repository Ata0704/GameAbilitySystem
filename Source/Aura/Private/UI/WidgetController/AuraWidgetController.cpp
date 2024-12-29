


#include "UI/WidgetController/AuraWidgetController.h"

void UAuraWidgetController::SetWidgetData(const FWidgetControllerData& WidgetData)
{
	PlayerController = WidgetData.PlayerController;
	PlayerState = WidgetData.PlayerState;
	AbilitySystemComponent = WidgetData.AbilitySystemComponent;
	AttributeSet = WidgetData.AttributeSet;
}

void UAuraWidgetController::BroadcastInitialValues()
{

}
