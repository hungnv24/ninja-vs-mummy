#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UnitySerializationHolder
struct UnitySerializationHolder_t1436;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t347;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t1379;
// System.Reflection.Module
struct Module_t1101;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder__ctor_m8198 (UnitySerializationHolder_t1436 * __this, SerializationInfo_t347 * ___info, StreamingContext_t348  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetTypeData_m8199 (Object_t * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t347 * ___info, StreamingContext_t348  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetDBNullData_m8200 (Object_t * __this /* static, unused */, DBNull_t1379 * ___instance, SerializationInfo_t347 * ___info, StreamingContext_t348  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetModuleData_m8201 (Object_t * __this /* static, unused */, Module_t1101 * ___instance, SerializationInfo_t347 * ___info, StreamingContext_t348  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetObjectData_m8202 (UnitySerializationHolder_t1436 * __this, SerializationInfo_t347 * ___info, StreamingContext_t348  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * UnitySerializationHolder_GetRealObject_m8203 (UnitySerializationHolder_t1436 * __this, StreamingContext_t348  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
