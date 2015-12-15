#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "Photon3Unity3D_ExitGames_Client_Photon_CmdLogItem.h"

// ExitGames.Client.Photon.CmdLogSentReliable
struct  CmdLogSentReliable_t939  : public CmdLogItem_t936
{
	// System.Int32 ExitGames.Client.Photon.CmdLogSentReliable::Resend
	int32_t ___Resend_5;
	// System.Int32 ExitGames.Client.Photon.CmdLogSentReliable::RoundtripTimeout
	int32_t ___RoundtripTimeout_6;
	// System.Int32 ExitGames.Client.Photon.CmdLogSentReliable::Timeout
	int32_t ___Timeout_7;
	// System.Boolean ExitGames.Client.Photon.CmdLogSentReliable::TriggeredTimeout
	bool ___TriggeredTimeout_8;
};
