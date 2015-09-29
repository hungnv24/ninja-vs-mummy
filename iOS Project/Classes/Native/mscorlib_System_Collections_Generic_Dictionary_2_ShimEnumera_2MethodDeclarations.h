#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t2105;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2093;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m10611_gshared (ShimEnumerator_t2105 * __this, Dictionary_2_t2093 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m10611(__this, ___host, method) (( void (*) (ShimEnumerator_t2105 *, Dictionary_2_t2093 *, const MethodInfo*))ShimEnumerator__ctor_m10611_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m10612_gshared (ShimEnumerator_t2105 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m10612(__this, method) (( bool (*) (ShimEnumerator_t2105 *, const MethodInfo*))ShimEnumerator_MoveNext_m10612_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t689  ShimEnumerator_get_Entry_m10613_gshared (ShimEnumerator_t2105 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m10613(__this, method) (( DictionaryEntry_t689  (*) (ShimEnumerator_t2105 *, const MethodInfo*))ShimEnumerator_get_Entry_m10613_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m10614_gshared (ShimEnumerator_t2105 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m10614(__this, method) (( Object_t * (*) (ShimEnumerator_t2105 *, const MethodInfo*))ShimEnumerator_get_Key_m10614_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m10615_gshared (ShimEnumerator_t2105 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m10615(__this, method) (( Object_t * (*) (ShimEnumerator_t2105 *, const MethodInfo*))ShimEnumerator_get_Value_m10615_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m10616_gshared (ShimEnumerator_t2105 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m10616(__this, method) (( Object_t * (*) (ShimEnumerator_t2105 *, const MethodInfo*))ShimEnumerator_get_Current_m10616_gshared)(__this, method)
