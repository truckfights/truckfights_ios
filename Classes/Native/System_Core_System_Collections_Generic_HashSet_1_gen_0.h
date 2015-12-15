#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t56;
// System.Collections.Generic.HashSet`1/Link<UnityEngine.GameObject>[]
struct LinkU5BU5D_t2304;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t175;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.GameObject>
struct IEqualityComparer_1_t2306;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t862;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.HashSet`1<UnityEngine.GameObject>
struct  HashSet_1_t102  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::table
	Int32U5BU5D_t56* ___table_4;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::links
	LinkU5BU5D_t2304* ___links_5;
	// T[] System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::slots
	GameObjectU5BU5D_t175* ___slots_6;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::touched
	int32_t ___touched_7;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::empty_slot
	int32_t ___empty_slot_8;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::count
	int32_t ___count_9;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::threshold
	int32_t ___threshold_10;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::comparer
	Object_t* ___comparer_11;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::si
	SerializationInfo_t862 * ___si_12;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::generation
	int32_t ___generation_13;
};
