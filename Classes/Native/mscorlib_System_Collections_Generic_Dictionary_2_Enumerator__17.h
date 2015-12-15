#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>>
struct Dictionary_2_t186;

#include "mscorlib_System_ValueType.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"

// System.Collections.Generic.Dictionary`2/Enumerator<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>>
struct  Enumerator_t2406 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>>::dictionary
	Dictionary_2_t186 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>>::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>>::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>>::current
	KeyValuePair_2_t2403  ___current_3;
};
