#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t53;
struct AsyncOperation_t53_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m699 (AsyncOperation_t53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m700 (AsyncOperation_t53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m701 (AsyncOperation_t53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t53_marshal(const AsyncOperation_t53& unmarshaled, AsyncOperation_t53_marshaled& marshaled);
void AsyncOperation_t53_marshal_back(const AsyncOperation_t53_marshaled& marshaled, AsyncOperation_t53& unmarshaled);
void AsyncOperation_t53_marshal_cleanup(AsyncOperation_t53_marshaled& marshaled);
