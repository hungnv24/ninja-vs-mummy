#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Collision2D
struct Collision2D_t22;
// UnityEngine.Collider2D
struct Collider2D_t21;
// UnityEngine.GameObject
struct GameObject_t1;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t32;

// UnityEngine.Collider2D UnityEngine.Collision2D::get_collider()
extern "C" Collider2D_t21 * Collision2D_get_collider_m90 (Collision2D_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
extern "C" GameObject_t1 * Collision2D_get_gameObject_m89 (Collision2D_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::get_contacts()
extern "C" ContactPoint2DU5BU5D_t32* Collision2D_get_contacts_m91 (Collision2D_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
