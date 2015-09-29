#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.OverflowException
struct OverflowException_t1419;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t347;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.OverflowException::.ctor()
extern "C" void OverflowException__ctor_m8101 (OverflowException_t1419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.OverflowException::.ctor(System.String)
extern "C" void OverflowException__ctor_m8102 (OverflowException_t1419 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.OverflowException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void OverflowException__ctor_m8103 (OverflowException_t1419 * __this, SerializationInfo_t347 * ___info, StreamingContext_t348  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
