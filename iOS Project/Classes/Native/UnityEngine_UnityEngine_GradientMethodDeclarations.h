#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t90;
struct Gradient_t90_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m299 (Gradient_t90 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m300 (Gradient_t90 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m301 (Gradient_t90 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m302 (Gradient_t90 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t90_marshal(const Gradient_t90& unmarshaled, Gradient_t90_marshaled& marshaled);
void Gradient_t90_marshal_back(const Gradient_t90_marshaled& marshaled, Gradient_t90& unmarshaled);
void Gradient_t90_marshal_cleanup(Gradient_t90_marshaled& marshaled);
