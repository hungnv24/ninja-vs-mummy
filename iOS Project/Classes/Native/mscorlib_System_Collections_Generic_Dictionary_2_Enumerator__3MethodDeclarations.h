#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t2037;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2032;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m9706_gshared (Enumerator_t2037 * __this, Dictionary_2_t2032 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m9706(__this, ___dictionary, method) (( void (*) (Enumerator_t2037 *, Dictionary_2_t2032 *, const MethodInfo*))Enumerator__ctor_m9706_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m9707_gshared (Enumerator_t2037 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m9707(__this, method) (( Object_t * (*) (Enumerator_t2037 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m9707_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t689  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9708_gshared (Enumerator_t2037 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9708(__this, method) (( DictionaryEntry_t689  (*) (Enumerator_t2037 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9708_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9709_gshared (Enumerator_t2037 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9709(__this, method) (( Object_t * (*) (Enumerator_t2037 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9709_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9710_gshared (Enumerator_t2037 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9710(__this, method) (( Object_t * (*) (Enumerator_t2037 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9710_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m9711_gshared (Enumerator_t2037 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m9711(__this, method) (( bool (*) (Enumerator_t2037 *, const MethodInfo*))Enumerator_MoveNext_m9711_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2033  Enumerator_get_Current_m9712_gshared (Enumerator_t2037 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m9712(__this, method) (( KeyValuePair_2_t2033  (*) (Enumerator_t2037 *, const MethodInfo*))Enumerator_get_Current_m9712_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m9713_gshared (Enumerator_t2037 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m9713(__this, method) (( Object_t * (*) (Enumerator_t2037 *, const MethodInfo*))Enumerator_get_CurrentKey_m9713_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m9714_gshared (Enumerator_t2037 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m9714(__this, method) (( Object_t * (*) (Enumerator_t2037 *, const MethodInfo*))Enumerator_get_CurrentValue_m9714_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m9715_gshared (Enumerator_t2037 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m9715(__this, method) (( void (*) (Enumerator_t2037 *, const MethodInfo*))Enumerator_VerifyState_m9715_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m9716_gshared (Enumerator_t2037 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m9716(__this, method) (( void (*) (Enumerator_t2037 *, const MethodInfo*))Enumerator_VerifyCurrent_m9716_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m9717_gshared (Enumerator_t2037 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m9717(__this, method) (( void (*) (Enumerator_t2037 *, const MethodInfo*))Enumerator_Dispose_m9717_gshared)(__this, method)
