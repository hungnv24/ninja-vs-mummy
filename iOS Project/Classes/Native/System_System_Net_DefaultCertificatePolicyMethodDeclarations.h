#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.DefaultCertificatePolicy
struct DefaultCertificatePolicy_t537;
// System.Net.ServicePoint
struct ServicePoint_t551;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t579;
// System.Net.WebRequest
struct WebRequest_t541;

// System.Void System.Net.DefaultCertificatePolicy::.ctor()
extern "C" void DefaultCertificatePolicy__ctor_m1752 (DefaultCertificatePolicy_t537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DefaultCertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
extern "C" bool DefaultCertificatePolicy_CheckValidationResult_m1753 (DefaultCertificatePolicy_t537 * __this, ServicePoint_t551 * ___point, X509Certificate_t579 * ___certificate, WebRequest_t541 * ___request, int32_t ___certificateProblem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
