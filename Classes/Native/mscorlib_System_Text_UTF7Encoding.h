﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t21;
// System.SByte[]
struct SByteU5BU5D_t1947;

#include "mscorlib_System_Text_Encoding.h"

// System.Text.UTF7Encoding
struct  UTF7Encoding_t1946  : public Encoding_t988
{
	// System.Boolean System.Text.UTF7Encoding::allowOptionals
	bool ___allowOptionals_28;
};
struct UTF7Encoding_t1946_StaticFields{
	// System.Byte[] System.Text.UTF7Encoding::encodingRules
	ByteU5BU5D_t21* ___encodingRules_29;
	// System.SByte[] System.Text.UTF7Encoding::base64Values
	SByteU5BU5D_t1947* ___base64Values_30;
};
