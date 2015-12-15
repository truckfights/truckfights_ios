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

// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t13;
// System.Type
struct Type_t;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t201;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t266;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t264;
// System.String
struct String_t;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t257;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t43;
// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t218;
// ExitGames.Client.Photon.DeserializeStreamMethod
struct DeserializeStreamMethod_t219;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerStateValue.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionProtocol.h"

// System.Void ExitGames.Client.Photon.PhotonPeer::set_SocketImplementation(System.Type)
extern "C" void PhotonPeer_set_SocketImplementation_m900 (PhotonPeer_t13 * __this, Type_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_DebugOut(ExitGames.Client.Photon.DebugLevel)
extern "C" void PhotonPeer_set_DebugOut_m889 (PhotonPeer_t13 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::get_DebugOut()
extern "C" uint8_t PhotonPeer_get_DebugOut_m890 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::get_Listener()
extern "C" Object_t * PhotonPeer_get_Listener_m903 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_Listener(ExitGames.Client.Photon.IPhotonPeerListener)
extern "C" void PhotonPeer_set_Listener_m946 (PhotonPeer_t13 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsEnabled()
extern "C" bool PhotonPeer_get_TrafficStatsEnabled_m1073 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TrafficStatsEnabled(System.Boolean)
extern "C" void PhotonPeer_set_TrafficStatsEnabled_m1074 (PhotonPeer_t13 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsElapsedMs()
extern "C" int64_t PhotonPeer_get_TrafficStatsElapsedMs_m1095 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::TrafficStatsReset()
extern "C" void PhotonPeer_TrafficStatsReset_m1084 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsIncoming()
extern "C" TrafficStats_t266 * PhotonPeer_get_TrafficStatsIncoming_m1102 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsOutgoing()
extern "C" TrafficStats_t266 * PhotonPeer_get_TrafficStatsOutgoing_m1103 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsGameLevel()
extern "C" TrafficStatsGameLevel_t264 * PhotonPeer_get_TrafficStatsGameLevel_m1094 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.PhotonPeer::get_QuickResendAttempts()
extern "C" uint8_t PhotonPeer_get_QuickResendAttempts_m1080 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_QuickResendAttempts(System.Byte)
extern "C" void PhotonPeer_set_QuickResendAttempts_m882 (PhotonPeer_t13 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PeerStateValue ExitGames.Client.Photon.PhotonPeer::get_PeerState()
extern "C" uint8_t PhotonPeer_get_PeerState_m885 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_LimitOfUnreliableCommands()
extern "C" int32_t PhotonPeer_get_LimitOfUnreliableCommands_m1071 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_LimitOfUnreliableCommands(System.Int32)
extern "C" void PhotonPeer_set_LimitOfUnreliableCommands_m947 (PhotonPeer_t13 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_CrcEnabled()
extern "C" bool PhotonPeer_get_CrcEnabled_m1076 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_CrcEnabled(System.Boolean)
extern "C" void PhotonPeer_set_CrcEnabled_m1077 (PhotonPeer_t13 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_PacketLossByCrc()
extern "C" int32_t PhotonPeer_get_PacketLossByCrc_m1078 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_ResentReliableCommands()
extern "C" int32_t PhotonPeer_get_ResentReliableCommands_m1075 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_SentCountAllowance()
extern "C" int32_t PhotonPeer_get_SentCountAllowance_m1079 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_SentCountAllowance(System.Int32)
extern "C" void PhotonPeer_set_SentCountAllowance_m883 (PhotonPeer_t13 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TimePingInterval(System.Int32)
extern "C" void PhotonPeer_set_TimePingInterval_m880 (PhotonPeer_t13 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_DisconnectTimeout()
extern "C" int32_t PhotonPeer_get_DisconnectTimeout_m1081 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_DisconnectTimeout(System.Int32)
extern "C" void PhotonPeer_set_DisconnectTimeout_m1082 (PhotonPeer_t13 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_ServerTimeInMilliSeconds()
extern "C" int32_t PhotonPeer_get_ServerTimeInMilliSeconds_m998 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_RoundTripTime()
extern "C" int32_t PhotonPeer_get_RoundTripTime_m1048 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_RoundTripTimeVariance()
extern "C" int32_t PhotonPeer_get_RoundTripTimeVariance_m1049 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_TimestampOfLastSocketReceive()
extern "C" int32_t PhotonPeer_get_TimestampOfLastSocketReceive_m5069 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PhotonPeer::get_ServerAddress()
extern "C" String_t* PhotonPeer_get_ServerAddress_m978 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::get_UsedProtocol()
extern "C" uint8_t PhotonPeer_get_UsedProtocol_m902 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_IsSimulationEnabled()
extern "C" bool PhotonPeer_get_IsSimulationEnabled_m5070 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_IsSimulationEnabled(System.Boolean)
extern "C" void PhotonPeer_set_IsSimulationEnabled_m5071 (PhotonPeer_t13 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PhotonPeer::get_NetworkSimulationSettings()
extern "C" NetworkSimulationSet_t257 * PhotonPeer_get_NetworkSimulationSettings_m1051 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_IsEncryptionAvailable()
extern "C" bool PhotonPeer_get_IsEncryptionAvailable_m904 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_IsSendingOnlyAcks(System.Boolean)
extern "C" void PhotonPeer_set_IsSendingOnlyAcks_m1070 (PhotonPeer_t13 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::.ctor(ExitGames.Client.Photon.ConnectionProtocol)
extern "C" void PhotonPeer__ctor_m937 (PhotonPeer_t13 * __this, uint8_t ___protocolType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
extern "C" void PhotonPeer__ctor_m898 (PhotonPeer_t13 * __this, Object_t * ___listener, uint8_t ___protocolType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::Connect(System.String,System.String)
extern "C" bool PhotonPeer_Connect_m952 (PhotonPeer_t13 * __this, String_t* ___serverAddress, String_t* ___applicationName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect()
extern "C" void PhotonPeer_Disconnect_m953 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::StopThread()
extern "C" void PhotonPeer_StopThread_m5072 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::FetchServerTimestamp()
extern "C" void PhotonPeer_FetchServerTimestamp_m5073 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::EstablishEncryption()
extern "C" bool PhotonPeer_EstablishEncryption_m878 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::Service()
extern "C" void PhotonPeer_Service_m5074 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOutgoingCommands()
extern "C" bool PhotonPeer_SendOutgoingCommands_m5075 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendAcksOnly()
extern "C" bool PhotonPeer_SendAcksOnly_m5076 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::DispatchIncomingCommands()
extern "C" bool PhotonPeer_DispatchIncomingCommands_m5077 (PhotonPeer_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PhotonPeer::VitalStatsToString(System.Boolean)
extern "C" String_t* PhotonPeer_VitalStatsToString_m1085 (PhotonPeer_t13 * __this, bool ___all, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean)
extern "C" bool PhotonPeer_OpCustom_m5078 (PhotonPeer_t13 * __this, uint8_t ___customOpCode, Dictionary_2_t43 * ___customOpParameters, bool ___sendReliable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean,System.Byte)
extern "C" bool PhotonPeer_OpCustom_m5079 (PhotonPeer_t13 * __this, uint8_t ___customOpCode, Dictionary_2_t43 * ___customOpParameters, bool ___sendReliable, uint8_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean,System.Byte,System.Boolean)
extern "C" bool PhotonPeer_OpCustom_m5080 (PhotonPeer_t13 * __this, uint8_t ___customOpCode, Dictionary_2_t43 * ___customOpParameters, bool ___sendReliable, uint8_t ___channelId, bool ___encrypt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::RegisterType(System.Type,System.Byte,ExitGames.Client.Photon.SerializeStreamMethod,ExitGames.Client.Photon.DeserializeStreamMethod)
extern "C" bool PhotonPeer_RegisterType_m910 (Object_t * __this /* static, unused */, Type_t * ___customType, uint8_t ___code, SerializeStreamMethod_t218 * ___serializeMethod, DeserializeStreamMethod_t219 * ___constructor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
