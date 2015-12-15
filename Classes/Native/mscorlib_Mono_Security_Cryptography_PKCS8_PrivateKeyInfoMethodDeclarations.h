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

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t1484;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Security.Cryptography.RSA
struct RSA_t1211;
// System.Security.Cryptography.DSA
struct DSA_t1210;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C" void PrivateKeyInfo__ctor_m8762 (PrivateKeyInfo_t1484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C" void PrivateKeyInfo__ctor_m8763 (PrivateKeyInfo_t1484 * __this, ByteU5BU5D_t21* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C" ByteU5BU5D_t21* PrivateKeyInfo_get_PrivateKey_m8764 (PrivateKeyInfo_t1484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C" void PrivateKeyInfo_Decode_m8765 (PrivateKeyInfo_t1484 * __this, ByteU5BU5D_t21* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C" ByteU5BU5D_t21* PrivateKeyInfo_RemoveLeadingZero_m8766 (Object_t * __this /* static, unused */, ByteU5BU5D_t21* ___bigInt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t21* PrivateKeyInfo_Normalize_m8767 (Object_t * __this /* static, unused */, ByteU5BU5D_t21* ___bigInt, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C" RSA_t1211 * PrivateKeyInfo_DecodeRSA_m8768 (Object_t * __this /* static, unused */, ByteU5BU5D_t21* ___keypair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C" DSA_t1210 * PrivateKeyInfo_DecodeDSA_m8769 (Object_t * __this /* static, unused */, ByteU5BU5D_t21* ___privateKey, DSAParameters_t1234  ___dsaParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
