#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Queue`1<System.Byte[]>
struct Queue_1_t958;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t959;
// System.Byte[]
struct ByteU5BU5D_t21;

#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase.h"

// ExitGames.Client.Photon.TPeer
struct  TPeer_t957  : public PeerBase_t911
{
	// System.Collections.Generic.Queue`1<System.Byte[]> ExitGames.Client.Photon.TPeer::incomingList
	Queue_1_t958 * ___incomingList_72;
	// System.Collections.Generic.List`1<System.Byte[]> ExitGames.Client.Photon.TPeer::outgoingStream
	List_1_t959 * ___outgoingStream_73;
	// System.Int32 ExitGames.Client.Photon.TPeer::lastPingResult
	int32_t ___lastPingResult_74;
	// System.Byte[] ExitGames.Client.Photon.TPeer::pingRequest
	ByteU5BU5D_t21* ___pingRequest_75;
	// System.Byte[] ExitGames.Client.Photon.TPeer::messageHeader
	ByteU5BU5D_t21* ___messageHeader_78;
	// System.Boolean ExitGames.Client.Photon.TPeer::DoFraming
	bool ___DoFraming_79;
};
struct TPeer_t957_StaticFields{
	// System.Byte[] ExitGames.Client.Photon.TPeer::tcpFramedMessageHead
	ByteU5BU5D_t21* ___tcpFramedMessageHead_76;
	// System.Byte[] ExitGames.Client.Photon.TPeer::tcpMsgHead
	ByteU5BU5D_t21* ___tcpMsgHead_77;
};
