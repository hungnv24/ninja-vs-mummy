#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t543;
// System.Net.WebRequest
struct WebRequest_t541;
// System.Uri
struct Uri_t224;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m1760 (FtpRequestCreator_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t541 * FtpRequestCreator_Create_m1761 (FtpRequestCreator_t543 * __this, Uri_t224 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
