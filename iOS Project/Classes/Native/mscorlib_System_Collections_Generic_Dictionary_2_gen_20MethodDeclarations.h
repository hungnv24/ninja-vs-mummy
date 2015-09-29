#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t625;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2325;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t2244;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t2248;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2002;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t2450;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t347;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2451;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t316;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t2452;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t688;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_21.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__17.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m12237_gshared (Dictionary_2_t625 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12237(__this, method) (( void (*) (Dictionary_2_t625 *, const MethodInfo*))Dictionary_2__ctor_m12237_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12238_gshared (Dictionary_2_t625 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12238(__this, ___comparer, method) (( void (*) (Dictionary_2_t625 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12238_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m12239_gshared (Dictionary_2_t625 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m12239(__this, ___dictionary, method) (( void (*) (Dictionary_2_t625 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12239_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12240_gshared (Dictionary_2_t625 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12240(__this, ___capacity, method) (( void (*) (Dictionary_2_t625 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12240_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12241_gshared (Dictionary_2_t625 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12241(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t625 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12241_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12242_gshared (Dictionary_2_t625 * __this, SerializationInfo_t347 * ___info, StreamingContext_t348  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12242(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t625 *, SerializationInfo_t347 *, StreamingContext_t348 , const MethodInfo*))Dictionary_2__ctor_m12242_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12243_gshared (Dictionary_2_t625 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12243(__this, method) (( Object_t* (*) (Dictionary_2_t625 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12243_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12244_gshared (Dictionary_2_t625 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12244(__this, method) (( Object_t* (*) (Dictionary_2_t625 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12244_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12245_gshared (Dictionary_2_t625 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12245(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t625 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12245_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12246_gshared (Dictionary_2_t625 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12246(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t625 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12246_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12247_gshared (Dictionary_2_t625 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12247(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t625 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12247_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12248_gshared (Dictionary_2_t625 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12248(__this, ___key, method) (( bool (*) (Dictionary_2_t625 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12248_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12249_gshared (Dictionary_2_t625 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12249(__this, ___key, method) (( void (*) (Dictionary_2_t625 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12249_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12250_gshared (Dictionary_2_t625 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12250(__this, method) (( Object_t * (*) (Dictionary_2_t625 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12250_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12251_gshared (Dictionary_2_t625 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12251(__this, method) (( bool (*) (Dictionary_2_t625 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12251_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12252_gshared (Dictionary_2_t625 * __this, KeyValuePair_2_t2242  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12252(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t625 *, KeyValuePair_2_t2242 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12252_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12253_gshared (Dictionary_2_t625 * __this, KeyValuePair_2_t2242  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12253(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t625 *, KeyValuePair_2_t2242 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12253_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12254_gshared (Dictionary_2_t625 * __this, KeyValuePair_2U5BU5D_t2451* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12254(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t625 *, KeyValuePair_2U5BU5D_t2451*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12254_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12255_gshared (Dictionary_2_t625 * __this, KeyValuePair_2_t2242  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12255(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t625 *, KeyValuePair_2_t2242 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12255_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12256_gshared (Dictionary_2_t625 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12256(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t625 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12256_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12257_gshared (Dictionary_2_t625 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12257(__this, method) (( Object_t * (*) (Dictionary_2_t625 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12257_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12258_gshared (Dictionary_2_t625 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12258(__this, method) (( Object_t* (*) (Dictionary_2_t625 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12258_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12259_gshared (Dictionary_2_t625 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12259(__this, method) (( Object_t * (*) (Dictionary_2_t625 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12259_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12260_gshared (Dictionary_2_t625 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12260(__this, method) (( int32_t (*) (Dictionary_2_t625 *, const MethodInfo*))Dictionary_2_get_Count_m12260_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m12261_gshared (Dictionary_2_t625 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12261(__this, ___key, method) (( int32_t (*) (Dictionary_2_t625 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m12261_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12262_gshared (Dictionary_2_t625 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12262(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t625 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m12262_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12263_gshared (Dictionary_2_t625 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12263(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t625 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12263_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12264_gshared (Dictionary_2_t625 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12264(__this, ___size, method) (( void (*) (Dictionary_2_t625 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12264_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12265_gshared (Dictionary_2_t625 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12265(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t625 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12265_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2242  Dictionary_2_make_pair_m12266_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12266(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2242  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m12266_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m12267_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m12267(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m12267_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m12268_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12268(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m12268_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12269_gshared (Dictionary_2_t625 * __this, KeyValuePair_2U5BU5D_t2451* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12269(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t625 *, KeyValuePair_2U5BU5D_t2451*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12269_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m12270_gshared (Dictionary_2_t625 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12270(__this, method) (( void (*) (Dictionary_2_t625 *, const MethodInfo*))Dictionary_2_Resize_m12270_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12271_gshared (Dictionary_2_t625 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12271(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t625 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m12271_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m12272_gshared (Dictionary_2_t625 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12272(__this, method) (( void (*) (Dictionary_2_t625 *, const MethodInfo*))Dictionary_2_Clear_m12272_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12273_gshared (Dictionary_2_t625 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12273(__this, ___key, method) (( bool (*) (Dictionary_2_t625 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m12273_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12274_gshared (Dictionary_2_t625 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12274(__this, ___value, method) (( bool (*) (Dictionary_2_t625 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m12274_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12275_gshared (Dictionary_2_t625 * __this, SerializationInfo_t347 * ___info, StreamingContext_t348  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12275(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t625 *, SerializationInfo_t347 *, StreamingContext_t348 , const MethodInfo*))Dictionary_2_GetObjectData_m12275_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12276_gshared (Dictionary_2_t625 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12276(__this, ___sender, method) (( void (*) (Dictionary_2_t625 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12276_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12277_gshared (Dictionary_2_t625 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12277(__this, ___key, method) (( bool (*) (Dictionary_2_t625 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m12277_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12278_gshared (Dictionary_2_t625 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12278(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t625 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m12278_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t2244 * Dictionary_2_get_Keys_m12279_gshared (Dictionary_2_t625 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m12279(__this, method) (( KeyCollection_t2244 * (*) (Dictionary_2_t625 *, const MethodInfo*))Dictionary_2_get_Keys_m12279_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t2248 * Dictionary_2_get_Values_m12280_gshared (Dictionary_2_t625 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12280(__this, method) (( ValueCollection_t2248 * (*) (Dictionary_2_t625 *, const MethodInfo*))Dictionary_2_get_Values_m12280_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m12281_gshared (Dictionary_2_t625 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12281(__this, ___key, method) (( int32_t (*) (Dictionary_2_t625 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12281_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m12282_gshared (Dictionary_2_t625 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12282(__this, ___value, method) (( int32_t (*) (Dictionary_2_t625 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12282_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12283_gshared (Dictionary_2_t625 * __this, KeyValuePair_2_t2242  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12283(__this, ___pair, method) (( bool (*) (Dictionary_2_t625 *, KeyValuePair_2_t2242 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12283_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2246  Dictionary_2_GetEnumerator_m12284_gshared (Dictionary_2_t625 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12284(__this, method) (( Enumerator_t2246  (*) (Dictionary_2_t625 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12284_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t689  Dictionary_2_U3CCopyToU3Em__0_m12285_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12285(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t689  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12285_gshared)(__this /* static, unused */, ___key, ___value, method)
