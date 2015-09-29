#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t547;
// System.Net.WebRequest
struct WebRequest_t541;
// System.Uri
struct Uri_t224;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m1766 (HttpRequestCreator_t547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t541 * HttpRequestCreator_Create_m1767 (HttpRequestCreator_t547 * __this, Uri_t224 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
