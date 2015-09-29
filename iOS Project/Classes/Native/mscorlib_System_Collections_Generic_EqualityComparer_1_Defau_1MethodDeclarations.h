#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t2082;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m10328_gshared (DefaultComparer_t2082 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m10328(__this, method) (( void (*) (DefaultComparer_t2082 *, const MethodInfo*))DefaultComparer__ctor_m10328_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m10329_gshared (DefaultComparer_t2082 * __this, UIVertex_t198  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m10329(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2082 *, UIVertex_t198 , const MethodInfo*))DefaultComparer_GetHashCode_m10329_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m10330_gshared (DefaultComparer_t2082 * __this, UIVertex_t198  ___x, UIVertex_t198  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m10330(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2082 *, UIVertex_t198 , UIVertex_t198 , const MethodInfo*))DefaultComparer_Equals_m10330_gshared)(__this, ___x, ___y, method)
