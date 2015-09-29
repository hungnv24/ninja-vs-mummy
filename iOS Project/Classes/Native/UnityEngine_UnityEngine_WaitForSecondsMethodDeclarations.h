#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t60;
struct WaitForSeconds_t60_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m187 (WaitForSeconds_t60 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t60_marshal(const WaitForSeconds_t60& unmarshaled, WaitForSeconds_t60_marshaled& marshaled);
void WaitForSeconds_t60_marshal_back(const WaitForSeconds_t60_marshaled& marshaled, WaitForSeconds_t60& unmarshaled);
void WaitForSeconds_t60_marshal_cleanup(WaitForSeconds_t60_marshaled& marshaled);
