#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSASignatureDeformatter
struct DSASignatureDeformatter_t899;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t566;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t145;

// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor()
extern "C" void DSASignatureDeformatter__ctor_m6816 (DSASignatureDeformatter_t899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void DSASignatureDeformatter__ctor_m3705 (DSASignatureDeformatter_t899 * __this, AsymmetricAlgorithm_t566 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetHashAlgorithm(System.String)
extern "C" void DSASignatureDeformatter_SetHashAlgorithm_m6817 (DSASignatureDeformatter_t899 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void DSASignatureDeformatter_SetKey_m6818 (DSASignatureDeformatter_t899 * __this, AsymmetricAlgorithm_t566 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSASignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool DSASignatureDeformatter_VerifySignature_m6819 (DSASignatureDeformatter_t899 * __this, ByteU5BU5D_t145* ___rgbHash, ByteU5BU5D_t145* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
