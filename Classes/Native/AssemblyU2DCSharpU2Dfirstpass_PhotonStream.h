﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Object>
struct List_1_t3;

#include "mscorlib_System_Object.h"

// PhotonStream
struct  PhotonStream_t85  : public Object_t
{
	// System.Boolean PhotonStream::write
	bool ___write_0;
	// System.Collections.Generic.List`1<System.Object> PhotonStream::data
	List_1_t3 * ___data_1;
	// System.Byte PhotonStream::currentItem
	uint8_t ___currentItem_2;
};
