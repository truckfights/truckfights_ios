﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t56;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2154;
// PunTeams/Team[]
struct TeamU5BU5D_t2383;
// System.Collections.Generic.List`1<PhotonPlayer>[]
struct List_1U5BU5D_t2384;
// System.Collections.Generic.IEqualityComparer`1<PunTeams/Team>
struct IEqualityComparer_1_t2386;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t862;
// System.Collections.Generic.Dictionary`2/Transform`1<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>,System.Collections.DictionaryEntry>
struct Transform_1_t2385;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>>
struct  Dictionary_2_t186  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>>::table
	Int32U5BU5D_t56* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>>::linkSlots
	LinkU5BU5D_t2154* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>>::keySlots
	TeamU5BU5D_t2383* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>>::valueSlots
	List_1U5BU5D_t2384* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>>::serialization_info
	SerializationInfo_t862 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t186_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>>::<>f__am$cacheB
	Transform_1_t2385 * ___U3CU3Ef__amU24cacheB_15;
};
