#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.BinaryWriter
struct BinaryWriter_t994;
// System.IO.Stream
struct Stream_t1342;
// System.Text.Encoding
struct Encoding_t988;
// System.Byte[]
struct ByteU5BU5D_t21;

#include "mscorlib_System_Object.h"

// System.IO.BinaryWriter
struct  BinaryWriter_t994  : public Object_t
{
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_t1342 * ___OutStream_1;
	// System.Text.Encoding System.IO.BinaryWriter::m_encoding
	Encoding_t988 * ___m_encoding_2;
	// System.Byte[] System.IO.BinaryWriter::buffer
	ByteU5BU5D_t21* ___buffer_3;
	// System.Boolean System.IO.BinaryWriter::disposed
	bool ___disposed_4;
};
struct BinaryWriter_t994_StaticFields{
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_t994 * ___Null_0;
};
