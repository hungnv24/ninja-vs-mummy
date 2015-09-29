#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.String>
struct List_1_t144;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t2344;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t316;
// System.String[]
struct StringU5BU5D_t16;
// System.Collections.Generic.List`1/Enumerator<System.String>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m1387(__this, method) (( void (*) (List_1_t144 *, const MethodInfo*))List_1__ctor_m1425_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
#define List_1__ctor_m10138(__this, ___capacity, method) (( void (*) (List_1_t144 *, int32_t, const MethodInfo*))List_1__ctor_m9081_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.String>::.cctor()
#define List_1__cctor_m10139(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9083_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.String>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10140(__this, method) (( Object_t* (*) (List_1_t144 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1638_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m10141(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t144 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1623_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10142(__this, method) (( Object_t * (*) (List_1_t144 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1620_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m10143(__this, ___item, method) (( int32_t (*) (List_1_t144 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1626_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m10144(__this, ___item, method) (( bool (*) (List_1_t144 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1628_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m10145(__this, ___item, method) (( int32_t (*) (List_1_t144 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1629_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m10146(__this, ___index, ___item, method) (( void (*) (List_1_t144 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1630_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m10147(__this, ___item, method) (( void (*) (List_1_t144 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1631_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10148(__this, method) (( bool (*) (List_1_t144 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1633_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m10149(__this, method) (( Object_t * (*) (List_1_t144 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1622_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.String>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m10150(__this, ___index, method) (( Object_t * (*) (List_1_t144 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1624_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m10151(__this, ___index, ___value, method) (( void (*) (List_1_t144 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1625_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
#define List_1_Add_m10152(__this, ___item, method) (( void (*) (List_1_t144 *, String_t*, const MethodInfo*))List_1_Add_m1634_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m10153(__this, ___newCount, method) (( void (*) (List_1_t144 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9098_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
#define List_1_Clear_m10154(__this, method) (( void (*) (List_1_t144 *, const MethodInfo*))List_1_Clear_m1627_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
#define List_1_Contains_m10155(__this, ___item, method) (( bool (*) (List_1_t144 *, String_t*, const MethodInfo*))List_1_Contains_m1635_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m10156(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t144 *, StringU5BU5D_t16*, int32_t, const MethodInfo*))List_1_CopyTo_m1636_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
#define List_1_GetEnumerator_m10157(__this, method) (( Enumerator_t2070  (*) (List_1_t144 *, const MethodInfo*))List_1_GetEnumerator_m9103_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::IndexOf(T)
#define List_1_IndexOf_m10158(__this, ___item, method) (( int32_t (*) (List_1_t144 *, String_t*, const MethodInfo*))List_1_IndexOf_m1639_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m10159(__this, ___start, ___delta, method) (( void (*) (List_1_t144 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9106_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.String>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m10160(__this, ___index, method) (( void (*) (List_1_t144 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9108_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::Insert(System.Int32,T)
#define List_1_Insert_m10161(__this, ___index, ___item, method) (( void (*) (List_1_t144 *, int32_t, String_t*, const MethodInfo*))List_1_Insert_m1640_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(T)
#define List_1_Remove_m10162(__this, ___item, method) (( bool (*) (List_1_t144 *, String_t*, const MethodInfo*))List_1_Remove_m1637_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m10163(__this, ___index, method) (( void (*) (List_1_t144 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1632_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
#define List_1_ToArray_m8266(__this, method) (( StringU5BU5D_t16* (*) (List_1_t144 *, const MethodInfo*))List_1_ToArray_m9113_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Capacity()
#define List_1_get_Capacity_m10164(__this, method) (( int32_t (*) (List_1_t144 *, const MethodInfo*))List_1_get_Capacity_m9115_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m10165(__this, ___value, method) (( void (*) (List_1_t144 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9117_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
#define List_1_get_Count_m10166(__this, method) (( int32_t (*) (List_1_t144 *, const MethodInfo*))List_1_get_Count_m1621_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
#define List_1_get_Item_m10167(__this, ___index, method) (( String_t* (*) (List_1_t144 *, int32_t, const MethodInfo*))List_1_get_Item_m1641_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::set_Item(System.Int32,T)
#define List_1_set_Item_m10168(__this, ___index, ___value, method) (( void (*) (List_1_t144 *, int32_t, String_t*, const MethodInfo*))List_1_set_Item_m1642_gshared)(__this, ___index, ___value, method)
