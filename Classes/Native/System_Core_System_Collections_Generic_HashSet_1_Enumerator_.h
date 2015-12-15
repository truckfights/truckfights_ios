#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.HashSet`1<UnityEngine.GameObject>
struct HashSet_1_t102;
// UnityEngine.GameObject
struct GameObject_t159;

#include "mscorlib_System_ValueType.h"

// System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.GameObject>
struct  Enumerator_t229 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.GameObject>::hashset
	HashSet_1_t102 * ___hashset_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.GameObject>::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.GameObject>::stamp
	int32_t ___stamp_2;
	// T System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.GameObject>::current
	GameObject_t159 * ___current_3;
};
