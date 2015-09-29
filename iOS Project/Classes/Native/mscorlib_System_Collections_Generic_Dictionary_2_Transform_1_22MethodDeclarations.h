#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct Transform_1_t2134;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t93;
// System.AsyncCallback
struct AsyncCallback_t94;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m10927_gshared (Transform_1_t2134 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m10927(__this, ___object, ___method, method) (( void (*) (Transform_1_t2134 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m10927_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2124  Transform_1_Invoke_m10928_gshared (Transform_1_t2134 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m10928(__this, ___key, ___value, method) (( KeyValuePair_2_t2124  (*) (Transform_1_t2134 *, uint64_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m10928_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m10929_gshared (Transform_1_t2134 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t94 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m10929(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2134 *, uint64_t, Object_t *, AsyncCallback_t94 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m10929_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2124  Transform_1_EndInvoke_m10930_gshared (Transform_1_t2134 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m10930(__this, ___result, method) (( KeyValuePair_2_t2124  (*) (Transform_1_t2134 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m10930_gshared)(__this, ___result, method)
