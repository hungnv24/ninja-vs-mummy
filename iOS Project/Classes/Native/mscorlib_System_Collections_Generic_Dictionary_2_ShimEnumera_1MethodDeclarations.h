#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t2059;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2048;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m9978_gshared (ShimEnumerator_t2059 * __this, Dictionary_2_t2048 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m9978(__this, ___host, method) (( void (*) (ShimEnumerator_t2059 *, Dictionary_2_t2048 *, const MethodInfo*))ShimEnumerator__ctor_m9978_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m9979_gshared (ShimEnumerator_t2059 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m9979(__this, method) (( bool (*) (ShimEnumerator_t2059 *, const MethodInfo*))ShimEnumerator_MoveNext_m9979_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t689  ShimEnumerator_get_Entry_m9980_gshared (ShimEnumerator_t2059 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m9980(__this, method) (( DictionaryEntry_t689  (*) (ShimEnumerator_t2059 *, const MethodInfo*))ShimEnumerator_get_Entry_m9980_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m9981_gshared (ShimEnumerator_t2059 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m9981(__this, method) (( Object_t * (*) (ShimEnumerator_t2059 *, const MethodInfo*))ShimEnumerator_get_Key_m9981_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m9982_gshared (ShimEnumerator_t2059 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m9982(__this, method) (( Object_t * (*) (ShimEnumerator_t2059 *, const MethodInfo*))ShimEnumerator_get_Value_m9982_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m9983_gshared (ShimEnumerator_t2059 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m9983(__this, method) (( Object_t * (*) (ShimEnumerator_t2059 *, const MethodInfo*))ShimEnumerator_get_Current_m9983_gshared)(__this, method)
