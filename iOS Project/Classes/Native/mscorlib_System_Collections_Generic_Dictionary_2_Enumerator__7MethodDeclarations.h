#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t2099;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2093;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m10565_gshared (Enumerator_t2099 * __this, Dictionary_2_t2093 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m10565(__this, ___dictionary, method) (( void (*) (Enumerator_t2099 *, Dictionary_2_t2093 *, const MethodInfo*))Enumerator__ctor_m10565_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m10566_gshared (Enumerator_t2099 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m10566(__this, method) (( Object_t * (*) (Enumerator_t2099 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m10566_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t689  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10567_gshared (Enumerator_t2099 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10567(__this, method) (( DictionaryEntry_t689  (*) (Enumerator_t2099 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10567_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10568_gshared (Enumerator_t2099 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10568(__this, method) (( Object_t * (*) (Enumerator_t2099 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10568_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10569_gshared (Enumerator_t2099 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10569(__this, method) (( Object_t * (*) (Enumerator_t2099 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10569_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m10570_gshared (Enumerator_t2099 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m10570(__this, method) (( bool (*) (Enumerator_t2099 *, const MethodInfo*))Enumerator_MoveNext_m10570_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t2094  Enumerator_get_Current_m10571_gshared (Enumerator_t2099 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m10571(__this, method) (( KeyValuePair_2_t2094  (*) (Enumerator_t2099 *, const MethodInfo*))Enumerator_get_Current_m10571_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m10572_gshared (Enumerator_t2099 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m10572(__this, method) (( Object_t * (*) (Enumerator_t2099 *, const MethodInfo*))Enumerator_get_CurrentKey_m10572_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m10573_gshared (Enumerator_t2099 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m10573(__this, method) (( int64_t (*) (Enumerator_t2099 *, const MethodInfo*))Enumerator_get_CurrentValue_m10573_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m10574_gshared (Enumerator_t2099 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m10574(__this, method) (( void (*) (Enumerator_t2099 *, const MethodInfo*))Enumerator_VerifyState_m10574_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m10575_gshared (Enumerator_t2099 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m10575(__this, method) (( void (*) (Enumerator_t2099 *, const MethodInfo*))Enumerator_VerifyCurrent_m10575_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m10576_gshared (Enumerator_t2099 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m10576(__this, method) (( void (*) (Enumerator_t2099 *, const MethodInfo*))Enumerator_Dispose_m10576_gshared)(__this, method)
