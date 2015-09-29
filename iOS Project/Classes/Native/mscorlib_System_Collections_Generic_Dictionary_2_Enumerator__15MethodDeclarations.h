#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t2223;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2218;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12106_gshared (Enumerator_t2223 * __this, Dictionary_2_t2218 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m12106(__this, ___dictionary, method) (( void (*) (Enumerator_t2223 *, Dictionary_2_t2218 *, const MethodInfo*))Enumerator__ctor_m12106_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12107_gshared (Enumerator_t2223 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12107(__this, method) (( Object_t * (*) (Enumerator_t2223 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12107_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t689  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12108_gshared (Enumerator_t2223 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12108(__this, method) (( DictionaryEntry_t689  (*) (Enumerator_t2223 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12108_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12109_gshared (Enumerator_t2223 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12109(__this, method) (( Object_t * (*) (Enumerator_t2223 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12109_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12110_gshared (Enumerator_t2223 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12110(__this, method) (( Object_t * (*) (Enumerator_t2223 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12110_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12111_gshared (Enumerator_t2223 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12111(__this, method) (( bool (*) (Enumerator_t2223 *, const MethodInfo*))Enumerator_MoveNext_m12111_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t2219  Enumerator_get_Current_m12112_gshared (Enumerator_t2223 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12112(__this, method) (( KeyValuePair_2_t2219  (*) (Enumerator_t2223 *, const MethodInfo*))Enumerator_get_Current_m12112_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m12113_gshared (Enumerator_t2223 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m12113(__this, method) (( Object_t * (*) (Enumerator_t2223 *, const MethodInfo*))Enumerator_get_CurrentKey_m12113_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m12114_gshared (Enumerator_t2223 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m12114(__this, method) (( uint8_t (*) (Enumerator_t2223 *, const MethodInfo*))Enumerator_get_CurrentValue_m12114_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m12115_gshared (Enumerator_t2223 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m12115(__this, method) (( void (*) (Enumerator_t2223 *, const MethodInfo*))Enumerator_VerifyState_m12115_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12116_gshared (Enumerator_t2223 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m12116(__this, method) (( void (*) (Enumerator_t2223 *, const MethodInfo*))Enumerator_VerifyCurrent_m12116_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m12117_gshared (Enumerator_t2223 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12117(__this, method) (( void (*) (Enumerator_t2223 *, const MethodInfo*))Enumerator_Dispose_m12117_gshared)(__this, method)
