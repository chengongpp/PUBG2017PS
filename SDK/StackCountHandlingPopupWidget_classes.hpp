#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StackCountHandlingPopupWidget

#include "Basic.hpp"

#include "InputHookingWidget_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "TslGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C
// 0x00C8 (0x0358 - 0x0290)
class UStackCountHandlingPopupWidget_C final : public UInputHookingWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                CancelButton;                                      // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButton*                                CloseButton;                                       // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                 Image_0;                                           // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                 Image_1;                                           // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButton*                                InputAmountButton;                                 // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UEditableText*                          InputAmountText;                                   // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                             ItemName;                                          // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButton*                                MaxButton;                                         // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButton*                                MinButton;                                         // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButton*                                OkButton;                                          // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButton*                                OuterPopup;                                        // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UItem*                                  Item;                                              // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AInventory*                             Inventory;                                         // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TScriptInterface<class ISlotContainerInterface> Container;                                         // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class ISlotInterface>        ItemSlot;                                          // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsDropping;                                       // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_321[0x7];                                      // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   AmountText;                                        // 0x0328(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   OkText;                                            // 0x0340(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_StackCountHandlingPopupWidget(int32 EntryPoint);
	void CustomEvent_4();
	void CustomEvent_3();
	void CustomEvent_2();
	void OnWidgetMoveLeft();
	void OnWidgetInputB();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void XBoxOneOk();
	void Custom_Event_0();
	void Destruct();
	void Close_Popup();
	void SubmitEvent(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__MaxButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MinButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__OuterPopup_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__InputAmountButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void CustomEvent_0(TScriptInterface<class ISlotContainerInterface> Container_0, TScriptInterface<class ISlotInterface> Slot_0, TScriptInterface<class ISlotContainerInterface> OtherContainer);
	void Construct();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetPopup(EPopupStyle PopupStyle, const class FText& Message, const TDelegate<void(EPopupButtonID ButtonID)>& PressedDelegate);
	void OnItemDropOtherContainer(class UItem* Item_0);
	int32 GetMaxCount();
	void UpdateItemName(class UWidget* BoundWidget);
	void GetInventory(class AInventory** Inventory_0);
	class FText GetMaxButtonText();
	void On_InputAmountText_Prepass(class UWidget* BoundWidget);
	void FocusOnInputAmountText();
	void OnPrepass_0(class UWidget* BoundWidget);
	void AddStackCount(int32 AddCount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StackCountHandlingPopupWidget_C">();
	}
	static class UStackCountHandlingPopupWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStackCountHandlingPopupWidget_C>();
	}
};
static_assert(alignof(UStackCountHandlingPopupWidget_C) == 0x000008, "Wrong alignment on UStackCountHandlingPopupWidget_C");
static_assert(sizeof(UStackCountHandlingPopupWidget_C) == 0x000358, "Wrong size on UStackCountHandlingPopupWidget_C");
static_assert(offsetof(UStackCountHandlingPopupWidget_C, UberGraphFrame) == 0x000290, "Member 'UStackCountHandlingPopupWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStackCountHandlingPopupWidget_C, CancelButton) == 0x000298, "Member 'UStackCountHandlingPopupWidget_C::CancelButton' has a wrong offset!");
static_assert(offsetof(UStackCountHandlingPopupWidget_C, CloseButton) == 0x0002A0, "Member 'UStackCountHandlingPopupWidget_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UStackCountHandlingPopupWidget_C, Image_0) == 0x0002A8, "Member 'UStackCountHandlingPopupWidget_C::Image_0' has a wrong offset!");
static_assert(offsetof(UStackCountHandlingPopupWidget_C, Image_1) == 0x0002B0, "Member 'UStackCountHandlingPopupWidget_C::Image_1' has a wrong offset!");
static_assert(offsetof(UStackCountHandlingPopupWidget_C, InputAmountButton) == 0x0002B8, "Member 'UStackCountHandlingPopupWidget_C::InputAmountButton' has a wrong offset!");
static_assert(offsetof(UStackCountHandlingPopupWidget_C, InputAmountText) == 0x0002C0, "Member 'UStackCountHandlingPopupWidget_C::InputAmountText' has a wrong offset!");
static_assert(offsetof(UStackCountHandlingPopupWidget_C, ItemName) == 0x0002C8, "Member 'UStackCountHandlingPopupWidget_C::ItemName' has a wrong offset!");
static_assert(offsetof(UStackCountHandlingPopupWidget_C, MaxButton) == 0x0002D0, "Member 'UStackCountHandlingPopupWidget_C::MaxButton' has a wrong offset!");
static_assert(offsetof(UStackCountHandlingPopupWidget_C, MinButton) == 0x0002D8, "Member 'UStackCountHandlingPopupWidget_C::MinButton' has a wrong offset!");
static_assert(offsetof(UStackCountHandlingPopupWidget_C, OkButton) == 0x0002E0, "Member 'UStackCountHandlingPopupWidget_C::OkButton' has a wrong offset!");
static_assert(offsetof(UStackCountHandlingPopupWidget_C, OuterPopup) == 0x0002E8, "Member 'UStackCountHandlingPopupWidget_C::OuterPopup' has a wrong offset!");
static_assert(offsetof(UStackCountHandlingPopupWidget_C, Item) == 0x0002F0, "Member 'UStackCountHandlingPopupWidget_C::Item' has a wrong offset!");
static_assert(offsetof(UStackCountHandlingPopupWidget_C, Inventory) == 0x0002F8, "Member 'UStackCountHandlingPopupWidget_C::Inventory' has a wrong offset!");
static_assert(offsetof(UStackCountHandlingPopupWidget_C, Container) == 0x000300, "Member 'UStackCountHandlingPopupWidget_C::Container' has a wrong offset!");
static_assert(offsetof(UStackCountHandlingPopupWidget_C, ItemSlot) == 0x000310, "Member 'UStackCountHandlingPopupWidget_C::ItemSlot' has a wrong offset!");
static_assert(offsetof(UStackCountHandlingPopupWidget_C, bIsDropping) == 0x000320, "Member 'UStackCountHandlingPopupWidget_C::bIsDropping' has a wrong offset!");
static_assert(offsetof(UStackCountHandlingPopupWidget_C, AmountText) == 0x000328, "Member 'UStackCountHandlingPopupWidget_C::AmountText' has a wrong offset!");
static_assert(offsetof(UStackCountHandlingPopupWidget_C, OkText) == 0x000340, "Member 'UStackCountHandlingPopupWidget_C::OkText' has a wrong offset!");

}

