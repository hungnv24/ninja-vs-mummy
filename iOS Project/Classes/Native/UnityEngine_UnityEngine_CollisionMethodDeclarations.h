#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Collision
struct Collision_t23;
// UnityEngine.Collider
struct Collider_t44;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t45;

// UnityEngine.Collider UnityEngine.Collision::get_collider()
extern "C" Collider_t44 * Collision_get_collider_m155 (Collision_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ContactPoint[] UnityEngine.Collision::get_contacts()
extern "C" ContactPointU5BU5D_t45* Collision_get_contacts_m158 (Collision_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
