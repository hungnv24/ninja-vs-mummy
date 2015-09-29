#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t2149;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t333;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t2147;
// System.Collections.IEnumerator
struct IEnumerator_t316;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2169;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2343;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m11135_gshared (ThreadSafeDictionary_2_t2149 * __this, ThreadSafeDictionaryValueFactory_2_t2147 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m11135(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t2149 *, ThreadSafeDictionaryValueFactory_2_t2147 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m11135_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m11137_gshared (ThreadSafeDictionary_2_t2149 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m11137(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2149 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m11137_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m11139_gshared (ThreadSafeDictionary_2_t2149 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m11139(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2149 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m11139_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m11141_gshared (ThreadSafeDictionary_2_t2149 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m11141(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2149 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m11141_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m11143_gshared (ThreadSafeDictionary_2_t2149 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m11143(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2149 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m11143_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m11145_gshared (ThreadSafeDictionary_2_t2149 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m11145(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2149 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m11145_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m11147_gshared (ThreadSafeDictionary_2_t2149 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m11147(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t2149 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m11147_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m11149_gshared (ThreadSafeDictionary_2_t2149 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m11149(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t2149 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m11149_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m11151_gshared (ThreadSafeDictionary_2_t2149 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m11151(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2149 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m11151_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m11153_gshared (ThreadSafeDictionary_2_t2149 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m11153(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2149 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m11153_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m11155_gshared (ThreadSafeDictionary_2_t2149 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m11155(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2149 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m11155_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m11157_gshared (ThreadSafeDictionary_2_t2149 * __this, KeyValuePair_2_t2033  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m11157(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t2149 *, KeyValuePair_2_t2033 , const MethodInfo*))ThreadSafeDictionary_2_Add_m11157_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m11159_gshared (ThreadSafeDictionary_2_t2149 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m11159(__this, method) (( void (*) (ThreadSafeDictionary_2_t2149 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m11159_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m11161_gshared (ThreadSafeDictionary_2_t2149 * __this, KeyValuePair_2_t2033  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m11161(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2149 *, KeyValuePair_2_t2033 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m11161_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m11163_gshared (ThreadSafeDictionary_2_t2149 * __this, KeyValuePair_2U5BU5D_t2169* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m11163(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t2149 *, KeyValuePair_2U5BU5D_t2169*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m11163_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m11165_gshared (ThreadSafeDictionary_2_t2149 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m11165(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t2149 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m11165_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m11167_gshared (ThreadSafeDictionary_2_t2149 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m11167(__this, method) (( bool (*) (ThreadSafeDictionary_2_t2149 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m11167_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m11169_gshared (ThreadSafeDictionary_2_t2149 * __this, KeyValuePair_2_t2033  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m11169(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2149 *, KeyValuePair_2_t2033 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m11169_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m11171_gshared (ThreadSafeDictionary_2_t2149 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m11171(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2149 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m11171_gshared)(__this, method)
