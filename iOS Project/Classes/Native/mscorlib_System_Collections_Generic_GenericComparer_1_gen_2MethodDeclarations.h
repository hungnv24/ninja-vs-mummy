#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
struct GenericComparer_1_t1502;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericComparer_1__ctor_m8281_gshared (GenericComparer_1_t1502 * __this, const MethodInfo* method);
#define GenericComparer_1__ctor_m8281(__this, method) (( void (*) (GenericComparer_1_t1502 *, const MethodInfo*))GenericComparer_1__ctor_m8281_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.TimeSpan>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m12749_gshared (GenericComparer_1_t1502 * __this, TimeSpan_t593  ___x, TimeSpan_t593  ___y, const MethodInfo* method);
#define GenericComparer_1_Compare_m12749(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t1502 *, TimeSpan_t593 , TimeSpan_t593 , const MethodInfo*))GenericComparer_1_Compare_m12749_gshared)(__this, ___x, ___y, method)
