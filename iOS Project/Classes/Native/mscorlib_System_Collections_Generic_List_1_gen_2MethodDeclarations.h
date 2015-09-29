#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_t108;
// System.Object
struct Object_t;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t107;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GUILayoutEntry>
struct IEnumerator_1_t2337;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t316;
// UnityEngine.GUILayoutEntry[]
struct GUILayoutEntryU5BU5D_t2027;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m1356(__this, method) (( void (*) (List_1_t108 *, const MethodInfo*))List_1__ctor_m1425_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(System.Int32)
#define List_1__ctor_m9545(__this, ___capacity, method) (( void (*) (List_1_t108 *, int32_t, const MethodInfo*))List_1__ctor_m9081_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.cctor()
#define List_1__cctor_m9546(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9083_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9547(__this, method) (( Object_t* (*) (List_1_t108 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1638_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m9548(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t108 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1623_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m9549(__this, method) (( Object_t * (*) (List_1_t108 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1620_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m9550(__this, ___item, method) (( int32_t (*) (List_1_t108 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1626_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m9551(__this, ___item, method) (( bool (*) (List_1_t108 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1628_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m9552(__this, ___item, method) (( int32_t (*) (List_1_t108 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1629_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m9553(__this, ___index, ___item, method) (( void (*) (List_1_t108 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1630_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m9554(__this, ___item, method) (( void (*) (List_1_t108 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1631_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9555(__this, method) (( bool (*) (List_1_t108 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1633_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m9556(__this, method) (( Object_t * (*) (List_1_t108 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1622_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m9557(__this, ___index, method) (( Object_t * (*) (List_1_t108 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1624_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m9558(__this, ___index, ___value, method) (( void (*) (List_1_t108 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1625_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Add(T)
#define List_1_Add_m9559(__this, ___item, method) (( void (*) (List_1_t108 *, GUILayoutEntry_t107 *, const MethodInfo*))List_1_Add_m1634_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m9560(__this, ___newCount, method) (( void (*) (List_1_t108 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9098_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Clear()
#define List_1_Clear_m9561(__this, method) (( void (*) (List_1_t108 *, const MethodInfo*))List_1_Clear_m1627_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Contains(T)
#define List_1_Contains_m9562(__this, ___item, method) (( bool (*) (List_1_t108 *, GUILayoutEntry_t107 *, const MethodInfo*))List_1_Contains_m1635_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m9563(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t108 *, GUILayoutEntryU5BU5D_t2027*, int32_t, const MethodInfo*))List_1_CopyTo_m1636_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetEnumerator()
#define List_1_GetEnumerator_m1350(__this, method) (( Enumerator_t357  (*) (List_1_t108 *, const MethodInfo*))List_1_GetEnumerator_m9103_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::IndexOf(T)
#define List_1_IndexOf_m9564(__this, ___item, method) (( int32_t (*) (List_1_t108 *, GUILayoutEntry_t107 *, const MethodInfo*))List_1_IndexOf_m1639_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m9565(__this, ___start, ___delta, method) (( void (*) (List_1_t108 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9106_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m9566(__this, ___index, method) (( void (*) (List_1_t108 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9108_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Insert(System.Int32,T)
#define List_1_Insert_m9567(__this, ___index, ___item, method) (( void (*) (List_1_t108 *, int32_t, GUILayoutEntry_t107 *, const MethodInfo*))List_1_Insert_m1640_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Remove(T)
#define List_1_Remove_m9568(__this, ___item, method) (( bool (*) (List_1_t108 *, GUILayoutEntry_t107 *, const MethodInfo*))List_1_Remove_m1637_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m9569(__this, ___index, method) (( void (*) (List_1_t108 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1632_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::ToArray()
#define List_1_ToArray_m9570(__this, method) (( GUILayoutEntryU5BU5D_t2027* (*) (List_1_t108 *, const MethodInfo*))List_1_ToArray_m9113_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Capacity()
#define List_1_get_Capacity_m9571(__this, method) (( int32_t (*) (List_1_t108 *, const MethodInfo*))List_1_get_Capacity_m9115_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m9572(__this, ___value, method) (( void (*) (List_1_t108 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9117_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count()
#define List_1_get_Count_m9573(__this, method) (( int32_t (*) (List_1_t108 *, const MethodInfo*))List_1_get_Count_m1621_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32)
#define List_1_get_Item_m9574(__this, ___index, method) (( GUILayoutEntry_t107 * (*) (List_1_t108 *, int32_t, const MethodInfo*))List_1_get_Item_m1641_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m9575(__this, ___index, ___value, method) (( void (*) (List_1_t108 *, int32_t, GUILayoutEntry_t107 *, const MethodInfo*))List_1_set_Item_m1642_gshared)(__this, ___index, ___value, method)
