#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t2042;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2032;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m9748_gshared (ShimEnumerator_t2042 * __this, Dictionary_2_t2032 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m9748(__this, ___host, method) (( void (*) (ShimEnumerator_t2042 *, Dictionary_2_t2032 *, const MethodInfo*))ShimEnumerator__ctor_m9748_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m9749_gshared (ShimEnumerator_t2042 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m9749(__this, method) (( bool (*) (ShimEnumerator_t2042 *, const MethodInfo*))ShimEnumerator_MoveNext_m9749_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t689  ShimEnumerator_get_Entry_m9750_gshared (ShimEnumerator_t2042 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m9750(__this, method) (( DictionaryEntry_t689  (*) (ShimEnumerator_t2042 *, const MethodInfo*))ShimEnumerator_get_Entry_m9750_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m9751_gshared (ShimEnumerator_t2042 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m9751(__this, method) (( Object_t * (*) (ShimEnumerator_t2042 *, const MethodInfo*))ShimEnumerator_get_Key_m9751_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m9752_gshared (ShimEnumerator_t2042 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m9752(__this, method) (( Object_t * (*) (ShimEnumerator_t2042 *, const MethodInfo*))ShimEnumerator_get_Value_m9752_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m9753_gshared (ShimEnumerator_t2042 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m9753(__this, method) (( Object_t * (*) (ShimEnumerator_t2042 *, const MethodInfo*))ShimEnumerator_get_Current_m9753_gshared)(__this, method)
