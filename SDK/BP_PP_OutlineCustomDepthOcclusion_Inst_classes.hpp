#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PP_OutlineCustomDepthOcclusion_Inst

#include "Basic.hpp"

#include "TslGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PP_OutlineCustomDepthOcclusion_Inst.BP_PP_OutlineCustomDepthOcclusion_Inst_C
// 0x0008 (0x03F0 - 0x03E8)
class ABP_PP_OutlineCustomDepthOcclusion_Inst_C final : public ATslPostProcessEffect
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PP_OutlineCustomDepthOcclusion_Inst_C">();
	}
	static class ABP_PP_OutlineCustomDepthOcclusion_Inst_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PP_OutlineCustomDepthOcclusion_Inst_C>();
	}
};
static_assert(alignof(ABP_PP_OutlineCustomDepthOcclusion_Inst_C) == 0x000008, "Wrong alignment on ABP_PP_OutlineCustomDepthOcclusion_Inst_C");
static_assert(sizeof(ABP_PP_OutlineCustomDepthOcclusion_Inst_C) == 0x0003F0, "Wrong size on ABP_PP_OutlineCustomDepthOcclusion_Inst_C");
static_assert(offsetof(ABP_PP_OutlineCustomDepthOcclusion_Inst_C, DefaultSceneRoot) == 0x0003E8, "Member 'ABP_PP_OutlineCustomDepthOcclusion_Inst_C::DefaultSceneRoot' has a wrong offset!");

}

