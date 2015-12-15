#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PhotonPingManager
struct PhotonPingManager_t89;
// Region
struct Region_t91;
// System.Object
struct Object_t;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen.h"

// PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator0
struct  U3CPingAvailableRegionsCoroutineU3Ec__Iterator0_t88  : public Object_t
{
	// PhotonPingManager PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator0::<pingManager>__0
	PhotonPingManager_t89 * ___U3CpingManagerU3E__0_0;
	// System.Collections.Generic.List`1/Enumerator<Region> PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator0::<$s_38>__1
	Enumerator_t90  ___U3CU24s_38U3E__1_1;
	// Region PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator0::<region>__2
	Region_t91 * ___U3CregionU3E__2_2;
	// Region PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator0::<best>__3
	Region_t91 * ___U3CbestU3E__3_3;
	// System.Boolean PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator0::connectToBest
	bool ___connectToBest_4;
	// System.Int32 PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator0::$PC
	int32_t ___U24PC_5;
	// System.Object PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator0::$current
	Object_t * ___U24current_6;
	// System.Boolean PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator0::<$>connectToBest
	bool ___U3CU24U3EconnectToBest_7;
};
