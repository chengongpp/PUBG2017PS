#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Boat_PG117_Animation

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Boat_PG117_Animation.Boat_PG117_Animation_C.ExecuteUbergraph_Boat_PG117_Animation
// 0x0088 (0x0088 - 0x0000)
struct Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_RotatorFromAxisAndAngle_ReturnValue;      // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ATslFloatingVehicle*                    K2Node_DynamicCast_AsTsl_Floating_Vehicle;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPawnMovementComponent*                 CallFunc_GetMovementComponent_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTslFloatingVehicleMovement*            K2Node_DynamicCast_AsTsl_Floating_Vehicle_Movement; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42[0x2];                                       // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetMaxAcceleration_ReturnValue;           // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetAcceleration_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetMaxRotationYawAngle_ReturnValue;       // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_MapRangeUnclamped_ReturnValue;            // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue2;         // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue3;         // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetRotationYawAngle_ReturnValue;          // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue4;         // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_MapRangeClamped_ReturnValue;              // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue2;                 // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation) == 0x000008, "Wrong alignment on Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation");
static_assert(sizeof(Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation) == 0x000088, "Wrong size on Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation");
static_assert(offsetof(Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation, EntryPoint) == 0x000000, "Member 'Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation::EntryPoint' has a wrong offset!");
static_assert(offsetof(Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation, K2Node_Event_DeltaTimeX) == 0x000004, "Member 'Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation, CallFunc_RotatorFromAxisAndAngle_ReturnValue) == 0x000008, "Member 'Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation::CallFunc_RotatorFromAxisAndAngle_ReturnValue' has a wrong offset!");
static_assert(offsetof(Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000014, "Member 'Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000018, "Member 'Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation, K2Node_DynamicCast_AsTsl_Floating_Vehicle) == 0x000020, "Member 'Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation::K2Node_DynamicCast_AsTsl_Floating_Vehicle' has a wrong offset!");
static_assert(offsetof(Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation, CallFunc_GetMovementComponent_ReturnValue) == 0x000030, "Member 'Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation::CallFunc_GetMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation, K2Node_DynamicCast_AsTsl_Floating_Vehicle_Movement) == 0x000038, "Member 'Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation::K2Node_DynamicCast_AsTsl_Floating_Vehicle_Movement' has a wrong offset!");
static_assert(offsetof(Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation, K2Node_DynamicCast_bSuccess2) == 0x000040, "Member 'Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000041, "Member 'Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation, CallFunc_GetMaxAcceleration_ReturnValue) == 0x000044, "Member 'Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation::CallFunc_GetMaxAcceleration_ReturnValue' has a wrong offset!");
static_assert(offsetof(Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation, CallFunc_GetAcceleration_ReturnValue) == 0x000048, "Member 'Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation::CallFunc_GetAcceleration_ReturnValue' has a wrong offset!");
static_assert(offsetof(Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation, CallFunc_GetMaxRotationYawAngle_ReturnValue) == 0x00004C, "Member 'Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation::CallFunc_GetMaxRotationYawAngle_ReturnValue' has a wrong offset!");
static_assert(offsetof(Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation, CallFunc_MapRangeUnclamped_ReturnValue) == 0x000050, "Member 'Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation::CallFunc_MapRangeUnclamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation, CallFunc_Multiply_FloatFloat_ReturnValue2) == 0x000054, "Member 'Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation::CallFunc_Multiply_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation, CallFunc_Multiply_FloatFloat_ReturnValue3) == 0x000058, "Member 'Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation::CallFunc_Multiply_FloatFloat_ReturnValue3' has a wrong offset!");
static_assert(offsetof(Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation, CallFunc_GetRotationYawAngle_ReturnValue) == 0x00005C, "Member 'Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation::CallFunc_GetRotationYawAngle_ReturnValue' has a wrong offset!");
static_assert(offsetof(Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation, CallFunc_Add_FloatFloat_ReturnValue) == 0x000060, "Member 'Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation, CallFunc_Multiply_FloatFloat_ReturnValue4) == 0x000064, "Member 'Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation::CallFunc_Multiply_FloatFloat_ReturnValue4' has a wrong offset!");
static_assert(offsetof(Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation, CallFunc_MakeRotator_ReturnValue) == 0x000068, "Member 'Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation, CallFunc_MapRangeClamped_ReturnValue) == 0x000074, "Member 'Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation, CallFunc_MakeRotator_ReturnValue2) == 0x000078, "Member 'Boat_PG117_Animation_C_ExecuteUbergraph_Boat_PG117_Animation::CallFunc_MakeRotator_ReturnValue2' has a wrong offset!");

// Function Boat_PG117_Animation.Boat_PG117_Animation_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct Boat_PG117_Animation_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Boat_PG117_Animation_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on Boat_PG117_Animation_C_BlueprintUpdateAnimation");
static_assert(sizeof(Boat_PG117_Animation_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on Boat_PG117_Animation_C_BlueprintUpdateAnimation");
static_assert(offsetof(Boat_PG117_Animation_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'Boat_PG117_Animation_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

}

