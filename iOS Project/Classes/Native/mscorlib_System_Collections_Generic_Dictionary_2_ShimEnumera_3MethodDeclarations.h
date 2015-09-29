#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t2135;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t2123;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m10931_gshared (ShimEnumerator_t2135 * __this, Dictionary_2_t2123 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m10931(__this, ___host, method) (( void (*) (ShimEnumerator_t2135 *, Dictionary_2_t2123 *, const MethodInfo*))ShimEnumerator__ctor_m10931_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m10932_gshared (ShimEnumerator_t2135 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m10932(__this, method) (( bool (*) (ShimEnumerator_t2135 *, const MethodInfo*))ShimEnumerator_MoveNext_m10932_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t689  ShimEnumerator_get_Entry_m10933_gshared (ShimEnumerator_t2135 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m10933(__this, method) (( DictionaryEntry_t689  (*) (ShimEnumerator_t2135 *, const MethodInfo*))ShimEnumerator_get_Entry_m10933_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m10934_gshared (ShimEnumerator_t2135 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m10934(__this, method) (( Object_t * (*) (ShimEnumerator_t2135 *, const MethodInfo*))ShimEnumerator_get_Key_m10934_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m10935_gshared (ShimEnumerator_t2135 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m10935(__this, method) (( Object_t * (*) (ShimEnumerator_t2135 *, const MethodInfo*))ShimEnumerator_get_Value_m10935_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m10936_gshared (ShimEnumerator_t2135 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m10936(__this, method) (( Object_t * (*) (ShimEnumerator_t2135 *, const MethodInfo*))ShimEnumerator_get_Current_m10936_gshared)(__this, method)
