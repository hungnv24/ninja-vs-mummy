#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t542;
// System.Net.WebRequest
struct WebRequest_t541;
// System.Uri
struct Uri_t224;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m1758 (FileWebRequestCreator_t542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t541 * FileWebRequestCreator_Create_m1759 (FileWebRequestCreator_t542 * __this, Uri_t224 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
