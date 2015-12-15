#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Region
struct Region_t91;
// ExitGames.Client.Photon.PhotonPing
struct PhotonPing_t117;
// System.String
struct String_t;
// System.Diagnostics.Stopwatch
struct Stopwatch_t93;
// System.Exception
struct Exception_t118;
// System.Object
struct Object_t;
// PhotonPingManager
struct PhotonPingManager_t89;

#include "mscorlib_System_Object.h"

// PhotonPingManager/<PingSocket>c__Iterator1
struct  U3CPingSocketU3Ec__Iterator1_t116  : public Object_t
{
	// Region PhotonPingManager/<PingSocket>c__Iterator1::region
	Region_t91 * ___region_0;
	// ExitGames.Client.Photon.PhotonPing PhotonPingManager/<PingSocket>c__Iterator1::<ping>__0
	PhotonPing_t117 * ___U3CpingU3E__0_1;
	// System.Single PhotonPingManager/<PingSocket>c__Iterator1::<rttSum>__1
	float ___U3CrttSumU3E__1_2;
	// System.Int32 PhotonPingManager/<PingSocket>c__Iterator1::<replyCount>__2
	int32_t ___U3CreplyCountU3E__2_3;
	// System.String PhotonPingManager/<PingSocket>c__Iterator1::<cleanIpOfRegion>__3
	String_t* ___U3CcleanIpOfRegionU3E__3_4;
	// System.Int32 PhotonPingManager/<PingSocket>c__Iterator1::<indexOfColon>__4
	int32_t ___U3CindexOfColonU3E__4_5;
	// System.Int32 PhotonPingManager/<PingSocket>c__Iterator1::<i>__5
	int32_t ___U3CiU3E__5_6;
	// System.Boolean PhotonPingManager/<PingSocket>c__Iterator1::<overtime>__6
	bool ___U3CovertimeU3E__6_7;
	// System.Diagnostics.Stopwatch PhotonPingManager/<PingSocket>c__Iterator1::<sw>__7
	Stopwatch_t93 * ___U3CswU3E__7_8;
	// System.Exception PhotonPingManager/<PingSocket>c__Iterator1::<e>__8
	Exception_t118 * ___U3CeU3E__8_9;
	// System.Int32 PhotonPingManager/<PingSocket>c__Iterator1::<rtt>__9
	int32_t ___U3CrttU3E__9_10;
	// System.Int32 PhotonPingManager/<PingSocket>c__Iterator1::$PC
	int32_t ___U24PC_11;
	// System.Object PhotonPingManager/<PingSocket>c__Iterator1::$current
	Object_t * ___U24current_12;
	// Region PhotonPingManager/<PingSocket>c__Iterator1::<$>region
	Region_t91 * ___U3CU24U3Eregion_13;
	// PhotonPingManager PhotonPingManager/<PingSocket>c__Iterator1::<>f__this
	PhotonPingManager_t89 * ___U3CU3Ef__this_14;
};
