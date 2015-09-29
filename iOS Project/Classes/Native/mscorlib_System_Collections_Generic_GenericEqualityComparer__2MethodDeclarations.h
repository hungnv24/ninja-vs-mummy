#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
struct GenericEqualityComparer_1_t1503;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m8282_gshared (GenericEqualityComparer_1_t1503 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m8282(__this, method) (( void (*) (GenericEqualityComparer_1_t1503 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m8282_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m12756_gshared (GenericEqualityComparer_1_t1503 * __this, TimeSpan_t593  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m12756(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t1503 *, TimeSpan_t593 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m12756_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m12757_gshared (GenericEqualityComparer_1_t1503 * __this, TimeSpan_t593  ___x, TimeSpan_t593  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m12757(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t1503 *, TimeSpan_t593 , TimeSpan_t593 , const MethodInfo*))GenericEqualityComparer_1_Equals_m12757_gshared)(__this, ___x, ___y, method)
