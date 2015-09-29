#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>
struct DefaultComparer_t2086;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m10379_gshared (DefaultComparer_t2086 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m10379(__this, method) (( void (*) (DefaultComparer_t2086 *, const MethodInfo*))DefaultComparer__ctor_m10379_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m10380_gshared (DefaultComparer_t2086 * __this, UICharInfo_t189  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m10380(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2086 *, UICharInfo_t189 , const MethodInfo*))DefaultComparer_GetHashCode_m10380_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m10381_gshared (DefaultComparer_t2086 * __this, UICharInfo_t189  ___x, UICharInfo_t189  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m10381(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2086 *, UICharInfo_t189 , UICharInfo_t189 , const MethodInfo*))DefaultComparer_Equals_m10381_gshared)(__this, ___x, ___y, method)
