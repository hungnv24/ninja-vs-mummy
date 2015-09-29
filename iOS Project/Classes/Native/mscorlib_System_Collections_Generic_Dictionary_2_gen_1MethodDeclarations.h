#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t317;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t332;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2065;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t2066;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1962;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t380;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t347;
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>[]
struct KeyValuePair_2U5BU5D_t2355;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t316;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IEnumerator_1_t2356;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t688;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10MethodDeclarations.h"
#define Dictionary_2__ctor_m1381(__this, method) (( void (*) (Dictionary_2_t317 *, const MethodInfo*))Dictionary_2__ctor_m9582_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m10032(__this, ___comparer, method) (( void (*) (Dictionary_2_t317 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9583_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m10033(__this, ___dictionary, method) (( void (*) (Dictionary_2_t317 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9585_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Int32)
#define Dictionary_2__ctor_m10034(__this, ___capacity, method) (( void (*) (Dictionary_2_t317 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9587_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m10035(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t317 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9589_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m10036(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t317 *, SerializationInfo_t347 *, StreamingContext_t348 , const MethodInfo*))Dictionary_2__ctor_m9591_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10037(__this, method) (( Object_t* (*) (Dictionary_2_t317 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9593_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10038(__this, method) (( Object_t* (*) (Dictionary_2_t317 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9595_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m10039(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t317 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9597_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m10040(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t317 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9599_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m10041(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t317 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9601_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m10042(__this, ___key, method) (( bool (*) (Dictionary_2_t317 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9603_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m10043(__this, ___key, method) (( void (*) (Dictionary_2_t317 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9605_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10044(__this, method) (( Object_t * (*) (Dictionary_2_t317 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9607_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10045(__this, method) (( bool (*) (Dictionary_2_t317 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9609_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10046(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t317 *, KeyValuePair_2_t363 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9611_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10047(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t317 *, KeyValuePair_2_t363 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9613_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10048(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t317 *, KeyValuePair_2U5BU5D_t2355*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9615_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10049(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t317 *, KeyValuePair_2_t363 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9617_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m10050(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t317 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9619_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10051(__this, method) (( Object_t * (*) (Dictionary_2_t317 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9621_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10052(__this, method) (( Object_t* (*) (Dictionary_2_t317 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9623_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10053(__this, method) (( Object_t * (*) (Dictionary_2_t317 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9625_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count()
#define Dictionary_2_get_Count_m10054(__this, method) (( int32_t (*) (Dictionary_2_t317 *, const MethodInfo*))Dictionary_2_get_Count_m9627_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
#define Dictionary_2_get_Item_m10055(__this, ___key, method) (( String_t* (*) (Dictionary_2_t317 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m9629_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m10056(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t317 *, String_t*, String_t*, const MethodInfo*))Dictionary_2_set_Item_m9631_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m10057(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t317 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9633_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m10058(__this, ___size, method) (( void (*) (Dictionary_2_t317 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9635_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m10059(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t317 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9637_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m10060(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t363  (*) (Object_t * /* static, unused */, String_t*, String_t*, const MethodInfo*))Dictionary_2_make_pair_m9639_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.String>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m10061(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, String_t*, const MethodInfo*))Dictionary_2_pick_key_m9641_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m10062(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, String_t*, const MethodInfo*))Dictionary_2_pick_value_m9643_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m10063(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t317 *, KeyValuePair_2U5BU5D_t2355*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9645_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Resize()
#define Dictionary_2_Resize_m10064(__this, method) (( void (*) (Dictionary_2_t317 *, const MethodInfo*))Dictionary_2_Resize_m9647_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
#define Dictionary_2_Add_m10065(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t317 *, String_t*, String_t*, const MethodInfo*))Dictionary_2_Add_m9649_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Clear()
#define Dictionary_2_Clear_m10066(__this, method) (( void (*) (Dictionary_2_t317 *, const MethodInfo*))Dictionary_2_Clear_m9651_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m10067(__this, ___key, method) (( bool (*) (Dictionary_2_t317 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m9653_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m10068(__this, ___value, method) (( bool (*) (Dictionary_2_t317 *, String_t*, const MethodInfo*))Dictionary_2_ContainsValue_m9655_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m10069(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t317 *, SerializationInfo_t347 *, StreamingContext_t348 , const MethodInfo*))Dictionary_2_GetObjectData_m9657_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m10070(__this, ___sender, method) (( void (*) (Dictionary_2_t317 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9659_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::Remove(TKey)
#define Dictionary_2_Remove_m10071(__this, ___key, method) (( bool (*) (Dictionary_2_t317 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m9661_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m10072(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t317 *, String_t*, String_t**, const MethodInfo*))Dictionary_2_TryGetValue_m9663_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Keys()
#define Dictionary_2_get_Keys_m10073(__this, method) (( KeyCollection_t2065 * (*) (Dictionary_2_t317 *, const MethodInfo*))Dictionary_2_get_Keys_m9665_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Values()
#define Dictionary_2_get_Values_m10074(__this, method) (( ValueCollection_t2066 * (*) (Dictionary_2_t317 *, const MethodInfo*))Dictionary_2_get_Values_m9666_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.String>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m10075(__this, ___key, method) (( String_t* (*) (Dictionary_2_t317 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9668_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m10076(__this, ___value, method) (( String_t* (*) (Dictionary_2_t317 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9670_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m10077(__this, ___pair, method) (( bool (*) (Dictionary_2_t317 *, KeyValuePair_2_t363 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9672_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m1376(__this, method) (( Enumerator_t364  (*) (Dictionary_2_t317 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9674_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.String>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m10078(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t689  (*) (Object_t * /* static, unused */, String_t*, String_t*, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9676_gshared)(__this /* static, unused */, ___key, ___value, method)
