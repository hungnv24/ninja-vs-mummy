#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>
struct Enumerator_t2011;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2005;

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m9420_gshared (Enumerator_t2011 * __this, Dictionary_2_t2005 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m9420(__this, ___host, method) (( void (*) (Enumerator_t2011 *, Dictionary_2_t2005 *, const MethodInfo*))Enumerator__ctor_m9420_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m9421_gshared (Enumerator_t2011 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m9421(__this, method) (( Object_t * (*) (Enumerator_t2011 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m9421_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m9422_gshared (Enumerator_t2011 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m9422(__this, method) (( void (*) (Enumerator_t2011 *, const MethodInfo*))Enumerator_Dispose_m9422_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m9423_gshared (Enumerator_t2011 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m9423(__this, method) (( bool (*) (Enumerator_t2011 *, const MethodInfo*))Enumerator_MoveNext_m9423_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" int32_t Enumerator_get_Current_m9424_gshared (Enumerator_t2011 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m9424(__this, method) (( int32_t (*) (Enumerator_t2011 *, const MethodInfo*))Enumerator_get_Current_m9424_gshared)(__this, method)
