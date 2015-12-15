#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1275;
// Mono.Math.BigInteger
struct BigInteger_t1276;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m6710 (ModulusRing_t1275 * __this, BigInteger_t1276 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m6711 (ModulusRing_t1275 * __this, BigInteger_t1276 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1276 * ModulusRing_Multiply_m6712 (ModulusRing_t1275 * __this, BigInteger_t1276 * ___a, BigInteger_t1276 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1276 * ModulusRing_Difference_m6713 (ModulusRing_t1275 * __this, BigInteger_t1276 * ___a, BigInteger_t1276 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1276 * ModulusRing_Pow_m6714 (ModulusRing_t1275 * __this, BigInteger_t1276 * ___a, BigInteger_t1276 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1276 * ModulusRing_Pow_m6715 (ModulusRing_t1275 * __this, uint32_t ___b, BigInteger_t1276 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
