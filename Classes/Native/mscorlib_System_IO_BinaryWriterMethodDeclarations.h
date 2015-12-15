#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.IO.BinaryWriter
struct BinaryWriter_t994;
// System.IO.Stream
struct Stream_t1342;
// System.Text.Encoding
struct Encoding_t988;
// System.Byte[]
struct ByteU5BU5D_t21;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.BinaryWriter::.ctor()
extern "C" void BinaryWriter__ctor_m9584 (BinaryWriter_t994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
extern "C" void BinaryWriter__ctor_m5401 (BinaryWriter_t994 * __this, Stream_t1342 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void BinaryWriter__ctor_m9585 (BinaryWriter_t994 * __this, Stream_t1342 * ___output, Encoding_t988 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.cctor()
extern "C" void BinaryWriter__cctor_m9586 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::System.IDisposable.Dispose()
extern "C" void BinaryWriter_System_IDisposable_Dispose_m9587 (BinaryWriter_t994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Dispose(System.Boolean)
extern "C" void BinaryWriter_Dispose_m9588 (BinaryWriter_t994 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Byte[])
extern "C" void BinaryWriter_Write_m9589 (BinaryWriter_t994 * __this, ByteU5BU5D_t21* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
