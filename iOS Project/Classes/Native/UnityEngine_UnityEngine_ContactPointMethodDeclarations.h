#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.ContactPoint
struct ContactPoint_t46;
// UnityEngine.Collider
struct Collider_t44;

// UnityEngine.Collider UnityEngine.ContactPoint::get_otherCollider()
extern "C" Collider_t44 * ContactPoint_get_otherCollider_m159 (ContactPoint_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.ContactPoint::ColliderFromInstanceId(System.Int32)
extern "C" Collider_t44 * ContactPoint_ColliderFromInstanceId_m821 (Object_t * __this /* static, unused */, int32_t ___instanceID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
