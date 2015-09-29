#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>
struct Transform_1_t2217;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t93;
// System.AsyncCallback
struct AsyncCallback_t94;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m12144_gshared (Transform_1_t2217 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m12144(__this, ___object, ___method, method) (( void (*) (Transform_1_t2217 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m12144_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t689  Transform_1_Invoke_m12145_gshared (Transform_1_t2217 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m12145(__this, ___key, ___value, method) (( DictionaryEntry_t689  (*) (Transform_1_t2217 *, Object_t *, uint8_t, const MethodInfo*))Transform_1_Invoke_m12145_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m12146_gshared (Transform_1_t2217 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t94 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m12146(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2217 *, Object_t *, uint8_t, AsyncCallback_t94 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m12146_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t689  Transform_1_EndInvoke_m12147_gshared (Transform_1_t2217 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m12147(__this, ___result, method) (( DictionaryEntry_t689  (*) (Transform_1_t2217 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m12147_gshared)(__this, ___result, method)
