﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Client.Photon.PeerBase
struct PeerBase_t911;
// System.Object
struct Object_t;

#include "mscorlib_System_Object.h"

// ExitGames.Client.Photon.PhotonPeer
struct  PhotonPeer_t13  : public Object_t
{
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PhotonPeer::peerBase
	PeerBase_t911 * ___peerBase_1;
	// System.Object ExitGames.Client.Photon.PhotonPeer::SendOutgoingLockObject
	Object_t * ___SendOutgoingLockObject_2;
	// System.Object ExitGames.Client.Photon.PhotonPeer::DispatchLockObject
	Object_t * ___DispatchLockObject_3;
	// System.Object ExitGames.Client.Photon.PhotonPeer::EnqueueLock
	Object_t * ___EnqueueLock_4;
};
