#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.HashSet`1<PickupItem>
struct HashSet_1_t178;
// PickupItem
struct PickupItem_t177;

#include "mscorlib_System_ValueType.h"

// System.Collections.Generic.HashSet`1/Enumerator<PickupItem>
struct  Enumerator_t2369 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator<PickupItem>::hashset
	HashSet_1_t178 * ___hashset_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator<PickupItem>::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator<PickupItem>::stamp
	int32_t ___stamp_2;
	// T System.Collections.Generic.HashSet`1/Enumerator<PickupItem>::current
	PickupItem_t177 * ___current_3;
};
