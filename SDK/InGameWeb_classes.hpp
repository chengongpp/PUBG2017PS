#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InGameWeb

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InGameWeb.InGameWeb_C
// 0x0008 (0x0248 - 0x0240)
class UInGameWeb_C final : public UUserWidget
{
public:
	class UTslCoherentWidget*                     TslCoherentWidget_65;                              // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InGameWeb_C">();
	}
	static class UInGameWeb_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInGameWeb_C>();
	}
};
static_assert(alignof(UInGameWeb_C) == 0x000008, "Wrong alignment on UInGameWeb_C");
static_assert(sizeof(UInGameWeb_C) == 0x000248, "Wrong size on UInGameWeb_C");
static_assert(offsetof(UInGameWeb_C, TslCoherentWidget_65) == 0x000240, "Member 'UInGameWeb_C::TslCoherentWidget_65' has a wrong offset!");

}

