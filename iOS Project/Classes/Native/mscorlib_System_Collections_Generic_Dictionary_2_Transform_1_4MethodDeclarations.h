#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
struct Transform_1_t2038;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t93;
// System.AsyncCallback
struct AsyncCallback_t94;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m9718_gshared (Transform_1_t2038 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m9718(__this, ___object, ___method, method) (( void (*) (Transform_1_t2038 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m9718_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m9719_gshared (Transform_1_t2038 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m9719(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t2038 *, Object_t *, Object_t *, const MethodInfo*))Transform_1_Invoke_m9719_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m9720_gshared (Transform_1_t2038 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t94 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m9720(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2038 *, Object_t *, Object_t *, AsyncCallback_t94 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m9720_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m9721_gshared (Transform_1_t2038 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m9721(__this, ___result, method) (( Object_t * (*) (Transform_1_t2038 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m9721_gshared)(__this, ___result, method)
