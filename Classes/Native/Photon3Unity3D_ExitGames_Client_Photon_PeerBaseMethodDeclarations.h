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

// ExitGames.Client.Photon.PeerBase
struct PeerBase_t911;
// System.String
struct String_t;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t201;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t257;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t43;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t200;
// ExitGames.Client.Photon.PeerBase/MyAction
struct MyAction_t907;
// System.Byte[]
struct ByteU5BU5D_t21;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode.h"

// System.Int64 ExitGames.Client.Photon.PeerBase::get_TrafficStatsEnabledTime()
extern "C" int64_t PeerBase_get_TrafficStatsEnabledTime_m4952 (PeerBase_t911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::get_TrafficStatsEnabled()
extern "C" bool PeerBase_get_TrafficStatsEnabled_m4953 (PeerBase_t911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_TrafficStatsEnabled(System.Boolean)
extern "C" void PeerBase_set_TrafficStatsEnabled_m4954 (PeerBase_t911 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PeerBase::get_ServerAddress()
extern "C" String_t* PeerBase_get_ServerAddress_m4955 (PeerBase_t911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_ServerAddress(System.String)
extern "C" void PeerBase_set_ServerAddress_m4956 (PeerBase_t911 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PeerBase::get_Listener()
extern "C" Object_t * PeerBase_get_Listener_m4957 (PeerBase_t911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_Listener(ExitGames.Client.Photon.IPhotonPeerListener)
extern "C" void PeerBase_set_Listener_m4958 (PeerBase_t911 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.PeerBase::get_QuickResendAttempts()
extern "C" uint8_t PeerBase_get_QuickResendAttempts_m4959 (PeerBase_t911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_QuickResendAttempts(System.Byte)
extern "C" void PeerBase_set_QuickResendAttempts_m4960 (PeerBase_t911 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::get_NetworkSimulationSettings()
extern "C" NetworkSimulationSet_t257 * PeerBase_get_NetworkSimulationSettings_m4961 (PeerBase_t911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::CommandLogResize()
extern "C" void PeerBase_CommandLogResize_m4962 (PeerBase_t911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::CommandLogInit()
extern "C" void PeerBase_CommandLogInit_m4963 (PeerBase_t911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::InitOnce()
extern "C" void PeerBase_InitOnce_m4964 (PeerBase_t911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::EnqueueOperation(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Byte,System.Boolean,System.Byte,System.Boolean)
extern "C" bool PeerBase_EnqueueOperation_m4965 (PeerBase_t911 * __this, Dictionary_2_t43 * ___parameters, uint8_t ___opCode, bool ___sendReliable, uint8_t ___channelId, bool ___encrypted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::SendAcksOnly()
extern "C" bool PeerBase_SendAcksOnly_m4966 (PeerBase_t911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::InitCallback()
extern "C" void PeerBase_InitCallback_m4967 (PeerBase_t911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::get_IsSendingOnlyAcks()
extern "C" bool PeerBase_get_IsSendingOnlyAcks_m4968 (PeerBase_t911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_IsSendingOnlyAcks(System.Boolean)
extern "C" void PeerBase_set_IsSendingOnlyAcks_m4969 (PeerBase_t911 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::ExchangeKeysForEncryption()
extern "C" bool PeerBase_ExchangeKeysForEncryption_m4970 (PeerBase_t911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::DeriveSharedKey(ExitGames.Client.Photon.OperationResponse)
extern "C" void PeerBase_DeriveSharedKey_m4971 (PeerBase_t911 * __this, OperationResponse_t200 * ___operationResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueActionForDispatch(ExitGames.Client.Photon.PeerBase/MyAction)
extern "C" void PeerBase_EnqueueActionForDispatch_m4972 (PeerBase_t911 * __this, MyAction_t907 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueDebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C" void PeerBase_EnqueueDebugReturn_m4973 (PeerBase_t911 * __this, uint8_t ___level, String_t* ___debugReturn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueStatusCallback(ExitGames.Client.Photon.StatusCode)
extern "C" void PeerBase_EnqueueStatusCallback_m4974 (PeerBase_t911 * __this, int32_t ___statusValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::InitPeerBase()
extern "C" void PeerBase_InitPeerBase_m4975 (PeerBase_t911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::DeserializeMessageAndCallback(System.Byte[])
extern "C" bool PeerBase_DeserializeMessageAndCallback_m4976 (PeerBase_t911 * __this, ByteU5BU5D_t21* ___inBuff, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::SendNetworkSimulated(ExitGames.Client.Photon.PeerBase/MyAction)
extern "C" void PeerBase_SendNetworkSimulated_m4977 (PeerBase_t911 * __this, MyAction_t907 * ___sendAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::ReceiveNetworkSimulated(ExitGames.Client.Photon.PeerBase/MyAction)
extern "C" void PeerBase_ReceiveNetworkSimulated_m4978 (PeerBase_t911 * __this, MyAction_t907 * ___receiveAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::NetworkSimRun()
extern "C" void PeerBase_NetworkSimRun_m4979 (PeerBase_t911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::UpdateRoundTripTimeAndVariance(System.Int32)
extern "C" void PeerBase_UpdateRoundTripTimeAndVariance_m4980 (PeerBase_t911 * __this, int32_t ___lastRoundtripTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::InitializeTrafficStats()
extern "C" void PeerBase_InitializeTrafficStats_m4981 (PeerBase_t911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::.ctor()
extern "C" void PeerBase__ctor_m4982 (PeerBase_t911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::.cctor()
extern "C" void PeerBase__cctor_m4983 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
