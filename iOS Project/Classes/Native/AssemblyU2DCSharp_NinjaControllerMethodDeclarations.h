#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NinjaController
struct NinjaController_t14;
// UnityEngine.Collision2D
struct Collision2D_t22;

// System.Void NinjaController::.ctor()
extern "C" void NinjaController__ctor_m18 (NinjaController_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NinjaController::get_CurrentState()
extern "C" int32_t NinjaController_get_CurrentState_m19 (NinjaController_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NinjaController::Awake()
extern "C" void NinjaController_Awake_m20 (NinjaController_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NinjaController::Start()
extern "C" void NinjaController_Start_m21 (NinjaController_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NinjaController::CalculateJumpVelocity()
extern "C" float NinjaController_CalculateJumpVelocity_m22 (NinjaController_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NinjaController::CalculateJumpForce()
extern "C" float NinjaController_CalculateJumpForce_m23 (NinjaController_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NinjaController::FixedUpdate()
extern "C" void NinjaController_FixedUpdate_m24 (NinjaController_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NinjaController::Update()
extern "C" void NinjaController_Update_m25 (NinjaController_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NinjaController::MovePlayer()
extern "C" void NinjaController_MovePlayer_m26 (NinjaController_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NinjaController::GetInput()
extern "C" void NinjaController_GetInput_m27 (NinjaController_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NinjaController::HandleInput()
extern "C" void NinjaController_HandleInput_m28 (NinjaController_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NinjaController::throwDart()
extern "C" void NinjaController_throwDart_m29 (NinjaController_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NinjaController::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C" void NinjaController_OnCollisionEnter2D_m30 (NinjaController_t14 * __this, Collision2D_t22 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NinjaController::DidHitWall(UnityEngine.Collision2D)
extern "C" bool NinjaController_DidHitWall_m31 (NinjaController_t14 * __this, Collision2D_t22 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NinjaController::DidHitEnemy(UnityEngine.Collision2D)
extern "C" bool NinjaController_DidHitEnemy_m32 (NinjaController_t14 * __this, Collision2D_t22 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NinjaController::Die()
extern "C" void NinjaController_Die_m33 (NinjaController_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NinjaController::GetCurrentState()
extern "C" int32_t NinjaController_GetCurrentState_m34 (NinjaController_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NinjaController::GetTapCount()
extern "C" int32_t NinjaController_GetTapCount_m35 (NinjaController_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NinjaController::GetSwipe()
extern "C" int32_t NinjaController_GetSwipe_m36 (NinjaController_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NinjaController::StopSound()
extern "C" void NinjaController_StopSound_m37 (NinjaController_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
