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

// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct DiffieHellmanCryptoProvider_t902;
// System.Byte[]
struct ByteU5BU5D_t21;
// Photon.SocketServer.Numeric.BigInteger
struct BigInteger_t900;

#include "codegen/il2cpp-codegen.h"

// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.ctor()
extern "C" void DiffieHellmanCryptoProvider__ctor_m4926 (DiffieHellmanCryptoProvider_t902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::get_PublicKey()
extern "C" ByteU5BU5D_t21* DiffieHellmanCryptoProvider_get_PublicKey_m4927 (DiffieHellmanCryptoProvider_t902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::get_SharedKey()
extern "C" ByteU5BU5D_t21* DiffieHellmanCryptoProvider_get_SharedKey_m4928 (DiffieHellmanCryptoProvider_t902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::DeriveSharedKey(System.Byte[])
extern "C" void DiffieHellmanCryptoProvider_DeriveSharedKey_m4929 (DiffieHellmanCryptoProvider_t902 * __this, ByteU5BU5D_t21* ___otherPartyPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Encrypt(System.Byte[])
extern "C" ByteU5BU5D_t21* DiffieHellmanCryptoProvider_Encrypt_m4930 (DiffieHellmanCryptoProvider_t902 * __this, ByteU5BU5D_t21* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Encrypt(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t21* DiffieHellmanCryptoProvider_Encrypt_m4931 (DiffieHellmanCryptoProvider_t902 * __this, ByteU5BU5D_t21* ___data, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Decrypt(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t21* DiffieHellmanCryptoProvider_Decrypt_m4932 (DiffieHellmanCryptoProvider_t902 * __this, ByteU5BU5D_t21* ___data, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose()
extern "C" void DiffieHellmanCryptoProvider_Dispose_m4933 (DiffieHellmanCryptoProvider_t902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose(System.Boolean)
extern "C" void DiffieHellmanCryptoProvider_Dispose_m4934 (DiffieHellmanCryptoProvider_t902 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculatePublicKey()
extern "C" BigInteger_t900 * DiffieHellmanCryptoProvider_CalculatePublicKey_m4935 (DiffieHellmanCryptoProvider_t902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculateSharedKey(Photon.SocketServer.Numeric.BigInteger)
extern "C" BigInteger_t900 * DiffieHellmanCryptoProvider_CalculateSharedKey_m4936 (DiffieHellmanCryptoProvider_t902 * __this, BigInteger_t900 * ___otherPartyPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::GenerateRandomSecret(System.Int32)
extern "C" BigInteger_t900 * DiffieHellmanCryptoProvider_GenerateRandomSecret_m4937 (DiffieHellmanCryptoProvider_t902 * __this, int32_t ___secretLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.cctor()
extern "C" void DiffieHellmanCryptoProvider__cctor_m4938 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
