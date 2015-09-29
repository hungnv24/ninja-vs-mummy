#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t227;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t476;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t316;
// System.Object[]
struct ObjectU5BU5D_t29;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m1425_gshared (List_1_t227 * __this, const MethodInfo* method);
#define List_1__ctor_m1425(__this, method) (( void (*) (List_1_t227 *, const MethodInfo*))List_1__ctor_m1425_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m9081_gshared (List_1_t227 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m9081(__this, ___capacity, method) (( void (*) (List_1_t227 *, int32_t, const MethodInfo*))List_1__ctor_m9081_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m9083_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m9083(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9083_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1638_gshared (List_1_t227 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1638(__this, method) (( Object_t* (*) (List_1_t227 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1638_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m1623_gshared (List_1_t227 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m1623(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t227 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1623_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m1620_gshared (List_1_t227 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m1620(__this, method) (( Object_t * (*) (List_1_t227 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1620_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m1626_gshared (List_1_t227 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m1626(__this, ___item, method) (( int32_t (*) (List_1_t227 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1626_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m1628_gshared (List_1_t227 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m1628(__this, ___item, method) (( bool (*) (List_1_t227 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1628_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m1629_gshared (List_1_t227 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m1629(__this, ___item, method) (( int32_t (*) (List_1_t227 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1629_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m1630_gshared (List_1_t227 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m1630(__this, ___index, ___item, method) (( void (*) (List_1_t227 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1630_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m1631_gshared (List_1_t227 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m1631(__this, ___item, method) (( void (*) (List_1_t227 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1631_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1633_gshared (List_1_t227 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1633(__this, method) (( bool (*) (List_1_t227 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1633_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m1622_gshared (List_1_t227 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m1622(__this, method) (( Object_t * (*) (List_1_t227 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1622_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m1624_gshared (List_1_t227 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m1624(__this, ___index, method) (( Object_t * (*) (List_1_t227 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1624_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m1625_gshared (List_1_t227 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m1625(__this, ___index, ___value, method) (( void (*) (List_1_t227 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1625_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m1634_gshared (List_1_t227 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m1634(__this, ___item, method) (( void (*) (List_1_t227 *, Object_t *, const MethodInfo*))List_1_Add_m1634_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m9098_gshared (List_1_t227 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m9098(__this, ___newCount, method) (( void (*) (List_1_t227 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9098_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m1627_gshared (List_1_t227 * __this, const MethodInfo* method);
#define List_1_Clear_m1627(__this, method) (( void (*) (List_1_t227 *, const MethodInfo*))List_1_Clear_m1627_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m1635_gshared (List_1_t227 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m1635(__this, ___item, method) (( bool (*) (List_1_t227 *, Object_t *, const MethodInfo*))List_1_Contains_m1635_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m1636_gshared (List_1_t227 * __this, ObjectU5BU5D_t29* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m1636(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t227 *, ObjectU5BU5D_t29*, int32_t, const MethodInfo*))List_1_CopyTo_m1636_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1976  List_1_GetEnumerator_m9103_gshared (List_1_t227 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m9103(__this, method) (( Enumerator_t1976  (*) (List_1_t227 *, const MethodInfo*))List_1_GetEnumerator_m9103_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m1639_gshared (List_1_t227 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m1639(__this, ___item, method) (( int32_t (*) (List_1_t227 *, Object_t *, const MethodInfo*))List_1_IndexOf_m1639_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m9106_gshared (List_1_t227 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m9106(__this, ___start, ___delta, method) (( void (*) (List_1_t227 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9106_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m9108_gshared (List_1_t227 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m9108(__this, ___index, method) (( void (*) (List_1_t227 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9108_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m1640_gshared (List_1_t227 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m1640(__this, ___index, ___item, method) (( void (*) (List_1_t227 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m1640_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m1637_gshared (List_1_t227 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m1637(__this, ___item, method) (( bool (*) (List_1_t227 *, Object_t *, const MethodInfo*))List_1_Remove_m1637_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m1632_gshared (List_1_t227 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m1632(__this, ___index, method) (( void (*) (List_1_t227 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1632_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t29* List_1_ToArray_m9113_gshared (List_1_t227 * __this, const MethodInfo* method);
#define List_1_ToArray_m9113(__this, method) (( ObjectU5BU5D_t29* (*) (List_1_t227 *, const MethodInfo*))List_1_ToArray_m9113_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m9115_gshared (List_1_t227 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m9115(__this, method) (( int32_t (*) (List_1_t227 *, const MethodInfo*))List_1_get_Capacity_m9115_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m9117_gshared (List_1_t227 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m9117(__this, ___value, method) (( void (*) (List_1_t227 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9117_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m1621_gshared (List_1_t227 * __this, const MethodInfo* method);
#define List_1_get_Count_m1621(__this, method) (( int32_t (*) (List_1_t227 *, const MethodInfo*))List_1_get_Count_m1621_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m1641_gshared (List_1_t227 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m1641(__this, ___index, method) (( Object_t * (*) (List_1_t227 *, int32_t, const MethodInfo*))List_1_get_Item_m1641_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m1642_gshared (List_1_t227 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m1642(__this, ___index, ___value, method) (( void (*) (List_1_t227 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m1642_gshared)(__this, ___index, ___value, method)
