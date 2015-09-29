#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t2180;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2171;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11634_gshared (ShimEnumerator_t2180 * __this, Dictionary_2_t2171 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11634(__this, ___host, method) (( void (*) (ShimEnumerator_t2180 *, Dictionary_2_t2171 *, const MethodInfo*))ShimEnumerator__ctor_m11634_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11635_gshared (ShimEnumerator_t2180 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11635(__this, method) (( bool (*) (ShimEnumerator_t2180 *, const MethodInfo*))ShimEnumerator_MoveNext_m11635_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t689  ShimEnumerator_get_Entry_m11636_gshared (ShimEnumerator_t2180 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11636(__this, method) (( DictionaryEntry_t689  (*) (ShimEnumerator_t2180 *, const MethodInfo*))ShimEnumerator_get_Entry_m11636_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11637_gshared (ShimEnumerator_t2180 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11637(__this, method) (( Object_t * (*) (ShimEnumerator_t2180 *, const MethodInfo*))ShimEnumerator_get_Key_m11637_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11638_gshared (ShimEnumerator_t2180 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11638(__this, method) (( Object_t * (*) (ShimEnumerator_t2180 *, const MethodInfo*))ShimEnumerator_get_Value_m11638_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11639_gshared (ShimEnumerator_t2180 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11639(__this, method) (( Object_t * (*) (ShimEnumerator_t2180 *, const MethodInfo*))ShimEnumerator_get_Current_m11639_gshared)(__this, method)
