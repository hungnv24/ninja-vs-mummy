#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.TrackedReference
struct TrackedReference_t178;
struct TrackedReference_t178_marshaled;
// System.Object
struct Object_t;

// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern "C" bool TrackedReference_Equals_m1306 (TrackedReference_t178 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern "C" int32_t TrackedReference_GetHashCode_m1307 (TrackedReference_t178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern "C" bool TrackedReference_op_Equality_m1308 (Object_t * __this /* static, unused */, TrackedReference_t178 * ___x, TrackedReference_t178 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void TrackedReference_t178_marshal(const TrackedReference_t178& unmarshaled, TrackedReference_t178_marshaled& marshaled);
void TrackedReference_t178_marshal_back(const TrackedReference_t178_marshaled& marshaled, TrackedReference_t178& unmarshaled);
void TrackedReference_t178_marshal_cleanup(TrackedReference_t178_marshaled& marshaled);
