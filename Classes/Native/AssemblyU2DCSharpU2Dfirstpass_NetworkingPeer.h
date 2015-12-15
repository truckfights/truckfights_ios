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
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_t14;
// System.Collections.Generic.List`1<TypedLobbyInfo>
struct List_1_t62;
// System.Collections.Generic.Dictionary`2<System.String,RoomInfo>
struct Dictionary_2_t63;
// RoomInfo[]
struct RoomInfoU5BU5D_t64;
// System.String[]
struct StringU5BU5D_t65;
// ExitGames.Client.Photon.LoadbalancingPeer/EnterRoomParams
struct EnterRoomParams_t37;
// Room
struct Room_t66;
// System.Collections.Generic.Dictionary`2<System.Int32,PhotonPlayer>
struct Dictionary_2_t67;
// PhotonPlayer[]
struct PhotonPlayerU5BU5D_t68;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t69;
// System.Collections.Generic.Dictionary`2<System.Int32,PhotonView>
struct Dictionary_2_t70;
// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>
struct Dictionary_2_t71;
// IPunPrefabPool
struct IPunPrefabPool_t78;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t77;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>>
struct Dictionary_2_t72;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t73;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>
struct Dictionary_2_t74;
// AuthenticationValues
struct AuthenticationValues_t60;
// System.Collections.Generic.List`1<Region>
struct List_1_t75;
// TypedLobby
struct TypedLobby_t39;
// PhotonPlayer
struct PhotonPlayer_t76;

#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Loadba_1.h"
#include "AssemblyU2DCSharpU2Dfirstpass_JoinType.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ServerConnection.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PeerState.h"
#include "AssemblyU2DCSharpU2Dfirstpass_CloudRegionCode.h"

// NetworkingPeer
struct  NetworkingPeer_t61  : public LoadbalancingPeer_t42
{
	// System.String NetworkingPeer::mAppId
	String_t* ___mAppId_9;
	// System.Boolean NetworkingPeer::IsInitialConnect
	bool ___IsInitialConnect_11;
	// System.Boolean NetworkingPeer::didAuthenticate
	bool ___didAuthenticate_12;
	// System.Collections.Generic.List`1<TypedLobbyInfo> NetworkingPeer::LobbyStatistics
	List_1_t62 * ___LobbyStatistics_13;
	// System.Boolean NetworkingPeer::insideLobby
	bool ___insideLobby_14;
	// System.Collections.Generic.Dictionary`2<System.String,RoomInfo> NetworkingPeer::mGameList
	Dictionary_2_t63 * ___mGameList_15;
	// RoomInfo[] NetworkingPeer::mGameListCopy
	RoomInfoU5BU5D_t64* ___mGameListCopy_16;
	// System.Boolean NetworkingPeer::isFetchingFriends
	bool ___isFetchingFriends_17;
	// System.String[] NetworkingPeer::friendListRequested
	StringU5BU5D_t65* ___friendListRequested_18;
	// System.Int32 NetworkingPeer::friendListTimestamp
	int32_t ___friendListTimestamp_19;
	// System.String NetworkingPeer::playername
	String_t* ___playername_20;
	// System.Boolean NetworkingPeer::mPlayernameHasToBeUpdated
	bool ___mPlayernameHasToBeUpdated_21;
	// ExitGames.Client.Photon.LoadbalancingPeer/EnterRoomParams NetworkingPeer::enterRoomParamsCache
	EnterRoomParams_t37 * ___enterRoomParamsCache_22;
	// JoinType NetworkingPeer::mLastJoinType
	int32_t ___mLastJoinType_23;
	// Room NetworkingPeer::mCurrentGame
	Room_t66 * ___mCurrentGame_24;
	// System.Collections.Generic.Dictionary`2<System.Int32,PhotonPlayer> NetworkingPeer::mActors
	Dictionary_2_t67 * ___mActors_25;
	// PhotonPlayer[] NetworkingPeer::mOtherPlayerListCopy
	PhotonPlayerU5BU5D_t68* ___mOtherPlayerListCopy_26;
	// PhotonPlayer[] NetworkingPeer::mPlayerListCopy
	PhotonPlayerU5BU5D_t68* ___mPlayerListCopy_27;
	// System.Boolean NetworkingPeer::hasSwitchedMC
	bool ___hasSwitchedMC_28;
	// System.Collections.Generic.HashSet`1<System.Int32> NetworkingPeer::allowedReceivingGroups
	HashSet_1_t69 * ___allowedReceivingGroups_29;
	// System.Collections.Generic.HashSet`1<System.Int32> NetworkingPeer::blockSendingGroups
	HashSet_1_t69 * ___blockSendingGroups_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,PhotonView> NetworkingPeer::photonViewList
	Dictionary_2_t70 * ___photonViewList_31;
	// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable> NetworkingPeer::dataPerGroupReliable
	Dictionary_2_t71 * ___dataPerGroupReliable_32;
	// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable> NetworkingPeer::dataPerGroupUnreliable
	Dictionary_2_t71 * ___dataPerGroupUnreliable_33;
	// System.Int16 NetworkingPeer::currentLevelPrefix
	int16_t ___currentLevelPrefix_34;
	// System.Boolean NetworkingPeer::loadingLevelAndPausedNetwork
	bool ___loadingLevelAndPausedNetwork_35;
	// IPunPrefabPool NetworkingPeer::ObjectPool
	Object_t * ___ObjectPool_37;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>> NetworkingPeer::monoRPCMethodsCache
	Dictionary_2_t72 * ___monoRPCMethodsCache_39;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> NetworkingPeer::rpcShortcuts
	Dictionary_2_t73 * ___rpcShortcuts_40;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]> NetworkingPeer::tempInstantiationData
	Dictionary_2_t74 * ___tempInstantiationData_41;
	// AuthenticationValues NetworkingPeer::<CustomAuthenticationValues>k__BackingField
	AuthenticationValues_t60 * ___U3CCustomAuthenticationValuesU3Ek__BackingField_42;
	// System.String NetworkingPeer::<MasterServerAddress>k__BackingField
	String_t* ___U3CMasterServerAddressU3Ek__BackingField_43;
	// System.String NetworkingPeer::<mGameserver>k__BackingField
	String_t* ___U3CmGameserverU3Ek__BackingField_44;
	// ServerConnection NetworkingPeer::<server>k__BackingField
	int32_t ___U3CserverU3Ek__BackingField_45;
	// PeerState NetworkingPeer::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_46;
	// System.Boolean NetworkingPeer::<IsUsingNameServer>k__BackingField
	bool ___U3CIsUsingNameServerU3Ek__BackingField_47;
	// System.Collections.Generic.List`1<Region> NetworkingPeer::<AvailableRegions>k__BackingField
	List_1_t75 * ___U3CAvailableRegionsU3Ek__BackingField_48;
	// CloudRegionCode NetworkingPeer::<CloudRegion>k__BackingField
	int32_t ___U3CCloudRegionU3Ek__BackingField_49;
	// TypedLobby NetworkingPeer::<lobby>k__BackingField
	TypedLobby_t39 * ___U3ClobbyU3Ek__BackingField_50;
	// System.Int32 NetworkingPeer::<mPlayersOnMasterCount>k__BackingField
	int32_t ___U3CmPlayersOnMasterCountU3Ek__BackingField_51;
	// System.Int32 NetworkingPeer::<mGameCount>k__BackingField
	int32_t ___U3CmGameCountU3Ek__BackingField_52;
	// System.Int32 NetworkingPeer::<mPlayersInRoomsCount>k__BackingField
	int32_t ___U3CmPlayersInRoomsCountU3Ek__BackingField_53;
	// PhotonPlayer NetworkingPeer::<mLocalActor>k__BackingField
	PhotonPlayer_t76 * ___U3CmLocalActorU3Ek__BackingField_54;
};
struct NetworkingPeer_t61_StaticFields{
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> NetworkingPeer::ProtocolToNameServerPort
	Dictionary_2_t14 * ___ProtocolToNameServerPort_10;
	// System.Boolean NetworkingPeer::UsePrefabCache
	bool ___UsePrefabCache_36;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> NetworkingPeer::PrefabCache
	Dictionary_2_t77 * ___PrefabCache_38;
};
