#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t96;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t347;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1463;
// System.Delegate
struct Delegate_t367;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m1600 (MulticastDelegate_t96 * __this, SerializationInfo_t347 * ___info, StreamingContext_t348  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m1598 (MulticastDelegate_t96 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m1599 (MulticastDelegate_t96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1463* MulticastDelegate_GetInvocationList_m1602 (MulticastDelegate_t96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t367 * MulticastDelegate_CombineImpl_m1603 (MulticastDelegate_t96 * __this, Delegate_t367 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m4349 (MulticastDelegate_t96 * __this, MulticastDelegate_t96 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t96 * MulticastDelegate_KPM_m4350 (Object_t * __this /* static, unused */, MulticastDelegate_t96 * ___needle, MulticastDelegate_t96 * ___haystack, MulticastDelegate_t96 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t367 * MulticastDelegate_RemoveImpl_m1604 (MulticastDelegate_t96 * __this, Delegate_t367 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
