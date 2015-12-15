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

// ExitGames.Client.Photon.EnetPeer
struct EnetPeer_t920;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t43;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>
struct Queue_1_t906;
// ExitGames.Client.Photon.NCommand
struct NCommand_t914;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase_EgMessageTyp.h"

// System.Void ExitGames.Client.Photon.EnetPeer::.ctor()
extern "C" void EnetPeer__ctor_m4989 (EnetPeer_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::InitPeerBase()
extern "C" void EnetPeer_InitPeerBase_m4990 (EnetPeer_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::Connect(System.String,System.String)
extern "C" bool EnetPeer_Connect_m4991 (EnetPeer_t920 * __this, String_t* ___ipport, String_t* ___appID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::Disconnect()
extern "C" void EnetPeer_Disconnect_m4992 (EnetPeer_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::StopConnection()
extern "C" void EnetPeer_StopConnection_m4993 (EnetPeer_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::FetchServerTimestamp()
extern "C" void EnetPeer_FetchServerTimestamp_m4994 (EnetPeer_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::DispatchIncomingCommands()
extern "C" bool EnetPeer_DispatchIncomingCommands_m4995 (EnetPeer_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::SendAcksOnly()
extern "C" bool EnetPeer_SendAcksOnly_m4996 (EnetPeer_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::SendOutgoingCommands()
extern "C" bool EnetPeer_SendOutgoingCommands_m4997 (EnetPeer_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::AreReliableCommandsInTransit()
extern "C" bool EnetPeer_AreReliableCommandsInTransit_m4998 (EnetPeer_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::EnqueueOperation(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Byte,System.Boolean,System.Byte,System.Boolean,ExitGames.Client.Photon.PeerBase/EgMessageType)
extern "C" bool EnetPeer_EnqueueOperation_m4999 (EnetPeer_t920 * __this, Dictionary_2_t43 * ___parameters, uint8_t ___opCode, bool ___sendReliable, uint8_t ___channelId, bool ___encrypt, uint8_t ___messageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::CreateAndEnqueueCommand(System.Byte,System.Byte[],System.Byte)
extern "C" bool EnetPeer_CreateAndEnqueueCommand_m5000 (EnetPeer_t920 * __this, uint8_t ___commandType, ByteU5BU5D_t21* ___payload, uint8_t ___channelNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.EnetPeer::SerializeOperationToMessage(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.PeerBase/EgMessageType,System.Boolean)
extern "C" ByteU5BU5D_t21* EnetPeer_SerializeOperationToMessage_m5001 (EnetPeer_t920 * __this, uint8_t ___opc, Dictionary_2_t43 * ___parameters, uint8_t ___messageType, bool ___encrypt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.EnetPeer::SerializeToBuffer(System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>)
extern "C" int32_t EnetPeer_SerializeToBuffer_m5002 (EnetPeer_t920 * __this, Queue_1_t906 * ___commandList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::SendData(System.Byte[],System.Int32)
extern "C" void EnetPeer_SendData_m5003 (EnetPeer_t920 * __this, ByteU5BU5D_t21* ___data, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::QueueSentCommand(ExitGames.Client.Photon.NCommand)
extern "C" void EnetPeer_QueueSentCommand_m5004 (EnetPeer_t920 * __this, NCommand_t914 * ___command, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::QueueOutgoingReliableCommand(ExitGames.Client.Photon.NCommand)
extern "C" void EnetPeer_QueueOutgoingReliableCommand_m5005 (EnetPeer_t920 * __this, NCommand_t914 * ___command, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::QueueOutgoingUnreliableCommand(ExitGames.Client.Photon.NCommand)
extern "C" void EnetPeer_QueueOutgoingUnreliableCommand_m5006 (EnetPeer_t920 * __this, NCommand_t914 * ___command, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::QueueOutgoingAcknowledgement(ExitGames.Client.Photon.NCommand)
extern "C" void EnetPeer_QueueOutgoingAcknowledgement_m5007 (EnetPeer_t920 * __this, NCommand_t914 * ___command, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::ReceiveIncomingCommands(System.Byte[],System.Int32)
extern "C" void EnetPeer_ReceiveIncomingCommands_m5008 (EnetPeer_t920 * __this, ByteU5BU5D_t21* ___inBuff, int32_t ___dataLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::ExecuteCommand(ExitGames.Client.Photon.NCommand)
extern "C" bool EnetPeer_ExecuteCommand_m5009 (EnetPeer_t920 * __this, NCommand_t914 * ___command, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::QueueIncomingCommand(ExitGames.Client.Photon.NCommand)
extern "C" bool EnetPeer_QueueIncomingCommand_m5010 (EnetPeer_t920 * __this, NCommand_t914 * ___command, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.EnetPeer::RemoveSentReliableCommand(System.Int32,System.Int32)
extern "C" NCommand_t914 * EnetPeer_RemoveSentReliableCommand_m5011 (EnetPeer_t920 * __this, int32_t ___ackReceivedReliableSequenceNumber, int32_t ___ackReceivedChannel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::<ExecuteCommand>b__13()
extern "C" void EnetPeer_U3CExecuteCommandU3Eb__13_m5012 (EnetPeer_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::.cctor()
extern "C" void EnetPeer__cctor_m5013 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
