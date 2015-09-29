#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2019;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2005;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m9476_gshared (ShimEnumerator_t2019 * __this, Dictionary_2_t2005 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m9476(__this, ___host, method) (( void (*) (ShimEnumerator_t2019 *, Dictionary_2_t2005 *, const MethodInfo*))ShimEnumerator__ctor_m9476_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m9477_gshared (ShimEnumerator_t2019 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m9477(__this, method) (( bool (*) (ShimEnumerator_t2019 *, const MethodInfo*))ShimEnumerator_MoveNext_m9477_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t689  ShimEnumerator_get_Entry_m9478_gshared (ShimEnumerator_t2019 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m9478(__this, method) (( DictionaryEntry_t689  (*) (ShimEnumerator_t2019 *, const MethodInfo*))ShimEnumerator_get_Entry_m9478_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m9479_gshared (ShimEnumerator_t2019 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m9479(__this, method) (( Object_t * (*) (ShimEnumerator_t2019 *, const MethodInfo*))ShimEnumerator_get_Key_m9479_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m9480_gshared (ShimEnumerator_t2019 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m9480(__this, method) (( Object_t * (*) (ShimEnumerator_t2019 *, const MethodInfo*))ShimEnumerator_get_Value_m9480_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m9481_gshared (ShimEnumerator_t2019 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m9481(__this, method) (( Object_t * (*) (ShimEnumerator_t2019 *, const MethodInfo*))ShimEnumerator_get_Current_m9481_gshared)(__this, method)
