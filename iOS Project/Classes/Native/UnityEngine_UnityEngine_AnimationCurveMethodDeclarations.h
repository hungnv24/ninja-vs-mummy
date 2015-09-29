#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t177;
struct AnimationCurve_t177_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t320;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m872 (AnimationCurve_t177 * __this, KeyframeU5BU5D_t320* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m873 (AnimationCurve_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m874 (AnimationCurve_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m875 (AnimationCurve_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m876 (AnimationCurve_t177 * __this, KeyframeU5BU5D_t320* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t177_marshal(const AnimationCurve_t177& unmarshaled, AnimationCurve_t177_marshaled& marshaled);
void AnimationCurve_t177_marshal_back(const AnimationCurve_t177_marshaled& marshaled, AnimationCurve_t177& unmarshaled);
void AnimationCurve_t177_marshal_cleanup(AnimationCurve_t177_marshaled& marshaled);
