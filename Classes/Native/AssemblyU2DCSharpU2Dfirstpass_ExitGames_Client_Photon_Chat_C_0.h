#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>
struct Dictionary_2_t5;
// ExitGames.Client.Photon.Chat.IChatClientListener
struct IChatClientListener_t8;
// ExitGames.Client.Photon.Chat.ChatPeer
struct ChatPeer_t6;
// ExitGames.Client.Photon.Chat.AuthenticationValues
struct AuthenticationValues_t7;

#include "mscorlib_System_Object.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_1.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_2.h"

// ExitGames.Client.Photon.Chat.ChatClient
struct  ChatClient_t4  : public Object_t
{
	// System.String ExitGames.Client.Photon.Chat.ChatClient::chatRegion
	String_t* ___chatRegion_2;
	// System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel> ExitGames.Client.Photon.Chat.ChatClient::PublicChannels
	Dictionary_2_t5 * ___PublicChannels_3;
	// System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel> ExitGames.Client.Photon.Chat.ChatClient::PrivateChannels
	Dictionary_2_t5 * ___PrivateChannels_4;
	// ExitGames.Client.Photon.Chat.IChatClientListener ExitGames.Client.Photon.Chat.ChatClient::listener
	Object_t * ___listener_5;
	// ExitGames.Client.Photon.Chat.ChatPeer ExitGames.Client.Photon.Chat.ChatClient::chatPeer
	ChatPeer_t6 * ___chatPeer_6;
	// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::didAuthenticate
	bool ___didAuthenticate_7;
	// System.Int32 ExitGames.Client.Photon.Chat.ChatClient::msDeltaForServiceCalls
	int32_t ___msDeltaForServiceCalls_8;
	// System.Int32 ExitGames.Client.Photon.Chat.ChatClient::msTimestampOfLastServiceCall
	int32_t ___msTimestampOfLastServiceCall_9;
	// System.String ExitGames.Client.Photon.Chat.ChatClient::<NameServerAddress>k__BackingField
	String_t* ___U3CNameServerAddressU3Ek__BackingField_10;
	// System.String ExitGames.Client.Photon.Chat.ChatClient::<FrontendAddress>k__BackingField
	String_t* ___U3CFrontendAddressU3Ek__BackingField_11;
	// ExitGames.Client.Photon.Chat.ChatState ExitGames.Client.Photon.Chat.ChatClient::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_12;
	// ExitGames.Client.Photon.Chat.ChatDisconnectCause ExitGames.Client.Photon.Chat.ChatClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_13;
	// System.String ExitGames.Client.Photon.Chat.ChatClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_14;
	// System.String ExitGames.Client.Photon.Chat.ChatClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_15;
	// ExitGames.Client.Photon.Chat.AuthenticationValues ExitGames.Client.Photon.Chat.ChatClient::<AuthValues>k__BackingField
	AuthenticationValues_t7 * ___U3CAuthValuesU3Ek__BackingField_16;
};
