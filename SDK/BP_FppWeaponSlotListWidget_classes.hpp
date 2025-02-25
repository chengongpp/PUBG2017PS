#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FppWeaponSlotListWidget

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_FppWeaponSlotListWidget.BP_FppWeaponSlotListWidget_C
// 0x0028 (0x0268 - 0x0240)
class UBP_FppWeaponSlotListWidget_C final : public UUserWidget
{
public:
	class UBP_FppWeaponListSlotWidget_C*          Slot_0;                                            // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UBP_FppWeaponListSlotWidget_C*          Slot_1;                                            // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UBP_FppWeaponListSlotWidget_C*          Slot_2;                                            // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UBP_FppWeaponListSlotWidget_C*          Slot_3;                                            // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UBP_FppWeaponListSlotWidget_C*          Slot_4;                                            // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FppWeaponSlotListWidget_C">();
	}
	static class UBP_FppWeaponSlotListWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FppWeaponSlotListWidget_C>();
	}
};
static_assert(alignof(UBP_FppWeaponSlotListWidget_C) == 0x000008, "Wrong alignment on UBP_FppWeaponSlotListWidget_C");
static_assert(sizeof(UBP_FppWeaponSlotListWidget_C) == 0x000268, "Wrong size on UBP_FppWeaponSlotListWidget_C");
static_assert(offsetof(UBP_FppWeaponSlotListWidget_C, Slot_0) == 0x000240, "Member 'UBP_FppWeaponSlotListWidget_C::Slot_0' has a wrong offset!");
static_assert(offsetof(UBP_FppWeaponSlotListWidget_C, Slot_1) == 0x000248, "Member 'UBP_FppWeaponSlotListWidget_C::Slot_1' has a wrong offset!");
static_assert(offsetof(UBP_FppWeaponSlotListWidget_C, Slot_2) == 0x000250, "Member 'UBP_FppWeaponSlotListWidget_C::Slot_2' has a wrong offset!");
static_assert(offsetof(UBP_FppWeaponSlotListWidget_C, Slot_3) == 0x000258, "Member 'UBP_FppWeaponSlotListWidget_C::Slot_3' has a wrong offset!");
static_assert(offsetof(UBP_FppWeaponSlotListWidget_C, Slot_4) == 0x000260, "Member 'UBP_FppWeaponSlotListWidget_C::Slot_4' has a wrong offset!");

}

