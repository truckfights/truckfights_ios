﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
struct TlsServerCertificate_t1369;
// Mono.Security.Protocol.Tls.Context
struct Context_t1321;
// System.Byte[]
struct ByteU5BU5D_t21;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1102;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1238;
// System.String
struct String_t;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
struct TlsServerCertificateRequest_t1370;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished
struct TlsServerFinished_t1371;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
struct TlsServerHello_t1372;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone
struct TlsServerHelloDone_t1373;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
struct TlsServerKeyExchange_t1374;
// Mono.Math.Prime.PrimalityTest
struct PrimalityTest_t1375;
// System.Object
struct Object_t;
// Mono.Math.BigInteger
struct BigInteger_t1276;
// System.IAsyncResult
struct IAsyncResult_t98;
// System.AsyncCallback
struct AsyncCallback_t99;
// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t1354;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1100;
// System.Int32[]
struct Int32U5BU5D_t56;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t1355;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t1352;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t1339;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1074;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t1340;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1090;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_4.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_4MethodDeclarations.h"
#include "mscorlib_System_Void.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Byte.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0MethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ContextMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsServerSettingsMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsServerSettings.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCollection.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCollectionMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStreamMethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateMethodDeclarations.h"
#include "mscorlib_System_Int32.h"
#include "Mono_Security_Mono_Security_X509_X509Certificate.h"
#include "mscorlib_System_Boolean.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityParametersMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteMethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_X509ExtensionCollectionMethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsageExtensioMethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_Extensions_ExtendedKeyUsageMethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType_0MethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientContext.h"
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsages.h"
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsageExtensio.h"
#include "Mono_Security_Mono_Security_X509_Extensions_ExtendedKeyUsage.h"
#include "Mono_Security_Mono_Security_X509_X509Extension.h"
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType_0.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityParameters.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuite.h"
#include "Mono_Security_Mono_Security_X509_X509ExtensionCollection.h"
#include "mscorlib_System_String.h"
#include "mscorlib_System_Collections_ArrayList.h"
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
#include "mscorlib_System_Object.h"
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientContextMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ValidationResultMethodDeclarations.h"
#include "mscorlib_System_StringMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsExceptionMethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509CMethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_X509ChainMethodDeclarations.h"
#include "mscorlib_System_TypeMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDescription.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ValidationResult.h"
#include "mscorlib_System_Int64.h"
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509C.h"
#include "Mono_Security_Mono_Security_X509_X509Chain.h"
#include "Mono_Security_Mono_Security_X509_X509ChainStatusFlags.h"
#include "mscorlib_System_Exception.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslClientStream.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslClientStreamMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsException.h"
#include "mscorlib_System_Type.h"
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsClientSettingsMethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_Extensions_SubjectAltNameExMethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_Extensions_SubjectAltNameEx.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsClientSettings.h"
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
#include "System_System_Text_RegularExpressions_GroupMethodDeclarations.h"
#include "System_System_Text_RegularExpressions_GroupCollectionMethodDeclarations.h"
#include "System_System_Text_RegularExpressions_CaptureMethodDeclarations.h"
#include "System_System_Text_RegularExpressions_Regex.h"
#include "System_System_Text_RegularExpressions_MatchCollection.h"
#include "System_System_Text_RegularExpressions_MatchCollectionMethodDeclarations.h"
#include "System_System_Text_RegularExpressions_Match.h"
#include "System_System_Text_RegularExpressions_MatchMethodDeclarations.h"
#include "System_System_Text_RegularExpressions_GroupCollection.h"
#include "System_System_Text_RegularExpressions_Group.h"
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
#include "mscorlib_System_Char.h"
#include "mscorlib_System_Globalization_CultureInfo.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_5.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_5MethodDeclarations.h"
#include "Mono.Security_ArrayTypes.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_ClientCer.h"
#include "Mono_Security_Mono_Security_ASN1MethodDeclarations.h"
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
#include "Mono_Security_Mono_Security_ASN1.h"
#include "mscorlib_System_Int16.h"
#include "mscorlib_System_Text_Encoding.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_6.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_6MethodDeclarations.h"
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_7.h"
#include "mscorlib_System_RuntimeFieldHandle.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_HandshakeState.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslHandshakeHashMethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_HashAlgorithm.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslHandshakeHash.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStream.h"
#include "mscorlib_System_Security_Cryptography_HashAlgorithmMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Cryptography_MD5SHA1MethodDeclarations.h"
#include "Mono_Security_Mono_Security_Cryptography_MD5SHA1.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_7.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_7MethodDeclarations.h"
#include "mscorlib_System_BufferMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityCompression.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientSessionCacheMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteCollectiMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteCollecti.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteFactoryMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_8.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_8MethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_9.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_9MethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"
#include "mscorlib_System_Security_Cryptography_RSA.h"
#include "Mono_Security_Mono_Math_Prime_PrimalityTest.h"
#include "Mono_Security_Mono_Math_Prime_PrimalityTestMethodDeclarations.h"
#include "mscorlib_System_IntPtr.h"
#include "Mono_Security_Mono_Math_Prime_ConfidenceFactor.h"
#include "Mono_Security_Mono_Math_BigInteger.h"
#include "mscorlib_System_AsyncCallback.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidati.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidatiMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidati_0.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidati_0MethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateSelectio.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateSelectioMethodDeclarations.h"
#include "System_System_Security_Cryptography_X509Certificates_X509Cer_1.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_PrivateKeySelection.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_PrivateKeySelectionMethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAlgorithm.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTypMethodDeclarations.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_0.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_0MethodDeclarations.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_1.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_1MethodDeclarations.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_2.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_2MethodDeclarations.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_3.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_3MethodDeclarations.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_4.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_4MethodDeclarations.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_5.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_5MethodDeclarations.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_6.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_6MethodDeclarations.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_7MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerCertificate__ctor_m7495 (TlsServerCertificate_t1369 * __this, Context_t1321 * ___context, ByteU5BU5D_t21* ___buffer, const MethodInfo* method)
{
	{
		Context_t1321 * L_0 = ___context;
		ByteU5BU5D_t21* L_1 = ___buffer;
		HandshakeMessage__ctor_m7460(__this, L_0, ((int32_t)11), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Update()
extern "C" void TlsServerCertificate_Update_m7496 (TlsServerCertificate_t1369 * __this, const MethodInfo* method)
{
	{
		HandshakeMessage_Update_m7465(__this, /*hidden argument*/NULL);
		Context_t1321 * L_0 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		TlsServerSettings_t1331 * L_1 = Context_get_ServerSettings_m7163(L_0, /*hidden argument*/NULL);
		X509CertificateCollection_t1238 * L_2 = (__this->___certificates_9);
		NullCheck(L_1);
		TlsServerSettings_set_Certificates_m7422(L_1, L_2, /*hidden argument*/NULL);
		Context_t1321 * L_3 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		TlsServerSettings_t1331 * L_4 = Context_get_ServerSettings_m7163(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		TlsServerSettings_UpdateCertificateRSA_m7431(L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsSsl3()
extern "C" void TlsServerCertificate_ProcessAsSsl3_m7497 (TlsServerCertificate_t1369 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(24 /* System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsTls1() */, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsTls1()
extern TypeInfo* X509CertificateCollection_t1238_il2cpp_TypeInfo_var;
extern TypeInfo* X509Certificate_t1102_il2cpp_TypeInfo_var;
extern "C" void TlsServerCertificate_ProcessAsTls1_m7498 (TlsServerCertificate_t1369 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		X509CertificateCollection_t1238_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(844);
		X509Certificate_t1102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(731);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t21* V_3 = {0};
	X509Certificate_t1102 * V_4 = {0};
	{
		X509CertificateCollection_t1238 * L_0 = (X509CertificateCollection_t1238 *)il2cpp_codegen_object_new (X509CertificateCollection_t1238_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m6957(L_0, /*hidden argument*/NULL);
		__this->___certificates_9 = L_0;
		V_0 = 0;
		int32_t L_1 = TlsStream_ReadInt24_m7444(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		goto IL_004d;
	}

IL_0019:
	{
		int32_t L_2 = TlsStream_ReadInt24_m7444(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)3));
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = V_2;
		ByteU5BU5D_t21* L_6 = TlsStream_ReadBytes_m7445(__this, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		ByteU5BU5D_t21* L_7 = V_3;
		X509Certificate_t1102 * L_8 = (X509Certificate_t1102 *)il2cpp_codegen_object_new (X509Certificate_t1102_il2cpp_TypeInfo_var);
		X509Certificate__ctor_m6579(L_8, L_7, /*hidden argument*/NULL);
		V_4 = L_8;
		X509CertificateCollection_t1238 * L_9 = (__this->___certificates_9);
		X509Certificate_t1102 * L_10 = V_4;
		NullCheck(L_9);
		X509CertificateCollection_Add_m6960(L_9, L_10, /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		int32_t L_12 = V_2;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_004d:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0019;
		}
	}
	{
		X509CertificateCollection_t1238 * L_15 = (__this->___certificates_9);
		TlsServerCertificate_validateCertificates_m7500(__this, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkCertificateUsage(Mono.Security.X509.X509Certificate)
extern TypeInfo* ClientContext_t1324_il2cpp_TypeInfo_var;
extern TypeInfo* KeyUsageExtension_t1309_il2cpp_TypeInfo_var;
extern TypeInfo* ExtendedKeyUsageExtension_t1306_il2cpp_TypeInfo_var;
extern TypeInfo* NetscapeCertTypeExtension_t1311_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1233;
extern Il2CppCodeGenString* _stringLiteral1239;
extern Il2CppCodeGenString* _stringLiteral1243;
extern Il2CppCodeGenString* _stringLiteral1695;
extern Il2CppCodeGenString* _stringLiteral1271;
extern "C" bool TlsServerCertificate_checkCertificateUsage_m7499 (TlsServerCertificate_t1369 * __this, X509Certificate_t1102 * ___cert, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientContext_t1324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(866);
		KeyUsageExtension_t1309_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(916);
		ExtendedKeyUsageExtension_t1306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(859);
		NetscapeCertTypeExtension_t1311_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(917);
		_stringLiteral1233 = il2cpp_codegen_string_literal_from_index(1233);
		_stringLiteral1239 = il2cpp_codegen_string_literal_from_index(1239);
		_stringLiteral1243 = il2cpp_codegen_string_literal_from_index(1243);
		_stringLiteral1695 = il2cpp_codegen_string_literal_from_index(1695);
		_stringLiteral1271 = il2cpp_codegen_string_literal_from_index(1271);
		s_Il2CppMethodIntialized = true;
	}
	ClientContext_t1324 * V_0 = {0};
	int32_t V_1 = {0};
	KeyUsageExtension_t1309 * V_2 = {0};
	ExtendedKeyUsageExtension_t1306 * V_3 = {0};
	X509Extension_t1215 * V_4 = {0};
	NetscapeCertTypeExtension_t1311 * V_5 = {0};
	int32_t V_6 = {0};
	int32_t G_B19_0 = 0;
	int32_t G_B26_0 = 0;
	{
		Context_t1321 * L_0 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		V_0 = ((ClientContext_t1324 *)CastclassClass(L_0, ClientContext_t1324_il2cpp_TypeInfo_var));
		X509Certificate_t1102 * L_1 = ___cert;
		NullCheck(L_1);
		int32_t L_2 = X509Certificate_get_Version_m6569(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) >= ((int32_t)3)))
		{
			goto IL_001a;
		}
	}
	{
		return 1;
	}

IL_001a:
	{
		V_1 = 0;
		ClientContext_t1324 * L_3 = V_0;
		NullCheck(L_3);
		SecurityParameters_t1333 * L_4 = Context_get_Negotiating_m7207(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		CipherSuite_t1320 * L_5 = SecurityParameters_get_Cipher_m7277(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = CipherSuite_get_ExchangeAlgorithmType_m7070(L_5, /*hidden argument*/NULL);
		V_6 = L_6;
		int32_t L_7 = V_6;
		if (L_7 == 0)
		{
			goto IL_0061;
		}
		if (L_7 == 1)
		{
			goto IL_0068;
		}
		if (L_7 == 2)
		{
			goto IL_006a;
		}
		if (L_7 == 3)
		{
			goto IL_0059;
		}
		if (L_7 == 4)
		{
			goto IL_004e;
		}
	}
	{
		goto IL_006a;
	}

IL_004e:
	{
		V_1 = ((int32_t)128);
		goto IL_006a;
	}

IL_0059:
	{
		V_1 = ((int32_t)32);
		goto IL_006a;
	}

IL_0061:
	{
		V_1 = 8;
		goto IL_006a;
	}

IL_0068:
	{
		return 0;
	}

IL_006a:
	{
		V_2 = (KeyUsageExtension_t1309 *)NULL;
		V_3 = (ExtendedKeyUsageExtension_t1306 *)NULL;
		X509Certificate_t1102 * L_8 = ___cert;
		NullCheck(L_8);
		X509ExtensionCollection_t1241 * L_9 = X509Certificate_get_Extensions_m6594(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		X509Extension_t1215 * L_10 = X509ExtensionCollection_get_Item_m6595(L_9, _stringLiteral1233, /*hidden argument*/NULL);
		V_4 = L_10;
		X509Extension_t1215 * L_11 = V_4;
		if (!L_11)
		{
			goto IL_008f;
		}
	}
	{
		X509Extension_t1215 * L_12 = V_4;
		KeyUsageExtension_t1309 * L_13 = (KeyUsageExtension_t1309 *)il2cpp_codegen_object_new (KeyUsageExtension_t1309_il2cpp_TypeInfo_var);
		KeyUsageExtension__ctor_m7025(L_13, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
	}

IL_008f:
	{
		X509Certificate_t1102 * L_14 = ___cert;
		NullCheck(L_14);
		X509ExtensionCollection_t1241 * L_15 = X509Certificate_get_Extensions_m6594(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		X509Extension_t1215 * L_16 = X509ExtensionCollection_get_Item_m6595(L_15, _stringLiteral1239, /*hidden argument*/NULL);
		V_4 = L_16;
		X509Extension_t1215 * L_17 = V_4;
		if (!L_17)
		{
			goto IL_00b0;
		}
	}
	{
		X509Extension_t1215 * L_18 = V_4;
		ExtendedKeyUsageExtension_t1306 * L_19 = (ExtendedKeyUsageExtension_t1306 *)il2cpp_codegen_object_new (ExtendedKeyUsageExtension_t1306_il2cpp_TypeInfo_var);
		ExtendedKeyUsageExtension__ctor_m7016(L_19, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
	}

IL_00b0:
	{
		KeyUsageExtension_t1309 * L_20 = V_2;
		if (!L_20)
		{
			goto IL_00f3;
		}
	}
	{
		ExtendedKeyUsageExtension_t1306 * L_21 = V_3;
		if (!L_21)
		{
			goto IL_00f3;
		}
	}
	{
		KeyUsageExtension_t1309 * L_22 = V_2;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		bool L_24 = KeyUsageExtension_Support_m7028(L_22, L_23, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_00ca;
		}
	}
	{
		return 0;
	}

IL_00ca:
	{
		ExtendedKeyUsageExtension_t1306 * L_25 = V_3;
		NullCheck(L_25);
		ArrayList_t1036 * L_26 = ExtendedKeyUsageExtension_get_KeyPurpose_m7019(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		bool L_27 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(32 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_26, _stringLiteral1243);
		if (L_27)
		{
			goto IL_00f1;
		}
	}
	{
		ExtendedKeyUsageExtension_t1306 * L_28 = V_3;
		NullCheck(L_28);
		ArrayList_t1036 * L_29 = ExtendedKeyUsageExtension_get_KeyPurpose_m7019(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		bool L_30 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(32 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_29, _stringLiteral1695);
		G_B19_0 = ((int32_t)(L_30));
		goto IL_00f2;
	}

IL_00f1:
	{
		G_B19_0 = 1;
	}

IL_00f2:
	{
		return G_B19_0;
	}

IL_00f3:
	{
		KeyUsageExtension_t1309 * L_31 = V_2;
		if (!L_31)
		{
			goto IL_0101;
		}
	}
	{
		KeyUsageExtension_t1309 * L_32 = V_2;
		int32_t L_33 = V_1;
		NullCheck(L_32);
		bool L_34 = KeyUsageExtension_Support_m7028(L_32, L_33, /*hidden argument*/NULL);
		return L_34;
	}

IL_0101:
	{
		ExtendedKeyUsageExtension_t1306 * L_35 = V_3;
		if (!L_35)
		{
			goto IL_0130;
		}
	}
	{
		ExtendedKeyUsageExtension_t1306 * L_36 = V_3;
		NullCheck(L_36);
		ArrayList_t1036 * L_37 = ExtendedKeyUsageExtension_get_KeyPurpose_m7019(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		bool L_38 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(32 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_37, _stringLiteral1243);
		if (L_38)
		{
			goto IL_012e;
		}
	}
	{
		ExtendedKeyUsageExtension_t1306 * L_39 = V_3;
		NullCheck(L_39);
		ArrayList_t1036 * L_40 = ExtendedKeyUsageExtension_get_KeyPurpose_m7019(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		bool L_41 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(32 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_40, _stringLiteral1695);
		G_B26_0 = ((int32_t)(L_41));
		goto IL_012f;
	}

IL_012e:
	{
		G_B26_0 = 1;
	}

IL_012f:
	{
		return G_B26_0;
	}

IL_0130:
	{
		X509Certificate_t1102 * L_42 = ___cert;
		NullCheck(L_42);
		X509ExtensionCollection_t1241 * L_43 = X509Certificate_get_Extensions_m6594(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		X509Extension_t1215 * L_44 = X509ExtensionCollection_get_Item_m6595(L_43, _stringLiteral1271, /*hidden argument*/NULL);
		V_4 = L_44;
		X509Extension_t1215 * L_45 = V_4;
		if (!L_45)
		{
			goto IL_015c;
		}
	}
	{
		X509Extension_t1215 * L_46 = V_4;
		NetscapeCertTypeExtension_t1311 * L_47 = (NetscapeCertTypeExtension_t1311 *)il2cpp_codegen_object_new (NetscapeCertTypeExtension_t1311_il2cpp_TypeInfo_var);
		NetscapeCertTypeExtension__ctor_m7030(L_47, L_46, /*hidden argument*/NULL);
		V_5 = L_47;
		NetscapeCertTypeExtension_t1311 * L_48 = V_5;
		NullCheck(L_48);
		bool L_49 = NetscapeCertTypeExtension_Support_m7032(L_48, ((int32_t)64), /*hidden argument*/NULL);
		return L_49;
	}

IL_015c:
	{
		return 1;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::validateCertificates(Mono.Security.X509.X509CertificateCollection)
extern const Il2CppType* Int32_t214_0_0_0_var;
extern TypeInfo* ClientContext_t1324_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t265_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t1360_il2cpp_TypeInfo_var;
extern TypeInfo* X509Certificate_t1100_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t1036_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t214_il2cpp_TypeInfo_var;
extern TypeInfo* X509CertificateCollection_t1238_il2cpp_TypeInfo_var;
extern TypeInfo* X509Chain_t1302_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t118_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t56_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1696;
extern Il2CppCodeGenString* _stringLiteral1697;
extern Il2CppCodeGenString* _stringLiteral1698;
extern "C" void TlsServerCertificate_validateCertificates_m7500 (TlsServerCertificate_t1369 * __this, X509CertificateCollection_t1238 * ___certificates, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t214_0_0_0_var = il2cpp_codegen_type_from_index(15);
		ClientContext_t1324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(866);
		Int64_t265_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(125);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		TlsException_t1360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(888);
		X509Certificate_t1100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(740);
		ArrayList_t1036_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(670);
		Int32_t214_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		X509CertificateCollection_t1238_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(844);
		X509Chain_t1302_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(918);
		Exception_t118_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		Int32U5BU5D_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(79);
		_stringLiteral1696 = il2cpp_codegen_string_literal_from_index(1696);
		_stringLiteral1697 = il2cpp_codegen_string_literal_from_index(1697);
		_stringLiteral1698 = il2cpp_codegen_string_literal_from_index(1698);
		s_Il2CppMethodIntialized = true;
	}
	ClientContext_t1324 * V_0 = {0};
	uint8_t V_1 = {0};
	ValidationResult_t1352 * V_2 = {0};
	int64_t V_3 = 0;
	String_t* V_4 = {0};
	X509Certificate_t1102 * V_5 = {0};
	X509Certificate_t1100 * V_6 = {0};
	ArrayList_t1036 * V_7 = {0};
	X509CertificateCollection_t1238 * V_8 = {0};
	X509Chain_t1302 * V_9 = {0};
	bool V_10 = false;
	Int32U5BU5D_t56* V_11 = {0};
	int64_t V_12 = 0;
	int32_t V_13 = {0};
	Exception_t118 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t118 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Context_t1321 * L_0 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		V_0 = ((ClientContext_t1324 *)CastclassClass(L_0, ClientContext_t1324_il2cpp_TypeInfo_var));
		V_1 = ((int32_t)42);
		ClientContext_t1324 * L_1 = V_0;
		NullCheck(L_1);
		SslClientStream_t1325 * L_2 = ClientContext_get_SslStream_m7123(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean Mono.Security.Protocol.Tls.SslClientStream::get_HaveRemoteValidation2Callback() */, L_2);
		if (!L_3)
		{
			goto IL_00b4;
		}
	}
	{
		ClientContext_t1324 * L_4 = V_0;
		NullCheck(L_4);
		SslClientStream_t1325 * L_5 = ClientContext_get_SslStream_m7123(L_4, /*hidden argument*/NULL);
		X509CertificateCollection_t1238 * L_6 = ___certificates;
		NullCheck(L_5);
		ValidationResult_t1352 * L_7 = (ValidationResult_t1352 *)VirtFuncInvoker1< ValidationResult_t1352 *, X509CertificateCollection_t1238 * >::Invoke(32 /* Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation2(Mono.Security.X509.X509CertificateCollection) */, L_5, L_6);
		V_2 = L_7;
		ValidationResult_t1352 * L_8 = V_2;
		NullCheck(L_8);
		bool L_9 = ValidationResult_get_Trusted_m7284(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		return;
	}

IL_0038:
	{
		ValidationResult_t1352 * L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11 = ValidationResult_get_ErrorCode_m7285(L_10, /*hidden argument*/NULL);
		V_3 = (((int64_t)((int64_t)L_11)));
		int64_t L_12 = V_3;
		V_12 = L_12;
		int64_t L_13 = V_12;
		if ((((int64_t)L_13) == ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)((int32_t)-2146762487))))))))))
		{
			goto IL_007f;
		}
	}
	{
		int64_t L_14 = V_12;
		if ((((int64_t)L_14) == ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)((int32_t)-2146762486))))))))))
		{
			goto IL_0077;
		}
	}
	{
		int64_t L_15 = V_12;
		if ((((int64_t)L_15) == ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)((int32_t)-2146762495))))))))))
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0087;
	}

IL_006f:
	{
		V_1 = ((int32_t)45);
		goto IL_008f;
	}

IL_0077:
	{
		V_1 = ((int32_t)48);
		goto IL_008f;
	}

IL_007f:
	{
		V_1 = ((int32_t)48);
		goto IL_008f;
	}

IL_0087:
	{
		V_1 = ((int32_t)46);
		goto IL_008f;
	}

IL_008f:
	{
		int64_t L_16 = V_3;
		int64_t L_17 = L_16;
		Object_t * L_18 = Box(Int64_t265_il2cpp_TypeInfo_var, &L_17);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Format_m875(NULL /*static, unused*/, _stringLiteral1696, L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		uint8_t L_20 = V_1;
		String_t* L_21 = V_4;
		String_t* L_22 = String_Concat_m897(NULL /*static, unused*/, _stringLiteral1697, L_21, /*hidden argument*/NULL);
		TlsException_t1360 * L_23 = (TlsException_t1360 *)il2cpp_codegen_object_new (TlsException_t1360_il2cpp_TypeInfo_var);
		TlsException__ctor_m7416(L_23, L_20, L_22, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_23);
	}

IL_00b4:
	{
		X509CertificateCollection_t1238 * L_24 = ___certificates;
		NullCheck(L_24);
		X509Certificate_t1102 * L_25 = X509CertificateCollection_get_Item_m6575(L_24, 0, /*hidden argument*/NULL);
		V_5 = L_25;
		X509Certificate_t1102 * L_26 = V_5;
		NullCheck(L_26);
		ByteU5BU5D_t21* L_27 = (ByteU5BU5D_t21*)VirtFuncInvoker0< ByteU5BU5D_t21* >::Invoke(12 /* System.Byte[] Mono.Security.X509.X509Certificate::get_RawData() */, L_26);
		X509Certificate_t1100 * L_28 = (X509Certificate_t1100 *)il2cpp_codegen_object_new (X509Certificate_t1100_il2cpp_TypeInfo_var);
		X509Certificate__ctor_m7607(L_28, L_27, /*hidden argument*/NULL);
		V_6 = L_28;
		ArrayList_t1036 * L_29 = (ArrayList_t1036 *)il2cpp_codegen_object_new (ArrayList_t1036_il2cpp_TypeInfo_var);
		ArrayList__ctor_m6488(L_29, /*hidden argument*/NULL);
		V_7 = L_29;
		X509Certificate_t1102 * L_30 = V_5;
		bool L_31 = TlsServerCertificate_checkCertificateUsage_m7499(__this, L_30, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_00f1;
		}
	}
	{
		ArrayList_t1036 * L_32 = V_7;
		int32_t L_33 = ((int32_t)-2146762490);
		Object_t * L_34 = Box(Int32_t214_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_32);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_32, L_34);
	}

IL_00f1:
	{
		X509Certificate_t1102 * L_35 = V_5;
		bool L_36 = TlsServerCertificate_checkServerIdentity_m7501(__this, L_35, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_0110;
		}
	}
	{
		ArrayList_t1036 * L_37 = V_7;
		int32_t L_38 = ((int32_t)-2146762481);
		Object_t * L_39 = Box(Int32_t214_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_37);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_37, L_39);
	}

IL_0110:
	{
		X509CertificateCollection_t1238 * L_40 = ___certificates;
		X509CertificateCollection_t1238 * L_41 = (X509CertificateCollection_t1238 *)il2cpp_codegen_object_new (X509CertificateCollection_t1238_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m6958(L_41, L_40, /*hidden argument*/NULL);
		V_8 = L_41;
		X509CertificateCollection_t1238 * L_42 = V_8;
		X509Certificate_t1102 * L_43 = V_5;
		NullCheck(L_42);
		X509CertificateCollection_Remove_m6965(L_42, L_43, /*hidden argument*/NULL);
		X509CertificateCollection_t1238 * L_44 = V_8;
		X509Chain_t1302 * L_45 = (X509Chain_t1302 *)il2cpp_codegen_object_new (X509Chain_t1302_il2cpp_TypeInfo_var);
		X509Chain__ctor_m6968(L_45, L_44, /*hidden argument*/NULL);
		V_9 = L_45;
		V_10 = 0;
	}

IL_012d:
	try
	{ // begin try (depth: 1)
		X509Chain_t1302 * L_46 = V_9;
		X509Certificate_t1102 * L_47 = V_5;
		NullCheck(L_46);
		bool L_48 = X509Chain_Build_m6971(L_46, L_47, /*hidden argument*/NULL);
		V_10 = L_48;
		goto IL_0146;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t118 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t118_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_013d;
		throw e;
	}

CATCH_013d:
	{ // begin catch(System.Exception)
		V_10 = 0;
		goto IL_0146;
	} // end catch (depth: 1)

IL_0146:
	{
		bool L_49 = V_10;
		if (L_49)
		{
			goto IL_0243;
		}
	}
	{
		X509Chain_t1302 * L_50 = V_9;
		NullCheck(L_50);
		int32_t L_51 = X509Chain_get_Status_m6969(L_50, /*hidden argument*/NULL);
		V_13 = L_51;
		int32_t L_52 = V_13;
		if ((((int32_t)L_52) == ((int32_t)1)))
		{
			goto IL_01d9;
		}
	}
	{
		int32_t L_53 = V_13;
		if ((((int32_t)L_53) == ((int32_t)2)))
		{
			goto IL_01c2;
		}
	}
	{
		int32_t L_54 = V_13;
		if ((((int32_t)L_54) == ((int32_t)8)))
		{
			goto IL_01ab;
		}
	}
	{
		int32_t L_55 = V_13;
		if ((((int32_t)L_55) == ((int32_t)((int32_t)32))))
		{
			goto IL_020d;
		}
	}
	{
		int32_t L_56 = V_13;
		if ((((int32_t)L_56) == ((int32_t)((int32_t)1024))))
		{
			goto IL_0194;
		}
	}
	{
		int32_t L_57 = V_13;
		if ((((int32_t)L_57) == ((int32_t)((int32_t)65536))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_0227;
	}

IL_0194:
	{
		ArrayList_t1036 * L_58 = V_7;
		int32_t L_59 = ((int32_t)-2146869223);
		Object_t * L_60 = Box(Int32_t214_il2cpp_TypeInfo_var, &L_59);
		NullCheck(L_58);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_58, L_60);
		goto IL_0243;
	}

IL_01ab:
	{
		ArrayList_t1036 * L_61 = V_7;
		int32_t L_62 = ((int32_t)-2146869232);
		Object_t * L_63 = Box(Int32_t214_il2cpp_TypeInfo_var, &L_62);
		NullCheck(L_61);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_61, L_63);
		goto IL_0243;
	}

IL_01c2:
	{
		ArrayList_t1036 * L_64 = V_7;
		int32_t L_65 = ((int32_t)-2146762494);
		Object_t * L_66 = Box(Int32_t214_il2cpp_TypeInfo_var, &L_65);
		NullCheck(L_64);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_64, L_66);
		goto IL_0243;
	}

IL_01d9:
	{
		V_1 = ((int32_t)45);
		ArrayList_t1036 * L_67 = V_7;
		int32_t L_68 = ((int32_t)-2146762495);
		Object_t * L_69 = Box(Int32_t214_il2cpp_TypeInfo_var, &L_68);
		NullCheck(L_67);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_67, L_69);
		goto IL_0243;
	}

IL_01f3:
	{
		V_1 = ((int32_t)48);
		ArrayList_t1036 * L_70 = V_7;
		int32_t L_71 = ((int32_t)-2146762486);
		Object_t * L_72 = Box(Int32_t214_il2cpp_TypeInfo_var, &L_71);
		NullCheck(L_70);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_70, L_72);
		goto IL_0243;
	}

IL_020d:
	{
		V_1 = ((int32_t)48);
		ArrayList_t1036 * L_73 = V_7;
		int32_t L_74 = ((int32_t)-2146762487);
		Object_t * L_75 = Box(Int32_t214_il2cpp_TypeInfo_var, &L_74);
		NullCheck(L_73);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_73, L_75);
		goto IL_0243;
	}

IL_0227:
	{
		V_1 = ((int32_t)46);
		ArrayList_t1036 * L_76 = V_7;
		X509Chain_t1302 * L_77 = V_9;
		NullCheck(L_77);
		int32_t L_78 = X509Chain_get_Status_m6969(L_77, /*hidden argument*/NULL);
		int32_t L_79 = L_78;
		Object_t * L_80 = Box(Int32_t214_il2cpp_TypeInfo_var, &L_79);
		NullCheck(L_76);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_76, L_80);
		goto IL_0243;
	}

IL_0243:
	{
		ArrayList_t1036 * L_81 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_82 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(Int32_t214_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_81);
		Array_t * L_83 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(48 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_81, L_82);
		V_11 = ((Int32U5BU5D_t56*)Castclass(L_83, Int32U5BU5D_t56_il2cpp_TypeInfo_var));
		ClientContext_t1324 * L_84 = V_0;
		NullCheck(L_84);
		SslClientStream_t1325 * L_85 = ClientContext_get_SslStream_m7123(L_84, /*hidden argument*/NULL);
		X509Certificate_t1100 * L_86 = V_6;
		Int32U5BU5D_t56* L_87 = V_11;
		NullCheck(L_85);
		bool L_88 = (bool)VirtFuncInvoker2< bool, X509Certificate_t1100 *, Int32U5BU5D_t56* >::Invoke(31 /* System.Boolean Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[]) */, L_85, L_86, L_87);
		if (L_88)
		{
			goto IL_027b;
		}
	}
	{
		uint8_t L_89 = V_1;
		TlsException_t1360 * L_90 = (TlsException_t1360 *)il2cpp_codegen_object_new (TlsException_t1360_il2cpp_TypeInfo_var);
		TlsException__ctor_m7416(L_90, L_89, _stringLiteral1698, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_90);
	}

IL_027b:
	{
		return;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkServerIdentity(Mono.Security.X509.X509Certificate)
extern TypeInfo* ClientContext_t1324_il2cpp_TypeInfo_var;
extern TypeInfo* SubjectAltNameExtension_t1312_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1270;
extern "C" bool TlsServerCertificate_checkServerIdentity_m7501 (TlsServerCertificate_t1369 * __this, X509Certificate_t1102 * ___cert, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientContext_t1324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(866);
		SubjectAltNameExtension_t1312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(919);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		_stringLiteral1270 = il2cpp_codegen_string_literal_from_index(1270);
		s_Il2CppMethodIntialized = true;
	}
	ClientContext_t1324 * V_0 = {0};
	String_t* V_1 = {0};
	X509Extension_t1215 * V_2 = {0};
	SubjectAltNameExtension_t1312 * V_3 = {0};
	String_t* V_4 = {0};
	StringU5BU5D_t65* V_5 = {0};
	int32_t V_6 = 0;
	String_t* V_7 = {0};
	StringU5BU5D_t65* V_8 = {0};
	int32_t V_9 = 0;
	{
		Context_t1321 * L_0 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		V_0 = ((ClientContext_t1324 *)CastclassClass(L_0, ClientContext_t1324_il2cpp_TypeInfo_var));
		ClientContext_t1324 * L_1 = V_0;
		NullCheck(L_1);
		TlsClientSettings_t1332 * L_2 = Context_get_ClientSettings_m7164(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = TlsClientSettings_get_TargetHost_m7404(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		X509Certificate_t1102 * L_4 = ___cert;
		NullCheck(L_4);
		X509ExtensionCollection_t1241 * L_5 = X509Certificate_get_Extensions_m6594(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		X509Extension_t1215 * L_6 = X509ExtensionCollection_get_Item_m6595(L_5, _stringLiteral1270, /*hidden argument*/NULL);
		V_2 = L_6;
		X509Extension_t1215 * L_7 = V_2;
		if (!L_7)
		{
			goto IL_00a4;
		}
	}
	{
		X509Extension_t1215 * L_8 = V_2;
		SubjectAltNameExtension_t1312 * L_9 = (SubjectAltNameExtension_t1312 *)il2cpp_codegen_object_new (SubjectAltNameExtension_t1312_il2cpp_TypeInfo_var);
		SubjectAltNameExtension__ctor_m7034(L_9, L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		SubjectAltNameExtension_t1312 * L_10 = V_3;
		NullCheck(L_10);
		StringU5BU5D_t65* L_11 = SubjectAltNameExtension_get_DNSNames_m7036(L_10, /*hidden argument*/NULL);
		V_5 = L_11;
		V_6 = 0;
		goto IL_0062;
	}

IL_0046:
	{
		StringU5BU5D_t65* L_12 = V_5;
		int32_t L_13 = V_6;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(L_12, L_14, sizeof(String_t*)));
		String_t* L_15 = V_1;
		String_t* L_16 = V_4;
		bool L_17 = TlsServerCertificate_Match_m7503(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_005c;
		}
	}
	{
		return 1;
	}

IL_005c:
	{
		int32_t L_18 = V_6;
		V_6 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0062:
	{
		int32_t L_19 = V_6;
		StringU5BU5D_t65* L_20 = V_5;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_20)->max_length)))))))
		{
			goto IL_0046;
		}
	}
	{
		SubjectAltNameExtension_t1312 * L_21 = V_3;
		NullCheck(L_21);
		StringU5BU5D_t65* L_22 = SubjectAltNameExtension_get_IPAddresses_m7037(L_21, /*hidden argument*/NULL);
		V_8 = L_22;
		V_9 = 0;
		goto IL_0099;
	}

IL_007d:
	{
		StringU5BU5D_t65* L_23 = V_8;
		int32_t L_24 = V_9;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		V_7 = (*(String_t**)(String_t**)SZArrayLdElema(L_23, L_25, sizeof(String_t*)));
		String_t* L_26 = V_7;
		String_t* L_27 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_28 = String_op_Equality_m881(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_0093;
		}
	}
	{
		return 1;
	}

IL_0093:
	{
		int32_t L_29 = V_9;
		V_9 = ((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_0099:
	{
		int32_t L_30 = V_9;
		StringU5BU5D_t65* L_31 = V_8;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_31)->max_length)))))))
		{
			goto IL_007d;
		}
	}

IL_00a4:
	{
		X509Certificate_t1102 * L_32 = ___cert;
		NullCheck(L_32);
		String_t* L_33 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String Mono.Security.X509.X509Certificate::get_SubjectName() */, L_32);
		bool L_34 = TlsServerCertificate_checkDomainName_m7502(__this, L_33, /*hidden argument*/NULL);
		return L_34;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkDomainName(System.String)
extern TypeInfo* ClientContext_t1324_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Regex_t886_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1699;
extern "C" bool TlsServerCertificate_checkDomainName_m7502 (TlsServerCertificate_t1369 * __this, String_t* ___subjectName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientContext_t1324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(866);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Regex_t886_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(535);
		_stringLiteral1699 = il2cpp_codegen_string_literal_from_index(1699);
		s_Il2CppMethodIntialized = true;
	}
	ClientContext_t1324 * V_0 = {0};
	String_t* V_1 = {0};
	Regex_t886 * V_2 = {0};
	MatchCollection_t1143 * V_3 = {0};
	{
		Context_t1321 * L_0 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		V_0 = ((ClientContext_t1324 *)CastclassClass(L_0, ClientContext_t1324_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_1;
		Regex_t886 * L_2 = (Regex_t886 *)il2cpp_codegen_object_new (Regex_t886_il2cpp_TypeInfo_var);
		Regex__ctor_m6072(L_2, _stringLiteral1699, /*hidden argument*/NULL);
		V_2 = L_2;
		Regex_t886 * L_3 = V_2;
		String_t* L_4 = ___subjectName;
		NullCheck(L_3);
		MatchCollection_t1143 * L_5 = Regex_Matches_m6090(L_3, L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		MatchCollection_t1143 * L_6 = V_3;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Text.RegularExpressions.MatchCollection::get_Count() */, L_6);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_005f;
		}
	}
	{
		MatchCollection_t1143 * L_8 = V_3;
		NullCheck(L_8);
		Match_t1133 * L_9 = (Match_t1133 *)VirtFuncInvoker1< Match_t1133 *, int32_t >::Invoke(9 /* System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32) */, L_8, 0);
		NullCheck(L_9);
		bool L_10 = Group_get_Success_m6041(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		MatchCollection_t1143 * L_11 = V_3;
		NullCheck(L_11);
		Match_t1133 * L_12 = (Match_t1133 *)VirtFuncInvoker1< Match_t1133 *, int32_t >::Invoke(9 /* System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32) */, L_11, 0);
		NullCheck(L_12);
		GroupCollection_t1139 * L_13 = (GroupCollection_t1139 *)VirtFuncInvoker0< GroupCollection_t1139 * >::Invoke(4 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_12);
		NullCheck(L_13);
		Group_t1138 * L_14 = GroupCollection_get_Item_m6045(L_13, 1, /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_15 = Capture_get_Value_m6026(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		String_t* L_16 = String_ToString_m4841(L_15, /*hidden argument*/NULL);
		V_1 = L_16;
	}

IL_005f:
	{
		ClientContext_t1324 * L_17 = V_0;
		NullCheck(L_17);
		TlsClientSettings_t1332 * L_18 = Context_get_ClientSettings_m7164(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_19 = TlsClientSettings_get_TargetHost_m7404(L_18, /*hidden argument*/NULL);
		String_t* L_20 = V_1;
		bool L_21 = TlsServerCertificate_Match_m7503(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Match(System.String,System.String)
extern TypeInfo* CultureInfo_t882_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool TlsServerCertificate_Match_m7503 (Object_t * __this /* static, unused */, String_t* ___hostname, String_t* ___pattern, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t882_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(705);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = {0};
	int32_t G_B15_0 = 0;
	{
		String_t* L_0 = ___pattern;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m1134(L_0, ((int32_t)42), /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___hostname;
		String_t* L_4 = ___pattern;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t882_il2cpp_TypeInfo_var);
		CultureInfo_t882 * L_5 = CultureInfo_get_InvariantCulture_m6525(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_6 = String_Compare_m6533(NULL /*static, unused*/, L_3, L_4, 1, L_5, /*hidden argument*/NULL);
		return ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		String_t* L_8 = ___pattern;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m3140(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)((int32_t)L_9-(int32_t)1)))))
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_10 = ___pattern;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		uint16_t L_12 = String_get_Chars_m3157(L_10, ((int32_t)((int32_t)L_11+(int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_12) == ((int32_t)((int32_t)46))))
		{
			goto IL_0041;
		}
	}
	{
		return 0;
	}

IL_0041:
	{
		String_t* L_13 = ___pattern;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = String_IndexOf_m4856(L_13, ((int32_t)42), ((int32_t)((int32_t)L_14+(int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_0056;
		}
	}
	{
		return 0;
	}

IL_0056:
	{
		String_t* L_17 = ___pattern;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		String_t* L_19 = String_Substring_m3179(L_17, ((int32_t)((int32_t)L_18+(int32_t)1)), /*hidden argument*/NULL);
		V_2 = L_19;
		String_t* L_20 = ___hostname;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m3140(L_20, /*hidden argument*/NULL);
		String_t* L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m3140(L_22, /*hidden argument*/NULL);
		V_3 = ((int32_t)((int32_t)L_21-(int32_t)L_23));
		int32_t L_24 = V_3;
		if ((((int32_t)L_24) > ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		return 0;
	}

IL_0077:
	{
		String_t* L_25 = ___hostname;
		int32_t L_26 = V_3;
		String_t* L_27 = V_2;
		String_t* L_28 = V_2;
		NullCheck(L_28);
		int32_t L_29 = String_get_Length_m3140(L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t882_il2cpp_TypeInfo_var);
		CultureInfo_t882 * L_30 = CultureInfo_get_InvariantCulture_m6525(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_31 = String_Compare_m7612(NULL /*static, unused*/, L_25, L_26, L_27, 0, L_29, 1, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0093;
		}
	}
	{
		return 0;
	}

IL_0093:
	{
		int32_t L_32 = V_0;
		if (L_32)
		{
			goto IL_00c3;
		}
	}
	{
		String_t* L_33 = ___hostname;
		NullCheck(L_33);
		int32_t L_34 = String_IndexOf_m1134(L_33, ((int32_t)46), /*hidden argument*/NULL);
		V_4 = L_34;
		int32_t L_35 = V_4;
		if ((((int32_t)L_35) == ((int32_t)(-1))))
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_36 = V_4;
		String_t* L_37 = ___hostname;
		NullCheck(L_37);
		int32_t L_38 = String_get_Length_m3140(L_37, /*hidden argument*/NULL);
		String_t* L_39 = V_2;
		NullCheck(L_39);
		int32_t L_40 = String_get_Length_m3140(L_39, /*hidden argument*/NULL);
		G_B15_0 = ((((int32_t)((((int32_t)L_36) < ((int32_t)((int32_t)((int32_t)L_38-(int32_t)L_40))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00c2;
	}

IL_00c1:
	{
		G_B15_0 = 1;
	}

IL_00c2:
	{
		return G_B15_0;
	}

IL_00c3:
	{
		String_t* L_41 = ___pattern;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		String_t* L_43 = String_Substring_m1132(L_41, 0, L_42, /*hidden argument*/NULL);
		V_5 = L_43;
		String_t* L_44 = ___hostname;
		String_t* L_45 = V_5;
		String_t* L_46 = V_5;
		NullCheck(L_46);
		int32_t L_47 = String_get_Length_m3140(L_46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t882_il2cpp_TypeInfo_var);
		CultureInfo_t882 * L_48 = CultureInfo_get_InvariantCulture_m6525(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_49 = String_Compare_m7612(NULL /*static, unused*/, L_44, 0, L_45, 0, L_47, 1, L_48, /*hidden argument*/NULL);
		return ((((int32_t)L_49) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerCertificateRequest__ctor_m7504 (TlsServerCertificateRequest_t1370 * __this, Context_t1321 * ___context, ByteU5BU5D_t21* ___buffer, const MethodInfo* method)
{
	{
		Context_t1321 * L_0 = ___context;
		ByteU5BU5D_t21* L_1 = ___buffer;
		HandshakeMessage__ctor_m7460(__this, L_0, ((int32_t)13), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::Update()
extern "C" void TlsServerCertificateRequest_Update_m7505 (TlsServerCertificateRequest_t1370 * __this, const MethodInfo* method)
{
	{
		HandshakeMessage_Update_m7465(__this, /*hidden argument*/NULL);
		Context_t1321 * L_0 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		TlsServerSettings_t1331 * L_1 = Context_get_ServerSettings_m7163(L_0, /*hidden argument*/NULL);
		ClientCertificateTypeU5BU5D_t1361* L_2 = (__this->___certificateTypes_9);
		NullCheck(L_1);
		TlsServerSettings_set_CertificateTypes_m7429(L_1, L_2, /*hidden argument*/NULL);
		Context_t1321 * L_3 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		TlsServerSettings_t1331 * L_4 = Context_get_ServerSettings_m7163(L_3, /*hidden argument*/NULL);
		StringU5BU5D_t65* L_5 = (__this->___distinguisedNames_10);
		NullCheck(L_4);
		TlsServerSettings_set_DistinguisedNames_m7430(L_4, L_5, /*hidden argument*/NULL);
		Context_t1321 * L_6 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		TlsServerSettings_t1331 * L_7 = Context_get_ServerSettings_m7163(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		TlsServerSettings_set_CertificateRequest_m7428(L_7, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsSsl3()
extern "C" void TlsServerCertificateRequest_ProcessAsSsl3_m7506 (TlsServerCertificateRequest_t1370 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(24 /* System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsTls1() */, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsTls1()
extern TypeInfo* ClientCertificateTypeU5BU5D_t1361_il2cpp_TypeInfo_var;
extern TypeInfo* ASN1_t1212_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t65_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t988_il2cpp_TypeInfo_var;
extern "C" void TlsServerCertificateRequest_ProcessAsTls1_m7507 (TlsServerCertificateRequest_t1370 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientCertificateTypeU5BU5D_t1361_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(920);
		ASN1_t1212_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(722);
		StringU5BU5D_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		Encoding_t988_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(615);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ASN1_t1212 * V_2 = {0};
	int32_t V_3 = 0;
	ASN1_t1212 * V_4 = {0};
	{
		uint8_t L_0 = TlsStream_ReadByte_m7442(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		__this->___certificateTypes_9 = ((ClientCertificateTypeU5BU5D_t1361*)SZArrayNew(ClientCertificateTypeU5BU5D_t1361_il2cpp_TypeInfo_var, L_1));
		V_1 = 0;
		goto IL_002c;
	}

IL_001a:
	{
		ClientCertificateTypeU5BU5D_t1361* L_2 = (__this->___certificateTypes_9);
		int32_t L_3 = V_1;
		uint8_t L_4 = TlsStream_ReadByte_m7442(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, L_3, sizeof(int32_t))) = (int32_t)L_4;
		int32_t L_5 = V_1;
		V_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_002c:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_001a;
		}
	}
	{
		int16_t L_8 = TlsStream_ReadInt16_m7443(__this, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00aa;
		}
	}
	{
		int16_t L_9 = TlsStream_ReadInt16_m7443(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t21* L_10 = TlsStream_ReadBytes_m7445(__this, L_9, /*hidden argument*/NULL);
		ASN1_t1212 * L_11 = (ASN1_t1212 *)il2cpp_codegen_object_new (ASN1_t1212_il2cpp_TypeInfo_var);
		ASN1__ctor_m6542(L_11, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		ASN1_t1212 * L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13 = ASN1_get_Count_m6546(L_12, /*hidden argument*/NULL);
		__this->___distinguisedNames_10 = ((StringU5BU5D_t65*)SZArrayNew(StringU5BU5D_t65_il2cpp_TypeInfo_var, L_13));
		V_3 = 0;
		goto IL_009e;
	}

IL_0068:
	{
		ASN1_t1212 * L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		ASN1_t1212 * L_16 = ASN1_get_Item_m6547(L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		ByteU5BU5D_t21* L_17 = ASN1_get_Value_m6545(L_16, /*hidden argument*/NULL);
		ASN1_t1212 * L_18 = (ASN1_t1212 *)il2cpp_codegen_object_new (ASN1_t1212_il2cpp_TypeInfo_var);
		ASN1__ctor_m6542(L_18, L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		StringU5BU5D_t65* L_19 = (__this->___distinguisedNames_10);
		int32_t L_20 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t988_il2cpp_TypeInfo_var);
		Encoding_t988 * L_21 = Encoding_get_UTF8_m5375(NULL /*static, unused*/, /*hidden argument*/NULL);
		ASN1_t1212 * L_22 = V_4;
		NullCheck(L_22);
		ASN1_t1212 * L_23 = ASN1_get_Item_m6547(L_22, 1, /*hidden argument*/NULL);
		NullCheck(L_23);
		ByteU5BU5D_t21* L_24 = ASN1_get_Value_m6545(L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		String_t* L_25 = (String_t*)VirtFuncInvoker1< String_t*, ByteU5BU5D_t21* >::Invoke(22 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_21, L_24);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		ArrayElementTypeCheck (L_19, L_25);
		*((String_t**)(String_t**)SZArrayLdElema(L_19, L_20, sizeof(String_t*))) = (String_t*)L_25;
		int32_t L_26 = V_3;
		V_3 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_009e:
	{
		int32_t L_27 = V_3;
		ASN1_t1212 * L_28 = V_2;
		NullCheck(L_28);
		int32_t L_29 = ASN1_get_Count_m6546(L_28, /*hidden argument*/NULL);
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0068;
		}
	}

IL_00aa:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerFinished__ctor_m7508 (TlsServerFinished_t1371 * __this, Context_t1321 * ___context, ByteU5BU5D_t21* ___buffer, const MethodInfo* method)
{
	{
		Context_t1321 * L_0 = ___context;
		ByteU5BU5D_t21* L_1 = ___buffer;
		HandshakeMessage__ctor_m7460(__this, L_0, ((int32_t)20), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.cctor()
extern TypeInfo* ByteU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* TlsServerFinished_t1371_il2cpp_TypeInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t1385____U24U24fieldU2D22_14_FieldInfo_var;
extern "C" void TlsServerFinished__cctor_m7509 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		TlsServerFinished_t1371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(887);
		U3CPrivateImplementationDetailsU3E_t1385____U24U24fieldU2D22_14_FieldInfo_var = il2cpp_codegen_field_info_from_index(833, 14);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t21* L_0 = ((ByteU5BU5D_t21*)SZArrayNew(ByteU5BU5D_t21_il2cpp_TypeInfo_var, 4));
		RuntimeHelpers_InitializeArray_m5287(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t1385____U24U24fieldU2D22_14_FieldInfo_var), /*hidden argument*/NULL);
		((TlsServerFinished_t1371_StaticFields*)TlsServerFinished_t1371_il2cpp_TypeInfo_var->static_fields)->___Ssl3Marker_9 = L_0;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::Update()
extern "C" void TlsServerFinished_Update_m7510 (TlsServerFinished_t1371 * __this, const MethodInfo* method)
{
	{
		HandshakeMessage_Update_m7465(__this, /*hidden argument*/NULL);
		Context_t1321 * L_0 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Context_set_HandshakeState_m7168(L_0, 2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsSsl3()
extern TypeInfo* SslHandshakeHash_t1357_il2cpp_TypeInfo_var;
extern TypeInfo* TlsServerFinished_t1371_il2cpp_TypeInfo_var;
extern TypeInfo* CipherSuite_t1320_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t1360_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1700;
extern "C" void TlsServerFinished_ProcessAsSsl3_m7511 (TlsServerFinished_t1371 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SslHandshakeHash_t1357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(914);
		TlsServerFinished_t1371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(887);
		CipherSuite_t1320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(865);
		TlsException_t1360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(888);
		_stringLiteral1700 = il2cpp_codegen_string_literal_from_index(1700);
		s_Il2CppMethodIntialized = true;
	}
	HashAlgorithm_t1292 * V_0 = {0};
	ByteU5BU5D_t21* V_1 = {0};
	ByteU5BU5D_t21* V_2 = {0};
	ByteU5BU5D_t21* V_3 = {0};
	{
		Context_t1321 * L_0 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_t21* L_1 = Context_get_MasterSecret_m7188(L_0, /*hidden argument*/NULL);
		SslHandshakeHash_t1357 * L_2 = (SslHandshakeHash_t1357 *)il2cpp_codegen_object_new (SslHandshakeHash_t1357_il2cpp_TypeInfo_var);
		SslHandshakeHash__ctor_m7328(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Context_t1321 * L_3 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		TlsStream_t1334 * L_4 = Context_get_HandshakeMessages_m7175(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		ByteU5BU5D_t21* L_5 = TlsStream_ToArray_m7452(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		HashAlgorithm_t1292 * L_6 = V_0;
		ByteU5BU5D_t21* L_7 = V_1;
		ByteU5BU5D_t21* L_8 = V_1;
		NullCheck(L_8);
		ByteU5BU5D_t21* L_9 = V_1;
		NullCheck(L_6);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t21*, int32_t, int32_t, ByteU5BU5D_t21*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_6, L_7, 0, (((int32_t)((int32_t)(((Array_t *)L_8)->max_length)))), L_9, 0);
		HashAlgorithm_t1292 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TlsServerFinished_t1371_il2cpp_TypeInfo_var);
		ByteU5BU5D_t21* L_11 = ((TlsServerFinished_t1371_StaticFields*)TlsServerFinished_t1371_il2cpp_TypeInfo_var->static_fields)->___Ssl3Marker_9;
		ByteU5BU5D_t21* L_12 = ((TlsServerFinished_t1371_StaticFields*)TlsServerFinished_t1371_il2cpp_TypeInfo_var->static_fields)->___Ssl3Marker_9;
		NullCheck(L_12);
		ByteU5BU5D_t21* L_13 = ((TlsServerFinished_t1371_StaticFields*)TlsServerFinished_t1371_il2cpp_TypeInfo_var->static_fields)->___Ssl3Marker_9;
		NullCheck(L_10);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t21*, int32_t, int32_t, ByteU5BU5D_t21*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_10, L_11, 0, (((int32_t)((int32_t)(((Array_t *)L_12)->max_length)))), L_13, 0);
		HashAlgorithm_t1292 * L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CipherSuite_t1320_il2cpp_TypeInfo_var);
		ByteU5BU5D_t21* L_15 = ((CipherSuite_t1320_StaticFields*)CipherSuite_t1320_il2cpp_TypeInfo_var->static_fields)->___EmptyArray_0;
		NullCheck(L_14);
		VirtFuncInvoker3< ByteU5BU5D_t21*, ByteU5BU5D_t21*, int32_t, int32_t >::Invoke(7 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, L_14, L_15, 0, 0);
		int64_t L_16 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(8 /* System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length() */, __this);
		ByteU5BU5D_t21* L_17 = TlsStream_ReadBytes_m7445(__this, (((int32_t)((int32_t)L_16))), /*hidden argument*/NULL);
		V_2 = L_17;
		HashAlgorithm_t1292 * L_18 = V_0;
		NullCheck(L_18);
		ByteU5BU5D_t21* L_19 = (ByteU5BU5D_t21*)VirtFuncInvoker0< ByteU5BU5D_t21* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash() */, L_18);
		V_3 = L_19;
		ByteU5BU5D_t21* L_20 = V_3;
		ByteU5BU5D_t21* L_21 = V_2;
		bool L_22 = HandshakeMessage_Compare_m7467(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		TlsException_t1360 * L_23 = (TlsException_t1360 *)il2cpp_codegen_object_new (TlsException_t1360_il2cpp_TypeInfo_var);
		TlsException__ctor_m7416(L_23, ((int32_t)71), _stringLiteral1700, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_23);
	}

IL_0086:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsTls1()
extern TypeInfo* MD5SHA1_t1315_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t1360_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1701;
extern Il2CppCodeGenString* _stringLiteral1700;
extern "C" void TlsServerFinished_ProcessAsTls1_m7512 (TlsServerFinished_t1371 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MD5SHA1_t1315_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(905);
		TlsException_t1360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(888);
		_stringLiteral1701 = il2cpp_codegen_string_literal_from_index(1701);
		_stringLiteral1700 = il2cpp_codegen_string_literal_from_index(1700);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t21* V_0 = {0};
	HashAlgorithm_t1292 * V_1 = {0};
	ByteU5BU5D_t21* V_2 = {0};
	ByteU5BU5D_t21* V_3 = {0};
	ByteU5BU5D_t21* V_4 = {0};
	{
		int64_t L_0 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(8 /* System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length() */, __this);
		ByteU5BU5D_t21* L_1 = TlsStream_ReadBytes_m7445(__this, (((int32_t)((int32_t)L_0))), /*hidden argument*/NULL);
		V_0 = L_1;
		MD5SHA1_t1315 * L_2 = (MD5SHA1_t1315 *)il2cpp_codegen_object_new (MD5SHA1_t1315_il2cpp_TypeInfo_var);
		MD5SHA1__ctor_m7046(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		Context_t1321 * L_3 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		TlsStream_t1334 * L_4 = Context_get_HandshakeMessages_m7175(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		ByteU5BU5D_t21* L_5 = TlsStream_ToArray_m7452(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		HashAlgorithm_t1292 * L_6 = V_1;
		ByteU5BU5D_t21* L_7 = V_2;
		ByteU5BU5D_t21* L_8 = V_2;
		NullCheck(L_8);
		NullCheck(L_6);
		ByteU5BU5D_t21* L_9 = HashAlgorithm_ComputeHash_m7564(L_6, L_7, 0, (((int32_t)((int32_t)(((Array_t *)L_8)->max_length)))), /*hidden argument*/NULL);
		V_3 = L_9;
		Context_t1321 * L_10 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		SecurityParameters_t1333 * L_11 = Context_get_Current_m7206(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		CipherSuite_t1320 * L_12 = SecurityParameters_get_Cipher_m7277(L_11, /*hidden argument*/NULL);
		Context_t1321 * L_13 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		ByteU5BU5D_t21* L_14 = Context_get_MasterSecret_m7188(L_13, /*hidden argument*/NULL);
		ByteU5BU5D_t21* L_15 = V_3;
		NullCheck(L_12);
		ByteU5BU5D_t21* L_16 = CipherSuite_PRF_m7088(L_12, L_14, _stringLiteral1701, L_15, ((int32_t)12), /*hidden argument*/NULL);
		V_4 = L_16;
		ByteU5BU5D_t21* L_17 = V_4;
		ByteU5BU5D_t21* L_18 = V_0;
		bool L_19 = HandshakeMessage_Compare_m7467(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0073;
		}
	}
	{
		TlsException_t1360 * L_20 = (TlsException_t1360 *)il2cpp_codegen_object_new (TlsException_t1360_il2cpp_TypeInfo_var);
		TlsException__ctor_m7411(L_20, _stringLiteral1700, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_20);
	}

IL_0073:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerHello__ctor_m7513 (TlsServerHello_t1372 * __this, Context_t1321 * ___context, ByteU5BU5D_t21* ___buffer, const MethodInfo* method)
{
	{
		Context_t1321 * L_0 = ___context;
		ByteU5BU5D_t21* L_1 = ___buffer;
		HandshakeMessage__ctor_m7460(__this, L_0, 2, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::Update()
extern TypeInfo* ByteU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" void TlsServerHello_Update_m7514 (TlsServerHello_t1372 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t21* V_3 = {0};
	ByteU5BU5D_t21* V_4 = {0};
	{
		HandshakeMessage_Update_m7465(__this, /*hidden argument*/NULL);
		Context_t1321 * L_0 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t21* L_1 = (__this->___sessionId_11);
		NullCheck(L_0);
		Context_set_SessionId_m7160(L_0, L_1, /*hidden argument*/NULL);
		Context_t1321 * L_2 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t21* L_3 = (__this->___random_10);
		NullCheck(L_2);
		Context_set_ServerRandom_m7183(L_2, L_3, /*hidden argument*/NULL);
		Context_t1321 * L_4 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		SecurityParameters_t1333 * L_5 = Context_get_Negotiating_m7207(L_4, /*hidden argument*/NULL);
		CipherSuite_t1320 * L_6 = (__this->___cipherSuite_12);
		NullCheck(L_5);
		SecurityParameters_set_Cipher_m7278(L_5, L_6, /*hidden argument*/NULL);
		Context_t1321 * L_7 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		int32_t L_8 = (__this->___compressionMethod_9);
		NullCheck(L_7);
		Context_set_CompressionMethod_m7162(L_7, L_8, /*hidden argument*/NULL);
		Context_t1321 * L_9 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Context_set_ProtocolNegotiated_m7154(L_9, 1, /*hidden argument*/NULL);
		Context_t1321 * L_10 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		ByteU5BU5D_t21* L_11 = Context_get_ClientRandom_m7180(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		V_0 = (((int32_t)((int32_t)(((Array_t *)L_11)->max_length))));
		Context_t1321 * L_12 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		ByteU5BU5D_t21* L_13 = Context_get_ServerRandom_m7182(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		V_1 = (((int32_t)((int32_t)(((Array_t *)L_13)->max_length))));
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)L_15));
		int32_t L_16 = V_2;
		V_3 = ((ByteU5BU5D_t21*)SZArrayNew(ByteU5BU5D_t21_il2cpp_TypeInfo_var, L_16));
		Context_t1321 * L_17 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		ByteU5BU5D_t21* L_18 = Context_get_ClientRandom_m7180(L_17, /*hidden argument*/NULL);
		ByteU5BU5D_t21* L_19 = V_3;
		int32_t L_20 = V_0;
		Buffer_BlockCopy_m5329(NULL /*static, unused*/, (Array_t *)(Array_t *)L_18, 0, (Array_t *)(Array_t *)L_19, 0, L_20, /*hidden argument*/NULL);
		Context_t1321 * L_21 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		ByteU5BU5D_t21* L_22 = Context_get_ServerRandom_m7182(L_21, /*hidden argument*/NULL);
		ByteU5BU5D_t21* L_23 = V_3;
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		Buffer_BlockCopy_m5329(NULL /*static, unused*/, (Array_t *)(Array_t *)L_22, 0, (Array_t *)(Array_t *)L_23, L_24, L_25, /*hidden argument*/NULL);
		Context_t1321 * L_26 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t21* L_27 = V_3;
		NullCheck(L_26);
		Context_set_RandomCS_m7185(L_26, L_27, /*hidden argument*/NULL);
		int32_t L_28 = V_2;
		V_4 = ((ByteU5BU5D_t21*)SZArrayNew(ByteU5BU5D_t21_il2cpp_TypeInfo_var, L_28));
		Context_t1321 * L_29 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		ByteU5BU5D_t21* L_30 = Context_get_ServerRandom_m7182(L_29, /*hidden argument*/NULL);
		ByteU5BU5D_t21* L_31 = V_4;
		int32_t L_32 = V_1;
		Buffer_BlockCopy_m5329(NULL /*static, unused*/, (Array_t *)(Array_t *)L_30, 0, (Array_t *)(Array_t *)L_31, 0, L_32, /*hidden argument*/NULL);
		Context_t1321 * L_33 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		ByteU5BU5D_t21* L_34 = Context_get_ClientRandom_m7180(L_33, /*hidden argument*/NULL);
		ByteU5BU5D_t21* L_35 = V_4;
		int32_t L_36 = V_1;
		int32_t L_37 = V_0;
		Buffer_BlockCopy_m5329(NULL /*static, unused*/, (Array_t *)(Array_t *)L_34, 0, (Array_t *)(Array_t *)L_35, L_36, L_37, /*hidden argument*/NULL);
		Context_t1321 * L_38 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t21* L_39 = V_4;
		NullCheck(L_38);
		Context_set_RandomSC_m7187(L_38, L_39, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsSsl3()
extern "C" void TlsServerHello_ProcessAsSsl3_m7515 (TlsServerHello_t1372 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(24 /* System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsTls1() */, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsTls1()
extern TypeInfo* ClientSessionCache_t1329_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t1360_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1702;
extern "C" void TlsServerHello_ProcessAsTls1_m7516 (TlsServerHello_t1372 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientSessionCache_t1329_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(890);
		TlsException_t1360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(888);
		_stringLiteral1702 = il2cpp_codegen_string_literal_from_index(1702);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int16_t V_1 = 0;
	{
		int16_t L_0 = TlsStream_ReadInt16_m7443(__this, /*hidden argument*/NULL);
		TlsServerHello_processProtocol_m7517(__this, L_0, /*hidden argument*/NULL);
		ByteU5BU5D_t21* L_1 = TlsStream_ReadBytes_m7445(__this, ((int32_t)32), /*hidden argument*/NULL);
		__this->___random_10 = L_1;
		uint8_t L_2 = TlsStream_ReadByte_m7442(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_4 = V_0;
		ByteU5BU5D_t21* L_5 = TlsStream_ReadBytes_m7445(__this, L_4, /*hidden argument*/NULL);
		__this->___sessionId_11 = L_5;
		Context_t1321 * L_6 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		TlsClientSettings_t1332 * L_7 = Context_get_ClientSettings_m7164(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = TlsClientSettings_get_TargetHost_m7404(L_7, /*hidden argument*/NULL);
		ByteU5BU5D_t21* L_9 = (__this->___sessionId_11);
		IL2CPP_RUNTIME_CLASS_INIT(ClientSessionCache_t1329_il2cpp_TypeInfo_var);
		ClientSessionCache_Add_m7145(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		Context_t1321 * L_10 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t21* L_11 = (__this->___sessionId_11);
		Context_t1321 * L_12 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		ByteU5BU5D_t21* L_13 = Context_get_SessionId_m7159(L_12, /*hidden argument*/NULL);
		bool L_14 = HandshakeMessage_Compare_m7467(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		Context_set_AbbreviatedHandshake_m7152(L_10, L_14, /*hidden argument*/NULL);
		goto IL_0082;
	}

IL_0076:
	{
		Context_t1321 * L_15 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Context_set_AbbreviatedHandshake_m7152(L_15, 0, /*hidden argument*/NULL);
	}

IL_0082:
	{
		int16_t L_16 = TlsStream_ReadInt16_m7443(__this, /*hidden argument*/NULL);
		V_1 = L_16;
		Context_t1321 * L_17 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		CipherSuiteCollection_t1322 * L_18 = Context_get_SupportedCiphers_m7173(L_17, /*hidden argument*/NULL);
		int16_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = CipherSuiteCollection_IndexOf_m7114(L_18, L_19, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)(-1)))))
		{
			goto IL_00ad;
		}
	}
	{
		TlsException_t1360 * L_21 = (TlsException_t1360 *)il2cpp_codegen_object_new (TlsException_t1360_il2cpp_TypeInfo_var);
		TlsException__ctor_m7416(L_21, ((int32_t)71), _stringLiteral1702, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_21);
	}

IL_00ad:
	{
		Context_t1321 * L_22 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		CipherSuiteCollection_t1322 * L_23 = Context_get_SupportedCiphers_m7173(L_22, /*hidden argument*/NULL);
		int16_t L_24 = V_1;
		NullCheck(L_23);
		CipherSuite_t1320 * L_25 = CipherSuiteCollection_get_Item_m7107(L_23, L_24, /*hidden argument*/NULL);
		__this->___cipherSuite_12 = L_25;
		uint8_t L_26 = TlsStream_ReadByte_m7442(__this, /*hidden argument*/NULL);
		__this->___compressionMethod_9 = L_26;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::processProtocol(System.Int16)
extern TypeInfo* TlsException_t1360_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1648;
extern "C" void TlsServerHello_processProtocol_m7517 (TlsServerHello_t1372 * __this, int16_t ___protocol, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TlsException_t1360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(888);
		_stringLiteral1648 = il2cpp_codegen_string_literal_from_index(1648);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		Context_t1321 * L_0 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		int16_t L_1 = ___protocol;
		NullCheck(L_0);
		int32_t L_2 = Context_DecodeProtocolCode_m7204(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		Context_t1321 * L_4 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = Context_get_SecurityProtocolFlags_m7157(L_4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_3&(int32_t)L_5))) == ((int32_t)L_6)))
		{
			goto IL_003b;
		}
	}
	{
		Context_t1321 * L_7 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = Context_get_SecurityProtocolFlags_m7157(L_7, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)-1073741824)))) == ((uint32_t)((int32_t)-1073741824)))))
		{
			goto IL_0079;
		}
	}

IL_003b:
	{
		Context_t1321 * L_9 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		Context_set_SecurityProtocol_m7156(L_9, L_10, /*hidden argument*/NULL);
		Context_t1321 * L_11 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		CipherSuiteCollection_t1322 * L_12 = Context_get_SupportedCiphers_m7173(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		CipherSuiteCollection_Clear_m7112(L_12, /*hidden argument*/NULL);
		Context_t1321 * L_13 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Context_set_SupportedCiphers_m7174(L_13, (CipherSuiteCollection_t1322 *)NULL, /*hidden argument*/NULL);
		Context_t1321 * L_14 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		int32_t L_15 = V_0;
		CipherSuiteCollection_t1322 * L_16 = CipherSuiteFactory_GetSupportedCiphers_m7119(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		Context_set_SupportedCiphers_m7174(L_14, L_16, /*hidden argument*/NULL);
		goto IL_0086;
	}

IL_0079:
	{
		TlsException_t1360 * L_17 = (TlsException_t1360 *)il2cpp_codegen_object_new (TlsException_t1360_il2cpp_TypeInfo_var);
		TlsException__ctor_m7416(L_17, ((int32_t)70), _stringLiteral1648, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_17);
	}

IL_0086:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerHelloDone__ctor_m7518 (TlsServerHelloDone_t1373 * __this, Context_t1321 * ___context, ByteU5BU5D_t21* ___buffer, const MethodInfo* method)
{
	{
		Context_t1321 * L_0 = ___context;
		ByteU5BU5D_t21* L_1 = ___buffer;
		HandshakeMessage__ctor_m7460(__this, L_0, ((int32_t)14), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsSsl3()
extern "C" void TlsServerHelloDone_ProcessAsSsl3_m7519 (TlsServerHelloDone_t1373 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsTls1()
extern "C" void TlsServerHelloDone_ProcessAsTls1_m7520 (TlsServerHelloDone_t1373 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerKeyExchange__ctor_m7521 (TlsServerKeyExchange_t1374 * __this, Context_t1321 * ___context, ByteU5BU5D_t21* ___buffer, const MethodInfo* method)
{
	{
		Context_t1321 * L_0 = ___context;
		ByteU5BU5D_t21* L_1 = ___buffer;
		HandshakeMessage__ctor_m7460(__this, L_0, ((int32_t)12), L_1, /*hidden argument*/NULL);
		TlsServerKeyExchange_verifySignature_m7525(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::Update()
extern "C" void TlsServerKeyExchange_Update_m7522 (TlsServerKeyExchange_t1374 * __this, const MethodInfo* method)
{
	{
		HandshakeMessage_Update_m7465(__this, /*hidden argument*/NULL);
		Context_t1321 * L_0 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		TlsServerSettings_t1331 * L_1 = Context_get_ServerSettings_m7163(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		TlsServerSettings_set_ServerKeyExchange_m7420(L_1, 1, /*hidden argument*/NULL);
		Context_t1321 * L_2 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		TlsServerSettings_t1331 * L_3 = Context_get_ServerSettings_m7163(L_2, /*hidden argument*/NULL);
		RSAParameters_t1232  L_4 = (__this->___rsaParams_9);
		NullCheck(L_3);
		TlsServerSettings_set_RsaParameters_m7425(L_3, L_4, /*hidden argument*/NULL);
		Context_t1321 * L_5 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		TlsServerSettings_t1331 * L_6 = Context_get_ServerSettings_m7163(L_5, /*hidden argument*/NULL);
		ByteU5BU5D_t21* L_7 = (__this->___signedParams_10);
		NullCheck(L_6);
		TlsServerSettings_set_SignedParams_m7426(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsSsl3()
extern "C" void TlsServerKeyExchange_ProcessAsSsl3_m7523 (TlsServerKeyExchange_t1374 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(24 /* System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsTls1() */, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsTls1()
extern TypeInfo* RSAParameters_t1232_il2cpp_TypeInfo_var;
extern "C" void TlsServerKeyExchange_ProcessAsTls1_m7524 (TlsServerKeyExchange_t1374 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RSAParameters_t1232_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(724);
		s_Il2CppMethodIntialized = true;
	}
	RSAParameters_t1232  V_0 = {0};
	{
		Initobj (RSAParameters_t1232_il2cpp_TypeInfo_var, (&V_0));
		RSAParameters_t1232  L_0 = V_0;
		__this->___rsaParams_9 = L_0;
		RSAParameters_t1232 * L_1 = &(__this->___rsaParams_9);
		int16_t L_2 = TlsStream_ReadInt16_m7443(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t21* L_3 = TlsStream_ReadBytes_m7445(__this, L_2, /*hidden argument*/NULL);
		L_1->___Modulus_6 = L_3;
		RSAParameters_t1232 * L_4 = &(__this->___rsaParams_9);
		int16_t L_5 = TlsStream_ReadInt16_m7443(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t21* L_6 = TlsStream_ReadBytes_m7445(__this, L_5, /*hidden argument*/NULL);
		L_4->___Exponent_7 = L_6;
		int16_t L_7 = TlsStream_ReadInt16_m7443(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t21* L_8 = TlsStream_ReadBytes_m7445(__this, L_7, /*hidden argument*/NULL);
		__this->___signedParams_10 = L_8;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::verifySignature()
extern TypeInfo* MD5SHA1_t1315_il2cpp_TypeInfo_var;
extern TypeInfo* TlsStream_t1334_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t1360_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1703;
extern "C" void TlsServerKeyExchange_verifySignature_m7525 (TlsServerKeyExchange_t1374 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MD5SHA1_t1315_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(905);
		TlsStream_t1334_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(867);
		TlsException_t1360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(888);
		_stringLiteral1703 = il2cpp_codegen_string_literal_from_index(1703);
		s_Il2CppMethodIntialized = true;
	}
	MD5SHA1_t1315 * V_0 = {0};
	int32_t V_1 = 0;
	TlsStream_t1334 * V_2 = {0};
	bool V_3 = false;
	{
		MD5SHA1_t1315 * L_0 = (MD5SHA1_t1315 *)il2cpp_codegen_object_new (MD5SHA1_t1315_il2cpp_TypeInfo_var);
		MD5SHA1__ctor_m7046(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		RSAParameters_t1232 * L_1 = &(__this->___rsaParams_9);
		ByteU5BU5D_t21* L_2 = (L_1->___Modulus_6);
		NullCheck(L_2);
		RSAParameters_t1232 * L_3 = &(__this->___rsaParams_9);
		ByteU5BU5D_t21* L_4 = (L_3->___Exponent_7);
		NullCheck(L_4);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_2)->max_length))))+(int32_t)(((int32_t)((int32_t)(((Array_t *)L_4)->max_length))))))+(int32_t)4));
		TlsStream_t1334 * L_5 = (TlsStream_t1334 *)il2cpp_codegen_object_new (TlsStream_t1334_il2cpp_TypeInfo_var);
		TlsStream__ctor_m7432(L_5, /*hidden argument*/NULL);
		V_2 = L_5;
		TlsStream_t1334 * L_6 = V_2;
		Context_t1321 * L_7 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		ByteU5BU5D_t21* L_8 = Context_get_RandomCS_m7184(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		TlsStream_Write_m7450(L_6, L_8, /*hidden argument*/NULL);
		TlsStream_t1334 * L_9 = V_2;
		ByteU5BU5D_t21* L_10 = TlsStream_ToArray_m7452(__this, /*hidden argument*/NULL);
		int32_t L_11 = V_1;
		NullCheck(L_9);
		VirtActionInvoker3< ByteU5BU5D_t21*, int32_t, int32_t >::Invoke(18 /* System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[],System.Int32,System.Int32) */, L_9, L_10, 0, L_11);
		MD5SHA1_t1315 * L_12 = V_0;
		TlsStream_t1334 * L_13 = V_2;
		NullCheck(L_13);
		ByteU5BU5D_t21* L_14 = TlsStream_ToArray_m7452(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		HashAlgorithm_ComputeHash_m5289(L_12, L_14, /*hidden argument*/NULL);
		TlsStream_t1334 * L_15 = V_2;
		NullCheck(L_15);
		TlsStream_Reset_m7451(L_15, /*hidden argument*/NULL);
		MD5SHA1_t1315 * L_16 = V_0;
		Context_t1321 * L_17 = HandshakeMessage_get_Context_m7461(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		TlsServerSettings_t1331 * L_18 = Context_get_ServerSettings_m7163(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		RSA_t1211 * L_19 = TlsServerSettings_get_CertificateRSA_m7423(L_18, /*hidden argument*/NULL);
		ByteU5BU5D_t21* L_20 = (__this->___signedParams_10);
		NullCheck(L_16);
		bool L_21 = MD5SHA1_VerifySignature_m7051(L_16, L_19, L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		TlsException_t1360 * L_23 = (TlsException_t1360 *)il2cpp_codegen_object_new (TlsException_t1360_il2cpp_TypeInfo_var);
		TlsException__ctor_m7416(L_23, ((int32_t)50), _stringLiteral1703, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_23);
	}

IL_008c:
	{
		return;
	}
}
// System.Void Mono.Math.Prime.PrimalityTest::.ctor(System.Object,System.IntPtr)
extern "C" void PrimalityTest__ctor_m7526 (PrimalityTest_t1375 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean Mono.Math.Prime.PrimalityTest::Invoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern "C" bool PrimalityTest_Invoke_m7527 (PrimalityTest_t1375 * __this, BigInteger_t1276 * ___bi, int32_t ___confidence, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PrimalityTest_Invoke_m7527((PrimalityTest_t1375 *)__this->___prev_9,___bi, ___confidence, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, BigInteger_t1276 * ___bi, int32_t ___confidence, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, BigInteger_t1276 * ___bi, int32_t ___confidence, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, int32_t ___confidence, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_PrimalityTest_t1375(Il2CppObject* delegate, BigInteger_t1276 * ___bi, int32_t ___confidence)
{
	// Marshaling of parameter '___bi' to native representation
	BigInteger_t1276 * ____bi_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Math.BigInteger'."));
}
// System.IAsyncResult Mono.Math.Prime.PrimalityTest::BeginInvoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor,System.AsyncCallback,System.Object)
extern TypeInfo* ConfidenceFactor_t1278_il2cpp_TypeInfo_var;
extern "C" Object_t * PrimalityTest_BeginInvoke_m7528 (PrimalityTest_t1375 * __this, BigInteger_t1276 * ___bi, int32_t ___confidence, AsyncCallback_t99 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfidenceFactor_t1278_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(922);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___bi;
	__d_args[1] = Box(ConfidenceFactor_t1278_il2cpp_TypeInfo_var, &___confidence);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean Mono.Math.Prime.PrimalityTest::EndInvoke(System.IAsyncResult)
extern "C" bool PrimalityTest_EndInvoke_m7529 (PrimalityTest_t1375 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern "C" void CertificateValidationCallback__ctor_m7530 (CertificateValidationCallback_t1354 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool CertificateValidationCallback_Invoke_m7531 (CertificateValidationCallback_t1354 * __this, X509Certificate_t1100 * ___certificate, Int32U5BU5D_t56* ___certificateErrors, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CertificateValidationCallback_Invoke_m7531((CertificateValidationCallback_t1354 *)__this->___prev_9,___certificate, ___certificateErrors, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, X509Certificate_t1100 * ___certificate, Int32U5BU5D_t56* ___certificateErrors, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___certificate, ___certificateErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, X509Certificate_t1100 * ___certificate, Int32U5BU5D_t56* ___certificateErrors, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___certificate, ___certificateErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Int32U5BU5D_t56* ___certificateErrors, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___certificate, ___certificateErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_CertificateValidationCallback_t1354(Il2CppObject* delegate, X509Certificate_t1100 * ___certificate, Int32U5BU5D_t56* ___certificateErrors)
{
	// Marshaling of parameter '___certificate' to native representation
	X509Certificate_t1100 * ____certificate_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509Certificate'."));
}
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[],System.AsyncCallback,System.Object)
extern "C" Object_t * CertificateValidationCallback_BeginInvoke_m7532 (CertificateValidationCallback_t1354 * __this, X509Certificate_t1100 * ___certificate, Int32U5BU5D_t56* ___certificateErrors, AsyncCallback_t99 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___certificate;
	__d_args[1] = ___certificateErrors;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern "C" bool CertificateValidationCallback_EndInvoke_m7533 (CertificateValidationCallback_t1354 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback2::.ctor(System.Object,System.IntPtr)
extern "C" void CertificateValidationCallback2__ctor_m7534 (CertificateValidationCallback2_t1355 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::Invoke(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t1352 * CertificateValidationCallback2_Invoke_m7535 (CertificateValidationCallback2_t1355 * __this, X509CertificateCollection_t1238 * ___collection, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CertificateValidationCallback2_Invoke_m7535((CertificateValidationCallback2_t1355 *)__this->___prev_9,___collection, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef ValidationResult_t1352 * (*FunctionPointerType) (Object_t *, Object_t * __this, X509CertificateCollection_t1238 * ___collection, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___collection,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef ValidationResult_t1352 * (*FunctionPointerType) (Object_t * __this, X509CertificateCollection_t1238 * ___collection, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___collection,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef ValidationResult_t1352 * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___collection,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" ValidationResult_t1352 * pinvoke_delegate_wrapper_CertificateValidationCallback2_t1355(Il2CppObject* delegate, X509CertificateCollection_t1238 * ___collection)
{
	// Marshaling of parameter '___collection' to native representation
	X509CertificateCollection_t1238 * ____collection_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Security.X509.X509CertificateCollection'."));
}
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::BeginInvoke(Mono.Security.X509.X509CertificateCollection,System.AsyncCallback,System.Object)
extern "C" Object_t * CertificateValidationCallback2_BeginInvoke_m7536 (CertificateValidationCallback2_t1355 * __this, X509CertificateCollection_t1238 * ___collection, AsyncCallback_t99 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___collection;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::EndInvoke(System.IAsyncResult)
extern "C" ValidationResult_t1352 * CertificateValidationCallback2_EndInvoke_m7537 (CertificateValidationCallback2_t1355 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (ValidationResult_t1352 *)__result;
}
// System.Void Mono.Security.Protocol.Tls.CertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void CertificateSelectionCallback__ctor_m7538 (CertificateSelectionCallback_t1339 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t1100 * CertificateSelectionCallback_Invoke_m7539 (CertificateSelectionCallback_t1339 * __this, X509CertificateCollection_t1074 * ___clientCertificates, X509Certificate_t1100 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1074 * ___serverRequestedCertificates, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CertificateSelectionCallback_Invoke_m7539((CertificateSelectionCallback_t1339 *)__this->___prev_9,___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef X509Certificate_t1100 * (*FunctionPointerType) (Object_t *, Object_t * __this, X509CertificateCollection_t1074 * ___clientCertificates, X509Certificate_t1100 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1074 * ___serverRequestedCertificates, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef X509Certificate_t1100 * (*FunctionPointerType) (Object_t * __this, X509CertificateCollection_t1074 * ___clientCertificates, X509Certificate_t1100 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1074 * ___serverRequestedCertificates, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef X509Certificate_t1100 * (*FunctionPointerType) (Object_t * __this, X509Certificate_t1100 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1074 * ___serverRequestedCertificates, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" X509Certificate_t1100 * pinvoke_delegate_wrapper_CertificateSelectionCallback_t1339(Il2CppObject* delegate, X509CertificateCollection_t1074 * ___clientCertificates, X509Certificate_t1100 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1074 * ___serverRequestedCertificates)
{
	// Marshaling of parameter '___clientCertificates' to native representation
	X509CertificateCollection_t1074 * ____clientCertificates_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509CertificateCollection'."));
}
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateSelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.AsyncCallback,System.Object)
extern "C" Object_t * CertificateSelectionCallback_BeginInvoke_m7540 (CertificateSelectionCallback_t1339 * __this, X509CertificateCollection_t1074 * ___clientCertificates, X509Certificate_t1100 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1074 * ___serverRequestedCertificates, AsyncCallback_t99 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___clientCertificates;
	__d_args[1] = ___serverCertificate;
	__d_args[2] = ___targetHost;
	__d_args[3] = ___serverRequestedCertificates;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern "C" X509Certificate_t1100 * CertificateSelectionCallback_EndInvoke_m7541 (CertificateSelectionCallback_t1339 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (X509Certificate_t1100 *)__result;
}
// System.Void Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void PrivateKeySelectionCallback__ctor_m7542 (PrivateKeySelectionCallback_t1340 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t1090 * PrivateKeySelectionCallback_Invoke_m7543 (PrivateKeySelectionCallback_t1340 * __this, X509Certificate_t1100 * ___certificate, String_t* ___targetHost, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PrivateKeySelectionCallback_Invoke_m7543((PrivateKeySelectionCallback_t1340 *)__this->___prev_9,___certificate, ___targetHost, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef AsymmetricAlgorithm_t1090 * (*FunctionPointerType) (Object_t *, Object_t * __this, X509Certificate_t1100 * ___certificate, String_t* ___targetHost, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___certificate, ___targetHost,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef AsymmetricAlgorithm_t1090 * (*FunctionPointerType) (Object_t * __this, X509Certificate_t1100 * ___certificate, String_t* ___targetHost, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___certificate, ___targetHost,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef AsymmetricAlgorithm_t1090 * (*FunctionPointerType) (Object_t * __this, String_t* ___targetHost, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___certificate, ___targetHost,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" AsymmetricAlgorithm_t1090 * pinvoke_delegate_wrapper_PrivateKeySelectionCallback_t1340(Il2CppObject* delegate, X509Certificate_t1100 * ___certificate, String_t* ___targetHost)
{
	// Marshaling of parameter '___certificate' to native representation
	X509Certificate_t1100 * ____certificate_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509Certificate'."));
}
// System.IAsyncResult Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * PrivateKeySelectionCallback_BeginInvoke_m7544 (PrivateKeySelectionCallback_t1340 * __this, X509Certificate_t1100 * ___certificate, String_t* ___targetHost, AsyncCallback_t99 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___certificate;
	__d_args[1] = ___targetHost;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::EndInvoke(System.IAsyncResult)
extern "C" AsymmetricAlgorithm_t1090 * PrivateKeySelectionCallback_EndInvoke_m7545 (PrivateKeySelectionCallback_t1340 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (AsymmetricAlgorithm_t1090 *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
