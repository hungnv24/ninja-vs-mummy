#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t191;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t2361;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t316;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t324;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_6.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m10285_gshared (List_1_t191 * __this, const MethodInfo* method);
#define List_1__ctor_m10285(__this, method) (( void (*) (List_1_t191 *, const MethodInfo*))List_1__ctor_m10285_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m1397_gshared (List_1_t191 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m1397(__this, ___capacity, method) (( void (*) (List_1_t191 *, int32_t, const MethodInfo*))List_1__ctor_m1397_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m10286_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m10286(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10286_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10287_gshared (List_1_t191 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10287(__this, method) (( Object_t* (*) (List_1_t191 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10287_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10288_gshared (List_1_t191 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10288(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t191 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10288_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10289_gshared (List_1_t191 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10289(__this, method) (( Object_t * (*) (List_1_t191 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10289_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10290_gshared (List_1_t191 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10290(__this, ___item, method) (( int32_t (*) (List_1_t191 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10290_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10291_gshared (List_1_t191 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10291(__this, ___item, method) (( bool (*) (List_1_t191 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10291_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10292_gshared (List_1_t191 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10292(__this, ___item, method) (( int32_t (*) (List_1_t191 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10292_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10293_gshared (List_1_t191 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10293(__this, ___index, ___item, method) (( void (*) (List_1_t191 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10293_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10294_gshared (List_1_t191 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10294(__this, ___item, method) (( void (*) (List_1_t191 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10294_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10295_gshared (List_1_t191 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10295(__this, method) (( bool (*) (List_1_t191 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10295_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10296_gshared (List_1_t191 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10296(__this, method) (( Object_t * (*) (List_1_t191 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10296_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10297_gshared (List_1_t191 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10297(__this, ___index, method) (( Object_t * (*) (List_1_t191 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10297_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10298_gshared (List_1_t191 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10298(__this, ___index, ___value, method) (( void (*) (List_1_t191 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10298_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m10299_gshared (List_1_t191 * __this, UIVertex_t198  ___item, const MethodInfo* method);
#define List_1_Add_m10299(__this, ___item, method) (( void (*) (List_1_t191 *, UIVertex_t198 , const MethodInfo*))List_1_Add_m10299_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m10300_gshared (List_1_t191 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m10300(__this, ___newCount, method) (( void (*) (List_1_t191 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10300_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m10301_gshared (List_1_t191 * __this, const MethodInfo* method);
#define List_1_Clear_m10301(__this, method) (( void (*) (List_1_t191 *, const MethodInfo*))List_1_Clear_m10301_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m10302_gshared (List_1_t191 * __this, UIVertex_t198  ___item, const MethodInfo* method);
#define List_1_Contains_m10302(__this, ___item, method) (( bool (*) (List_1_t191 *, UIVertex_t198 , const MethodInfo*))List_1_Contains_m10302_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10303_gshared (List_1_t191 * __this, UIVertexU5BU5D_t324* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10303(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t191 *, UIVertexU5BU5D_t324*, int32_t, const MethodInfo*))List_1_CopyTo_m10303_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t2080  List_1_GetEnumerator_m10304_gshared (List_1_t191 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m10304(__this, method) (( Enumerator_t2080  (*) (List_1_t191 *, const MethodInfo*))List_1_GetEnumerator_m10304_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10305_gshared (List_1_t191 * __this, UIVertex_t198  ___item, const MethodInfo* method);
#define List_1_IndexOf_m10305(__this, ___item, method) (( int32_t (*) (List_1_t191 *, UIVertex_t198 , const MethodInfo*))List_1_IndexOf_m10305_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m10306_gshared (List_1_t191 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m10306(__this, ___start, ___delta, method) (( void (*) (List_1_t191 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10306_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m10307_gshared (List_1_t191 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m10307(__this, ___index, method) (( void (*) (List_1_t191 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10307_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10308_gshared (List_1_t191 * __this, int32_t ___index, UIVertex_t198  ___item, const MethodInfo* method);
#define List_1_Insert_m10308(__this, ___index, ___item, method) (( void (*) (List_1_t191 *, int32_t, UIVertex_t198 , const MethodInfo*))List_1_Insert_m10308_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m10309_gshared (List_1_t191 * __this, UIVertex_t198  ___item, const MethodInfo* method);
#define List_1_Remove_m10309(__this, ___item, method) (( bool (*) (List_1_t191 *, UIVertex_t198 , const MethodInfo*))List_1_Remove_m10309_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10310_gshared (List_1_t191 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10310(__this, ___index, method) (( void (*) (List_1_t191 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10310_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t324* List_1_ToArray_m10311_gshared (List_1_t191 * __this, const MethodInfo* method);
#define List_1_ToArray_m10311(__this, method) (( UIVertexU5BU5D_t324* (*) (List_1_t191 *, const MethodInfo*))List_1_ToArray_m10311_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m10312_gshared (List_1_t191 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m10312(__this, method) (( int32_t (*) (List_1_t191 *, const MethodInfo*))List_1_get_Capacity_m10312_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m10313_gshared (List_1_t191 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m10313(__this, ___value, method) (( void (*) (List_1_t191 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10313_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m10314_gshared (List_1_t191 * __this, const MethodInfo* method);
#define List_1_get_Count_m10314(__this, method) (( int32_t (*) (List_1_t191 *, const MethodInfo*))List_1_get_Count_m10314_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t198  List_1_get_Item_m10315_gshared (List_1_t191 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10315(__this, ___index, method) (( UIVertex_t198  (*) (List_1_t191 *, int32_t, const MethodInfo*))List_1_get_Item_m10315_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10316_gshared (List_1_t191 * __this, int32_t ___index, UIVertex_t198  ___value, const MethodInfo* method);
#define List_1_set_Item_m10316(__this, ___index, ___value, method) (( void (*) (List_1_t191 *, int32_t, UIVertex_t198 , const MethodInfo*))List_1_set_Item_m10316_gshared)(__this, ___index, ___value, method)
