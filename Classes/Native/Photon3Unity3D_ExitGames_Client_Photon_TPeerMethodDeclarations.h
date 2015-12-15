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

// ExitGames.Client.Photon.TPeer
struct TPeer_t957;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t43;
// System.Byte[]
struct ByteU5BU5D_t21;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t200;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase_EgMessageTyp.h"

// System.Void ExitGames.Client.Photon.TPeer::.ctor()
extern "C" void TPeer__ctor_m5194 (TPeer_t957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::InitPeerBase()
extern "C" void TPeer_InitPeerBase_m5195 (TPeer_t957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.TPeer::Connect(System.String,System.String)
extern "C" bool TPeer_Connect_m5196 (TPeer_t957 * __this, String_t* ___serverAddress, String_t* ___appID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::Disconnect()
extern "C" void TPeer_Disconnect_m5197 (TPeer_t957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::StopConnection()
extern "C" void TPeer_StopConnection_m5198 (TPeer_t957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::FetchServerTimestamp()
extern "C" void TPeer_FetchServerTimestamp_m5199 (TPeer_t957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::EnqueueInit()
extern "C" void TPeer_EnqueueInit_m5200 (TPeer_t957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.TPeer::DispatchIncomingCommands()
extern "C" bool TPeer_DispatchIncomingCommands_m5201 (TPeer_t957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.TPeer::SendOutgoingCommands()
extern "C" bool TPeer_SendOutgoingCommands_m5202 (TPeer_t957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.TPeer::SendAcksOnly()
extern "C" bool TPeer_SendAcksOnly_m5203 (TPeer_t957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.TPeer::EnqueueOperation(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Byte,System.Boolean,System.Byte,System.Boolean,ExitGames.Client.Photon.PeerBase/EgMessageType)
extern "C" bool TPeer_EnqueueOperation_m5204 (TPeer_t957 * __this, Dictionary_2_t43 * ___parameters, uint8_t ___opCode, bool ___sendReliable, uint8_t ___channelId, bool ___encrypt, uint8_t ___messageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.TPeer::SerializeOperationToMessage(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.PeerBase/EgMessageType,System.Boolean)
extern "C" ByteU5BU5D_t21* TPeer_SerializeOperationToMessage_m5205 (TPeer_t957 * __this, uint8_t ___opc, Dictionary_2_t43 * ___parameters, uint8_t ___messageType, bool ___encrypt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.TPeer::EnqueueMessageAsPayload(System.Boolean,System.Byte[],System.Byte)
extern "C" bool TPeer_EnqueueMessageAsPayload_m5206 (TPeer_t957 * __this, bool ___sendReliable, ByteU5BU5D_t21* ___opMessage, uint8_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::SendPing()
extern "C" void TPeer_SendPing_m5207 (TPeer_t957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::SendData(System.Byte[])
extern "C" void TPeer_SendData_m5208 (TPeer_t957 * __this, ByteU5BU5D_t21* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::ReceiveIncomingCommands(System.Byte[],System.Int32)
extern "C" void TPeer_ReceiveIncomingCommands_m5209 (TPeer_t957 * __this, ByteU5BU5D_t21* ___inbuff, int32_t ___dataLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::ReadPingResult(System.Byte[])
extern "C" void TPeer_ReadPingResult_m5210 (TPeer_t957 * __this, ByteU5BU5D_t21* ___inbuff, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::ReadPingResult(ExitGames.Client.Photon.OperationResponse)
extern "C" void TPeer_ReadPingResult_m5211 (TPeer_t957 * __this, OperationResponse_t200 * ___operationResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::.cctor()
extern "C" void TPeer__cctor_m5212 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
