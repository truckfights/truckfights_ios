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
// System.String[]
struct StringU5BU5D_t65;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t175;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2157;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t862;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GameObject,System.Collections.DictionaryEntry>
struct Transform_1_t2254;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct  Dictionary_2_t77  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::table
	Int32U5BU5D_t56* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::linkSlots
	LinkU5BU5D_t2154* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::keySlots
	StringU5BU5D_t65* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::valueSlots
	GameObjectU5BU5D_t175* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::serialization_info
	SerializationInfo_t862 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t77_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::<>f__am$cacheB
	Transform_1_t2254 * ___U3CU3Ef__amU24cacheB_15;
};
