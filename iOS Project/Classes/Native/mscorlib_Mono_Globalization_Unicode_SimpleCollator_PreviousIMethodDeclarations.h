#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t956;
struct PreviousInfo_t956_marshaled;

// System.Void Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::.ctor(System.Boolean)
extern "C" void PreviousInfo__ctor_m4643 (PreviousInfo_t956 * __this, bool ___dummy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void PreviousInfo_t956_marshal(const PreviousInfo_t956& unmarshaled, PreviousInfo_t956_marshaled& marshaled);
void PreviousInfo_t956_marshal_back(const PreviousInfo_t956_marshaled& marshaled, PreviousInfo_t956& unmarshaled);
void PreviousInfo_t956_marshal_cleanup(PreviousInfo_t956_marshaled& marshaled);
