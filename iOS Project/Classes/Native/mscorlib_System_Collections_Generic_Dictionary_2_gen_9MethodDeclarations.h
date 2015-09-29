#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2005;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2325;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t333;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t2010;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t2014;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2002;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t2330;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t347;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2331;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t316;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2332;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t688;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m9289_gshared (Dictionary_2_t2005 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9289(__this, method) (( void (*) (Dictionary_2_t2005 *, const MethodInfo*))Dictionary_2__ctor_m9289_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9291_gshared (Dictionary_2_t2005 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9291(__this, ___comparer, method) (( void (*) (Dictionary_2_t2005 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9291_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m9293_gshared (Dictionary_2_t2005 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m9293(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2005 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9293_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m9295_gshared (Dictionary_2_t2005 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m9295(__this, ___capacity, method) (( void (*) (Dictionary_2_t2005 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9295_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9297_gshared (Dictionary_2_t2005 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9297(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2005 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9297_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m9299_gshared (Dictionary_2_t2005 * __this, SerializationInfo_t347 * ___info, StreamingContext_t348  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m9299(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2005 *, SerializationInfo_t347 *, StreamingContext_t348 , const MethodInfo*))Dictionary_2__ctor_m9299_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9301_gshared (Dictionary_2_t2005 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9301(__this, method) (( Object_t* (*) (Dictionary_2_t2005 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9301_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9303_gshared (Dictionary_2_t2005 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9303(__this, method) (( Object_t* (*) (Dictionary_2_t2005 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9303_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m9305_gshared (Dictionary_2_t2005 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9305(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2005 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9305_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m9307_gshared (Dictionary_2_t2005 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9307(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2005 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9307_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m9309_gshared (Dictionary_2_t2005 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m9309(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2005 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9309_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m9311_gshared (Dictionary_2_t2005 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m9311(__this, ___key, method) (( bool (*) (Dictionary_2_t2005 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9311_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m9313_gshared (Dictionary_2_t2005 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m9313(__this, ___key, method) (( void (*) (Dictionary_2_t2005 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9313_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9315_gshared (Dictionary_2_t2005 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9315(__this, method) (( Object_t * (*) (Dictionary_2_t2005 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9315_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9317_gshared (Dictionary_2_t2005 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9317(__this, method) (( bool (*) (Dictionary_2_t2005 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9317_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9319_gshared (Dictionary_2_t2005 * __this, KeyValuePair_2_t2006  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9319(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2005 *, KeyValuePair_2_t2006 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9319_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9321_gshared (Dictionary_2_t2005 * __this, KeyValuePair_2_t2006  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9321(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2005 *, KeyValuePair_2_t2006 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9321_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9323_gshared (Dictionary_2_t2005 * __this, KeyValuePair_2U5BU5D_t2331* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9323(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2005 *, KeyValuePair_2U5BU5D_t2331*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9323_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9325_gshared (Dictionary_2_t2005 * __this, KeyValuePair_2_t2006  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9325(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2005 *, KeyValuePair_2_t2006 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9325_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m9327_gshared (Dictionary_2_t2005 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9327(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2005 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9327_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9329_gshared (Dictionary_2_t2005 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9329(__this, method) (( Object_t * (*) (Dictionary_2_t2005 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9329_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9331_gshared (Dictionary_2_t2005 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9331(__this, method) (( Object_t* (*) (Dictionary_2_t2005 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9331_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9333_gshared (Dictionary_2_t2005 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9333(__this, method) (( Object_t * (*) (Dictionary_2_t2005 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9333_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m9335_gshared (Dictionary_2_t2005 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m9335(__this, method) (( int32_t (*) (Dictionary_2_t2005 *, const MethodInfo*))Dictionary_2_get_Count_m9335_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m9337_gshared (Dictionary_2_t2005 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m9337(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2005 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m9337_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m9339_gshared (Dictionary_2_t2005 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m9339(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2005 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m9339_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m9341_gshared (Dictionary_2_t2005 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m9341(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2005 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9341_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m9343_gshared (Dictionary_2_t2005 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m9343(__this, ___size, method) (( void (*) (Dictionary_2_t2005 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9343_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m9345_gshared (Dictionary_2_t2005 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m9345(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2005 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9345_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2006  Dictionary_2_make_pair_m9347_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m9347(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2006  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m9347_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m9349_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m9349(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m9349_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m9351_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m9351(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m9351_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m9353_gshared (Dictionary_2_t2005 * __this, KeyValuePair_2U5BU5D_t2331* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m9353(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2005 *, KeyValuePair_2U5BU5D_t2331*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9353_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m9355_gshared (Dictionary_2_t2005 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m9355(__this, method) (( void (*) (Dictionary_2_t2005 *, const MethodInfo*))Dictionary_2_Resize_m9355_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m9357_gshared (Dictionary_2_t2005 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m9357(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2005 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m9357_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m9359_gshared (Dictionary_2_t2005 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m9359(__this, method) (( void (*) (Dictionary_2_t2005 *, const MethodInfo*))Dictionary_2_Clear_m9359_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m9361_gshared (Dictionary_2_t2005 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m9361(__this, ___key, method) (( bool (*) (Dictionary_2_t2005 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m9361_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m9363_gshared (Dictionary_2_t2005 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m9363(__this, ___value, method) (( bool (*) (Dictionary_2_t2005 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m9363_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m9365_gshared (Dictionary_2_t2005 * __this, SerializationInfo_t347 * ___info, StreamingContext_t348  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m9365(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2005 *, SerializationInfo_t347 *, StreamingContext_t348 , const MethodInfo*))Dictionary_2_GetObjectData_m9365_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m9367_gshared (Dictionary_2_t2005 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m9367(__this, ___sender, method) (( void (*) (Dictionary_2_t2005 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9367_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m9369_gshared (Dictionary_2_t2005 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m9369(__this, ___key, method) (( bool (*) (Dictionary_2_t2005 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m9369_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m9371_gshared (Dictionary_2_t2005 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m9371(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2005 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m9371_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t2010 * Dictionary_2_get_Keys_m9373_gshared (Dictionary_2_t2005 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m9373(__this, method) (( KeyCollection_t2010 * (*) (Dictionary_2_t2005 *, const MethodInfo*))Dictionary_2_get_Keys_m9373_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t2014 * Dictionary_2_get_Values_m9375_gshared (Dictionary_2_t2005 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m9375(__this, method) (( ValueCollection_t2014 * (*) (Dictionary_2_t2005 *, const MethodInfo*))Dictionary_2_get_Values_m9375_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m9377_gshared (Dictionary_2_t2005 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m9377(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2005 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9377_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m9379_gshared (Dictionary_2_t2005 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m9379(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2005 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9379_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m9381_gshared (Dictionary_2_t2005 * __this, KeyValuePair_2_t2006  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m9381(__this, ___pair, method) (( bool (*) (Dictionary_2_t2005 *, KeyValuePair_2_t2006 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9381_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2012  Dictionary_2_GetEnumerator_m9383_gshared (Dictionary_2_t2005 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m9383(__this, method) (( Enumerator_t2012  (*) (Dictionary_2_t2005 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9383_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t689  Dictionary_2_U3CCopyToU3Em__0_m9385_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m9385(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t689  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9385_gshared)(__this /* static, unused */, ___key, ___value, method)
