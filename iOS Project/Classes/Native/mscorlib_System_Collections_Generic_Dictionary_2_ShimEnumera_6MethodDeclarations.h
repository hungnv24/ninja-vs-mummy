#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t2251;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t625;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12357_gshared (ShimEnumerator_t2251 * __this, Dictionary_2_t625 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12357(__this, ___host, method) (( void (*) (ShimEnumerator_t2251 *, Dictionary_2_t625 *, const MethodInfo*))ShimEnumerator__ctor_m12357_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12358_gshared (ShimEnumerator_t2251 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12358(__this, method) (( bool (*) (ShimEnumerator_t2251 *, const MethodInfo*))ShimEnumerator_MoveNext_m12358_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t689  ShimEnumerator_get_Entry_m12359_gshared (ShimEnumerator_t2251 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12359(__this, method) (( DictionaryEntry_t689  (*) (ShimEnumerator_t2251 *, const MethodInfo*))ShimEnumerator_get_Entry_m12359_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12360_gshared (ShimEnumerator_t2251 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12360(__this, method) (( Object_t * (*) (ShimEnumerator_t2251 *, const MethodInfo*))ShimEnumerator_get_Key_m12360_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12361_gshared (ShimEnumerator_t2251 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12361(__this, method) (( Object_t * (*) (ShimEnumerator_t2251 *, const MethodInfo*))ShimEnumerator_get_Value_m12361_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12362_gshared (ShimEnumerator_t2251 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12362(__this, method) (( Object_t * (*) (ShimEnumerator_t2251 *, const MethodInfo*))ShimEnumerator_get_Current_m12362_gshared)(__this, method)
