#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t2174;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2171;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11588_gshared (Enumerator_t2174 * __this, Dictionary_2_t2171 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11588(__this, ___dictionary, method) (( void (*) (Enumerator_t2174 *, Dictionary_2_t2171 *, const MethodInfo*))Enumerator__ctor_m11588_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11589_gshared (Enumerator_t2174 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11589(__this, method) (( Object_t * (*) (Enumerator_t2174 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11589_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t689  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11590_gshared (Enumerator_t2174 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11590(__this, method) (( DictionaryEntry_t689  (*) (Enumerator_t2174 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11590_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11591_gshared (Enumerator_t2174 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11591(__this, method) (( Object_t * (*) (Enumerator_t2174 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11591_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11592_gshared (Enumerator_t2174 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11592(__this, method) (( Object_t * (*) (Enumerator_t2174 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11592_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11593_gshared (Enumerator_t2174 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11593(__this, method) (( bool (*) (Enumerator_t2174 *, const MethodInfo*))Enumerator_MoveNext_m11593_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2145  Enumerator_get_Current_m11594_gshared (Enumerator_t2174 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11594(__this, method) (( KeyValuePair_2_t2145  (*) (Enumerator_t2174 *, const MethodInfo*))Enumerator_get_Current_m11594_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m11595_gshared (Enumerator_t2174 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11595(__this, method) (( Object_t * (*) (Enumerator_t2174 *, const MethodInfo*))Enumerator_get_CurrentKey_m11595_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t2033  Enumerator_get_CurrentValue_m11596_gshared (Enumerator_t2174 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11596(__this, method) (( KeyValuePair_2_t2033  (*) (Enumerator_t2174 *, const MethodInfo*))Enumerator_get_CurrentValue_m11596_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m11597_gshared (Enumerator_t2174 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11597(__this, method) (( void (*) (Enumerator_t2174 *, const MethodInfo*))Enumerator_VerifyState_m11597_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11598_gshared (Enumerator_t2174 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11598(__this, method) (( void (*) (Enumerator_t2174 *, const MethodInfo*))Enumerator_VerifyCurrent_m11598_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m11599_gshared (Enumerator_t2174 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11599(__this, method) (( void (*) (Enumerator_t2174 *, const MethodInfo*))Enumerator_Dispose_m11599_gshared)(__this, method)
