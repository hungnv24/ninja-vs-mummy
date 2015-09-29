#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t2123;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t2381;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t333;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
struct KeyCollection_t2127;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
struct ValueCollection_t2131;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t2121;
// System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>
struct IDictionary_2_t2382;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t347;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>[]
struct KeyValuePair_2U5BU5D_t2383;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t316;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct IEnumerator_1_t2384;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t688;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m10754_gshared (Dictionary_2_t2123 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m10754(__this, method) (( void (*) (Dictionary_2_t2123 *, const MethodInfo*))Dictionary_2__ctor_m10754_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10756_gshared (Dictionary_2_t2123 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10756(__this, ___comparer, method) (( void (*) (Dictionary_2_t2123 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10756_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m10758_gshared (Dictionary_2_t2123 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m10758(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2123 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10758_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m10760_gshared (Dictionary_2_t2123 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m10760(__this, ___capacity, method) (( void (*) (Dictionary_2_t2123 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m10760_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10762_gshared (Dictionary_2_t2123 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10762(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2123 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10762_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m10764_gshared (Dictionary_2_t2123 * __this, SerializationInfo_t347 * ___info, StreamingContext_t348  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m10764(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2123 *, SerializationInfo_t347 *, StreamingContext_t348 , const MethodInfo*))Dictionary_2__ctor_m10764_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10766_gshared (Dictionary_2_t2123 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10766(__this, method) (( Object_t* (*) (Dictionary_2_t2123 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10766_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10768_gshared (Dictionary_2_t2123 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10768(__this, method) (( Object_t* (*) (Dictionary_2_t2123 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10768_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m10770_gshared (Dictionary_2_t2123 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m10770(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2123 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m10770_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m10772_gshared (Dictionary_2_t2123 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m10772(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2123 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m10772_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m10774_gshared (Dictionary_2_t2123 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m10774(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2123 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m10774_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m10776_gshared (Dictionary_2_t2123 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m10776(__this, ___key, method) (( bool (*) (Dictionary_2_t2123 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m10776_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m10778_gshared (Dictionary_2_t2123 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m10778(__this, ___key, method) (( void (*) (Dictionary_2_t2123 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m10778_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10780_gshared (Dictionary_2_t2123 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10780(__this, method) (( Object_t * (*) (Dictionary_2_t2123 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10780_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10782_gshared (Dictionary_2_t2123 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10782(__this, method) (( bool (*) (Dictionary_2_t2123 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10782_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10784_gshared (Dictionary_2_t2123 * __this, KeyValuePair_2_t2124  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10784(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2123 *, KeyValuePair_2_t2124 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10784_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10786_gshared (Dictionary_2_t2123 * __this, KeyValuePair_2_t2124  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10786(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2123 *, KeyValuePair_2_t2124 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10786_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10788_gshared (Dictionary_2_t2123 * __this, KeyValuePair_2U5BU5D_t2383* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10788(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2123 *, KeyValuePair_2U5BU5D_t2383*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10788_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10790_gshared (Dictionary_2_t2123 * __this, KeyValuePair_2_t2124  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10790(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2123 *, KeyValuePair_2_t2124 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10790_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m10792_gshared (Dictionary_2_t2123 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m10792(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2123 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m10792_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10794_gshared (Dictionary_2_t2123 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10794(__this, method) (( Object_t * (*) (Dictionary_2_t2123 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10794_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10796_gshared (Dictionary_2_t2123 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10796(__this, method) (( Object_t* (*) (Dictionary_2_t2123 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10796_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10798_gshared (Dictionary_2_t2123 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10798(__this, method) (( Object_t * (*) (Dictionary_2_t2123 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10798_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m10800_gshared (Dictionary_2_t2123 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m10800(__this, method) (( int32_t (*) (Dictionary_2_t2123 *, const MethodInfo*))Dictionary_2_get_Count_m10800_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m10802_gshared (Dictionary_2_t2123 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m10802(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2123 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m10802_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m10804_gshared (Dictionary_2_t2123 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m10804(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2123 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m10804_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m10806_gshared (Dictionary_2_t2123 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m10806(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2123 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m10806_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m10808_gshared (Dictionary_2_t2123 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m10808(__this, ___size, method) (( void (*) (Dictionary_2_t2123 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m10808_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m10810_gshared (Dictionary_2_t2123 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m10810(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2123 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m10810_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2124  Dictionary_2_make_pair_m10812_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m10812(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2124  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m10812_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m10814_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m10814(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m10814_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m10816_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m10816(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m10816_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m10818_gshared (Dictionary_2_t2123 * __this, KeyValuePair_2U5BU5D_t2383* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m10818(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2123 *, KeyValuePair_2U5BU5D_t2383*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m10818_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m10820_gshared (Dictionary_2_t2123 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m10820(__this, method) (( void (*) (Dictionary_2_t2123 *, const MethodInfo*))Dictionary_2_Resize_m10820_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m10822_gshared (Dictionary_2_t2123 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m10822(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2123 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m10822_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m10824_gshared (Dictionary_2_t2123 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m10824(__this, method) (( void (*) (Dictionary_2_t2123 *, const MethodInfo*))Dictionary_2_Clear_m10824_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m10826_gshared (Dictionary_2_t2123 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m10826(__this, ___key, method) (( bool (*) (Dictionary_2_t2123 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m10826_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m10828_gshared (Dictionary_2_t2123 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m10828(__this, ___value, method) (( bool (*) (Dictionary_2_t2123 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m10828_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m10830_gshared (Dictionary_2_t2123 * __this, SerializationInfo_t347 * ___info, StreamingContext_t348  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m10830(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2123 *, SerializationInfo_t347 *, StreamingContext_t348 , const MethodInfo*))Dictionary_2_GetObjectData_m10830_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m10832_gshared (Dictionary_2_t2123 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m10832(__this, ___sender, method) (( void (*) (Dictionary_2_t2123 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m10832_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m10834_gshared (Dictionary_2_t2123 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m10834(__this, ___key, method) (( bool (*) (Dictionary_2_t2123 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m10834_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m10836_gshared (Dictionary_2_t2123 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m10836(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2123 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m10836_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Keys()
extern "C" KeyCollection_t2127 * Dictionary_2_get_Keys_m10838_gshared (Dictionary_2_t2123 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m10838(__this, method) (( KeyCollection_t2127 * (*) (Dictionary_2_t2123 *, const MethodInfo*))Dictionary_2_get_Keys_m10838_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Values()
extern "C" ValueCollection_t2131 * Dictionary_2_get_Values_m10840_gshared (Dictionary_2_t2123 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m10840(__this, method) (( ValueCollection_t2131 * (*) (Dictionary_2_t2123 *, const MethodInfo*))Dictionary_2_get_Values_m10840_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m10842_gshared (Dictionary_2_t2123 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m10842(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t2123 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m10842_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m10844_gshared (Dictionary_2_t2123 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m10844(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2123 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m10844_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m10846_gshared (Dictionary_2_t2123 * __this, KeyValuePair_2_t2124  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m10846(__this, ___pair, method) (( bool (*) (Dictionary_2_t2123 *, KeyValuePair_2_t2124 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m10846_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t2129  Dictionary_2_GetEnumerator_m10848_gshared (Dictionary_2_t2123 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m10848(__this, method) (( Enumerator_t2129  (*) (Dictionary_2_t2123 *, const MethodInfo*))Dictionary_2_GetEnumerator_m10848_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t689  Dictionary_2_U3CCopyToU3Em__0_m10850_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m10850(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t689  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m10850_gshared)(__this /* static, unused */, ___key, ___value, method)
