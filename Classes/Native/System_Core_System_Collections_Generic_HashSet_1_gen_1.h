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
// System.Collections.Generic.HashSet`1/Link<PickupItem>[]
struct LinkU5BU5D_t2366;
// PickupItem[]
struct PickupItemU5BU5D_t282;
// System.Collections.Generic.IEqualityComparer`1<PickupItem>
struct IEqualityComparer_1_t2368;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t862;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.HashSet`1<PickupItem>
struct  HashSet_1_t178  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<PickupItem>::table
	Int32U5BU5D_t56* ___table_4;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<PickupItem>::links
	LinkU5BU5D_t2366* ___links_5;
	// T[] System.Collections.Generic.HashSet`1<PickupItem>::slots
	PickupItemU5BU5D_t282* ___slots_6;
	// System.Int32 System.Collections.Generic.HashSet`1<PickupItem>::touched
	int32_t ___touched_7;
	// System.Int32 System.Collections.Generic.HashSet`1<PickupItem>::empty_slot
	int32_t ___empty_slot_8;
	// System.Int32 System.Collections.Generic.HashSet`1<PickupItem>::count
	int32_t ___count_9;
	// System.Int32 System.Collections.Generic.HashSet`1<PickupItem>::threshold
	int32_t ___threshold_10;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<PickupItem>::comparer
	Object_t* ___comparer_11;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<PickupItem>::si
	SerializationInfo_t862 * ___si_12;
	// System.Int32 System.Collections.Generic.HashSet`1<PickupItem>::generation
	int32_t ___generation_13;
};
