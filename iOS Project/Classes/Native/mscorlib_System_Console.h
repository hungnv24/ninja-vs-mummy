#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t726;
// System.IO.TextReader
struct TextReader_t1008;
// System.Text.Encoding
struct Encoding_t318;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t725  : public Object_t
{
};
struct Console_t725_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t726 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t726 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t1008 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t318 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t318 * ___outputEncoding_4;
};
