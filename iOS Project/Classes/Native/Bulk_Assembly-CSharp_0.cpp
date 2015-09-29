#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// CameraController
#include "AssemblyU2DCSharp_CameraController.h"
#ifndef _MSC_VER
#else
#endif
// CameraController
#include "AssemblyU2DCSharp_CameraControllerMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"


// System.Void CameraController::.ctor()
extern "C" void CameraController__ctor_m0 (CameraController_t2 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m55(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraController::Start()
extern "C" void CameraController_Start_m1 (CameraController_t2 * __this, const MethodInfo* method)
{
	{
		Transform_t13 * L_0 = Component_get_transform_m56(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t4  L_1 = Transform_get_position_m57(L_0, /*hidden argument*/NULL);
		__this->___origin_2 = L_1;
		return;
	}
}
// System.Void CameraController::FixedUpdate()
extern "C" void CameraController_FixedUpdate_m2 (CameraController_t2 * __this, const MethodInfo* method)
{
	Vector3_t4  V_0 = {0};
	{
		GameObject_t1 * L_0 = (__this->___focusedObject_3);
		bool L_1 = Object_op_Implicit_m58(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		Vector3_t4 * L_2 = &(__this->___origin_2);
		GameObject_t1 * L_3 = (__this->___focusedObject_3);
		NullCheck(L_3);
		Transform_t13 * L_4 = GameObject_get_transform_m59(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t4  L_5 = Transform_get_position_m57(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		float L_6 = ((&V_0)->___x_1);
		L_2->___x_1 = L_6;
		Transform_t13 * L_7 = Component_get_transform_m56(__this, /*hidden argument*/NULL);
		Vector3_t4  L_8 = (__this->___origin_2);
		NullCheck(L_7);
		Transform_set_position_m60(L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// EnvironmentGenerate
#include "AssemblyU2DCSharp_EnvironmentGenerate.h"
#ifndef _MSC_VER
#else
#endif
// EnvironmentGenerate
#include "AssemblyU2DCSharp_EnvironmentGenerateMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
// System.String
#include "mscorlib_System_String.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.List`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_ResourcesMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_BoundsMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
struct Component_t25;
struct Renderer_t24;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t25;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m62_gshared (Component_t25 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m62(__this, method) (( Object_t * (*) (Component_t25 *, const MethodInfo*))Component_GetComponent_TisObject_t_m62_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t24_m61(__this, method) (( Renderer_t24 * (*) (Component_t25 *, const MethodInfo*))Component_GetComponent_TisObject_t_m62_gshared)(__this, method)


// System.Void EnvironmentGenerate::.ctor()
extern TypeInfo* List_1_t5_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m63_MethodInfo_var;
extern "C" void EnvironmentGenerate__ctor_m3 (EnvironmentGenerate_t6 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		List_1__ctor_m63_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t5 * L_0 = (List_1_t5 *)il2cpp_codegen_object_new (List_1_t5_il2cpp_TypeInfo_var);
		List_1__ctor_m63(L_0, /*hidden argument*/List_1__ctor_m63_MethodInfo_var);
		__this->___backgrounds_2 = L_0;
		MonoBehaviour__ctor_m55(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnvironmentGenerate::Start()
extern const Il2CppType* GameObject_t1_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t1_il2cpp_TypeInfo_var;
extern "C" void EnvironmentGenerate_Start_m4 (EnvironmentGenerate_t6 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t1_0_0_0_var = il2cpp_codegen_type_from_index(1);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		GameObject_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t1 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m64(NULL /*static, unused*/, LoadTypeToken(GameObject_t1_0_0_0_var), /*hidden argument*/NULL);
		Object_t26 * L_1 = Resources_Load_m65(NULL /*static, unused*/, (String_t*) &_stringLiteral1, L_0, /*hidden argument*/NULL);
		Object_t26 * L_2 = Object_Instantiate_m66(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = ((GameObject_t1 *)IsInst(L_2, GameObject_t1_il2cpp_TypeInfo_var));
		List_1_t5 * L_3 = (__this->___backgrounds_2);
		GameObject_t1 * L_4 = V_0;
		NullCheck(L_3);
		VirtActionInvoker1< GameObject_t1 * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0) */, L_3, L_4);
		return;
	}
}
// System.Void EnvironmentGenerate::Update()
extern "C" void EnvironmentGenerate_Update_m5 (EnvironmentGenerate_t6 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void EnvironmentGenerate::OnTriggerEnter2D(UnityEngine.Collider2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EnvironmentGenerate_OnTriggerEnter2D_m6 (EnvironmentGenerate_t6 * __this, Collider2D_t21 * ___col, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collider2D_t21 * L_0 = ___col;
		NullCheck(L_0);
		GameObject_t1 * L_1 = Component_get_gameObject_m67(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m68(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m69(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		EnvironmentGenerate_AddBackground_m7(__this, /*hidden argument*/NULL);
		EnvironmentGenerate_RemoveBackground_m8(__this, /*hidden argument*/NULL);
		Collider2D_t21 * L_4 = ___col;
		NullCheck(L_4);
		GameObject_t1 * L_5 = Component_get_gameObject_m67(L_4, /*hidden argument*/NULL);
		Object_Destroy_m70(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void EnvironmentGenerate::AddBackground()
extern const Il2CppType* GameObject_t1_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t1_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRenderer_t24_m61_MethodInfo_var;
extern "C" void EnvironmentGenerate_AddBackground_m7 (EnvironmentGenerate_t6 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t1_0_0_0_var = il2cpp_codegen_type_from_index(1);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		GameObject_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Component_GetComponent_TisRenderer_t24_m61_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483650);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t1 * V_0 = {0};
	GameObject_t1 * V_1 = {0};
	GameObject_t1 * V_2 = {0};
	Vector3_t4  V_3 = {0};
	Vector3_t4  V_4 = {0};
	Bounds_t27  V_5 = {0};
	{
		List_1_t5 * L_0 = (__this->___backgrounds_2);
		List_1_t5 * L_1 = (__this->___backgrounds_2);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count() */, L_1);
		NullCheck(L_0);
		GameObject_t1 * L_3 = (GameObject_t1 *)VirtFuncInvoker1< GameObject_t1 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_0, ((int32_t)((int32_t)L_2-(int32_t)1)));
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m64(NULL /*static, unused*/, LoadTypeToken(GameObject_t1_0_0_0_var), /*hidden argument*/NULL);
		Object_t26 * L_5 = Resources_Load_m65(NULL /*static, unused*/, (String_t*) &_stringLiteral1, L_4, /*hidden argument*/NULL);
		Object_t26 * L_6 = Object_Instantiate_m66(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_1 = ((GameObject_t1 *)IsInst(L_6, GameObject_t1_il2cpp_TypeInfo_var));
		GameObject_t1 * L_7 = V_0;
		NullCheck(L_7);
		Transform_t13 * L_8 = GameObject_get_transform_m59(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_t13 * L_9 = Transform_Find_m71(L_8, (String_t*) &_stringLiteral3, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_t1 * L_10 = Component_get_gameObject_m67(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		GameObject_t1 * L_11 = V_2;
		bool L_12 = Object_op_Inequality_m72(NULL /*static, unused*/, L_11, (Object_t26 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00c7;
		}
	}
	{
		GameObject_t1 * L_13 = V_2;
		NullCheck(L_13);
		Transform_t13 * L_14 = GameObject_get_transform_m59(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Renderer_t24 * L_15 = Component_GetComponent_TisRenderer_t24_m61(L_14, /*hidden argument*/Component_GetComponent_TisRenderer_t24_m61_MethodInfo_var);
		NullCheck(L_15);
		Bounds_t27  L_16 = Renderer_get_bounds_m73(L_15, /*hidden argument*/NULL);
		V_5 = L_16;
		Vector3_t4  L_17 = Bounds_get_size_m74((&V_5), /*hidden argument*/NULL);
		V_3 = L_17;
		GameObject_t1 * L_18 = V_2;
		NullCheck(L_18);
		Transform_t13 * L_19 = GameObject_get_transform_m59(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t4  L_20 = Transform_get_position_m57(L_19, /*hidden argument*/NULL);
		V_4 = L_20;
		float L_21 = ((&V_4)->___x_1);
		float L_22 = ((&V_3)->___x_1);
		(&V_4)->___x_1 = ((float)((float)((float)((float)L_21+(float)L_22))-(float)(0.01f)));
		(&V_4)->___z_3 = (10.0f);
		GameObject_t1 * L_23 = V_1;
		NullCheck(L_23);
		Transform_t13 * L_24 = GameObject_get_transform_m59(L_23, /*hidden argument*/NULL);
		Vector3_t4  L_25 = V_4;
		NullCheck(L_24);
		Transform_set_position_m60(L_24, L_25, /*hidden argument*/NULL);
		List_1_t5 * L_26 = (__this->___backgrounds_2);
		GameObject_t1 * L_27 = V_1;
		NullCheck(L_26);
		VirtActionInvoker1< GameObject_t1 * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0) */, L_26, L_27);
		goto IL_00d1;
	}

IL_00c7:
	{
		Debug_LogError_m75(NULL /*static, unused*/, (String_t*) &_stringLiteral4, /*hidden argument*/NULL);
	}

IL_00d1:
	{
		return;
	}
}
// System.Void EnvironmentGenerate::RemoveBackground()
extern "C" void EnvironmentGenerate_RemoveBackground_m8 (EnvironmentGenerate_t6 * __this, const MethodInfo* method)
{
	{
		List_1_t5 * L_0 = (__this->___backgrounds_2);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count() */, L_0);
		if ((((int32_t)L_1) > ((int32_t)2)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		List_1_t5 * L_2 = (__this->___backgrounds_2);
		NullCheck(L_2);
		GameObject_t1 * L_3 = (GameObject_t1 *)VirtFuncInvoker1< GameObject_t1 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_2, 0);
		Object_Destroy_m70(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		List_1_t5 * L_4 = (__this->___backgrounds_2);
		NullCheck(L_4);
		VirtActionInvoker1< int32_t >::Invoke(27 /* System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32) */, L_4, 0);
		return;
	}
}
// MummyController
#include "AssemblyU2DCSharp_MummyController.h"
#ifndef _MSC_VER
#else
#endif
// MummyController
#include "AssemblyU2DCSharp_MummyControllerMethodDeclarations.h"

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSource.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.Collision2D
#include "UnityEngine_UnityEngine_Collision2D.h"
// NinjaController
#include "AssemblyU2DCSharp_NinjaController.h"
// UnityEngine.CircleCollider2D
#include "UnityEngine_UnityEngine_CircleCollider2D.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.ContactPoint2D
#include "UnityEngine_UnityEngine_ContactPoint2D.h"
// ObstacleController
#include "AssemblyU2DCSharp_ObstacleController.h"
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfoMethodDeclarations.h"
// UnityEngine.Collision2D
#include "UnityEngine_UnityEngine_Collision2DMethodDeclarations.h"
// UnityEngine.ContactPoint2D
#include "UnityEngine_UnityEngine_ContactPoint2DMethodDeclarations.h"
// NinjaController
#include "AssemblyU2DCSharp_NinjaControllerMethodDeclarations.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// ObstacleController
#include "AssemblyU2DCSharp_ObstacleControllerMethodDeclarations.h"
struct Component_t25;
struct Animator_t7;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t7_m76(__this, method) (( Animator_t7 * (*) (Component_t25 *, const MethodInfo*))Component_GetComponent_TisObject_t_m62_gshared)(__this, method)
struct Component_t25;
struct Rigidbody2D_t8;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t8_m77(__this, method) (( Rigidbody2D_t8 * (*) (Component_t25 *, const MethodInfo*))Component_GetComponent_TisObject_t_m62_gshared)(__this, method)
struct Component_t25;
struct AudioSource_t9;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t9_m78(__this, method) (( AudioSource_t9 * (*) (Component_t25 *, const MethodInfo*))Component_GetComponent_TisObject_t_m62_gshared)(__this, method)
struct GameObject_t1;
struct NinjaController_t14;
struct GameObject_t1;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m80_gshared (GameObject_t1 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m80(__this, method) (( Object_t * (*) (GameObject_t1 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m80_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<NinjaController>()
// !!0 UnityEngine.GameObject::GetComponent<NinjaController>()
#define GameObject_GetComponent_TisNinjaController_t14_m79(__this, method) (( NinjaController_t14 * (*) (GameObject_t1 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m80_gshared)(__this, method)
struct Component_t25;
struct Collider2DU5BU5D_t28;
struct Component_t25;
struct ObjectU5BU5D_t29;
// Declaration !!0[] UnityEngine.Component::GetComponents<System.Object>()
// !!0[] UnityEngine.Component::GetComponents<System.Object>()
extern "C" ObjectU5BU5D_t29* Component_GetComponents_TisObject_t_m82_gshared (Component_t25 * __this, const MethodInfo* method);
#define Component_GetComponents_TisObject_t_m82(__this, method) (( ObjectU5BU5D_t29* (*) (Component_t25 *, const MethodInfo*))Component_GetComponents_TisObject_t_m82_gshared)(__this, method)
// Declaration !!0[] UnityEngine.Component::GetComponents<UnityEngine.Collider2D>()
// !!0[] UnityEngine.Component::GetComponents<UnityEngine.Collider2D>()
#define Component_GetComponents_TisCollider2D_t21_m81(__this, method) (( Collider2DU5BU5D_t28* (*) (Component_t25 *, const MethodInfo*))Component_GetComponents_TisObject_t_m82_gshared)(__this, method)
struct GameObject_t1;
struct ObstacleController_t17;
// Declaration !!0 UnityEngine.GameObject::GetComponent<ObstacleController>()
// !!0 UnityEngine.GameObject::GetComponent<ObstacleController>()
#define GameObject_GetComponent_TisObstacleController_t17_m83(__this, method) (( ObstacleController_t17 * (*) (GameObject_t1 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m80_gshared)(__this, method)


// System.Void MummyController::.ctor()
extern "C" void MummyController__ctor_m9 (MummyController_t11 * __this, const MethodInfo* method)
{
	{
		__this->___walkingSpeed_9 = (-1.0f);
		MonoBehaviour__ctor_m55(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MummyController::Start()
extern const MethodInfo* Component_GetComponent_TisAnimator_t7_m76_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t8_m77_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t9_m78_MethodInfo_var;
extern "C" void MummyController_Start_m10 (MummyController_t11 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisAnimator_t7_m76_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		Component_GetComponent_TisRigidbody2D_t8_m77_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483652);
		Component_GetComponent_TisAudioSource_t9_m78_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		s_Il2CppMethodIntialized = true;
	}
	{
		Animator_t7 * L_0 = Component_GetComponent_TisAnimator_t7_m76(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t7_m76_MethodInfo_var);
		__this->___animator_10 = L_0;
		Rigidbody2D_t8 * L_1 = Component_GetComponent_TisRigidbody2D_t8_m77(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t8_m77_MethodInfo_var);
		__this->___mRigidbody_11 = L_1;
		AudioSource_t9 * L_2 = Component_GetComponent_TisAudioSource_t9_m78(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t9_m78_MethodInfo_var);
		__this->___audioSource_12 = L_2;
		return;
	}
}
// System.Void MummyController::FixedUpdate()
extern "C" void MummyController_FixedUpdate_m11 (MummyController_t11 * __this, const MethodInfo* method)
{
	Vector2_t18  V_0 = {0};
	{
		bool L_0 = MummyController_isInState_m13(__this, (String_t*) &_stringLiteral5, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		Rigidbody2D_t8 * L_1 = (__this->___mRigidbody_11);
		bool L_2 = Object_op_Inequality_m72(NULL /*static, unused*/, L_1, (Object_t26 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		Rigidbody2D_t8 * L_3 = (__this->___mRigidbody_11);
		float L_4 = (__this->___walkingSpeed_9);
		Rigidbody2D_t8 * L_5 = (__this->___mRigidbody_11);
		NullCheck(L_5);
		Vector2_t18  L_6 = Rigidbody2D_get_velocity_m84(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		float L_7 = ((&V_0)->___y_2);
		Vector2_t18  L_8 = {0};
		Vector2__ctor_m85(&L_8, L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_3);
		Rigidbody2D_set_velocity_m86(L_3, L_8, /*hidden argument*/NULL);
	}

IL_004a:
	{
		return;
	}
}
// System.Void MummyController::Update()
extern "C" void MummyController_Update_m12 (MummyController_t11 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean MummyController::isInState(System.String)
extern "C" bool MummyController_isInState_m13 (MummyController_t11 * __this, String_t* ___state, const MethodInfo* method)
{
	AnimatorStateInfo_t30  V_0 = {0};
	{
		Animator_t7 * L_0 = (__this->___animator_10);
		NullCheck(L_0);
		AnimatorStateInfo_t30  L_1 = Animator_GetCurrentAnimatorStateInfo_m87(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ___state;
		bool L_3 = AnimatorStateInfo_IsName_m88((&V_0), L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void MummyController::OnCollisionEnter2D(UnityEngine.Collision2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CircleCollider2D_t31_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisNinjaController_t14_m79_MethodInfo_var;
extern "C" void MummyController_OnCollisionEnter2D_m14 (MummyController_t11 * __this, Collision2D_t22 * ___col, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		CircleCollider2D_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		GameObject_GetComponent_TisNinjaController_t14_m79_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		s_Il2CppMethodIntialized = true;
	}
	NinjaController_t14 * V_0 = {0};
	{
		Collision2D_t22 * L_0 = ___col;
		NullCheck(L_0);
		GameObject_t1 * L_1 = Collision2D_get_gameObject_m89(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m68(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m69(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral6, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0089;
		}
	}
	{
		Collision2D_t22 * L_4 = ___col;
		NullCheck(L_4);
		GameObject_t1 * L_5 = Collision2D_get_gameObject_m89(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		NinjaController_t14 * L_6 = GameObject_GetComponent_TisNinjaController_t14_m79(L_5, /*hidden argument*/GameObject_GetComponent_TisNinjaController_t14_m79_MethodInfo_var);
		V_0 = L_6;
		Collision2D_t22 * L_7 = ___col;
		NullCheck(L_7);
		Collider2D_t21 * L_8 = Collision2D_get_collider_m90(L_7, /*hidden argument*/NULL);
		if (!((CircleCollider2D_t31 *)IsInst(L_8, CircleCollider2D_t31_il2cpp_TypeInfo_var)))
		{
			goto IL_006e;
		}
	}
	{
		Collision2D_t22 * L_9 = ___col;
		NullCheck(L_9);
		ContactPoint2DU5BU5D_t32* L_10 = Collision2D_get_contacts_m91(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		Collider2D_t21 * L_11 = ContactPoint2D_get_otherCollider_m92(((ContactPoint2D_t33 *)(ContactPoint2D_t33 *)SZArrayLdElema(L_10, 0)), /*hidden argument*/NULL);
		if (!((CircleCollider2D_t31 *)IsInst(L_11, CircleCollider2D_t31_il2cpp_TypeInfo_var)))
		{
			goto IL_006e;
		}
	}
	{
		bool L_12 = MummyController_isInState_m13(__this, (String_t*) &_stringLiteral7, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_006e;
		}
	}
	{
		__this->___killedBy_13 = 8;
		MummyController_Die_m17(__this, /*hidden argument*/NULL);
	}

IL_006e:
	{
		NinjaController_t14 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = NinjaController_get_CurrentState_m19(L_13, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_14&(int32_t)8))) <= ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		__this->___killedBy_13 = 2;
		MummyController_Die_m17(__this, /*hidden argument*/NULL);
	}

IL_0089:
	{
		return;
	}
}
// System.Void MummyController::OnTriggerEnter2D(UnityEngine.Collider2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void MummyController_OnTriggerEnter2D_m15 (MummyController_t11 * __this, Collider2D_t21 * ___col, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collider2D_t21 * L_0 = ___col;
		NullCheck(L_0);
		GameObject_t1 * L_1 = Component_get_gameObject_m67(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m68(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m69(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral6, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		Animator_t7 * L_4 = (__this->___animator_10);
		NullCheck(L_4);
		Animator_SetTrigger_m93(L_4, (String_t*) &_stringLiteral8, /*hidden argument*/NULL);
		GameObject_t1 * L_5 = Component_get_gameObject_m67(__this, /*hidden argument*/NULL);
		Object_Destroy_m94(NULL /*static, unused*/, L_5, (5.0f), /*hidden argument*/NULL);
	}

IL_003a:
	{
		Collider2D_t21 * L_6 = ___col;
		NullCheck(L_6);
		GameObject_t1 * L_7 = Component_get_gameObject_m67(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = GameObject_get_tag_m68(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Equality_m69(NULL /*static, unused*/, L_8, (String_t*) &_stringLiteral9, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0075;
		}
	}
	{
		bool L_10 = MummyController_isInState_m13(__this, (String_t*) &_stringLiteral7, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0075;
		}
	}
	{
		MummyController_Die_m17(__this, /*hidden argument*/NULL);
		Collider2D_t21 * L_11 = ___col;
		NullCheck(L_11);
		GameObject_t1 * L_12 = Component_get_gameObject_m67(L_11, /*hidden argument*/NULL);
		Object_Destroy_m70(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
	}

IL_0075:
	{
		return;
	}
}
// System.Void MummyController::OnTriggerStay2D(UnityEngine.Collider2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisNinjaController_t14_m79_MethodInfo_var;
extern "C" void MummyController_OnTriggerStay2D_m16 (MummyController_t11 * __this, Collider2D_t21 * ___col, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		GameObject_GetComponent_TisNinjaController_t14_m79_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collider2D_t21 * L_0 = ___col;
		NullCheck(L_0);
		GameObject_t1 * L_1 = Component_get_gameObject_m67(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m68(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m69(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral6, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = (__this->___killedBy_13);
		if (L_4)
		{
			goto IL_0058;
		}
	}
	{
		Collider2D_t21 * L_5 = ___col;
		NullCheck(L_5);
		GameObject_t1 * L_6 = Component_get_gameObject_m67(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		NinjaController_t14 * L_7 = GameObject_GetComponent_TisNinjaController_t14_m79(L_6, /*hidden argument*/GameObject_GetComponent_TisNinjaController_t14_m79_MethodInfo_var);
		NullCheck(L_7);
		int32_t L_8 = NinjaController_get_CurrentState_m19(L_7, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)132)))) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		__this->___killedBy_13 = 1;
		MonoBehaviour_Invoke_m95(__this, (String_t*) &_stringLiteral7, (0.05f), /*hidden argument*/NULL);
	}

IL_0058:
	{
		return;
	}
}
// System.Void MummyController::Die()
extern const MethodInfo* Component_GetComponents_TisCollider2D_t21_m81_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisObstacleController_t17_m83_MethodInfo_var;
extern "C" void MummyController_Die_m17 (MummyController_t11 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponents_TisCollider2D_t21_m81_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483655);
		GameObject_GetComponent_TisObstacleController_t17_m83_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483656);
		s_Il2CppMethodIntialized = true;
	}
	Collider2D_t21 * V_0 = {0};
	Collider2DU5BU5D_t28* V_1 = {0};
	int32_t V_2 = 0;
	GameObject_t1 * V_3 = {0};
	ObstacleController_t17 * V_4 = {0};
	{
		int32_t L_0 = (__this->___killedBy_13);
		if ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) <= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		Animator_t7 * L_1 = (__this->___animator_10);
		NullCheck(L_1);
		Animator_SetTrigger_m93(L_1, (String_t*) &_stringLiteral10, /*hidden argument*/NULL);
		AudioSource_t9 * L_2 = (__this->___audioSource_12);
		AudioClip_t10 * L_3 = (__this->___hit2_16);
		NullCheck(L_2);
		AudioSource_PlayOneShot_m96(L_2, L_3, /*hidden argument*/NULL);
		goto IL_00a3;
	}

IL_0034:
	{
		int32_t L_4 = (__this->___killedBy_13);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0082;
		}
	}
	{
		Animator_t7 * L_5 = (__this->___animator_10);
		NullCheck(L_5);
		Animator_SetTrigger_m93(L_5, (String_t*) &_stringLiteral11, /*hidden argument*/NULL);
		AudioSource_t9 * L_6 = (__this->___audioSource_12);
		AudioClip_t10 * L_7 = (__this->___hit_15);
		NullCheck(L_6);
		AudioSource_set_clip_m97(L_6, L_7, /*hidden argument*/NULL);
		AudioSource_t9 * L_8 = (__this->___audioSource_12);
		NullCheck(L_8);
		AudioSource_set_loop_m98(L_8, 0, /*hidden argument*/NULL);
		AudioSource_t9 * L_9 = (__this->___audioSource_12);
		NullCheck(L_9);
		AudioSource_PlayDelayed_m99(L_9, (0.1f), /*hidden argument*/NULL);
		goto IL_00a3;
	}

IL_0082:
	{
		Animator_t7 * L_10 = (__this->___animator_10);
		NullCheck(L_10);
		Animator_SetTrigger_m93(L_10, (String_t*) &_stringLiteral12, /*hidden argument*/NULL);
		AudioSource_t9 * L_11 = (__this->___audioSource_12);
		AudioClip_t10 * L_12 = (__this->___hit2_16);
		NullCheck(L_11);
		AudioSource_PlayOneShot_m96(L_11, L_12, /*hidden argument*/NULL);
	}

IL_00a3:
	{
		Collider2DU5BU5D_t28* L_13 = Component_GetComponents_TisCollider2D_t21_m81(__this, /*hidden argument*/Component_GetComponents_TisCollider2D_t21_m81_MethodInfo_var);
		V_1 = L_13;
		V_2 = 0;
		goto IL_00c0;
	}

IL_00b1:
	{
		Collider2DU5BU5D_t28* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		V_0 = (*(Collider2D_t21 **)(Collider2D_t21 **)SZArrayLdElema(L_14, L_16));
		Collider2D_t21 * L_17 = V_0;
		NullCheck(L_17);
		Behaviour_set_enabled_m100(L_17, 0, /*hidden argument*/NULL);
		int32_t L_18 = V_2;
		V_2 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_00c0:
	{
		int32_t L_19 = V_2;
		Collider2DU5BU5D_t28* L_20 = V_1;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((Array_t *)L_20)->max_length))))))
		{
			goto IL_00b1;
		}
	}
	{
		Rigidbody2D_t8 * L_21 = (__this->___mRigidbody_11);
		Object_Destroy_m70(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		GameObject_t1 * L_22 = Component_get_gameObject_m67(__this, /*hidden argument*/NULL);
		Object_Destroy_m94(NULL /*static, unused*/, L_22, (2.0f), /*hidden argument*/NULL);
		GameObject_t1 * L_23 = GameObject_Find_m101(NULL /*static, unused*/, (String_t*) &_stringLiteral13, /*hidden argument*/NULL);
		V_3 = L_23;
		GameObject_t1 * L_24 = V_3;
		NullCheck(L_24);
		ObstacleController_t17 * L_25 = GameObject_GetComponent_TisObstacleController_t17_m83(L_24, /*hidden argument*/GameObject_GetComponent_TisObstacleController_t17_m83_MethodInfo_var);
		V_4 = L_25;
		ObstacleController_t17 * L_26 = V_4;
		GameObject_t1 * L_27 = Component_get_gameObject_m67(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		ObstacleController_RemoveObstacle_m44(L_26, L_27, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.BoxCollider2D
#include "UnityEngine_UnityEngine_BoxCollider2D.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityException.h"
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMaskMethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"
// UnityEngine.CircleCollider2D
#include "UnityEngine_UnityEngine_CircleCollider2DMethodDeclarations.h"
// System.ValueType
#include "mscorlib_System_ValueTypeMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"
struct Component_t25;
struct BoxCollider2D_t34;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
#define Component_GetComponent_TisBoxCollider2D_t34_m102(__this, method) (( BoxCollider2D_t34 * (*) (Component_t25 *, const MethodInfo*))Component_GetComponent_TisObject_t_m62_gshared)(__this, method)
struct GameObject_t1;
struct Rigidbody2D_t8;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
#define GameObject_GetComponent_TisRigidbody2D_t8_m103(__this, method) (( Rigidbody2D_t8 * (*) (GameObject_t1 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m80_gshared)(__this, method)


// System.Void NinjaController::.ctor()
extern TypeInfo* Hashtable_t12_il2cpp_TypeInfo_var;
extern "C" void NinjaController__ctor_m18 (NinjaController_t14 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___currentState_18 = 1;
		Hashtable_t12 * L_0 = (Hashtable_t12 *)il2cpp_codegen_object_new (Hashtable_t12_il2cpp_TypeInfo_var);
		Hashtable__ctor_m104(L_0, /*hidden argument*/NULL);
		__this->___animationFlags_19 = L_0;
		__this->___groundCheckRadius_22 = (0.2f);
		__this->___speed_28 = (8.0f);
		__this->___jumpHeight_29 = (7.5f);
		MonoBehaviour__ctor_m55(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 NinjaController::get_CurrentState()
extern "C" int32_t NinjaController_get_CurrentState_m19 (NinjaController_t14 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___currentState_18);
		return L_0;
	}
}
// System.Void NinjaController::Awake()
extern TypeInfo* Int32_t35_il2cpp_TypeInfo_var;
extern "C" void NinjaController_Awake_m20 (NinjaController_t14 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t12 * L_0 = (__this->___animationFlags_19);
		int32_t L_1 = Animator_StringToHash_m105(NULL /*static, unused*/, (String_t*) &_stringLiteral14, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t35_il2cpp_TypeInfo_var, &L_2);
		int32_t L_4 = 1;
		Object_t * L_5 = Box(Int32_t35_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_0);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_0, L_3, L_5);
		Hashtable_t12 * L_6 = (__this->___animationFlags_19);
		int32_t L_7 = Animator_StringToHash_m105(NULL /*static, unused*/, (String_t*) &_stringLiteral15, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		Object_t * L_9 = Box(Int32_t35_il2cpp_TypeInfo_var, &L_8);
		int32_t L_10 = 2;
		Object_t * L_11 = Box(Int32_t35_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_6);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_6, L_9, L_11);
		Hashtable_t12 * L_12 = (__this->___animationFlags_19);
		int32_t L_13 = Animator_StringToHash_m105(NULL /*static, unused*/, (String_t*) &_stringLiteral16, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t35_il2cpp_TypeInfo_var, &L_14);
		int32_t L_16 = 4;
		Object_t * L_17 = Box(Int32_t35_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_12);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_12, L_15, L_17);
		Hashtable_t12 * L_18 = (__this->___animationFlags_19);
		int32_t L_19 = Animator_StringToHash_m105(NULL /*static, unused*/, (String_t*) &_stringLiteral17, /*hidden argument*/NULL);
		int32_t L_20 = L_19;
		Object_t * L_21 = Box(Int32_t35_il2cpp_TypeInfo_var, &L_20);
		int32_t L_22 = 8;
		Object_t * L_23 = Box(Int32_t35_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_18);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_18, L_21, L_23);
		Hashtable_t12 * L_24 = (__this->___animationFlags_19);
		int32_t L_25 = Animator_StringToHash_m105(NULL /*static, unused*/, (String_t*) &_stringLiteral18, /*hidden argument*/NULL);
		int32_t L_26 = L_25;
		Object_t * L_27 = Box(Int32_t35_il2cpp_TypeInfo_var, &L_26);
		int32_t L_28 = ((int32_t)16);
		Object_t * L_29 = Box(Int32_t35_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_24);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_24, L_27, L_29);
		Hashtable_t12 * L_30 = (__this->___animationFlags_19);
		int32_t L_31 = Animator_StringToHash_m105(NULL /*static, unused*/, (String_t*) &_stringLiteral7, /*hidden argument*/NULL);
		int32_t L_32 = L_31;
		Object_t * L_33 = Box(Int32_t35_il2cpp_TypeInfo_var, &L_32);
		int32_t L_34 = ((int32_t)32);
		Object_t * L_35 = Box(Int32_t35_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_30);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_30, L_33, L_35);
		return;
	}
}
// System.Void NinjaController::Start()
extern const MethodInfo* Component_GetComponent_TisAnimator_t7_m76_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t8_m77_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t9_m78_MethodInfo_var;
extern "C" void NinjaController_Start_m21 (NinjaController_t14 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisAnimator_t7_m76_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		Component_GetComponent_TisRigidbody2D_t8_m77_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483652);
		Component_GetComponent_TisAudioSource_t9_m78_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		s_Il2CppMethodIntialized = true;
	}
	{
		Animator_t7 * L_0 = Component_GetComponent_TisAnimator_t7_m76(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t7_m76_MethodInfo_var);
		__this->___animator_14 = L_0;
		Rigidbody2D_t8 * L_1 = Component_GetComponent_TisRigidbody2D_t8_m77(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t8_m77_MethodInfo_var);
		__this->___rigidbody_15 = L_1;
		AudioSource_t9 * L_2 = Component_GetComponent_TisAudioSource_t9_m78(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t9_m78_MethodInfo_var);
		__this->___audioSource_16 = L_2;
		float L_3 = NinjaController_CalculateJumpForce_m23(__this, /*hidden argument*/NULL);
		__this->___jumpForce_17 = L_3;
		return;
	}
}
// System.Single NinjaController::CalculateJumpVelocity()
extern TypeInfo* Physics2D_t36_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t37_il2cpp_TypeInfo_var;
extern "C" float NinjaController_CalculateJumpVelocity_m22 (NinjaController_t14 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t36_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		Mathf_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector2_t18  V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t36_il2cpp_TypeInfo_var);
		Vector2_t18  L_0 = Physics2D_get_gravity_m106(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_0;
		float L_1 = ((&V_1)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t37_il2cpp_TypeInfo_var);
		float L_2 = fabsf(L_1);
		V_0 = L_2;
		Rigidbody2D_t8 * L_3 = (__this->___rigidbody_15);
		NullCheck(L_3);
		float L_4 = Rigidbody2D_get_gravityScale_m107(L_3, /*hidden argument*/NULL);
		float L_5 = V_0;
		float L_6 = (__this->___jumpHeight_29);
		float L_7 = sqrtf(((float)((float)((float)((float)((float)((float)(2.0f)*(float)L_4))*(float)L_5))*(float)L_6)));
		return L_7;
	}
}
// System.Single NinjaController::CalculateJumpForce()
extern TypeInfo* Physics2D_t36_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t37_il2cpp_TypeInfo_var;
extern "C" float NinjaController_CalculateJumpForce_m23 (NinjaController_t14 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t36_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		Mathf_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector2_t18  V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t36_il2cpp_TypeInfo_var);
		Vector2_t18  L_0 = Physics2D_get_gravity_m106(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_0;
		float L_1 = ((&V_1)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t37_il2cpp_TypeInfo_var);
		float L_2 = fabsf(L_1);
		Rigidbody2D_t8 * L_3 = (__this->___rigidbody_15);
		NullCheck(L_3);
		float L_4 = Rigidbody2D_get_gravityScale_m107(L_3, /*hidden argument*/NULL);
		V_0 = ((float)((float)L_2*(float)L_4));
		Rigidbody2D_t8 * L_5 = (__this->___rigidbody_15);
		NullCheck(L_5);
		float L_6 = Rigidbody2D_get_mass_m108(L_5, /*hidden argument*/NULL);
		float L_7 = V_0;
		float L_8 = (__this->___jumpHeight_29);
		return ((float)((float)((float)((float)L_6*(float)L_7))*(float)L_8));
	}
}
// System.Void NinjaController::FixedUpdate()
extern TypeInfo* Physics2D_t36_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisBoxCollider2D_t34_m102_MethodInfo_var;
extern "C" void NinjaController_FixedUpdate_m24 (NinjaController_t14 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t36_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		Component_GetComponent_TisBoxCollider2D_t34_m102_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483657);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = NinjaController_GetCurrentState_m34(__this, /*hidden argument*/NULL);
		__this->___currentState_18 = L_0;
		Transform_t13 * L_1 = (__this->___groundCheck_21);
		NullCheck(L_1);
		Vector3_t4  L_2 = Transform_get_position_m57(L_1, /*hidden argument*/NULL);
		Vector2_t18  L_3 = Vector2_op_Implicit_m109(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		float L_4 = (__this->___groundCheckRadius_22);
		LayerMask_t15  L_5 = (__this->___groundLayer_23);
		int32_t L_6 = LayerMask_op_Implicit_m110(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t36_il2cpp_TypeInfo_var);
		Collider2D_t21 * L_7 = Physics2D_OverlapCircle_m111(NULL /*static, unused*/, L_3, L_4, L_6, /*hidden argument*/NULL);
		bool L_8 = Object_op_Implicit_m58(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		__this->___grounded_20 = L_8;
		bool L_9 = (__this->___grounded_20);
		if (L_9)
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_10 = (__this->___currentState_18);
		if (((int32_t)((int32_t)L_10&(int32_t)((int32_t)34))))
		{
			goto IL_0071;
		}
	}
	{
		Animator_t7 * L_11 = (__this->___animator_14);
		NullCheck(L_11);
		Animator_SetTrigger_m93(L_11, (String_t*) &_stringLiteral19, /*hidden argument*/NULL);
		NinjaController_StopSound_m37(__this, /*hidden argument*/NULL);
		goto IL_0127;
	}

IL_0071:
	{
		bool L_12 = (__this->___grounded_20);
		if (!L_12)
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_13 = (__this->___currentState_18);
		if ((!(((uint32_t)L_13) == ((uint32_t)2))))
		{
			goto IL_009d;
		}
	}
	{
		Animator_t7 * L_14 = (__this->___animator_14);
		NullCheck(L_14);
		Animator_SetTrigger_m93(L_14, (String_t*) &_stringLiteral20, /*hidden argument*/NULL);
		goto IL_0127;
	}

IL_009d:
	{
		bool L_15 = (__this->___grounded_20);
		if (!L_15)
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_16 = (__this->___currentState_18);
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_0127;
		}
	}
	{
		AudioSource_t9 * L_17 = (__this->___audioSource_16);
		NullCheck(L_17);
		bool L_18 = AudioSource_get_isPlaying_m112(L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00df;
		}
	}
	{
		AudioSource_t9 * L_19 = (__this->___audioSource_16);
		NullCheck(L_19);
		AudioClip_t10 * L_20 = AudioSource_get_clip_m113(L_19, /*hidden argument*/NULL);
		AudioClip_t10 * L_21 = (__this->___footStep_35);
		bool L_22 = Object_op_Inequality_m72(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0127;
		}
	}

IL_00df:
	{
		AudioSource_t9 * L_23 = (__this->___audioSource_16);
		AudioClip_t10 * L_24 = (__this->___footStep_35);
		NullCheck(L_23);
		AudioSource_set_clip_m97(L_23, L_24, /*hidden argument*/NULL);
		AudioSource_t9 * L_25 = (__this->___audioSource_16);
		NullCheck(L_25);
		AudioSource_set_loop_m98(L_25, 1, /*hidden argument*/NULL);
		AudioSource_t9 * L_26 = (__this->___audioSource_16);
		NullCheck(L_26);
		AudioSource_set_pitch_m114(L_26, (1.5f), /*hidden argument*/NULL);
		AudioSource_t9 * L_27 = (__this->___audioSource_16);
		NullCheck(L_27);
		AudioSource_set_volume_m115(L_27, (0.125f), /*hidden argument*/NULL);
		AudioSource_t9 * L_28 = (__this->___audioSource_16);
		NullCheck(L_28);
		AudioSource_Play_m116(L_28, /*hidden argument*/NULL);
	}

IL_0127:
	{
		int32_t L_29 = (__this->___currentState_18);
		if ((!(((uint32_t)L_29) == ((uint32_t)8))))
		{
			goto IL_0154;
		}
	}
	{
		BoxCollider2D_t34 * L_30 = Component_GetComponent_TisBoxCollider2D_t34_m102(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t34_m102_MethodInfo_var);
		NullCheck(L_30);
		bool L_31 = Behaviour_get_enabled_m117(L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0154;
		}
	}
	{
		BoxCollider2D_t34 * L_32 = Component_GetComponent_TisBoxCollider2D_t34_m102(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t34_m102_MethodInfo_var);
		NullCheck(L_32);
		Behaviour_set_enabled_m100(L_32, 0, /*hidden argument*/NULL);
		goto IL_017c;
	}

IL_0154:
	{
		int32_t L_33 = (__this->___currentState_18);
		if ((((int32_t)L_33) == ((int32_t)8)))
		{
			goto IL_017c;
		}
	}
	{
		BoxCollider2D_t34 * L_34 = Component_GetComponent_TisBoxCollider2D_t34_m102(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t34_m102_MethodInfo_var);
		NullCheck(L_34);
		bool L_35 = Behaviour_get_enabled_m117(L_34, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_017c;
		}
	}
	{
		BoxCollider2D_t34 * L_36 = Component_GetComponent_TisBoxCollider2D_t34_m102(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t34_m102_MethodInfo_var);
		NullCheck(L_36);
		Behaviour_set_enabled_m100(L_36, 1, /*hidden argument*/NULL);
	}

IL_017c:
	{
		NinjaController_HandleInput_m28(__this, /*hidden argument*/NULL);
		NinjaController_MovePlayer_m26(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NinjaController::Update()
extern "C" void NinjaController_Update_m25 (NinjaController_t14 * __this, const MethodInfo* method)
{
	{
		NinjaController_GetInput_m27(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NinjaController::MovePlayer()
extern "C" void NinjaController_MovePlayer_m26 (NinjaController_t14 * __this, const MethodInfo* method)
{
	Vector2_t18  V_0 = {0};
	{
		int32_t L_0 = (__this->___currentState_18);
		if ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)11)))) <= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		Rigidbody2D_t8 * L_1 = (__this->___rigidbody_15);
		float L_2 = (__this->___speed_28);
		Rigidbody2D_t8 * L_3 = (__this->___rigidbody_15);
		NullCheck(L_3);
		Vector2_t18  L_4 = Rigidbody2D_get_velocity_m84(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = ((&V_0)->___y_2);
		Vector2_t18  L_6 = {0};
		Vector2__ctor_m85(&L_6, L_2, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		Rigidbody2D_set_velocity_m86(L_1, L_6, /*hidden argument*/NULL);
		goto IL_006b;
	}

IL_003d:
	{
		int32_t L_7 = (__this->___currentState_18);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_006b;
		}
	}
	{
		Rigidbody2D_t8 * L_8 = (__this->___rigidbody_15);
		float L_9 = (__this->___speed_28);
		Vector2_t18  L_10 = {0};
		Vector2__ctor_m85(&L_10, ((float)((float)L_9/(float)(2.0f))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Rigidbody2D_set_velocity_m86(L_8, L_10, /*hidden argument*/NULL);
	}

IL_006b:
	{
		return;
	}
}
// System.Void NinjaController::GetInput()
extern TypeInfo* Input_t38_il2cpp_TypeInfo_var;
extern "C" void NinjaController_GetInput_m27 (NinjaController_t14 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = NinjaController_GetSwipe_m36(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = (__this->___currentState_18);
		V_1 = ((((int32_t)((int32_t)((int32_t)L_1&(int32_t)1))) > ((int32_t)0))? 1 : 0);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t38_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m118(NULL /*static, unused*/, ((int32_t)120), /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_3 = V_0;
		if (L_3)
		{
			goto IL_0032;
		}
	}

IL_0025:
	{
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		__this->___inputJump_24 = 1;
	}

IL_0032:
	{
		int32_t L_5 = NinjaController_GetTapCount_m35(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t38_il2cpp_TypeInfo_var);
		bool L_6 = Input_GetKeyDown_m118(NULL /*static, unused*/, ((int32_t)99), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0057;
		}
	}

IL_004a:
	{
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0057;
		}
	}
	{
		__this->___inputSlash_27 = 1;
	}

IL_0057:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t38_il2cpp_TypeInfo_var);
		bool L_8 = Input_GetKeyDown_m118(NULL /*static, unused*/, ((int32_t)274), /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_007a;
		}
	}

IL_006d:
	{
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_007a;
		}
	}
	{
		__this->___inputSlide_26 = 1;
	}

IL_007a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t38_il2cpp_TypeInfo_var);
		bool L_11 = Input_GetKeyDown_m118(NULL /*static, unused*/, ((int32_t)275), /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_009d;
		}
	}

IL_0090:
	{
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_009d;
		}
	}
	{
		__this->___inputThrow_25 = 1;
	}

IL_009d:
	{
		return;
	}
}
// System.Void NinjaController::HandleInput()
extern "C" void NinjaController_HandleInput_m28 (NinjaController_t14 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___inputJump_24);
		if (!L_0)
		{
			goto IL_0054;
		}
	}
	{
		Animator_t7 * L_1 = (__this->___animator_14);
		NullCheck(L_1);
		Animator_SetTrigger_m93(L_1, (String_t*) &_stringLiteral19, /*hidden argument*/NULL);
		Rigidbody2D_t8 * L_2 = (__this->___rigidbody_15);
		float L_3 = (__this->___jumpForce_17);
		Vector2_t18  L_4 = {0};
		Vector2__ctor_m85(&L_4, (0.0f), L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody2D_AddForce_m119(L_2, L_4, /*hidden argument*/NULL);
		NinjaController_StopSound_m37(__this, /*hidden argument*/NULL);
		AudioSource_t9 * L_5 = (__this->___audioSource_16);
		AudioClip_t10 * L_6 = (__this->___jump_31);
		NullCheck(L_5);
		AudioSource_PlayOneShot_m96(L_5, L_6, /*hidden argument*/NULL);
		__this->___inputJump_24 = 0;
	}

IL_0054:
	{
		bool L_7 = (__this->___inputSlash_27);
		if (!L_7)
		{
			goto IL_009d;
		}
	}
	{
		Animator_t7 * L_8 = (__this->___animator_14);
		NullCheck(L_8);
		Animator_SetTrigger_m93(L_8, (String_t*) &_stringLiteral21, /*hidden argument*/NULL);
		NinjaController_StopSound_m37(__this, /*hidden argument*/NULL);
		AudioSource_t9 * L_9 = (__this->___audioSource_16);
		AudioClip_t10 * L_10 = (__this->___sword_30);
		NullCheck(L_9);
		AudioSource_set_clip_m97(L_9, L_10, /*hidden argument*/NULL);
		AudioSource_t9 * L_11 = (__this->___audioSource_16);
		NullCheck(L_11);
		AudioSource_PlayDelayed_m99(L_11, (0.25f), /*hidden argument*/NULL);
		__this->___inputSlash_27 = 0;
	}

IL_009d:
	{
		bool L_12 = (__this->___inputSlide_26);
		if (!L_12)
		{
			goto IL_00bf;
		}
	}
	{
		Animator_t7 * L_13 = (__this->___animator_14);
		NullCheck(L_13);
		Animator_SetTrigger_m93(L_13, (String_t*) &_stringLiteral22, /*hidden argument*/NULL);
		__this->___inputSlide_26 = 0;
	}

IL_00bf:
	{
		bool L_14 = (__this->___inputThrow_25);
		if (!L_14)
		{
			goto IL_00ee;
		}
	}
	{
		NinjaController_throwDart_m29(__this, /*hidden argument*/NULL);
		NinjaController_StopSound_m37(__this, /*hidden argument*/NULL);
		AudioSource_t9 * L_15 = (__this->___audioSource_16);
		AudioClip_t10 * L_16 = (__this->___throwing_33);
		NullCheck(L_15);
		AudioSource_PlayOneShot_m96(L_15, L_16, /*hidden argument*/NULL);
		__this->___inputThrow_25 = 0;
	}

IL_00ee:
	{
		return;
	}
}
// System.Void NinjaController::throwDart()
extern const Il2CppType* GameObject_t1_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t1_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRenderer_t24_m61_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRigidbody2D_t8_m103_MethodInfo_var;
extern "C" void NinjaController_throwDart_m29 (NinjaController_t14 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t1_0_0_0_var = il2cpp_codegen_type_from_index(1);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		GameObject_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Component_GetComponent_TisRenderer_t24_m61_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483650);
		GameObject_GetComponent_TisRigidbody2D_t8_m103_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483658);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t18  V_0 = {0};
	GameObject_t1 * V_1 = {0};
	Bounds_t27  V_2 = {0};
	Vector3_t4  V_3 = {0};
	{
		Animator_t7 * L_0 = (__this->___animator_14);
		NullCheck(L_0);
		Animator_SetTrigger_m93(L_0, (String_t*) &_stringLiteral23, /*hidden argument*/NULL);
		Transform_t13 * L_1 = Component_get_transform_m56(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t4  L_2 = Transform_get_position_m57(L_1, /*hidden argument*/NULL);
		Vector2_t18  L_3 = Vector2_op_Implicit_m109(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector2_t18 * L_4 = (&V_0);
		float L_5 = (L_4->___x_1);
		L_4->___x_1 = ((float)((float)L_5+(float)(0.5f)));
		Vector2_t18 * L_6 = (&V_0);
		float L_7 = (L_6->___y_2);
		Renderer_t24 * L_8 = Component_GetComponent_TisRenderer_t24_m61(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t24_m61_MethodInfo_var);
		NullCheck(L_8);
		Bounds_t27  L_9 = Renderer_get_bounds_m73(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		Vector3_t4  L_10 = Bounds_get_size_m74((&V_2), /*hidden argument*/NULL);
		V_3 = L_10;
		float L_11 = ((&V_3)->___y_2);
		L_6->___y_2 = ((float)((float)L_7+(float)((float)((float)L_11/(float)(2.0f)))));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m64(NULL /*static, unused*/, LoadTypeToken(GameObject_t1_0_0_0_var), /*hidden argument*/NULL);
		Object_t26 * L_13 = Resources_Load_m65(NULL /*static, unused*/, (String_t*) &_stringLiteral24, L_12, /*hidden argument*/NULL);
		Vector2_t18  L_14 = V_0;
		Vector3_t4  L_15 = Vector2_op_Implicit_m120(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		Quaternion_t39  L_16 = Quaternion_get_identity_m121(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t26 * L_17 = Object_Instantiate_m122(NULL /*static, unused*/, L_13, L_15, L_16, /*hidden argument*/NULL);
		V_1 = ((GameObject_t1 *)IsInst(L_17, GameObject_t1_il2cpp_TypeInfo_var));
		GameObject_t1 * L_18 = V_1;
		NullCheck(L_18);
		Rigidbody2D_t8 * L_19 = GameObject_GetComponent_TisRigidbody2D_t8_m103(L_18, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t8_m103_MethodInfo_var);
		Vector2_t18  L_20 = {0};
		Vector2__ctor_m85(&L_20, (15.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		Rigidbody2D_set_velocity_m86(L_19, L_20, /*hidden argument*/NULL);
		GameObject_t1 * L_21 = V_1;
		Object_Destroy_m94(NULL /*static, unused*/, L_21, (1.5f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void NinjaController::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C" void NinjaController_OnCollisionEnter2D_m30 (NinjaController_t14 * __this, Collision2D_t22 * ___col, const MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		Collision2D_t22 * L_0 = ___col;
		bool L_1 = NinjaController_DidHitEnemy_m32(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Collision2D_t22 * L_2 = ___col;
		bool L_3 = NinjaController_DidHitWall_m31(__this, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0098;
		}
	}

IL_001c:
	{
		int32_t L_6 = (__this->___currentState_18);
		if (((int32_t)((int32_t)L_6&(int32_t)((int32_t)32))))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_7 = (__this->___currentState_18);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0055;
		}
	}
	{
		Rigidbody2D_t8 * L_8 = (__this->___rigidbody_15);
		Vector2_t18  L_9 = {0};
		Vector2__ctor_m85(&L_9, (-250.0f), (50.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Rigidbody2D_AddForce_m119(L_8, L_9, /*hidden argument*/NULL);
		goto IL_007b;
	}

IL_0055:
	{
		int32_t L_10 = (__this->___currentState_18);
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_007b;
		}
	}
	{
		Rigidbody2D_t8 * L_11 = (__this->___rigidbody_15);
		Vector2_t18  L_12 = {0};
		Vector2__ctor_m85(&L_12, (-250.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		Rigidbody2D_AddForce_m119(L_11, L_12, /*hidden argument*/NULL);
	}

IL_007b:
	{
		NinjaController_StopSound_m37(__this, /*hidden argument*/NULL);
		AudioSource_t9 * L_13 = (__this->___audioSource_16);
		AudioClip_t10 * L_14 = (__this->___hit_34);
		NullCheck(L_13);
		AudioSource_PlayOneShot_m96(L_13, L_14, /*hidden argument*/NULL);
		NinjaController_Die_m33(__this, /*hidden argument*/NULL);
	}

IL_0098:
	{
		return;
	}
}
// System.Boolean NinjaController::DidHitWall(UnityEngine.Collision2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CircleCollider2D_t31_il2cpp_TypeInfo_var;
extern "C" bool NinjaController_DidHitWall_m31 (NinjaController_t14 * __this, Collision2D_t22 * ___col, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		CircleCollider2D_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Vector2_t18  V_1 = {0};
	Vector2_t18  V_2 = {0};
	CircleCollider2D_t31 * V_3 = {0};
	float V_4 = 0.0f;
	Vector2_t18  V_5 = {0};
	Bounds_t27  V_6 = {0};
	Bounds_t27  V_7 = {0};
	Bounds_t27  V_8 = {0};
	{
		Collision2D_t22 * L_0 = ___col;
		NullCheck(L_0);
		GameObject_t1 * L_1 = Collision2D_get_gameObject_m89(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m68(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m69(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral25, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_00f3;
		}
	}
	{
		Collision2D_t22 * L_5 = ___col;
		NullCheck(L_5);
		ContactPoint2DU5BU5D_t32* L_6 = Collision2D_get_contacts_m91(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		Collider2D_t21 * L_7 = ContactPoint2D_get_otherCollider_m92(((ContactPoint2D_t33 *)(ContactPoint2D_t33 *)SZArrayLdElema(L_6, 0)), /*hidden argument*/NULL);
		if (!((CircleCollider2D_t31 *)IsInst(L_7, CircleCollider2D_t31_il2cpp_TypeInfo_var)))
		{
			goto IL_00f3;
		}
	}
	{
		Collision2D_t22 * L_8 = ___col;
		NullCheck(L_8);
		Collider2D_t21 * L_9 = Collision2D_get_collider_m90(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Bounds_t27  L_10 = Collider2D_get_bounds_m123(L_9, /*hidden argument*/NULL);
		V_6 = L_10;
		Vector3_t4  L_11 = Bounds_get_size_m74((&V_6), /*hidden argument*/NULL);
		Vector2_t18  L_12 = Vector2_op_Implicit_m109(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		Collision2D_t22 * L_13 = ___col;
		NullCheck(L_13);
		Collider2D_t21 * L_14 = Collision2D_get_collider_m90(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Bounds_t27  L_15 = Collider2D_get_bounds_m123(L_14, /*hidden argument*/NULL);
		V_7 = L_15;
		Vector3_t4  L_16 = Bounds_get_center_m124((&V_7), /*hidden argument*/NULL);
		Vector2_t18  L_17 = Vector2_op_Implicit_m109(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		Collision2D_t22 * L_18 = ___col;
		NullCheck(L_18);
		ContactPoint2DU5BU5D_t32* L_19 = Collision2D_get_contacts_m91(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 0);
		Collider2D_t21 * L_20 = ContactPoint2D_get_otherCollider_m92(((ContactPoint2D_t33 *)(ContactPoint2D_t33 *)SZArrayLdElema(L_19, 0)), /*hidden argument*/NULL);
		V_3 = ((CircleCollider2D_t31 *)Castclass(L_20, CircleCollider2D_t31_il2cpp_TypeInfo_var));
		CircleCollider2D_t31 * L_21 = V_3;
		NullCheck(L_21);
		float L_22 = CircleCollider2D_get_radius_m125(L_21, /*hidden argument*/NULL);
		V_4 = ((float)((float)L_22*(float)(2.0f)));
		CircleCollider2D_t31 * L_23 = V_3;
		NullCheck(L_23);
		Bounds_t27  L_24 = Collider2D_get_bounds_m123(L_23, /*hidden argument*/NULL);
		V_8 = L_24;
		Vector3_t4  L_25 = Bounds_get_center_m124((&V_8), /*hidden argument*/NULL);
		Vector2_t18  L_26 = Vector2_op_Implicit_m109(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		V_5 = L_26;
		float L_27 = ((&V_5)->___x_1);
		float L_28 = ((&V_2)->___x_1);
		float L_29 = ((&V_1)->___x_1);
		if ((((float)L_27) >= ((float)((float)((float)L_28-(float)((float)((float)L_29/(float)(2.0f))))))))
		{
			goto IL_00f1;
		}
	}
	{
		float L_30 = ((&V_5)->___y_2);
		float L_31 = V_4;
		float L_32 = ((&V_2)->___y_2);
		float L_33 = ((&V_1)->___y_2);
		if ((!(((float)((float)((float)L_30-(float)((float)((float)L_31/(float)(2.0f)))))) >= ((float)((float)((float)L_32+(float)((float)((float)L_33/(float)(2.0f)))))))))
		{
			goto IL_00f3;
		}
	}

IL_00f1:
	{
		V_0 = 0;
	}

IL_00f3:
	{
		bool L_34 = V_0;
		return L_34;
	}
}
// System.Boolean NinjaController::DidHitEnemy(UnityEngine.Collision2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* BoxCollider2D_t34_il2cpp_TypeInfo_var;
extern "C" bool NinjaController_DidHitEnemy_m32 (NinjaController_t14 * __this, Collision2D_t22 * ___col, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		BoxCollider2D_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		Collision2D_t22 * L_0 = ___col;
		NullCheck(L_0);
		GameObject_t1 * L_1 = Collision2D_get_gameObject_m89(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m68(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m69(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral26, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (__this->___currentState_18);
		if ((((int32_t)((int32_t)((int32_t)L_4&(int32_t)3))) <= ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		Collision2D_t22 * L_5 = ___col;
		NullCheck(L_5);
		ContactPoint2DU5BU5D_t32* L_6 = Collision2D_get_contacts_m91(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		Collider2D_t21 * L_7 = ContactPoint2D_get_otherCollider_m92(((ContactPoint2D_t33 *)(ContactPoint2D_t33 *)SZArrayLdElema(L_6, 0)), /*hidden argument*/NULL);
		G_B4_0 = ((!(((Object_t*)(BoxCollider2D_t34 *)((BoxCollider2D_t34 *)IsInst(L_7, BoxCollider2D_t34_il2cpp_TypeInfo_var))) <= ((Object_t*)(Object_t *)NULL)))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B4_0 = 0;
	}

IL_0044:
	{
		return G_B4_0;
	}
}
// System.Void NinjaController::Die()
extern const MethodInfo* Component_GetComponent_TisBoxCollider2D_t34_m102_MethodInfo_var;
extern "C" void NinjaController_Die_m33 (NinjaController_t14 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisBoxCollider2D_t34_m102_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483657);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoxCollider2D_t34 * L_0 = Component_GetComponent_TisBoxCollider2D_t34_m102(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t34_m102_MethodInfo_var);
		NullCheck(L_0);
		Behaviour_set_enabled_m100(L_0, 0, /*hidden argument*/NULL);
		Animator_t7 * L_1 = (__this->___animator_14);
		NullCheck(L_1);
		Animator_SetTrigger_m93(L_1, (String_t*) &_stringLiteral12, /*hidden argument*/NULL);
		__this->___currentState_18 = ((int32_t)32);
		AudioSource_t9 * L_2 = (__this->___audioSource_16);
		AudioClip_t10 * L_3 = (__this->___die_32);
		NullCheck(L_2);
		AudioSource_PlayOneShot_m96(L_2, L_3, /*hidden argument*/NULL);
		GameObject_t1 * L_4 = Component_get_gameObject_m67(__this, /*hidden argument*/NULL);
		Object_Destroy_m94(NULL /*static, unused*/, L_4, (2.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 NinjaController::GetCurrentState()
extern TypeInfo* AnimatorStateInfo_t30_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t35_il2cpp_TypeInfo_var;
extern TypeInfo* UnityException_t40_il2cpp_TypeInfo_var;
extern "C" int32_t NinjaController_GetCurrentState_m34 (NinjaController_t14 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AnimatorStateInfo_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		Int32_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		UnityException_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	AnimatorStateInfo_t30  V_0 = {0};
	UnityException_t40 * V_1 = {0};
	int32_t V_2 = 0;
	Exception_t41 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t41 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = (__this->___currentState_18);
			if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)32)))))
			{
				goto IL_0015;
			}
		}

IL_000d:
		{
			V_2 = ((int32_t)32);
			goto IL_0074;
		}

IL_0015:
		{
			Animator_t7 * L_1 = (__this->___animator_14);
			NullCheck(L_1);
			AnimatorStateInfo_t30  L_2 = Animator_GetCurrentAnimatorStateInfo_m87(L_1, 0, /*hidden argument*/NULL);
			V_0 = L_2;
			AnimatorStateInfo_t30  L_3 = V_0;
			AnimatorStateInfo_t30  L_4 = L_3;
			Object_t * L_5 = Box(AnimatorStateInfo_t30_il2cpp_TypeInfo_var, &L_4);
			NullCheck(L_5);
			bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.ValueType::Equals(System.Object) */, L_5, NULL);
			if (!L_6)
			{
				goto IL_003a;
			}
		}

IL_0033:
		{
			V_2 = 0;
			goto IL_0074;
		}

IL_003a:
		{
			Hashtable_t12 * L_7 = (__this->___animationFlags_19);
			int32_t L_8 = AnimatorStateInfo_get_shortNameHash_m126((&V_0), /*hidden argument*/NULL);
			int32_t L_9 = L_8;
			Object_t * L_10 = Box(Int32_t35_il2cpp_TypeInfo_var, &L_9);
			NullCheck(L_7);
			Object_t * L_11 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(20 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_7, L_10);
			V_2 = ((*(int32_t*)((int32_t*)UnBox (L_11, Int32_t35_il2cpp_TypeInfo_var))));
			goto IL_0074;
		}

IL_005c:
		{
			; // IL_005c: leave IL_0072
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t41 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (UnityException_t40_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0061;
		throw e;
	}

CATCH_0061:
	{ // begin catch(UnityEngine.UnityException)
		V_1 = ((UnityException_t40 *)__exception_local);
		UnityException_t40 * L_12 = V_1;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_12);
		Debug_Log_m127(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		goto IL_0072;
	} // end catch (depth: 1)

IL_0072:
	{
		return 0;
	}

IL_0074:
	{
		int32_t L_14 = V_2;
		return L_14;
	}
}
// System.Int32 NinjaController::GetTapCount()
extern TypeInfo* Input_t38_il2cpp_TypeInfo_var;
extern "C" int32_t NinjaController_GetTapCount_m35 (NinjaController_t14 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t18  V_0 = {0};
	Touch_t42  V_1 = {0};
	Touch_t42  V_2 = {0};
	Touch_t42  V_3 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t38_il2cpp_TypeInfo_var);
		int32_t L_0 = Input_get_touchCount_m128(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t38_il2cpp_TypeInfo_var);
		Touch_t42  L_1 = Input_GetTouch_m129(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = Touch_get_phase_m130((&V_1), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_005f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t38_il2cpp_TypeInfo_var);
		Touch_t42  L_3 = Input_GetTouch_m129(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_2 = L_3;
		Vector2_t18  L_4 = Touch_get_deltaPosition_m131((&V_2), /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = ((&V_0)->___x_1);
		if ((!(((float)L_5) < ((float)(10.0f)))))
		{
			goto IL_005f;
		}
	}
	{
		float L_6 = ((&V_0)->___y_2);
		if ((!(((float)L_6) < ((float)(10.0f)))))
		{
			goto IL_005f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t38_il2cpp_TypeInfo_var);
		Touch_t42  L_7 = Input_GetTouch_m129(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_3 = L_7;
		int32_t L_8 = Touch_get_tapCount_m132((&V_3), /*hidden argument*/NULL);
		return L_8;
	}

IL_005f:
	{
		return 0;
	}
}
// System.Int32 NinjaController::GetSwipe()
extern TypeInfo* Input_t38_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t37_il2cpp_TypeInfo_var;
extern "C" int32_t NinjaController_GetSwipe_m36 (NinjaController_t14 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		Mathf_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t18  V_0 = {0};
	Touch_t42  V_1 = {0};
	Touch_t42  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t38_il2cpp_TypeInfo_var);
		int32_t L_0 = Input_get_touchCount_m128(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00ee;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t38_il2cpp_TypeInfo_var);
		Touch_t42  L_1 = Input_GetTouch_m129(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = Touch_get_phase_m130((&V_1), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_00ee;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t38_il2cpp_TypeInfo_var);
		Touch_t42  L_3 = Input_GetTouch_m129(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_2 = L_3;
		Vector2_t18  L_4 = Touch_get_deltaPosition_m131((&V_2), /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = ((&V_0)->___x_1);
		if ((!(((float)L_5) < ((float)(-20.0f)))))
		{
			goto IL_005e;
		}
	}
	{
		float L_6 = ((&V_0)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t37_il2cpp_TypeInfo_var);
		float L_7 = fabsf(L_6);
		float L_8 = ((&V_0)->___y_2);
		float L_9 = fabsf(L_8);
		if ((!(((float)L_7) > ((float)L_9))))
		{
			goto IL_005e;
		}
	}
	{
		return 3;
	}

IL_005e:
	{
		float L_10 = ((&V_0)->___x_1);
		if ((!(((float)L_10) > ((float)(20.0f)))))
		{
			goto IL_008e;
		}
	}
	{
		float L_11 = ((&V_0)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t37_il2cpp_TypeInfo_var);
		float L_12 = fabsf(L_11);
		float L_13 = ((&V_0)->___y_2);
		float L_14 = fabsf(L_13);
		if ((!(((float)L_12) > ((float)L_14))))
		{
			goto IL_008e;
		}
	}
	{
		return 1;
	}

IL_008e:
	{
		float L_15 = ((&V_0)->___y_2);
		if ((!(((float)L_15) > ((float)(20.0f)))))
		{
			goto IL_00be;
		}
	}
	{
		float L_16 = ((&V_0)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t37_il2cpp_TypeInfo_var);
		float L_17 = fabsf(L_16);
		float L_18 = ((&V_0)->___x_1);
		float L_19 = fabsf(L_18);
		if ((!(((float)L_17) > ((float)L_19))))
		{
			goto IL_00be;
		}
	}
	{
		return 0;
	}

IL_00be:
	{
		float L_20 = ((&V_0)->___y_2);
		if ((!(((float)L_20) < ((float)(-20.0f)))))
		{
			goto IL_00ee;
		}
	}
	{
		float L_21 = ((&V_0)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t37_il2cpp_TypeInfo_var);
		float L_22 = fabsf(L_21);
		float L_23 = ((&V_0)->___x_1);
		float L_24 = fabsf(L_23);
		if ((!(((float)L_22) > ((float)L_24))))
		{
			goto IL_00ee;
		}
	}
	{
		return 2;
	}

IL_00ee:
	{
		return (-1);
	}
}
// System.Void NinjaController::StopSound()
extern "C" void NinjaController_StopSound_m37 (NinjaController_t14 * __this, const MethodInfo* method)
{
	{
		AudioSource_t9 * L_0 = (__this->___audioSource_16);
		NullCheck(L_0);
		AudioSource_Stop_m133(L_0, /*hidden argument*/NULL);
		AudioSource_t9 * L_1 = (__this->___audioSource_16);
		NullCheck(L_1);
		AudioSource_set_pitch_m114(L_1, (1.0f), /*hidden argument*/NULL);
		AudioSource_t9 * L_2 = (__this->___audioSource_16);
		NullCheck(L_2);
		AudioSource_set_loop_m98(L_2, 0, /*hidden argument*/NULL);
		AudioSource_t9 * L_3 = (__this->___audioSource_16);
		NullCheck(L_3);
		AudioSource_set_volume_m115(L_3, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "mscorlib_ArrayTypes.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// UnityEngine.BoxCollider2D
#include "UnityEngine_UnityEngine_BoxCollider2DMethodDeclarations.h"
struct GameObject_t1;
struct Renderer_t24;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
#define GameObject_GetComponent_TisRenderer_t24_m134(__this, method) (( Renderer_t24 * (*) (GameObject_t1 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m80_gshared)(__this, method)
struct GameObject_t1;
struct BoxCollider2D_t34;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.BoxCollider2D>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.BoxCollider2D>()
#define GameObject_GetComponent_TisBoxCollider2D_t34_m135(__this, method) (( BoxCollider2D_t34 * (*) (GameObject_t1 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m80_gshared)(__this, method)


// System.Void ObstacleController::.ctor()
extern TypeInfo* StringU5BU5D_t16_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t5_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m63_MethodInfo_var;
extern "C" void ObstacleController__ctor_m38 (ObstacleController_t17 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		List_1_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		List_1__ctor_m63_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t16* L_0 = ((StringU5BU5D_t16*)SZArrayNew(StringU5BU5D_t16_il2cpp_TypeInfo_var, 2));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral27);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral27;
		StringU5BU5D_t16* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral28);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)(String_t*) &_stringLiteral28;
		__this->___prefabs_3 = L_1;
		List_1_t5 * L_2 = (List_1_t5 *)il2cpp_codegen_object_new (List_1_t5_il2cpp_TypeInfo_var);
		List_1__ctor_m63(L_2, /*hidden argument*/List_1__ctor_m63_MethodInfo_var);
		__this->___obstacles_4 = L_2;
		MonoBehaviour__ctor_m55(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ObstacleController::Start()
extern const MethodInfo* GameObject_GetComponent_TisRenderer_t24_m134_MethodInfo_var;
extern "C" void ObstacleController_Start_m39 (ObstacleController_t17 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisRenderer_t24_m134_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483659);
		s_Il2CppMethodIntialized = true;
	}
	Bounds_t27  V_0 = {0};
	{
		Vector2_t18 * L_0 = &(__this->___cameraSize_5);
		Camera_t43 * L_1 = Camera_get_main_m136(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		float L_2 = Camera_get_orthographicSize_m137(L_1, /*hidden argument*/NULL);
		L_0->___y_2 = L_2;
		Vector2_t18 * L_3 = &(__this->___cameraSize_5);
		Camera_t43 * L_4 = Camera_get_main_m136(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		float L_5 = Camera_get_aspect_m138(L_4, /*hidden argument*/NULL);
		Vector2_t18 * L_6 = &(__this->___cameraSize_5);
		float L_7 = (L_6->___y_2);
		L_3->___x_1 = ((float)((float)L_5*(float)L_7));
		GameObject_t1 * L_8 = (__this->___player_2);
		NullCheck(L_8);
		Renderer_t24 * L_9 = GameObject_GetComponent_TisRenderer_t24_m134(L_8, /*hidden argument*/GameObject_GetComponent_TisRenderer_t24_m134_MethodInfo_var);
		NullCheck(L_9);
		Bounds_t27  L_10 = Renderer_get_bounds_m73(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		Vector3_t4  L_11 = Bounds_get_size_m74((&V_0), /*hidden argument*/NULL);
		Vector2_t18  L_12 = Vector2_op_Implicit_m109(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		__this->___playerBound_6 = L_12;
		Time_set_timeScale_m139(NULL /*static, unused*/, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ObstacleController::Update()
extern TypeInfo* Input_t38_il2cpp_TypeInfo_var;
extern "C" void ObstacleController_Update_m40 (ObstacleController_t17 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t38_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButton_m140(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		bool L_1 = (__this->___start_7);
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		__this->___start_7 = 1;
		Time_set_timeScale_m139(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void ObstacleController::FixedUpdate()
extern "C" void ObstacleController_FixedUpdate_m41 (ObstacleController_t17 * __this, const MethodInfo* method)
{
	{
		GameObject_t1 * L_0 = (__this->___player_2);
		bool L_1 = Object_op_Inequality_m72(NULL /*static, unused*/, L_0, (Object_t26 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t1 * L_2 = (__this->___player_2);
		bool L_3 = Object_ReferenceEquals_m141(NULL /*static, unused*/, L_2, NULL, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		ObstacleController_RemoveOldObstacles_m42(__this, /*hidden argument*/NULL);
		ObstacleController_AddNewObstacleIfNeeded_m43(__this, /*hidden argument*/NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void ObstacleController::RemoveOldObstacles()
extern "C" void ObstacleController_RemoveOldObstacles_m42 (ObstacleController_t17 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Vector3_t4  V_1 = {0};
	Vector3_t4  V_2 = {0};
	{
		V_0 = 0;
		goto IL_008b;
	}

IL_0007:
	{
		List_1_t5 * L_0 = (__this->___obstacles_4);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GameObject_t1 * L_2 = (GameObject_t1 *)VirtFuncInvoker1< GameObject_t1 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_0, L_1);
		NullCheck(L_2);
		Transform_t13 * L_3 = GameObject_get_transform_m59(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t4  L_4 = Transform_get_position_m57(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = ((&V_1)->___x_1);
		GameObject_t1 * L_6 = (__this->___player_2);
		NullCheck(L_6);
		Transform_t13 * L_7 = GameObject_get_transform_m59(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t4  L_8 = Transform_get_position_m57(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		float L_9 = ((&V_2)->___x_1);
		Vector2_t18 * L_10 = &(__this->___cameraSize_5);
		float L_11 = (L_10->___x_1);
		Vector2_t18 * L_12 = &(__this->___playerBound_6);
		float L_13 = (L_12->___x_1);
		if ((!(((float)L_5) <= ((float)((float)((float)((float)((float)L_9-(float)L_11))-(float)((float)((float)L_13/(float)(2.0f)))))))))
		{
			goto IL_0082;
		}
	}
	{
		List_1_t5 * L_14 = (__this->___obstacles_4);
		int32_t L_15 = V_0;
		NullCheck(L_14);
		GameObject_t1 * L_16 = (GameObject_t1 *)VirtFuncInvoker1< GameObject_t1 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_14, L_15);
		Object_Destroy_m70(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		List_1_t5 * L_17 = (__this->___obstacles_4);
		int32_t L_18 = V_0;
		NullCheck(L_17);
		VirtActionInvoker1< int32_t >::Invoke(27 /* System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32) */, L_17, L_18);
		goto IL_0087;
	}

IL_0082:
	{
		goto IL_009c;
	}

IL_0087:
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_008b:
	{
		int32_t L_20 = V_0;
		List_1_t5 * L_21 = (__this->___obstacles_4);
		NullCheck(L_21);
		int32_t L_22 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count() */, L_21);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0007;
		}
	}

IL_009c:
	{
		return;
	}
}
// System.Void ObstacleController::AddNewObstacleIfNeeded()
extern TypeInfo* GameObject_t1_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisBoxCollider2D_t34_m135_MethodInfo_var;
extern "C" void ObstacleController_AddNewObstacleIfNeeded_m43 (ObstacleController_t17 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		GameObject_GetComponent_TisBoxCollider2D_t34_m135_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483660);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t1 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	GameObject_t1 * V_4 = {0};
	Vector3_t4  V_5 = {0};
	Vector3_t4  V_6 = {0};
	Vector3_t4  V_7 = {0};
	Vector3_t4  V_8 = {0};
	Vector3_t4  V_9 = {0};
	Vector2_t18  V_10 = {0};
	Vector2_t18  V_11 = {0};
	Vector3_t4  V_12 = {0};
	{
		List_1_t5 * L_0 = (__this->___obstacles_4);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count() */, L_0);
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		List_1_t5 * L_2 = (__this->___obstacles_4);
		List_1_t5 * L_3 = (__this->___obstacles_4);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count() */, L_3);
		NullCheck(L_2);
		GameObject_t1 * L_5 = (GameObject_t1 *)VirtFuncInvoker1< GameObject_t1 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_2, ((int32_t)((int32_t)L_4-(int32_t)1)));
		NullCheck(L_5);
		Transform_t13 * L_6 = GameObject_get_transform_m59(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t4  L_7 = Transform_get_position_m57(L_6, /*hidden argument*/NULL);
		V_6 = L_7;
		float L_8 = ((&V_6)->___x_1);
		GameObject_t1 * L_9 = (__this->___player_2);
		NullCheck(L_9);
		Transform_t13 * L_10 = GameObject_get_transform_m59(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t4  L_11 = Transform_get_position_m57(L_10, /*hidden argument*/NULL);
		V_7 = L_11;
		float L_12 = ((&V_7)->___x_1);
		if ((!(((float)L_8) <= ((float)L_12))))
		{
			goto IL_01b5;
		}
	}

IL_0059:
	{
		int32_t L_13 = Random_Range_m142(NULL /*static, unused*/, 1, 5, /*hidden argument*/NULL);
		V_0 = L_13;
		V_1 = (GameObject_t1 *)NULL;
		V_2 = 0;
		goto IL_01ae;
	}

IL_006a:
	{
		StringU5BU5D_t16* L_14 = (__this->___prefabs_3);
		NullCheck(L_14);
		int32_t L_15 = Random_Range_m142(NULL /*static, unused*/, 0, (((int32_t)(((Array_t *)L_14)->max_length))), /*hidden argument*/NULL);
		V_3 = L_15;
		int32_t L_16 = V_3;
		StringU5BU5D_t16* L_17 = (__this->___prefabs_3);
		NullCheck(L_17);
		if ((((int32_t)L_16) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_17)->max_length)))-(int32_t)1)))))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_18 = V_3;
		V_3 = ((int32_t)((int32_t)L_18-(int32_t)1));
	}

IL_008d:
	{
		StringU5BU5D_t16* L_19 = (__this->___prefabs_3);
		int32_t L_20 = V_3;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		Object_t26 * L_22 = Resources_Load_m143(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_19, L_21)), /*hidden argument*/NULL);
		Object_t26 * L_23 = Object_Instantiate_m66(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		V_4 = ((GameObject_t1 *)IsInst(L_23, GameObject_t1_il2cpp_TypeInfo_var));
		GameObject_t1 * L_24 = V_4;
		NullCheck(L_24);
		Transform_t13 * L_25 = GameObject_get_transform_m59(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t4  L_26 = Transform_get_position_m57(L_25, /*hidden argument*/NULL);
		V_5 = L_26;
		GameObject_t1 * L_27 = V_1;
		bool L_28 = Object_op_Equality_m144(NULL /*static, unused*/, L_27, (Object_t26 *)NULL, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00f7;
		}
	}
	{
		GameObject_t1 * L_29 = (__this->___player_2);
		NullCheck(L_29);
		Transform_t13 * L_30 = GameObject_get_transform_m59(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t4  L_31 = Transform_get_position_m57(L_30, /*hidden argument*/NULL);
		V_8 = L_31;
		float L_32 = ((&V_8)->___x_1);
		Vector2_t18 * L_33 = &(__this->___cameraSize_5);
		float L_34 = (L_33->___x_1);
		(&V_5)->___x_1 = ((float)((float)L_32+(float)((float)((float)L_34*(float)(2.0f)))));
		goto IL_018c;
	}

IL_00f7:
	{
		GameObject_t1 * L_35 = V_1;
		NullCheck(L_35);
		String_t* L_36 = GameObject_get_tag_m68(L_35, /*hidden argument*/NULL);
		GameObject_t1 * L_37 = V_4;
		NullCheck(L_37);
		String_t* L_38 = GameObject_get_tag_m68(L_37, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_39 = String_op_Equality_m69(NULL /*static, unused*/, L_36, L_38, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0165;
		}
	}
	{
		GameObject_t1 * L_40 = V_1;
		NullCheck(L_40);
		Transform_t13 * L_41 = GameObject_get_transform_m59(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		Vector3_t4  L_42 = Transform_get_position_m57(L_41, /*hidden argument*/NULL);
		V_9 = L_42;
		float L_43 = ((&V_9)->___x_1);
		GameObject_t1 * L_44 = V_1;
		NullCheck(L_44);
		BoxCollider2D_t34 * L_45 = GameObject_GetComponent_TisBoxCollider2D_t34_m135(L_44, /*hidden argument*/GameObject_GetComponent_TisBoxCollider2D_t34_m135_MethodInfo_var);
		NullCheck(L_45);
		Vector2_t18  L_46 = BoxCollider2D_get_size_m145(L_45, /*hidden argument*/NULL);
		V_10 = L_46;
		float L_47 = ((&V_10)->___x_1);
		GameObject_t1 * L_48 = V_4;
		NullCheck(L_48);
		BoxCollider2D_t34 * L_49 = GameObject_GetComponent_TisBoxCollider2D_t34_m135(L_48, /*hidden argument*/GameObject_GetComponent_TisBoxCollider2D_t34_m135_MethodInfo_var);
		NullCheck(L_49);
		Vector2_t18  L_50 = BoxCollider2D_get_size_m145(L_49, /*hidden argument*/NULL);
		V_11 = L_50;
		float L_51 = ((&V_11)->___x_1);
		(&V_5)->___x_1 = ((float)((float)((float)((float)L_43+(float)((float)((float)L_47/(float)(2.0f)))))+(float)((float)((float)L_51/(float)(2.0f)))));
		goto IL_018c;
	}

IL_0165:
	{
		GameObject_t1 * L_52 = V_1;
		NullCheck(L_52);
		Transform_t13 * L_53 = GameObject_get_transform_m59(L_52, /*hidden argument*/NULL);
		NullCheck(L_53);
		Vector3_t4  L_54 = Transform_get_position_m57(L_53, /*hidden argument*/NULL);
		V_12 = L_54;
		float L_55 = ((&V_12)->___x_1);
		Vector2_t18 * L_56 = &(__this->___cameraSize_5);
		float L_57 = (L_56->___x_1);
		(&V_5)->___x_1 = ((float)((float)L_55+(float)L_57));
	}

IL_018c:
	{
		GameObject_t1 * L_58 = V_4;
		NullCheck(L_58);
		Transform_t13 * L_59 = GameObject_get_transform_m59(L_58, /*hidden argument*/NULL);
		Vector3_t4  L_60 = V_5;
		NullCheck(L_59);
		Transform_set_position_m60(L_59, L_60, /*hidden argument*/NULL);
		List_1_t5 * L_61 = (__this->___obstacles_4);
		GameObject_t1 * L_62 = V_4;
		NullCheck(L_61);
		VirtActionInvoker1< GameObject_t1 * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0) */, L_61, L_62);
		GameObject_t1 * L_63 = V_4;
		V_1 = L_63;
		int32_t L_64 = V_2;
		V_2 = ((int32_t)((int32_t)L_64+(int32_t)1));
	}

IL_01ae:
	{
		int32_t L_65 = V_2;
		int32_t L_66 = V_0;
		if ((((int32_t)L_65) < ((int32_t)L_66)))
		{
			goto IL_006a;
		}
	}

IL_01b5:
	{
		return;
	}
}
// System.Void ObstacleController::RemoveObstacle(UnityEngine.GameObject)
extern "C" void ObstacleController_RemoveObstacle_m44 (ObstacleController_t17 * __this, GameObject_t1 * ___obj, const MethodInfo* method)
{
	{
		List_1_t5 * L_0 = (__this->___obstacles_4);
		GameObject_t1 * L_1 = ___obj;
		NullCheck(L_0);
		VirtFuncInvoker1< bool, GameObject_t1 * >::Invoke(23 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(!0) */, L_0, L_1);
		return;
	}
}
// ParallaxController
#include "AssemblyU2DCSharp_ParallaxController.h"
#ifndef _MSC_VER
#else
#endif
// ParallaxController
#include "AssemblyU2DCSharp_ParallaxControllerMethodDeclarations.h"



// System.Void ParallaxController::.ctor()
extern "C" void ParallaxController__ctor_m45 (ParallaxController_t19 * __this, const MethodInfo* method)
{
	{
		__this->___parallaxSpeed_2 = (1.0f);
		MonoBehaviour__ctor_m55(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ParallaxController::Start()
extern "C" void ParallaxController_Start_m46 (ParallaxController_t19 * __this, const MethodInfo* method)
{
	{
		GameObject_t1 * L_0 = GameObject_Find_m101(NULL /*static, unused*/, (String_t*) &_stringLiteral29, /*hidden argument*/NULL);
		__this->___player_3 = L_0;
		return;
	}
}
// System.Void ParallaxController::FixedUpdate()
extern const MethodInfo* GameObject_GetComponent_TisNinjaController_t14_m79_MethodInfo_var;
extern "C" void ParallaxController_FixedUpdate_m47 (ParallaxController_t19 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisNinjaController_t14_m79_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		s_Il2CppMethodIntialized = true;
	}
	NinjaController_t14 * V_0 = {0};
	Vector3_t4  V_1 = {0};
	{
		GameObject_t1 * L_0 = (__this->___player_3);
		bool L_1 = Object_op_Equality_m144(NULL /*static, unused*/, L_0, (Object_t26 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		GameObject_t1 * L_2 = (__this->___player_3);
		NullCheck(L_2);
		NinjaController_t14 * L_3 = GameObject_GetComponent_TisNinjaController_t14_m79(L_2, /*hidden argument*/GameObject_GetComponent_TisNinjaController_t14_m79_MethodInfo_var);
		V_0 = L_3;
		NinjaController_t14 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = NinjaController_get_CurrentState_m19(L_4, /*hidden argument*/NULL);
		if (((int32_t)((int32_t)L_5&(int32_t)((int32_t)36))))
		{
			goto IL_005e;
		}
	}
	{
		Transform_t13 * L_6 = Component_get_transform_m56(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t4  L_7 = Transform_get_position_m57(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		Vector3_t4 * L_8 = (&V_1);
		float L_9 = (L_8->___x_1);
		float L_10 = (__this->___parallaxSpeed_2);
		float L_11 = Time_get_fixedDeltaTime_m146(NULL /*static, unused*/, /*hidden argument*/NULL);
		L_8->___x_1 = ((float)((float)L_9+(float)((float)((float)L_10*(float)L_11))));
		Transform_t13 * L_12 = Component_get_transform_m56(__this, /*hidden argument*/NULL);
		Vector3_t4  L_13 = V_1;
		NullCheck(L_12);
		Transform_set_position_m60(L_12, L_13, /*hidden argument*/NULL);
	}

IL_005e:
	{
		return;
	}
}
// PlayerController
#include "AssemblyU2DCSharp_PlayerController.h"
#ifndef _MSC_VER
#else
#endif
// PlayerController
#include "AssemblyU2DCSharp_PlayerControllerMethodDeclarations.h"

// UnityEngine.Collision
#include "UnityEngine_UnityEngine_Collision.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
// UnityEngine.ContactPoint
#include "UnityEngine_UnityEngine_ContactPoint.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Collision
#include "UnityEngine_UnityEngine_CollisionMethodDeclarations.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"
// UnityEngine.ContactPoint
#include "UnityEngine_UnityEngine_ContactPointMethodDeclarations.h"


// System.Void PlayerController::.ctor()
extern "C" void PlayerController__ctor_m48 (PlayerController_t20 * __this, const MethodInfo* method)
{
	{
		__this->___moveSpeed_2 = (10.0f);
		__this->___turnSpeed_3 = (50.0f);
		MonoBehaviour__ctor_m55(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Awake()
extern "C" void PlayerController_Awake_m49 (PlayerController_t20 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void PlayerController::Start()
extern "C" void PlayerController_Start_m50 (PlayerController_t20 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void PlayerController::Update()
extern TypeInfo* Input_t38_il2cpp_TypeInfo_var;
extern "C" void PlayerController_Update_m51 (PlayerController_t20 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t38_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m147(NULL /*static, unused*/, ((int32_t)127), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		GameObject_t1 * L_1 = Component_get_gameObject_m67(__this, /*hidden argument*/NULL);
		Object_Destroy_m70(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_0017:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t38_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKey_m147(NULL /*static, unused*/, ((int32_t)273), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		Transform_t13 * L_3 = Component_get_transform_m56(__this, /*hidden argument*/NULL);
		Vector3_t4  L_4 = Vector3_get_forward_m148(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_5 = (__this->___moveSpeed_2);
		Vector3_t4  L_6 = Vector3_op_Multiply_m149(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		float L_7 = Time_get_deltaTime_m150(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4  L_8 = Vector3_op_Multiply_m149(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_Translate_m151(L_3, L_8, /*hidden argument*/NULL);
	}

IL_004b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t38_il2cpp_TypeInfo_var);
		bool L_9 = Input_GetKey_m147(NULL /*static, unused*/, ((int32_t)274), /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0084;
		}
	}
	{
		Transform_t13 * L_10 = Component_get_transform_m56(__this, /*hidden argument*/NULL);
		Vector3_t4  L_11 = Vector3_get_forward_m148(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4  L_12 = Vector3_op_UnaryNegation_m152(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		float L_13 = (__this->___moveSpeed_2);
		Vector3_t4  L_14 = Vector3_op_Multiply_m149(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		float L_15 = Time_get_deltaTime_m150(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4  L_16 = Vector3_op_Multiply_m149(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_Translate_m151(L_10, L_16, /*hidden argument*/NULL);
	}

IL_0084:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t38_il2cpp_TypeInfo_var);
		bool L_17 = Input_GetKey_m147(NULL /*static, unused*/, ((int32_t)276), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00b0;
		}
	}
	{
		Transform_t13 * L_18 = Component_get_transform_m56(__this, /*hidden argument*/NULL);
		Vector3_t4  L_19 = Vector3_get_up_m153(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_20 = (__this->___turnSpeed_3);
		float L_21 = Time_get_deltaTime_m150(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_Rotate_m154(L_18, L_19, ((float)((float)((-L_20))*(float)L_21)), /*hidden argument*/NULL);
	}

IL_00b0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t38_il2cpp_TypeInfo_var);
		bool L_22 = Input_GetKey_m147(NULL /*static, unused*/, ((int32_t)275), /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00db;
		}
	}
	{
		Transform_t13 * L_23 = Component_get_transform_m56(__this, /*hidden argument*/NULL);
		Vector3_t4  L_24 = Vector3_get_up_m153(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_25 = (__this->___turnSpeed_3);
		float L_26 = Time_get_deltaTime_m150(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_Rotate_m154(L_23, L_24, ((float)((float)L_25*(float)L_26)), /*hidden argument*/NULL);
	}

IL_00db:
	{
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
extern TypeInfo* Input_t38_il2cpp_TypeInfo_var;
extern "C" void PlayerController_FixedUpdate_m52 (PlayerController_t20 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t38_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m147(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		PlayerController_Jump_m53(__this, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void PlayerController::Jump()
extern "C" void PlayerController_Jump_m53 (PlayerController_t20 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void PlayerController::OnCollisionEnter(UnityEngine.Collision)
extern TypeInfo* Boolean_t47_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRenderer_t24_m61_MethodInfo_var;
extern "C" void PlayerController_OnCollisionEnter_m54 (PlayerController_t20 * __this, Collision_t23 * ___col, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t47_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Component_GetComponent_TisRenderer_t24_m61_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483650);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collision_t23 * L_0 = ___col;
		NullCheck(L_0);
		Collider_t44 * L_1 = Collision_get_collider_m155(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Collider_set_enabled_m156(L_1, 0, /*hidden argument*/NULL);
		Renderer_t24 * L_2 = Component_GetComponent_TisRenderer_t24_m61(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t24_m61_MethodInfo_var);
		NullCheck(L_2);
		Renderer_set_enabled_m157(L_2, 0, /*hidden argument*/NULL);
		Collision_t23 * L_3 = ___col;
		NullCheck(L_3);
		ContactPointU5BU5D_t45* L_4 = Collision_get_contacts_m158(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		Collider_t44 * L_5 = ContactPoint_get_otherCollider_m159(((ContactPoint_t46 *)(ContactPoint_t46 *)SZArrayLdElema(L_4, 0)), /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_t1 * L_6 = Component_get_gameObject_m67(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_m160(L_6, 0, /*hidden argument*/NULL);
		Collision_t23 * L_7 = ___col;
		NullCheck(L_7);
		ContactPointU5BU5D_t45* L_8 = Collision_get_contacts_m158(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		Collider_t44 * L_9 = ContactPoint_get_otherCollider_m159(((ContactPoint_t46 *)(ContactPoint_t46 *)SZArrayLdElema(L_8, 0)), /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_t1 * L_10 = Component_get_gameObject_m67(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		bool L_11 = GameObject_get_activeSelf_m161(L_10, /*hidden argument*/NULL);
		bool L_12 = L_11;
		Object_t * L_13 = Box(Boolean_t47_il2cpp_TypeInfo_var, &L_12);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m162(NULL /*static, unused*/, (String_t*) &_stringLiteral30, L_13, /*hidden argument*/NULL);
		Debug_Log_m127(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		Collision_t23 * L_15 = ___col;
		NullCheck(L_15);
		ContactPointU5BU5D_t45* L_16 = Collision_get_contacts_m158(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 0);
		Collider_t44 * L_17 = ContactPoint_get_otherCollider_m159(((ContactPoint_t46 *)(ContactPoint_t46 *)SZArrayLdElema(L_16, 0)), /*hidden argument*/NULL);
		NullCheck(L_17);
		GameObject_t1 * L_18 = Component_get_gameObject_m67(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_t13 * L_19 = GameObject_get_transform_m59(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_t13 * L_20 = Transform_FindChild_m163(L_19, (String_t*) &_stringLiteral32, /*hidden argument*/NULL);
		NullCheck(L_20);
		GameObject_t1 * L_21 = Component_get_gameObject_m67(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		bool L_22 = GameObject_get_activeSelf_m161(L_21, /*hidden argument*/NULL);
		bool L_23 = L_22;
		Object_t * L_24 = Box(Boolean_t47_il2cpp_TypeInfo_var, &L_23);
		String_t* L_25 = String_Concat_m162(NULL /*static, unused*/, (String_t*) &_stringLiteral31, L_24, /*hidden argument*/NULL);
		Debug_Log_m127(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		Collision_t23 * L_26 = ___col;
		NullCheck(L_26);
		ContactPointU5BU5D_t45* L_27 = Collision_get_contacts_m158(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 0);
		Collider_t44 * L_28 = ContactPoint_get_otherCollider_m159(((ContactPoint_t46 *)(ContactPoint_t46 *)SZArrayLdElema(L_27, 0)), /*hidden argument*/NULL);
		NullCheck(L_28);
		GameObject_t1 * L_29 = Component_get_gameObject_m67(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_t13 * L_30 = GameObject_get_transform_m59(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_t13 * L_31 = Transform_FindChild_m163(L_30, (String_t*) &_stringLiteral32, /*hidden argument*/NULL);
		NullCheck(L_31);
		GameObject_t1 * L_32 = Component_get_gameObject_m67(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		bool L_33 = GameObject_get_activeInHierarchy_m164(L_32, /*hidden argument*/NULL);
		bool L_34 = L_33;
		Object_t * L_35 = Box(Boolean_t47_il2cpp_TypeInfo_var, &L_34);
		String_t* L_36 = String_Concat_m162(NULL /*static, unused*/, (String_t*) &_stringLiteral33, L_35, /*hidden argument*/NULL);
		Debug_Log_m127(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
