#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
struct Enumerator_t2129;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t2123;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m10885_gshared (Enumerator_t2129 * __this, Dictionary_2_t2123 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m10885(__this, ___dictionary, method) (( void (*) (Enumerator_t2129 *, Dictionary_2_t2123 *, const MethodInfo*))Enumerator__ctor_m10885_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m10886_gshared (Enumerator_t2129 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m10886(__this, method) (( Object_t * (*) (Enumerator_t2129 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m10886_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t689  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10887_gshared (Enumerator_t2129 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10887(__this, method) (( DictionaryEntry_t689  (*) (Enumerator_t2129 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10887_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10888_gshared (Enumerator_t2129 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10888(__this, method) (( Object_t * (*) (Enumerator_t2129 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10888_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10889_gshared (Enumerator_t2129 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10889(__this, method) (( Object_t * (*) (Enumerator_t2129 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10889_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m10890_gshared (Enumerator_t2129 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m10890(__this, method) (( bool (*) (Enumerator_t2129 *, const MethodInfo*))Enumerator_MoveNext_m10890_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2124  Enumerator_get_Current_m10891_gshared (Enumerator_t2129 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m10891(__this, method) (( KeyValuePair_2_t2124  (*) (Enumerator_t2129 *, const MethodInfo*))Enumerator_get_Current_m10891_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m10892_gshared (Enumerator_t2129 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m10892(__this, method) (( uint64_t (*) (Enumerator_t2129 *, const MethodInfo*))Enumerator_get_CurrentKey_m10892_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m10893_gshared (Enumerator_t2129 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m10893(__this, method) (( Object_t * (*) (Enumerator_t2129 *, const MethodInfo*))Enumerator_get_CurrentValue_m10893_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m10894_gshared (Enumerator_t2129 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m10894(__this, method) (( void (*) (Enumerator_t2129 *, const MethodInfo*))Enumerator_VerifyState_m10894_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m10895_gshared (Enumerator_t2129 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m10895(__this, method) (( void (*) (Enumerator_t2129 *, const MethodInfo*))Enumerator_VerifyCurrent_m10895_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m10896_gshared (Enumerator_t2129 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m10896(__this, method) (( void (*) (Enumerator_t2129 *, const MethodInfo*))Enumerator_Dispose_m10896_gshared)(__this, method)
