#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Motorbike_03

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ABP_Motorbike_03.ABP_Motorbike_03_C.ExecuteUbergraph_ABP_Motorbike_03
// 0x0014 (0x0014 - 0x0000)
struct ABP_Motorbike_03_C_ExecuteUbergraph_ABP_Motorbike_03 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ABP_Motorbike_03_C_ExecuteUbergraph_ABP_Motorbike_03) == 0x000004, "Wrong alignment on ABP_Motorbike_03_C_ExecuteUbergraph_ABP_Motorbike_03");
static_assert(sizeof(ABP_Motorbike_03_C_ExecuteUbergraph_ABP_Motorbike_03) == 0x000014, "Wrong size on ABP_Motorbike_03_C_ExecuteUbergraph_ABP_Motorbike_03");
static_assert(offsetof(ABP_Motorbike_03_C_ExecuteUbergraph_ABP_Motorbike_03, EntryPoint) == 0x000000, "Member 'ABP_Motorbike_03_C_ExecuteUbergraph_ABP_Motorbike_03::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_ExecuteUbergraph_ABP_Motorbike_03, CallFunc_MakeRotator_ReturnValue) == 0x000004, "Member 'ABP_Motorbike_03_C_ExecuteUbergraph_ABP_Motorbike_03::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_ExecuteUbergraph_ABP_Motorbike_03, K2Node_Event_DeltaTimeX) == 0x000010, "Member 'ABP_Motorbike_03_C_ExecuteUbergraph_ABP_Motorbike_03::K2Node_Event_DeltaTimeX' has a wrong offset!");

// Function ABP_Motorbike_03.ABP_Motorbike_03_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ABP_Motorbike_03_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ABP_Motorbike_03_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ABP_Motorbike_03_C_BlueprintUpdateAnimation");
static_assert(sizeof(ABP_Motorbike_03_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ABP_Motorbike_03_C_BlueprintUpdateAnimation");
static_assert(offsetof(ABP_Motorbike_03_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ABP_Motorbike_03_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function ABP_Motorbike_03.ABP_Motorbike_03_C.TickBikePose
// 0x0150 (0x0150 - 0x0000)
struct ABP_Motorbike_03_C_TickBikePose final
{
public:
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue2;        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ATslMotorbikeVehicle*                   K2Node_DynamicCast_AsTsl_Motorbike_Vehicle;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetComponentVelocity_ReturnValue;         // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Divide_VectorFloat_ReturnValue;           // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64[0xC];                                       // 0x0064(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0070(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetComponentVelocity_ReturnValue2;        // 0x00A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetUpVector_ReturnValue;                  // 0x00AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_InverseTransformDirection_ReturnValue;    // 0x00BC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakVector_X;                            // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakVector_Y;                            // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakVector_Z;                            // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x3];                                       // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue2;         // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_MapRangeClamped_ReturnValue;              // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_MapRangeClamped_ReturnValue2;             // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_MapRangeClamped_ReturnValue3;             // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetPhysicsAngularVelocity_ReturnValue;    // 0x00F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue3;         // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0100(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_MapRangeClamped_ReturnValue4;             // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakVector_X2;                           // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakVector_Y2;                           // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakVector_Z2;                           // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue3;        // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue4;         // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue5;         // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12D[0x3];                                      // 0x012D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetCOMSteerOffset_ReturnValue;            // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue6;         // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_FInterpTo_ReturnValue;                    // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_FClamp_ReturnValue2;                      // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Add_FloatFloat_ReturnValue2;              // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_FInterpTo_ReturnValue2;                   // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ABP_Motorbike_03_C_TickBikePose) == 0x000010, "Wrong alignment on ABP_Motorbike_03_C_TickBikePose");
static_assert(sizeof(ABP_Motorbike_03_C_TickBikePose) == 0x000150, "Wrong size on ABP_Motorbike_03_C_TickBikePose");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000000, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_GetWorldDeltaSeconds_ReturnValue2) == 0x000004, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_GetWorldDeltaSeconds_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000008, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, K2Node_DynamicCast_AsTsl_Motorbike_Vehicle) == 0x000010, "Member 'ABP_Motorbike_03_C_TickBikePose::K2Node_DynamicCast_AsTsl_Motorbike_Vehicle' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ABP_Motorbike_03_C_TickBikePose::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_GetComponentVelocity_ReturnValue) == 0x00001C, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_GetComponentVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000028, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000034, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_BreakRotator_Roll) == 0x000040, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_BreakRotator_Pitch) == 0x000044, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_BreakRotator_Yaw) == 0x000048, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_Divide_VectorFloat_ReturnValue) == 0x00004C, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_Divide_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_MakeRotator_ReturnValue) == 0x000058, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000070, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_GetComponentVelocity_ReturnValue2) == 0x0000A0, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_GetComponentVelocity_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_GetUpVector_ReturnValue) == 0x0000AC, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_GetUpVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_VSize_ReturnValue) == 0x0000B8, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_InverseTransformDirection_ReturnValue) == 0x0000BC, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_InverseTransformDirection_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000C8, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_BreakVector_X) == 0x0000CC, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_BreakVector_Y) == 0x0000D0, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_BreakVector_Z) == 0x0000D4, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0000D8, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_Multiply_FloatFloat_ReturnValue2) == 0x0000DC, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_Multiply_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_SelectFloat_ReturnValue) == 0x0000E0, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_MapRangeClamped_ReturnValue) == 0x0000E4, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_MapRangeClamped_ReturnValue2) == 0x0000E8, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_MapRangeClamped_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_MapRangeClamped_ReturnValue3) == 0x0000EC, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_MapRangeClamped_ReturnValue3' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_GetPhysicsAngularVelocity_ReturnValue) == 0x0000F0, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_GetPhysicsAngularVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_Multiply_FloatFloat_ReturnValue3) == 0x0000FC, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_Multiply_FloatFloat_ReturnValue3' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000100, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_MapRangeClamped_ReturnValue4) == 0x00010C, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_MapRangeClamped_ReturnValue4' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_BreakVector_X2) == 0x000110, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_BreakVector_X2' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_BreakVector_Y2) == 0x000114, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_BreakVector_Y2' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_BreakVector_Z2) == 0x000118, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_BreakVector_Z2' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_GetWorldDeltaSeconds_ReturnValue3) == 0x00011C, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_GetWorldDeltaSeconds_ReturnValue3' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_Multiply_FloatFloat_ReturnValue4) == 0x000120, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_Multiply_FloatFloat_ReturnValue4' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_Multiply_FloatFloat_ReturnValue5) == 0x000124, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_Multiply_FloatFloat_ReturnValue5' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_FClamp_ReturnValue) == 0x000128, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_IsValid_ReturnValue) == 0x00012C, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_GetCOMSteerOffset_ReturnValue) == 0x000130, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_GetCOMSteerOffset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_Multiply_FloatFloat_ReturnValue6) == 0x000134, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_Multiply_FloatFloat_ReturnValue6' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_FInterpTo_ReturnValue) == 0x000138, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_FInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_Add_FloatFloat_ReturnValue) == 0x00013C, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_FClamp_ReturnValue2) == 0x000140, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_FClamp_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_Add_FloatFloat_ReturnValue2) == 0x000144, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_Add_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ABP_Motorbike_03_C_TickBikePose, CallFunc_FInterpTo_ReturnValue2) == 0x000148, "Member 'ABP_Motorbike_03_C_TickBikePose::CallFunc_FInterpTo_ReturnValue2' has a wrong offset!");

}

