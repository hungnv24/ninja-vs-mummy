#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3;
// System.String
struct String_t;
// UnityEngine.Coroutine
struct Coroutine_t64;
struct Coroutine_t64_marshaled;
// System.Collections.IEnumerator
struct IEnumerator_t316;

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" void MonoBehaviour__ctor_m55 (MonoBehaviour_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
extern "C" void MonoBehaviour_Invoke_m95 (MonoBehaviour_t3 * __this, String_t* ___methodName, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" Coroutine_t64 * MonoBehaviour_StartCoroutine_m765 (MonoBehaviour_t3 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t64 * MonoBehaviour_StartCoroutine_Auto_m766 (MonoBehaviour_t3 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
