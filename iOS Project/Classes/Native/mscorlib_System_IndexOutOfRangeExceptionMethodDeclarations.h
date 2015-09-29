#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t362;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t347;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IndexOutOfRangeException::.ctor()
extern "C" void IndexOutOfRangeException__ctor_m7879 (IndexOutOfRangeException_t362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
extern "C" void IndexOutOfRangeException__ctor_m1364 (IndexOutOfRangeException_t362 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IndexOutOfRangeException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void IndexOutOfRangeException__ctor_m7880 (IndexOutOfRangeException_t362 * __this, SerializationInfo_t347 * ___info, StreamingContext_t348  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
