#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2171;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t333;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t2419;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct KeyCollection_t2172;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ValueCollection_t2176;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2030;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IDictionary_2_t2420;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t347;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t2421;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t316;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
struct IEnumerator_1_t2422;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t688;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void Dictionary_2__ctor_m11473_gshared (Dictionary_2_t2171 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11473(__this, method) (( void (*) (Dictionary_2_t2171 *, const MethodInfo*))Dictionary_2__ctor_m11473_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11475_gshared (Dictionary_2_t2171 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11475(__this, ___comparer, method) (( void (*) (Dictionary_2_t2171 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11475_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m11477_gshared (Dictionary_2_t2171 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m11477(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2171 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11477_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11479_gshared (Dictionary_2_t2171 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11479(__this, ___capacity, method) (( void (*) (Dictionary_2_t2171 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11479_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11481_gshared (Dictionary_2_t2171 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11481(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2171 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11481_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11483_gshared (Dictionary_2_t2171 * __this, SerializationInfo_t347 * ___info, StreamingContext_t348  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11483(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2171 *, SerializationInfo_t347 *, StreamingContext_t348 , const MethodInfo*))Dictionary_2__ctor_m11483_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11485_gshared (Dictionary_2_t2171 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11485(__this, method) (( Object_t* (*) (Dictionary_2_t2171 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11485_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11487_gshared (Dictionary_2_t2171 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11487(__this, method) (( Object_t* (*) (Dictionary_2_t2171 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11487_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11489_gshared (Dictionary_2_t2171 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11489(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2171 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11489_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11491_gshared (Dictionary_2_t2171 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11491(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2171 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11491_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11493_gshared (Dictionary_2_t2171 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11493(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2171 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11493_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11495_gshared (Dictionary_2_t2171 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11495(__this, ___key, method) (( bool (*) (Dictionary_2_t2171 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11495_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11497_gshared (Dictionary_2_t2171 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11497(__this, ___key, method) (( void (*) (Dictionary_2_t2171 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11497_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11499_gshared (Dictionary_2_t2171 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11499(__this, method) (( Object_t * (*) (Dictionary_2_t2171 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11501_gshared (Dictionary_2_t2171 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11501(__this, method) (( bool (*) (Dictionary_2_t2171 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11501_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11503_gshared (Dictionary_2_t2171 * __this, KeyValuePair_2_t2145  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11503(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2171 *, KeyValuePair_2_t2145 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11503_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11505_gshared (Dictionary_2_t2171 * __this, KeyValuePair_2_t2145  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11505(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2171 *, KeyValuePair_2_t2145 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11505_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11507_gshared (Dictionary_2_t2171 * __this, KeyValuePair_2U5BU5D_t2421* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11507(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2171 *, KeyValuePair_2U5BU5D_t2421*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11507_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11509_gshared (Dictionary_2_t2171 * __this, KeyValuePair_2_t2145  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11509(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2171 *, KeyValuePair_2_t2145 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11509_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11511_gshared (Dictionary_2_t2171 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11511(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2171 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11511_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11513_gshared (Dictionary_2_t2171 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11513(__this, method) (( Object_t * (*) (Dictionary_2_t2171 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11513_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11515_gshared (Dictionary_2_t2171 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11515(__this, method) (( Object_t* (*) (Dictionary_2_t2171 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11515_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11517_gshared (Dictionary_2_t2171 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11517(__this, method) (( Object_t * (*) (Dictionary_2_t2171 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11517_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11519_gshared (Dictionary_2_t2171 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11519(__this, method) (( int32_t (*) (Dictionary_2_t2171 *, const MethodInfo*))Dictionary_2_get_Count_m11519_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(TKey)
extern "C" KeyValuePair_2_t2033  Dictionary_2_get_Item_m11521_gshared (Dictionary_2_t2171 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11521(__this, ___key, method) (( KeyValuePair_2_t2033  (*) (Dictionary_2_t2171 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m11521_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11523_gshared (Dictionary_2_t2171 * __this, Object_t * ___key, KeyValuePair_2_t2033  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11523(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2171 *, Object_t *, KeyValuePair_2_t2033 , const MethodInfo*))Dictionary_2_set_Item_m11523_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11525_gshared (Dictionary_2_t2171 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11525(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2171 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11525_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11527_gshared (Dictionary_2_t2171 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11527(__this, ___size, method) (( void (*) (Dictionary_2_t2171 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11527_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11529_gshared (Dictionary_2_t2171 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11529(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2171 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11529_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2145  Dictionary_2_make_pair_m11531_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2033  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11531(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2145  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2033 , const MethodInfo*))Dictionary_2_make_pair_m11531_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m11533_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2033  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m11533(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2033 , const MethodInfo*))Dictionary_2_pick_key_m11533_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_value(TKey,TValue)
extern "C" KeyValuePair_2_t2033  Dictionary_2_pick_value_m11535_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2033  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11535(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2033  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2033 , const MethodInfo*))Dictionary_2_pick_value_m11535_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11537_gshared (Dictionary_2_t2171 * __this, KeyValuePair_2U5BU5D_t2421* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11537(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2171 *, KeyValuePair_2U5BU5D_t2421*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11537_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Resize()
extern "C" void Dictionary_2_Resize_m11539_gshared (Dictionary_2_t2171 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11539(__this, method) (( void (*) (Dictionary_2_t2171 *, const MethodInfo*))Dictionary_2_Resize_m11539_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11541_gshared (Dictionary_2_t2171 * __this, Object_t * ___key, KeyValuePair_2_t2033  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11541(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2171 *, Object_t *, KeyValuePair_2_t2033 , const MethodInfo*))Dictionary_2_Add_m11541_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void Dictionary_2_Clear_m11543_gshared (Dictionary_2_t2171 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11543(__this, method) (( void (*) (Dictionary_2_t2171 *, const MethodInfo*))Dictionary_2_Clear_m11543_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11545_gshared (Dictionary_2_t2171 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11545(__this, ___key, method) (( bool (*) (Dictionary_2_t2171 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m11545_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11547_gshared (Dictionary_2_t2171 * __this, KeyValuePair_2_t2033  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11547(__this, ___value, method) (( bool (*) (Dictionary_2_t2171 *, KeyValuePair_2_t2033 , const MethodInfo*))Dictionary_2_ContainsValue_m11547_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11549_gshared (Dictionary_2_t2171 * __this, SerializationInfo_t347 * ___info, StreamingContext_t348  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11549(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2171 *, SerializationInfo_t347 *, StreamingContext_t348 , const MethodInfo*))Dictionary_2_GetObjectData_m11549_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11551_gshared (Dictionary_2_t2171 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11551(__this, ___sender, method) (( void (*) (Dictionary_2_t2171 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11551_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11553_gshared (Dictionary_2_t2171 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11553(__this, ___key, method) (( bool (*) (Dictionary_2_t2171 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m11553_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11555_gshared (Dictionary_2_t2171 * __this, Object_t * ___key, KeyValuePair_2_t2033 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11555(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2171 *, Object_t *, KeyValuePair_2_t2033 *, const MethodInfo*))Dictionary_2_TryGetValue_m11555_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Keys()
extern "C" KeyCollection_t2172 * Dictionary_2_get_Keys_m11557_gshared (Dictionary_2_t2171 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m11557(__this, method) (( KeyCollection_t2172 * (*) (Dictionary_2_t2171 *, const MethodInfo*))Dictionary_2_get_Keys_m11557_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Values()
extern "C" ValueCollection_t2176 * Dictionary_2_get_Values_m11559_gshared (Dictionary_2_t2171 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11559(__this, method) (( ValueCollection_t2176 * (*) (Dictionary_2_t2171 *, const MethodInfo*))Dictionary_2_get_Values_m11559_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m11561_gshared (Dictionary_2_t2171 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11561(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2171 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11561_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTValue(System.Object)
extern "C" KeyValuePair_2_t2033  Dictionary_2_ToTValue_m11563_gshared (Dictionary_2_t2171 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11563(__this, ___value, method) (( KeyValuePair_2_t2033  (*) (Dictionary_2_t2171 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11563_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11565_gshared (Dictionary_2_t2171 * __this, KeyValuePair_2_t2145  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11565(__this, ___pair, method) (( bool (*) (Dictionary_2_t2171 *, KeyValuePair_2_t2145 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11565_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t2174  Dictionary_2_GetEnumerator_m11567_gshared (Dictionary_2_t2171 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11567(__this, method) (( Enumerator_t2174  (*) (Dictionary_2_t2171 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11567_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t689  Dictionary_2_U3CCopyToU3Em__0_m11569_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2033  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11569(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t689  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2033 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11569_gshared)(__this /* static, unused */, ___key, ___value, method)
