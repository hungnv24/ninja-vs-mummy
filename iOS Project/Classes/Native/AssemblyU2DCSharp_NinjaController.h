#pragma once
#include <stdint.h>
// UnityEngine.Animator
struct Animator_t7;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t8;
// UnityEngine.AudioSource
struct AudioSource_t9;
// System.Collections.Hashtable
struct Hashtable_t12;
// UnityEngine.Transform
struct Transform_t13;
// UnityEngine.AudioClip
struct AudioClip_t10;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// NinjaController
struct  NinjaController_t14  : public MonoBehaviour_t3
{
	// UnityEngine.Animator NinjaController::animator
	Animator_t7 * ___animator_14;
	// UnityEngine.Rigidbody2D NinjaController::rigidbody
	Rigidbody2D_t8 * ___rigidbody_15;
	// UnityEngine.AudioSource NinjaController::audioSource
	AudioSource_t9 * ___audioSource_16;
	// System.Single NinjaController::jumpForce
	float ___jumpForce_17;
	// System.Int32 NinjaController::currentState
	int32_t ___currentState_18;
	// System.Collections.Hashtable NinjaController::animationFlags
	Hashtable_t12 * ___animationFlags_19;
	// System.Boolean NinjaController::grounded
	bool ___grounded_20;
	// UnityEngine.Transform NinjaController::groundCheck
	Transform_t13 * ___groundCheck_21;
	// System.Single NinjaController::groundCheckRadius
	float ___groundCheckRadius_22;
	// UnityEngine.LayerMask NinjaController::groundLayer
	LayerMask_t15  ___groundLayer_23;
	// System.Boolean NinjaController::inputJump
	bool ___inputJump_24;
	// System.Boolean NinjaController::inputThrow
	bool ___inputThrow_25;
	// System.Boolean NinjaController::inputSlide
	bool ___inputSlide_26;
	// System.Boolean NinjaController::inputSlash
	bool ___inputSlash_27;
	// System.Single NinjaController::speed
	float ___speed_28;
	// System.Single NinjaController::jumpHeight
	float ___jumpHeight_29;
	// UnityEngine.AudioClip NinjaController::sword
	AudioClip_t10 * ___sword_30;
	// UnityEngine.AudioClip NinjaController::jump
	AudioClip_t10 * ___jump_31;
	// UnityEngine.AudioClip NinjaController::die
	AudioClip_t10 * ___die_32;
	// UnityEngine.AudioClip NinjaController::throwing
	AudioClip_t10 * ___throwing_33;
	// UnityEngine.AudioClip NinjaController::hit
	AudioClip_t10 * ___hit_34;
	// UnityEngine.AudioClip NinjaController::footStep
	AudioClip_t10 * ___footStep_35;
};
