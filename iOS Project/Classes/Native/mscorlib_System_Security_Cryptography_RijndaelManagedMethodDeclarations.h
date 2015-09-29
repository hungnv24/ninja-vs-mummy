#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t1292;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t822;
// System.Byte[]
struct ByteU5BU5D_t145;

// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
extern "C" void RijndaelManaged__ctor_m6957 (RijndaelManaged_t1292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateIV()
extern "C" void RijndaelManaged_GenerateIV_m6958 (RijndaelManaged_t1292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateKey()
extern "C" void RijndaelManaged_GenerateKey_m6959 (RijndaelManaged_t1292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * RijndaelManaged_CreateDecryptor_m6960 (RijndaelManaged_t1292 * __this, ByteU5BU5D_t145* ___rgbKey, ByteU5BU5D_t145* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * RijndaelManaged_CreateEncryptor_m6961 (RijndaelManaged_t1292 * __this, ByteU5BU5D_t145* ___rgbKey, ByteU5BU5D_t145* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
