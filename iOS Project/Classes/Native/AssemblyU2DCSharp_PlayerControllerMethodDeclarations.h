#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerController
struct PlayerController_t20;
// UnityEngine.Collision
struct Collision_t23;

// System.Void PlayerController::.ctor()
extern "C" void PlayerController__ctor_m48 (PlayerController_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Awake()
extern "C" void PlayerController_Awake_m49 (PlayerController_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Start()
extern "C" void PlayerController_Start_m50 (PlayerController_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Update()
extern "C" void PlayerController_Update_m51 (PlayerController_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::FixedUpdate()
extern "C" void PlayerController_FixedUpdate_m52 (PlayerController_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Jump()
extern "C" void PlayerController_Jump_m53 (PlayerController_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnCollisionEnter(UnityEngine.Collision)
extern "C" void PlayerController_OnCollisionEnter_m54 (PlayerController_t20 * __this, Collision_t23 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
