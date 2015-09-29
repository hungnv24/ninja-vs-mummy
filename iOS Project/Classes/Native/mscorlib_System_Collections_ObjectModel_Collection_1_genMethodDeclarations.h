#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t2271;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t316;
// System.Object[]
struct ObjectU5BU5D_t29;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t476;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t483;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m12466_gshared (Collection_1_t2271 * __this, const MethodInfo* method);
#define Collection_1__ctor_m12466(__this, method) (( void (*) (Collection_1_t2271 *, const MethodInfo*))Collection_1__ctor_m12466_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12467_gshared (Collection_1_t2271 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12467(__this, method) (( bool (*) (Collection_1_t2271 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12467_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m12468_gshared (Collection_1_t2271 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m12468(__this, ___array, ___index, method) (( void (*) (Collection_1_t2271 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m12468_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m12469_gshared (Collection_1_t2271 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m12469(__this, method) (( Object_t * (*) (Collection_1_t2271 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m12469_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m12470_gshared (Collection_1_t2271 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m12470(__this, ___value, method) (( int32_t (*) (Collection_1_t2271 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m12470_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m12471_gshared (Collection_1_t2271 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m12471(__this, ___value, method) (( bool (*) (Collection_1_t2271 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m12471_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m12472_gshared (Collection_1_t2271 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m12472(__this, ___value, method) (( int32_t (*) (Collection_1_t2271 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m12472_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m12473_gshared (Collection_1_t2271 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m12473(__this, ___index, ___value, method) (( void (*) (Collection_1_t2271 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m12473_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m12474_gshared (Collection_1_t2271 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m12474(__this, ___value, method) (( void (*) (Collection_1_t2271 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m12474_gshared)(__this, ___value, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m12475_gshared (Collection_1_t2271 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m12475(__this, method) (( Object_t * (*) (Collection_1_t2271 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m12475_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m12476_gshared (Collection_1_t2271 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m12476(__this, ___index, method) (( Object_t * (*) (Collection_1_t2271 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m12476_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m12477_gshared (Collection_1_t2271 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m12477(__this, ___index, ___value, method) (( void (*) (Collection_1_t2271 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m12477_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m12478_gshared (Collection_1_t2271 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m12478(__this, ___item, method) (( void (*) (Collection_1_t2271 *, Object_t *, const MethodInfo*))Collection_1_Add_m12478_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m12479_gshared (Collection_1_t2271 * __this, const MethodInfo* method);
#define Collection_1_Clear_m12479(__this, method) (( void (*) (Collection_1_t2271 *, const MethodInfo*))Collection_1_Clear_m12479_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m12480_gshared (Collection_1_t2271 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m12480(__this, method) (( void (*) (Collection_1_t2271 *, const MethodInfo*))Collection_1_ClearItems_m12480_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m12481_gshared (Collection_1_t2271 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m12481(__this, ___item, method) (( bool (*) (Collection_1_t2271 *, Object_t *, const MethodInfo*))Collection_1_Contains_m12481_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m12482_gshared (Collection_1_t2271 * __this, ObjectU5BU5D_t29* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m12482(__this, ___array, ___index, method) (( void (*) (Collection_1_t2271 *, ObjectU5BU5D_t29*, int32_t, const MethodInfo*))Collection_1_CopyTo_m12482_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m12483_gshared (Collection_1_t2271 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m12483(__this, method) (( Object_t* (*) (Collection_1_t2271 *, const MethodInfo*))Collection_1_GetEnumerator_m12483_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m12484_gshared (Collection_1_t2271 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m12484(__this, ___item, method) (( int32_t (*) (Collection_1_t2271 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m12484_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m12485_gshared (Collection_1_t2271 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m12485(__this, ___index, ___item, method) (( void (*) (Collection_1_t2271 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m12485_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m12486_gshared (Collection_1_t2271 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m12486(__this, ___index, ___item, method) (( void (*) (Collection_1_t2271 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m12486_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m12487_gshared (Collection_1_t2271 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m12487(__this, ___item, method) (( bool (*) (Collection_1_t2271 *, Object_t *, const MethodInfo*))Collection_1_Remove_m12487_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m12488_gshared (Collection_1_t2271 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m12488(__this, ___index, method) (( void (*) (Collection_1_t2271 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m12488_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m12489_gshared (Collection_1_t2271 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m12489(__this, ___index, method) (( void (*) (Collection_1_t2271 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m12489_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m12490_gshared (Collection_1_t2271 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m12490(__this, method) (( int32_t (*) (Collection_1_t2271 *, const MethodInfo*))Collection_1_get_Count_m12490_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m12491_gshared (Collection_1_t2271 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m12491(__this, ___index, method) (( Object_t * (*) (Collection_1_t2271 *, int32_t, const MethodInfo*))Collection_1_get_Item_m12491_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m12492_gshared (Collection_1_t2271 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m12492(__this, ___index, ___value, method) (( void (*) (Collection_1_t2271 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m12492_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m12493_gshared (Collection_1_t2271 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m12493(__this, ___index, ___item, method) (( void (*) (Collection_1_t2271 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m12493_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m12494_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m12494(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m12494_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m12495_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m12495(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m12495_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m12496_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m12496(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m12496_gshared)(__this /* static, unused */, ___list, method)
