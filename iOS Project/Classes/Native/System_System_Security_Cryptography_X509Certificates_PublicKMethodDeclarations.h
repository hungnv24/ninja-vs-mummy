#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t569;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t567;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t566;
// System.Security.Cryptography.Oid
struct Oid_t568;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t577;
// System.Byte[]
struct ByteU5BU5D_t145;
// System.Security.Cryptography.DSA
struct DSA_t690;
// System.Security.Cryptography.RSA
struct RSA_t691;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m1875 (PublicKey_t569 * __this, X509Certificate_t577 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t567 * PublicKey_get_EncodedKeyValue_m1876 (PublicKey_t569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t567 * PublicKey_get_EncodedParameters_m1877 (PublicKey_t569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t566 * PublicKey_get_Key_m1878 (PublicKey_t569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t568 * PublicKey_get_Oid_m1879 (PublicKey_t569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t145* PublicKey_GetUnsignedBigInteger_m1880 (Object_t * __this /* static, unused */, ByteU5BU5D_t145* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t690 * PublicKey_DecodeDSA_m1881 (Object_t * __this /* static, unused */, ByteU5BU5D_t145* ___rawPublicKey, ByteU5BU5D_t145* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t691 * PublicKey_DecodeRSA_m1882 (Object_t * __this /* static, unused */, ByteU5BU5D_t145* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
