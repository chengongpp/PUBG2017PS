#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InnerItemSlotListWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InnerItemSlotListWidget.InnerItemSlotListWidget_C
// 0x0040 (0x0280 - 0x0240)
class UInnerItemSlotListWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           ItemList;                                          // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	TScriptInterface<class ISlotContainerInterface> SlotContainer;                                     // 0x0250(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	UMulticastDelegateProperty_                   OnChildSlotFocus;                                  // 0x0260(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bSort;                                             // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_271[0x3];                                      // 0x0271(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         FocusIndex;                                        // 0x0274(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bWantToFocus;                                      // 0x0278(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_InnerItemSlotListWidget(int32 EntryPoint);
	void OnSlotFocus(TScriptInterface<class ISlotInterface> Slot_0, TScriptInterface<class ISlotContainerInterface> SlotContainer_0);
	void OnRefreshList();
	void Destruct();
	void Construct();
	void RefreshList();
	void GetContentCount(int32* Count);
	bool Up();
	bool SetFocus(bool NewFocus);
	bool Right();
	bool Left();
	bool Down();
	bool InputY();
	bool InputX();
	bool InputB();
	bool InputA();
	bool InputRT();
	bool InputRB();
	bool InputLT();
	bool InputLB();

	bool IsFocus() const;
	class UUserWidget* GetUpWidget() const;
	class UUserWidget* GetRightWidget() const;
	class UUserWidget* GetLeftWidget() const;
	class UUserWidget* GetDownWidget() const;
	class UUserWidget* GetFocusingChildWidget() const;
	bool IsFocusable() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InnerItemSlotListWidget_C">();
	}
	static class UInnerItemSlotListWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInnerItemSlotListWidget_C>();
	}
};
static_assert(alignof(UInnerItemSlotListWidget_C) == 0x000008, "Wrong alignment on UInnerItemSlotListWidget_C");
static_assert(sizeof(UInnerItemSlotListWidget_C) == 0x000280, "Wrong size on UInnerItemSlotListWidget_C");
static_assert(offsetof(UInnerItemSlotListWidget_C, UberGraphFrame) == 0x000240, "Member 'UInnerItemSlotListWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInnerItemSlotListWidget_C, ItemList) == 0x000248, "Member 'UInnerItemSlotListWidget_C::ItemList' has a wrong offset!");
static_assert(offsetof(UInnerItemSlotListWidget_C, SlotContainer) == 0x000250, "Member 'UInnerItemSlotListWidget_C::SlotContainer' has a wrong offset!");
static_assert(offsetof(UInnerItemSlotListWidget_C, OnChildSlotFocus) == 0x000260, "Member 'UInnerItemSlotListWidget_C::OnChildSlotFocus' has a wrong offset!");
static_assert(offsetof(UInnerItemSlotListWidget_C, bSort) == 0x000270, "Member 'UInnerItemSlotListWidget_C::bSort' has a wrong offset!");
static_assert(offsetof(UInnerItemSlotListWidget_C, FocusIndex) == 0x000274, "Member 'UInnerItemSlotListWidget_C::FocusIndex' has a wrong offset!");
static_assert(offsetof(UInnerItemSlotListWidget_C, bWantToFocus) == 0x000278, "Member 'UInnerItemSlotListWidget_C::bWantToFocus' has a wrong offset!");

}

