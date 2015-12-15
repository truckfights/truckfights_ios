#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.EnetChannel>
struct Dictionary_2_t923;
// System.Collections.Generic.List`1<ExitGames.Client.Photon.NCommand>
struct List_1_t924;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>
struct Queue_1_t906;
// System.Byte[]
struct ByteU5BU5D_t21;
// ExitGames.Client.Photon.EnetChannel[]
struct EnetChannelU5BU5D_t925;
// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t926;

#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase.h"

// ExitGames.Client.Photon.EnetPeer
struct  EnetPeer_t920  : public PeerBase_t911
{
	// System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.EnetChannel> ExitGames.Client.Photon.EnetPeer::channels
	Dictionary_2_t923 * ___channels_72;
	// System.Collections.Generic.List`1<ExitGames.Client.Photon.NCommand> ExitGames.Client.Photon.EnetPeer::sentReliableCommands
	List_1_t924 * ___sentReliableCommands_73;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand> ExitGames.Client.Photon.EnetPeer::outgoingAcknowledgementsList
	Queue_1_t906 * ___outgoingAcknowledgementsList_74;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::windowSize
	int32_t ___windowSize_75;
	// System.Byte ExitGames.Client.Photon.EnetPeer::udpCommandCount
	uint8_t ___udpCommandCount_76;
	// System.Byte[] ExitGames.Client.Photon.EnetPeer::udpBuffer
	ByteU5BU5D_t21* ___udpBuffer_77;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::udpBufferIndex
	int32_t ___udpBufferIndex_78;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::challenge
	int32_t ___challenge_79;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::reliableCommandsRepeated
	int32_t ___reliableCommandsRepeated_80;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::reliableCommandsSent
	int32_t ___reliableCommandsSent_81;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::serverSentTime
	int32_t ___serverSentTime_82;
	// System.Byte[] ExitGames.Client.Photon.EnetPeer::initData
	ByteU5BU5D_t21* ___initData_85;
	// ExitGames.Client.Photon.EnetChannel[] ExitGames.Client.Photon.EnetPeer::channelArray
	EnetChannelU5BU5D_t925* ___channelArray_86;
	// System.Collections.Generic.Queue`1<System.Int32> ExitGames.Client.Photon.EnetPeer::commandsToRemove
	Queue_1_t926 * ___commandsToRemove_87;
};
struct EnetPeer_t920_StaticFields{
	// System.Byte[] ExitGames.Client.Photon.EnetPeer::udpHeader0xF3
	ByteU5BU5D_t21* ___udpHeader0xF3_83;
	// System.Byte[] ExitGames.Client.Photon.EnetPeer::messageHeader
	ByteU5BU5D_t21* ___messageHeader_84;
};
