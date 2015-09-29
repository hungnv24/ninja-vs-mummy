#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t143;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t145;
// System.Collections.Generic.IEnumerator`1<System.Byte[]>
struct IEnumerator_1_t2359;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t316;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t902;
// System.Collections.Generic.List`1/Enumerator<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"

// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m1386(__this, method) (( void (*) (List_1_t143 *, const MethodInfo*))List_1__ctor_m1425_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Int32)
#define List_1__ctor_m10175(__this, ___capacity, method) (( void (*) (List_1_t143 *, int32_t, const MethodInfo*))List_1__ctor_m9081_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.cctor()
#define List_1__cctor_m10176(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9083_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10177(__this, method) (( Object_t* (*) (List_1_t143 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1638_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m10178(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t143 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1623_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10179(__this, method) (( Object_t * (*) (List_1_t143 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1620_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m10180(__this, ___item, method) (( int32_t (*) (List_1_t143 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1626_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m10181(__this, ___item, method) (( bool (*) (List_1_t143 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1628_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m10182(__this, ___item, method) (( int32_t (*) (List_1_t143 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1629_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m10183(__this, ___index, ___item, method) (( void (*) (List_1_t143 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1630_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m10184(__this, ___item, method) (( void (*) (List_1_t143 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1631_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10185(__this, method) (( bool (*) (List_1_t143 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1633_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m10186(__this, method) (( Object_t * (*) (List_1_t143 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1622_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m10187(__this, ___index, method) (( Object_t * (*) (List_1_t143 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1624_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m10188(__this, ___index, ___value, method) (( void (*) (List_1_t143 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1625_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
#define List_1_Add_m10189(__this, ___item, method) (( void (*) (List_1_t143 *, ByteU5BU5D_t145*, const MethodInfo*))List_1_Add_m1634_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m10190(__this, ___newCount, method) (( void (*) (List_1_t143 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9098_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Clear()
#define List_1_Clear_m10191(__this, method) (( void (*) (List_1_t143 *, const MethodInfo*))List_1_Clear_m1627_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Contains(T)
#define List_1_Contains_m10192(__this, ___item, method) (( bool (*) (List_1_t143 *, ByteU5BU5D_t145*, const MethodInfo*))List_1_Contains_m1635_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m10193(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t143 *, ByteU5BU5DU5BU5D_t902*, int32_t, const MethodInfo*))List_1_CopyTo_m1636_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte[]>::GetEnumerator()
#define List_1_GetEnumerator_m10194(__this, method) (( Enumerator_t2071  (*) (List_1_t143 *, const MethodInfo*))List_1_GetEnumerator_m9103_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::IndexOf(T)
#define List_1_IndexOf_m10195(__this, ___item, method) (( int32_t (*) (List_1_t143 *, ByteU5BU5D_t145*, const MethodInfo*))List_1_IndexOf_m1639_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m10196(__this, ___start, ___delta, method) (( void (*) (List_1_t143 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9106_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m10197(__this, ___index, method) (( void (*) (List_1_t143 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9108_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Insert(System.Int32,T)
#define List_1_Insert_m10198(__this, ___index, ___item, method) (( void (*) (List_1_t143 *, int32_t, ByteU5BU5D_t145*, const MethodInfo*))List_1_Insert_m1640_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Remove(T)
#define List_1_Remove_m10199(__this, ___item, method) (( bool (*) (List_1_t143 *, ByteU5BU5D_t145*, const MethodInfo*))List_1_Remove_m1637_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m10200(__this, ___index, method) (( void (*) (List_1_t143 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1632_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Byte[]>::ToArray()
#define List_1_ToArray_m10201(__this, method) (( ByteU5BU5DU5BU5D_t902* (*) (List_1_t143 *, const MethodInfo*))List_1_ToArray_m9113_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Capacity()
#define List_1_get_Capacity_m10202(__this, method) (( int32_t (*) (List_1_t143 *, const MethodInfo*))List_1_get_Capacity_m9115_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m10203(__this, ___value, method) (( void (*) (List_1_t143 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9117_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count()
#define List_1_get_Count_m10204(__this, method) (( int32_t (*) (List_1_t143 *, const MethodInfo*))List_1_get_Count_m1621_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32)
#define List_1_get_Item_m10205(__this, ___index, method) (( ByteU5BU5D_t145* (*) (List_1_t143 *, int32_t, const MethodInfo*))List_1_get_Item_m1641_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Item(System.Int32,T)
#define List_1_set_Item_m10206(__this, ___index, ___value, method) (( void (*) (List_1_t143 *, int32_t, ByteU5BU5D_t145*, const MethodInfo*))List_1_set_Item_m1642_gshared)(__this, ___index, ___value, method)
