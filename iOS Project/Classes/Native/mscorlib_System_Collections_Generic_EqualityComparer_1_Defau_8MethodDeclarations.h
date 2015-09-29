#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t2310;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m12708_gshared (DefaultComparer_t2310 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12708(__this, method) (( void (*) (DefaultComparer_t2310 *, const MethodInfo*))DefaultComparer__ctor_m12708_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12709_gshared (DefaultComparer_t2310 * __this, DateTime_t100  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12709(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2310 *, DateTime_t100 , const MethodInfo*))DefaultComparer_GetHashCode_m12709_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12710_gshared (DefaultComparer_t2310 * __this, DateTime_t100  ___x, DateTime_t100  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12710(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2310 *, DateTime_t100 , DateTime_t100 , const MethodInfo*))DefaultComparer_Equals_m12710_gshared)(__this, ___x, ___y, method)
