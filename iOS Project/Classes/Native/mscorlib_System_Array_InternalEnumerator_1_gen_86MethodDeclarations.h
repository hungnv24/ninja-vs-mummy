#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.TimeSpan>
struct InternalEnumerator_1_t2302;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12641_gshared (InternalEnumerator_1_t2302 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12641(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2302 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12641_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12642_gshared (InternalEnumerator_1_t2302 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12642(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2302 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12642_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12643_gshared (InternalEnumerator_1_t2302 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12643(__this, method) (( void (*) (InternalEnumerator_1_t2302 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12643_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.TimeSpan>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12644_gshared (InternalEnumerator_1_t2302 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12644(__this, method) (( bool (*) (InternalEnumerator_1_t2302 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12644_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.TimeSpan>::get_Current()
extern "C" TimeSpan_t593  InternalEnumerator_1_get_Current_m12645_gshared (InternalEnumerator_1_t2302 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12645(__this, method) (( TimeSpan_t593  (*) (InternalEnumerator_1_t2302 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12645_gshared)(__this, method)
