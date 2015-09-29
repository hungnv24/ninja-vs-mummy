#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t296;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t295;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.PersistentCall>
struct IEnumerator_1_t2436;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t316;
// UnityEngine.Events.PersistentCall[]
struct PersistentCallU5BU5D_t2208;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_12.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m1496(__this, method) (( void (*) (List_1_t296 *, const MethodInfo*))List_1__ctor_m1425_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor(System.Int32)
#define List_1__ctor_m11900(__this, ___capacity, method) (( void (*) (List_1_t296 *, int32_t, const MethodInfo*))List_1__ctor_m9081_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.cctor()
#define List_1__cctor_m11901(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9083_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11902(__this, method) (( Object_t* (*) (List_1_t296 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1638_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m11903(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t296 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1623_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11904(__this, method) (( Object_t * (*) (List_1_t296 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1620_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m11905(__this, ___item, method) (( int32_t (*) (List_1_t296 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1626_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m11906(__this, ___item, method) (( bool (*) (List_1_t296 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1628_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m11907(__this, ___item, method) (( int32_t (*) (List_1_t296 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1629_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m11908(__this, ___index, ___item, method) (( void (*) (List_1_t296 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1630_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m11909(__this, ___item, method) (( void (*) (List_1_t296 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1631_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11910(__this, method) (( bool (*) (List_1_t296 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1633_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m11911(__this, method) (( Object_t * (*) (List_1_t296 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1622_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m11912(__this, ___index, method) (( Object_t * (*) (List_1_t296 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1624_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m11913(__this, ___index, ___value, method) (( void (*) (List_1_t296 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1625_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Add(T)
#define List_1_Add_m11914(__this, ___item, method) (( void (*) (List_1_t296 *, PersistentCall_t295 *, const MethodInfo*))List_1_Add_m1634_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m11915(__this, ___newCount, method) (( void (*) (List_1_t296 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9098_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Clear()
#define List_1_Clear_m11916(__this, method) (( void (*) (List_1_t296 *, const MethodInfo*))List_1_Clear_m1627_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Contains(T)
#define List_1_Contains_m11917(__this, ___item, method) (( bool (*) (List_1_t296 *, PersistentCall_t295 *, const MethodInfo*))List_1_Contains_m1635_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m11918(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t296 *, PersistentCallU5BU5D_t2208*, int32_t, const MethodInfo*))List_1_CopyTo_m1636_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GetEnumerator()
#define List_1_GetEnumerator_m11919(__this, method) (( Enumerator_t2209  (*) (List_1_t296 *, const MethodInfo*))List_1_GetEnumerator_m9103_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::IndexOf(T)
#define List_1_IndexOf_m11920(__this, ___item, method) (( int32_t (*) (List_1_t296 *, PersistentCall_t295 *, const MethodInfo*))List_1_IndexOf_m1639_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m11921(__this, ___start, ___delta, method) (( void (*) (List_1_t296 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9106_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m11922(__this, ___index, method) (( void (*) (List_1_t296 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9108_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Insert(System.Int32,T)
#define List_1_Insert_m11923(__this, ___index, ___item, method) (( void (*) (List_1_t296 *, int32_t, PersistentCall_t295 *, const MethodInfo*))List_1_Insert_m1640_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Remove(T)
#define List_1_Remove_m11924(__this, ___item, method) (( bool (*) (List_1_t296 *, PersistentCall_t295 *, const MethodInfo*))List_1_Remove_m1637_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m11925(__this, ___index, method) (( void (*) (List_1_t296 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1632_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::ToArray()
#define List_1_ToArray_m11926(__this, method) (( PersistentCallU5BU5D_t2208* (*) (List_1_t296 *, const MethodInfo*))List_1_ToArray_m9113_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Capacity()
#define List_1_get_Capacity_m11927(__this, method) (( int32_t (*) (List_1_t296 *, const MethodInfo*))List_1_get_Capacity_m9115_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m11928(__this, ___value, method) (( void (*) (List_1_t296 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9117_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Count()
#define List_1_get_Count_m11929(__this, method) (( int32_t (*) (List_1_t296 *, const MethodInfo*))List_1_get_Count_m1621_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Item(System.Int32)
#define List_1_get_Item_m11930(__this, ___index, method) (( PersistentCall_t295 * (*) (List_1_t296 *, int32_t, const MethodInfo*))List_1_get_Item_m1641_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::set_Item(System.Int32,T)
#define List_1_set_Item_m11931(__this, ___index, ___value, method) (( void (*) (List_1_t296 *, int32_t, PersistentCall_t295 *, const MethodInfo*))List_1_set_Item_m1642_gshared)(__this, ___index, ___value, method)
