#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MummyController
struct MummyController_t11;
// System.String
struct String_t;
// UnityEngine.Collision2D
struct Collision2D_t22;
// UnityEngine.Collider2D
struct Collider2D_t21;

// System.Void MummyController::.ctor()
extern "C" void MummyController__ctor_m9 (MummyController_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MummyController::Start()
extern "C" void MummyController_Start_m10 (MummyController_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MummyController::FixedUpdate()
extern "C" void MummyController_FixedUpdate_m11 (MummyController_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MummyController::Update()
extern "C" void MummyController_Update_m12 (MummyController_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MummyController::isInState(System.String)
extern "C" bool MummyController_isInState_m13 (MummyController_t11 * __this, String_t* ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MummyController::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C" void MummyController_OnCollisionEnter2D_m14 (MummyController_t11 * __this, Collision2D_t22 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MummyController::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void MummyController_OnTriggerEnter2D_m15 (MummyController_t11 * __this, Collider2D_t21 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MummyController::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C" void MummyController_OnTriggerStay2D_m16 (MummyController_t11 * __this, Collider2D_t21 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MummyController::Die()
extern "C" void MummyController_Die_m17 (MummyController_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
