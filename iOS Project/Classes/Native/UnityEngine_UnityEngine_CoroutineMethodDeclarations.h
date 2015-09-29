#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t64;
struct Coroutine_t64_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m190 (Coroutine_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m191 (Coroutine_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m192 (Coroutine_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t64_marshal(const Coroutine_t64& unmarshaled, Coroutine_t64_marshaled& marshaled);
void Coroutine_t64_marshal_back(const Coroutine_t64_marshaled& marshaled, Coroutine_t64& unmarshaled);
void Coroutine_t64_marshal_cleanup(Coroutine_t64_marshaled& marshaled);
