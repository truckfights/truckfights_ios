﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1285;
// Mono.Security.ASN1
struct ASN1_t1212;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1284;
// System.Byte[]
struct ByteU5BU5D_t21;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m6807 (EncryptedData_t1285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m6808 (EncryptedData_t1285 * __this, ASN1_t1212 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t1284 * EncryptedData_get_EncryptionAlgorithm_m6809 (EncryptedData_t1285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t21* EncryptedData_get_EncryptedContent_m6810 (EncryptedData_t1285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
