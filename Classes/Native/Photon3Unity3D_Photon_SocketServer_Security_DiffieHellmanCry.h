#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Photon.SocketServer.Numeric.BigInteger
struct BigInteger_t900;
// System.Security.Cryptography.Rijndael
struct Rijndael_t903;
// System.Byte[]
struct ByteU5BU5D_t21;

#include "mscorlib_System_Object.h"

// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct  DiffieHellmanCryptoProvider_t902  : public Object_t
{
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::prime
	BigInteger_t900 * ___prime_1;
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::secret
	BigInteger_t900 * ___secret_2;
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::publicKey
	BigInteger_t900 * ___publicKey_3;
	// System.Security.Cryptography.Rijndael Photon.SocketServer.Security.DiffieHellmanCryptoProvider::crypto
	Rijndael_t903 * ___crypto_4;
	// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::sharedKey
	ByteU5BU5D_t21* ___sharedKey_5;
};
struct DiffieHellmanCryptoProvider_t902_StaticFields{
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::primeRoot
	BigInteger_t900 * ___primeRoot_0;
};
