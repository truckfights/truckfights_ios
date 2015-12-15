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

// Photon.SocketServer.Numeric.BigInteger
struct BigInteger_t900;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.UInt32[]
struct UInt32U5BU5D_t901;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Random
struct Random_t916;

#include "codegen/il2cpp-codegen.h"

// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor()
extern "C" void BigInteger__ctor_m4893 (BigInteger_t900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Int64)
extern "C" void BigInteger__ctor_m4894 (BigInteger_t900 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(Photon.SocketServer.Numeric.BigInteger)
extern "C" void BigInteger__ctor_m4895 (BigInteger_t900 * __this, BigInteger_t900 * ___bi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Byte[])
extern "C" void BigInteger__ctor_m4896 (BigInteger_t900 * __this, ByteU5BU5D_t21* ___inData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.UInt32[])
extern "C" void BigInteger__ctor_m4897 (BigInteger_t900 * __this, UInt32U5BU5D_t901* ___inData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int64)
extern "C" BigInteger_t900 * BigInteger_op_Implicit_m4898 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int32)
extern "C" BigInteger_t900 * BigInteger_op_Implicit_m4899 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Addition(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" BigInteger_t900 * BigInteger_op_Addition_m4900 (Object_t * __this /* static, unused */, BigInteger_t900 * ___bi1, BigInteger_t900 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Subtraction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" BigInteger_t900 * BigInteger_op_Subtraction_m4901 (Object_t * __this /* static, unused */, BigInteger_t900 * ___bi1, BigInteger_t900 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Multiply(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" BigInteger_t900 * BigInteger_op_Multiply_m4902 (Object_t * __this /* static, unused */, BigInteger_t900 * ___bi1, BigInteger_t900 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_LeftShift(Photon.SocketServer.Numeric.BigInteger,System.Int32)
extern "C" BigInteger_t900 * BigInteger_op_LeftShift_m4903 (Object_t * __this /* static, unused */, BigInteger_t900 * ___bi1, int32_t ___shiftVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftLeft(System.UInt32[],System.Int32)
extern "C" int32_t BigInteger_shiftLeft_m4904 (Object_t * __this /* static, unused */, UInt32U5BU5D_t901* ___buffer, int32_t ___shiftVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftRight(System.UInt32[],System.Int32)
extern "C" int32_t BigInteger_shiftRight_m4905 (Object_t * __this /* static, unused */, UInt32U5BU5D_t901* ___buffer, int32_t ___shiftVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_UnaryNegation(Photon.SocketServer.Numeric.BigInteger)
extern "C" BigInteger_t900 * BigInteger_op_UnaryNegation_m4906 (Object_t * __this /* static, unused */, BigInteger_t900 * ___bi1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_Equality(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" bool BigInteger_op_Equality_m4907 (Object_t * __this /* static, unused */, BigInteger_t900 * ___bi1, BigInteger_t900 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::Equals(System.Object)
extern "C" bool BigInteger_Equals_m4908 (BigInteger_t900 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::GetHashCode()
extern "C" int32_t BigInteger_GetHashCode_m4909 (BigInteger_t900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" bool BigInteger_op_GreaterThan_m4910 (Object_t * __this /* static, unused */, BigInteger_t900 * ___bi1, BigInteger_t900 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_LessThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" bool BigInteger_op_LessThan_m4911 (Object_t * __this /* static, unused */, BigInteger_t900 * ___bi1, BigInteger_t900 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThanOrEqual(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" bool BigInteger_op_GreaterThanOrEqual_m4912 (Object_t * __this /* static, unused */, BigInteger_t900 * ___bi1, BigInteger_t900 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::multiByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" void BigInteger_multiByteDivide_m4913 (Object_t * __this /* static, unused */, BigInteger_t900 * ___bi1, BigInteger_t900 * ___bi2, BigInteger_t900 * ___outQuotient, BigInteger_t900 * ___outRemainder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::singleByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" void BigInteger_singleByteDivide_m4914 (Object_t * __this /* static, unused */, BigInteger_t900 * ___bi1, BigInteger_t900 * ___bi2, BigInteger_t900 * ___outQuotient, BigInteger_t900 * ___outRemainder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Division(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" BigInteger_t900 * BigInteger_op_Division_m4915 (Object_t * __this /* static, unused */, BigInteger_t900 * ___bi1, BigInteger_t900 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Modulus(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" BigInteger_t900 * BigInteger_op_Modulus_m4916 (Object_t * __this /* static, unused */, BigInteger_t900 * ___bi1, BigInteger_t900 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Photon.SocketServer.Numeric.BigInteger::ToString()
extern "C" String_t* BigInteger_ToString_m4917 (BigInteger_t900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Photon.SocketServer.Numeric.BigInteger::ToString(System.Int32)
extern "C" String_t* BigInteger_ToString_m4918 (BigInteger_t900 * __this, int32_t ___radix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::ModPow(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" BigInteger_t900 * BigInteger_ModPow_m4919 (BigInteger_t900 * __this, BigInteger_t900 * ___exp, BigInteger_t900 * ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::BarrettReduction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" BigInteger_t900 * BigInteger_BarrettReduction_m4920 (BigInteger_t900 * __this, BigInteger_t900 * ___x, BigInteger_t900 * ___n, BigInteger_t900 * ___constant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::GenerateRandom(System.Int32)
extern "C" BigInteger_t900 * BigInteger_GenerateRandom_m4921 (Object_t * __this /* static, unused */, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::genRandomBits(System.Int32,System.Random)
extern "C" void BigInteger_genRandomBits_m4922 (BigInteger_t900 * __this, int32_t ___bits, Random_t916 * ___rand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::bitCount()
extern "C" int32_t BigInteger_bitCount_m4923 (BigInteger_t900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Numeric.BigInteger::GetBytes()
extern "C" ByteU5BU5D_t21* BigInteger_GetBytes_m4924 (BigInteger_t900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.cctor()
extern "C" void BigInteger__cctor_m4925 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
