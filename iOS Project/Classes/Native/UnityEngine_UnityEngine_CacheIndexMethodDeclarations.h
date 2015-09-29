#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t148;
struct CacheIndex_t148_marshaled;

void CacheIndex_t148_marshal(const CacheIndex_t148& unmarshaled, CacheIndex_t148_marshaled& marshaled);
void CacheIndex_t148_marshal_back(const CacheIndex_t148_marshaled& marshaled, CacheIndex_t148& unmarshaled);
void CacheIndex_t148_marshal_cleanup(CacheIndex_t148_marshaled& marshaled);
