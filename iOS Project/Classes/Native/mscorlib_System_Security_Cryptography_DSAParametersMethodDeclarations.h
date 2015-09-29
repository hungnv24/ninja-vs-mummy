#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t713;
struct DSAParameters_t713_marshaled;

void DSAParameters_t713_marshal(const DSAParameters_t713& unmarshaled, DSAParameters_t713_marshaled& marshaled);
void DSAParameters_t713_marshal_back(const DSAParameters_t713_marshaled& marshaled, DSAParameters_t713& unmarshaled);
void DSAParameters_t713_marshal_cleanup(DSAParameters_t713_marshaled& marshaled);
