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

// System.Byte[]
struct ByteU5BU5D_t21;

#include "codegen/il2cpp-codegen.h"

// System.Byte[] Mono.Security.BitConverterLE::GetUIntBytes(System.Byte*)
extern "C" ByteU5BU5D_t21* BitConverterLE_GetUIntBytes_m8922 (Object_t * __this /* static, unused */, uint8_t* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.BitConverterLE::GetBytes(System.Int32)
extern "C" ByteU5BU5D_t21* BitConverterLE_GetBytes_m8923 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.BitConverterLE::UShortFromBytes(System.Byte*,System.Byte[],System.Int32)
extern "C" void BitConverterLE_UShortFromBytes_m8924 (Object_t * __this /* static, unused */, uint8_t* ___dst, ByteU5BU5D_t21* ___src, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.BitConverterLE::UIntFromBytes(System.Byte*,System.Byte[],System.Int32)
extern "C" void BitConverterLE_UIntFromBytes_m8925 (Object_t * __this /* static, unused */, uint8_t* ___dst, ByteU5BU5D_t21* ___src, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.BitConverterLE::ULongFromBytes(System.Byte*,System.Byte[],System.Int32)
extern "C" void BitConverterLE_ULongFromBytes_m8926 (Object_t * __this /* static, unused */, uint8_t* ___dst, ByteU5BU5D_t21* ___src, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.BitConverterLE::ToInt16(System.Byte[],System.Int32)
extern "C" int16_t BitConverterLE_ToInt16_m8927 (Object_t * __this /* static, unused */, ByteU5BU5D_t21* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.BitConverterLE::ToInt32(System.Byte[],System.Int32)
extern "C" int32_t BitConverterLE_ToInt32_m8928 (Object_t * __this /* static, unused */, ByteU5BU5D_t21* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Mono.Security.BitConverterLE::ToSingle(System.Byte[],System.Int32)
extern "C" float BitConverterLE_ToSingle_m8929 (Object_t * __this /* static, unused */, ByteU5BU5D_t21* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Mono.Security.BitConverterLE::ToDouble(System.Byte[],System.Int32)
extern "C" double BitConverterLE_ToDouble_m8930 (Object_t * __this /* static, unused */, ByteU5BU5D_t21* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
