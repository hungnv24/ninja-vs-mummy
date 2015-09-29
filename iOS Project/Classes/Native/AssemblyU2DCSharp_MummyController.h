#pragma once
#include <stdint.h>
// UnityEngine.Animator
struct Animator_t7;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t8;
// UnityEngine.AudioSource
struct AudioSource_t9;
// UnityEngine.AudioClip
struct AudioClip_t10;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MummyController
struct  MummyController_t11  : public MonoBehaviour_t3
{
	// System.Single MummyController::walkingSpeed
	float ___walkingSpeed_9;
	// UnityEngine.Animator MummyController::animator
	Animator_t7 * ___animator_10;
	// UnityEngine.Rigidbody2D MummyController::mRigidbody
	Rigidbody2D_t8 * ___mRigidbody_11;
	// UnityEngine.AudioSource MummyController::audioSource
	AudioSource_t9 * ___audioSource_12;
	// System.Int32 MummyController::killedBy
	int32_t ___killedBy_13;
	// System.Int32 MummyController::currentState
	int32_t ___currentState_14;
	// UnityEngine.AudioClip MummyController::hit
	AudioClip_t10 * ___hit_15;
	// UnityEngine.AudioClip MummyController::hit2
	AudioClip_t10 * ___hit2_16;
};
