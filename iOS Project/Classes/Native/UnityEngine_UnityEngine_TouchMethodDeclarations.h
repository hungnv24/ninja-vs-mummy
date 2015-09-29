#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Touch
struct Touch_t42;
struct Touch_t42_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"

// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
extern "C" Vector2_t18  Touch_get_deltaPosition_m131 (Touch_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Touch::get_tapCount()
extern "C" int32_t Touch_get_tapCount_m132 (Touch_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m130 (Touch_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Touch_t42_marshal(const Touch_t42& unmarshaled, Touch_t42_marshaled& marshaled);
void Touch_t42_marshal_back(const Touch_t42_marshaled& marshaled, Touch_t42& unmarshaled);
void Touch_t42_marshal_cleanup(Touch_t42_marshaled& marshaled);
