#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t773;
// Mono.Math.BigInteger
struct BigInteger_t772;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m2852 (ModulusRing_t773 * __this, BigInteger_t772 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m2853 (ModulusRing_t773 * __this, BigInteger_t772 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t772 * ModulusRing_Multiply_m2854 (ModulusRing_t773 * __this, BigInteger_t772 * ___a, BigInteger_t772 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t772 * ModulusRing_Difference_m2855 (ModulusRing_t773 * __this, BigInteger_t772 * ___a, BigInteger_t772 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t772 * ModulusRing_Pow_m2856 (ModulusRing_t773 * __this, BigInteger_t772 * ___a, BigInteger_t772 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t772 * ModulusRing_Pow_m2857 (ModulusRing_t773 * __this, uint32_t ___b, BigInteger_t772 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
