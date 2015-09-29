#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.ExecutionContext
struct ExecutionContext_t1190;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t347;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Threading.ExecutionContext::.ctor()
extern "C" void ExecutionContext__ctor_m7384 (ExecutionContext_t1190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ExecutionContext__ctor_m7385 (ExecutionContext_t1190 * __this, SerializationInfo_t347 * ___info, StreamingContext_t348  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ExecutionContext_GetObjectData_m7386 (ExecutionContext_t1190 * __this, SerializationInfo_t347 * ___info, StreamingContext_t348  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
