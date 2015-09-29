#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t711;
struct RSAParameters_t711_marshaled;

void RSAParameters_t711_marshal(const RSAParameters_t711& unmarshaled, RSAParameters_t711_marshaled& marshaled);
void RSAParameters_t711_marshal_back(const RSAParameters_t711_marshaled& marshaled, RSAParameters_t711& unmarshaled);
void RSAParameters_t711_marshal_cleanup(RSAParameters_t711_marshaled& marshaled);
