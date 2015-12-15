#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PhotonPlayer
struct PhotonPlayer_t76;
// PhotonView
struct PhotonView_t83;

#include "mscorlib_System_Object.h"

// PhotonMessageInfo
struct  PhotonMessageInfo_t82  : public Object_t
{
	// System.Int32 PhotonMessageInfo::timeInt
	int32_t ___timeInt_0;
	// PhotonPlayer PhotonMessageInfo::sender
	PhotonPlayer_t76 * ___sender_1;
	// PhotonView PhotonMessageInfo::photonView
	PhotonView_t83 * ___photonView_2;
};
