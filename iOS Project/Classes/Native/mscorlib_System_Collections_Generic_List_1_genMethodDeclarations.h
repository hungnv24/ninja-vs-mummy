#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t5;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t1;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject>
struct IEnumerator_1_t2323;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t316;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1974;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m63(__this, method) (( void (*) (List_1_t5 *, const MethodInfo*))List_1__ctor_m1425_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor(System.Int32)
#define List_1__ctor_m9080(__this, ___capacity, method) (( void (*) (List_1_t5 *, int32_t, const MethodInfo*))List_1__ctor_m9081_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.cctor()
#define List_1__cctor_m9082(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9083_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9084(__this, method) (( Object_t* (*) (List_1_t5 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1638_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m9085(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t5 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1623_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m9086(__this, method) (( Object_t * (*) (List_1_t5 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1620_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m9087(__this, ___item, method) (( int32_t (*) (List_1_t5 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1626_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m9088(__this, ___item, method) (( bool (*) (List_1_t5 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1628_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m9089(__this, ___item, method) (( int32_t (*) (List_1_t5 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1629_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m9090(__this, ___index, ___item, method) (( void (*) (List_1_t5 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1630_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m9091(__this, ___item, method) (( void (*) (List_1_t5 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1631_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9092(__this, method) (( bool (*) (List_1_t5 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1633_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m9093(__this, method) (( Object_t * (*) (List_1_t5 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1622_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m9094(__this, ___index, method) (( Object_t * (*) (List_1_t5 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1624_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m9095(__this, ___index, ___value, method) (( void (*) (List_1_t5 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1625_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
#define List_1_Add_m9096(__this, ___item, method) (( void (*) (List_1_t5 *, GameObject_t1 *, const MethodInfo*))List_1_Add_m1634_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m9097(__this, ___newCount, method) (( void (*) (List_1_t5 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9098_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
#define List_1_Clear_m9099(__this, method) (( void (*) (List_1_t5 *, const MethodInfo*))List_1_Clear_m1627_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Contains(T)
#define List_1_Contains_m9100(__this, ___item, method) (( bool (*) (List_1_t5 *, GameObject_t1 *, const MethodInfo*))List_1_Contains_m1635_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m9101(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t5 *, GameObjectU5BU5D_t1974*, int32_t, const MethodInfo*))List_1_CopyTo_m1636_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
#define List_1_GetEnumerator_m9102(__this, method) (( Enumerator_t1980  (*) (List_1_t5 *, const MethodInfo*))List_1_GetEnumerator_m9103_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::IndexOf(T)
#define List_1_IndexOf_m9104(__this, ___item, method) (( int32_t (*) (List_1_t5 *, GameObject_t1 *, const MethodInfo*))List_1_IndexOf_m1639_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m9105(__this, ___start, ___delta, method) (( void (*) (List_1_t5 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9106_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m9107(__this, ___index, method) (( void (*) (List_1_t5 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9108_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Insert(System.Int32,T)
#define List_1_Insert_m9109(__this, ___index, ___item, method) (( void (*) (List_1_t5 *, int32_t, GameObject_t1 *, const MethodInfo*))List_1_Insert_m1640_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(T)
#define List_1_Remove_m9110(__this, ___item, method) (( bool (*) (List_1_t5 *, GameObject_t1 *, const MethodInfo*))List_1_Remove_m1637_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m9111(__this, ___index, method) (( void (*) (List_1_t5 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1632_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.GameObject>::ToArray()
#define List_1_ToArray_m9112(__this, method) (( GameObjectU5BU5D_t1974* (*) (List_1_t5 *, const MethodInfo*))List_1_ToArray_m9113_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Capacity()
#define List_1_get_Capacity_m9114(__this, method) (( int32_t (*) (List_1_t5 *, const MethodInfo*))List_1_get_Capacity_m9115_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m9116(__this, ___value, method) (( void (*) (List_1_t5 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9117_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
#define List_1_get_Count_m9118(__this, method) (( int32_t (*) (List_1_t5 *, const MethodInfo*))List_1_get_Count_m1621_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
#define List_1_get_Item_m9119(__this, ___index, method) (( GameObject_t1 * (*) (List_1_t5 *, int32_t, const MethodInfo*))List_1_get_Item_m1641_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::set_Item(System.Int32,T)
#define List_1_set_Item_m9120(__this, ___index, ___value, method) (( void (*) (List_1_t5 *, int32_t, GameObject_t1 *, const MethodInfo*))List_1_set_Item_m1642_gshared)(__this, ___index, ___value, method)
