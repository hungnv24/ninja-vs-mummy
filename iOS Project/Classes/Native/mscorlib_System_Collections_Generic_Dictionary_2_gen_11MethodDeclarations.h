#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2048;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t333;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2325;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t2051;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2055;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2030;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t2350;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t347;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2351;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t316;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2352;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t688;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m9807_gshared (Dictionary_2_t2048 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9807(__this, method) (( void (*) (Dictionary_2_t2048 *, const MethodInfo*))Dictionary_2__ctor_m9807_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9809_gshared (Dictionary_2_t2048 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9809(__this, ___comparer, method) (( void (*) (Dictionary_2_t2048 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9809_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m9811_gshared (Dictionary_2_t2048 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m9811(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2048 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9811_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m9812_gshared (Dictionary_2_t2048 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m9812(__this, ___capacity, method) (( void (*) (Dictionary_2_t2048 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9812_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9814_gshared (Dictionary_2_t2048 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9814(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2048 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9814_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m9816_gshared (Dictionary_2_t2048 * __this, SerializationInfo_t347 * ___info, StreamingContext_t348  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m9816(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2048 *, SerializationInfo_t347 *, StreamingContext_t348 , const MethodInfo*))Dictionary_2__ctor_m9816_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9818_gshared (Dictionary_2_t2048 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9818(__this, method) (( Object_t* (*) (Dictionary_2_t2048 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9818_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9820_gshared (Dictionary_2_t2048 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9820(__this, method) (( Object_t* (*) (Dictionary_2_t2048 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9820_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m9822_gshared (Dictionary_2_t2048 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9822(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2048 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9822_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m9824_gshared (Dictionary_2_t2048 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9824(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2048 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9824_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m9826_gshared (Dictionary_2_t2048 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m9826(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2048 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9826_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m9828_gshared (Dictionary_2_t2048 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m9828(__this, ___key, method) (( bool (*) (Dictionary_2_t2048 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9828_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m9830_gshared (Dictionary_2_t2048 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m9830(__this, ___key, method) (( void (*) (Dictionary_2_t2048 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9830_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9832_gshared (Dictionary_2_t2048 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9832(__this, method) (( Object_t * (*) (Dictionary_2_t2048 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9832_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9834_gshared (Dictionary_2_t2048 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9834(__this, method) (( bool (*) (Dictionary_2_t2048 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9834_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9836_gshared (Dictionary_2_t2048 * __this, KeyValuePair_2_t2049  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9836(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2048 *, KeyValuePair_2_t2049 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9836_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9838_gshared (Dictionary_2_t2048 * __this, KeyValuePair_2_t2049  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9838(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2048 *, KeyValuePair_2_t2049 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9838_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9840_gshared (Dictionary_2_t2048 * __this, KeyValuePair_2U5BU5D_t2351* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9840(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2048 *, KeyValuePair_2U5BU5D_t2351*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9840_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9842_gshared (Dictionary_2_t2048 * __this, KeyValuePair_2_t2049  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9842(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2048 *, KeyValuePair_2_t2049 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9842_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m9844_gshared (Dictionary_2_t2048 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9844(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2048 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9844_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9846_gshared (Dictionary_2_t2048 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9846(__this, method) (( Object_t * (*) (Dictionary_2_t2048 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9846_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9848_gshared (Dictionary_2_t2048 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9848(__this, method) (( Object_t* (*) (Dictionary_2_t2048 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9848_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9850_gshared (Dictionary_2_t2048 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9850(__this, method) (( Object_t * (*) (Dictionary_2_t2048 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9850_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m9852_gshared (Dictionary_2_t2048 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m9852(__this, method) (( int32_t (*) (Dictionary_2_t2048 *, const MethodInfo*))Dictionary_2_get_Count_m9852_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m9854_gshared (Dictionary_2_t2048 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m9854(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2048 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m9854_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m9856_gshared (Dictionary_2_t2048 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m9856(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2048 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m9856_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m9858_gshared (Dictionary_2_t2048 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m9858(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2048 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9858_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m9860_gshared (Dictionary_2_t2048 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m9860(__this, ___size, method) (( void (*) (Dictionary_2_t2048 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9860_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m9862_gshared (Dictionary_2_t2048 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m9862(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2048 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9862_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2049  Dictionary_2_make_pair_m9864_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m9864(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2049  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m9864_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m9866_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m9866(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m9866_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m9868_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m9868(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m9868_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m9870_gshared (Dictionary_2_t2048 * __this, KeyValuePair_2U5BU5D_t2351* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m9870(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2048 *, KeyValuePair_2U5BU5D_t2351*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9870_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m9872_gshared (Dictionary_2_t2048 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m9872(__this, method) (( void (*) (Dictionary_2_t2048 *, const MethodInfo*))Dictionary_2_Resize_m9872_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m9874_gshared (Dictionary_2_t2048 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m9874(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2048 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m9874_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m9876_gshared (Dictionary_2_t2048 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m9876(__this, method) (( void (*) (Dictionary_2_t2048 *, const MethodInfo*))Dictionary_2_Clear_m9876_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m9878_gshared (Dictionary_2_t2048 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m9878(__this, ___key, method) (( bool (*) (Dictionary_2_t2048 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m9878_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m9880_gshared (Dictionary_2_t2048 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m9880(__this, ___value, method) (( bool (*) (Dictionary_2_t2048 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m9880_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m9882_gshared (Dictionary_2_t2048 * __this, SerializationInfo_t347 * ___info, StreamingContext_t348  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m9882(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2048 *, SerializationInfo_t347 *, StreamingContext_t348 , const MethodInfo*))Dictionary_2_GetObjectData_m9882_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m9884_gshared (Dictionary_2_t2048 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m9884(__this, ___sender, method) (( void (*) (Dictionary_2_t2048 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9884_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m9886_gshared (Dictionary_2_t2048 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m9886(__this, ___key, method) (( bool (*) (Dictionary_2_t2048 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m9886_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m9888_gshared (Dictionary_2_t2048 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m9888(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2048 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m9888_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t2051 * Dictionary_2_get_Keys_m9890_gshared (Dictionary_2_t2048 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m9890(__this, method) (( KeyCollection_t2051 * (*) (Dictionary_2_t2048 *, const MethodInfo*))Dictionary_2_get_Keys_m9890_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2055 * Dictionary_2_get_Values_m9892_gshared (Dictionary_2_t2048 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m9892(__this, method) (( ValueCollection_t2055 * (*) (Dictionary_2_t2048 *, const MethodInfo*))Dictionary_2_get_Values_m9892_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m9894_gshared (Dictionary_2_t2048 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m9894(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2048 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9894_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m9896_gshared (Dictionary_2_t2048 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m9896(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2048 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9896_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m9898_gshared (Dictionary_2_t2048 * __this, KeyValuePair_2_t2049  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m9898(__this, ___pair, method) (( bool (*) (Dictionary_2_t2048 *, KeyValuePair_2_t2049 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9898_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2053  Dictionary_2_GetEnumerator_m9900_gshared (Dictionary_2_t2048 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m9900(__this, method) (( Enumerator_t2053  (*) (Dictionary_2_t2048 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9900_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t689  Dictionary_2_U3CCopyToU3Em__0_m9902_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m9902(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t689  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9902_gshared)(__this /* static, unused */, ___key, ___value, method)
