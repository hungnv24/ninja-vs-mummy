#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToA.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToAMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribu.h"
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribuMethodDeclarations.h"
extern TypeInfo* InternalsVisibleToAttribute_t415_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t48_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t416_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t415_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(275);
		RuntimeCompatibilityAttribute_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		ExtensionAttribute_t416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(276);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t415 * tmp;
		tmp = (InternalsVisibleToAttribute_t415 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t415_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1500(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t415 * tmp;
		tmp = (InternalsVisibleToAttribute_t415 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t415_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1500(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t415 * tmp;
		tmp = (InternalsVisibleToAttribute_t415 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t415_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1500(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t415 * tmp;
		tmp = (InternalsVisibleToAttribute_t415 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t415_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1500(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t415 * tmp;
		tmp = (InternalsVisibleToAttribute_t415 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t415_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1500(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t415 * tmp;
		tmp = (InternalsVisibleToAttribute_t415 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t415_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1500(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t415 * tmp;
		tmp = (InternalsVisibleToAttribute_t415 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t415_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1500(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t415 * tmp;
		tmp = (InternalsVisibleToAttribute_t415 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t415_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1500(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t415 * tmp;
		tmp = (InternalsVisibleToAttribute_t415 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t415_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1500(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t48 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t48 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t48_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m165(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m166(tmp, true, NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		ExtensionAttribute_t416 * tmp;
		tmp = (ExtensionAttribute_t416 *)il2cpp_codegen_object_new (ExtensionAttribute_t416_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m1501(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t415 * tmp;
		tmp = (InternalsVisibleToAttribute_t415 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t415_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1500(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t415 * tmp;
		tmp = (InternalsVisibleToAttribute_t415 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t415_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1500(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t415 * tmp;
		tmp = (InternalsVisibleToAttribute_t415 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t415_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1500(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t415 * tmp;
		tmp = (InternalsVisibleToAttribute_t415 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t415_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1500(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t415 * tmp;
		tmp = (InternalsVisibleToAttribute_t415 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t415_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1500(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t52_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m172(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t52_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m173(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t307_il2cpp_TypeInfo_var;
void AssetBundle_t54_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m177(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t307 * tmp;
		tmp = (TypeInferenceRuleAttribute_t307 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t307_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1333(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t307_il2cpp_TypeInfo_var;
void AssetBundle_t54_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m178(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		TypeInferenceRuleAttribute_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t307 * tmp;
		tmp = (TypeInferenceRuleAttribute_t307 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t307_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1333(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void AssetBundle_t54_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m179(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void LayerMask_t15_CustomAttributesCacheGenerator_LayerMask_LayerToName_m182(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void LayerMask_t15_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m183(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t417_il2cpp_TypeInfo_var;
void LayerMask_t15_CustomAttributesCacheGenerator_LayerMask_t15_LayerMask_GetMask_m184_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t417 * tmp;
		tmp = (ParamArrayAttribute_t417 *)il2cpp_codegen_object_new (ParamArrayAttribute_t417_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1502(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void SystemInfo_t59_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m186(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Coroutine_t64_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m191(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void ScriptableObject_t65_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m194(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t258_il2cpp_TypeInfo_var;
void ScriptableObject_t65_CustomAttributesCacheGenerator_ScriptableObject_t65_ScriptableObject_Internal_CreateScriptableObject_m194_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(280);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t258 * tmp;
		tmp = (WritableAttribute_t258 *)il2cpp_codegen_object_new (WritableAttribute_t258_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m1200(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void ScriptableObject_t65_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m195(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void ScriptableObject_t65_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m197(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m202(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m203(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m204(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m205(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m206(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m207(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m208(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m209(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m210(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m211(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m212(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m213(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m214(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m215(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m216(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m217(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m218(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m222(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GcLeaderboard_t77_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m266(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GcLeaderboard_t77_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m267(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GcLeaderboard_t77_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m268(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GcLeaderboard_t77_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m269(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Renderer_t24_CustomAttributesCacheGenerator_Renderer_set_enabled_m157(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Renderer_t24_CustomAttributesCacheGenerator_Renderer_get_bounds_m73(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Screen_t79_CustomAttributesCacheGenerator_Screen_get_width_m290(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Screen_t79_CustomAttributesCacheGenerator_Screen_get_height_m291(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Texture2D_t81_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m294(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t258_il2cpp_TypeInfo_var;
void Texture2D_t81_CustomAttributesCacheGenerator_Texture2D_t81_Texture2D_Internal_Create_m294_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(280);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t258 * tmp;
		tmp = (WritableAttribute_t258 *)il2cpp_codegen_object_new (WritableAttribute_t258_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m1200(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GUILayer_t86_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m296(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Gradient_t90_CustomAttributesCacheGenerator_Gradient_Init_m300(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Gradient_t90_CustomAttributesCacheGenerator_Gradient_Cleanup_m301(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void GUI_t99_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void GUI_t99_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void GUI_t99_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m309(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GUI_t99_CustomAttributesCacheGenerator_GUI_set_changed_m312(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GUILayoutUtility_t106_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m325(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GUILayoutUtility_t106_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m327(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GUIUtility_t114_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m359(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GUIUtility_t114_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m361(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GUIUtility_t114_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m365(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUISettings_t115_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUISettings_t115_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUISettings_t115_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUISettings_t115_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUISettings_t115_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t256_il2cpp_TypeInfo_var;
void GUISkin_t97_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t256_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(248);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t256 * tmp;
		tmp = (ExecuteInEditMode_t256 *)il2cpp_codegen_object_new (ExecuteInEditMode_t256_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m1196(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUISkin_t97_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUISkin_t97_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUISkin_t97_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUISkin_t97_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUISkin_t97_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUISkin_t97_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUISkin_t97_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUISkin_t97_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUISkin_t97_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUISkin_t97_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUISkin_t97_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUISkin_t97_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUISkin_t97_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUISkin_t97_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUISkin_t97_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUISkin_t97_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUISkin_t97_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUISkin_t97_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUISkin_t97_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUISkin_t97_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUISkin_t97_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUISkin_t97_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUISkin_t97_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUIContent_t120_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUIContent_t120_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void GUIContent_t120_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GUIStyleState_t121_CustomAttributesCacheGenerator_GUIStyleState_Init_m432(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GUIStyleState_t121_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m433(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GUIStyleState_t121_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m434(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GUIStyleState_t121_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m435(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void RectOffset_t109_CustomAttributesCacheGenerator_RectOffset_Init_m441(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void RectOffset_t109_CustomAttributesCacheGenerator_RectOffset_Cleanup_m442(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void RectOffset_t109_CustomAttributesCacheGenerator_RectOffset_get_left_m443(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void RectOffset_t109_CustomAttributesCacheGenerator_RectOffset_set_left_m444(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void RectOffset_t109_CustomAttributesCacheGenerator_RectOffset_get_right_m445(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void RectOffset_t109_CustomAttributesCacheGenerator_RectOffset_set_right_m446(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void RectOffset_t109_CustomAttributesCacheGenerator_RectOffset_get_top_m447(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void RectOffset_t109_CustomAttributesCacheGenerator_RectOffset_set_top_m448(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void RectOffset_t109_CustomAttributesCacheGenerator_RectOffset_get_bottom_m449(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void RectOffset_t109_CustomAttributesCacheGenerator_RectOffset_set_bottom_m450(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void RectOffset_t109_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m451(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void RectOffset_t109_CustomAttributesCacheGenerator_RectOffset_get_vertical_m452(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GUIStyle_t105_CustomAttributesCacheGenerator_GUIStyle_Init_m457(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GUIStyle_t105_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m458(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GUIStyle_t105_CustomAttributesCacheGenerator_GUIStyle_get_name_m459(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GUIStyle_t105_CustomAttributesCacheGenerator_GUIStyle_set_name_m460(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GUIStyle_t105_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m462(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GUIStyle_t105_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m465(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GUIStyle_t105_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m466(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GUIStyle_t105_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m467(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GUIStyle_t105_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m468(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GUIStyle_t105_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m469(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GUIStyle_t105_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m470(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GUIStyle_t105_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m471(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GUIStyle_t105_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m472(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t123_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m475(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Event_t124_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Event_t124_CustomAttributesCacheGenerator_Event_Init_m478(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Event_t124_CustomAttributesCacheGenerator_Event_Cleanup_m480(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Event_t124_CustomAttributesCacheGenerator_Event_get_type_m481(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Event_t124_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m483(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Event_t124_CustomAttributesCacheGenerator_Event_get_modifiers_m484(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Event_t124_CustomAttributesCacheGenerator_Event_get_character_m485(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Event_t124_CustomAttributesCacheGenerator_Event_get_commandName_m486(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Event_t124_CustomAttributesCacheGenerator_Event_get_keyCode_m487(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Event_t124_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m489(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t419_il2cpp_TypeInfo_var;
void EventModifiers_t128_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t419_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t419 * tmp;
		tmp = (FlagsAttribute_t419 *)il2cpp_codegen_object_new (FlagsAttribute_t419_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m1505(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t420_il2cpp_TypeInfo_var;
void Vector2_t18_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t420 * tmp;
		tmp = (DefaultMemberAttribute_t420 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t420_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1506(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t420_il2cpp_TypeInfo_var;
void Vector3_t4_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t420 * tmp;
		tmp = (DefaultMemberAttribute_t420 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t420_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1506(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t420_il2cpp_TypeInfo_var;
void Color_t88_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t420 * tmp;
		tmp = (DefaultMemberAttribute_t420 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t420_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1506(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"
extern TypeInfo* IL2CPPStructAlignmentAttribute_t248_il2cpp_TypeInfo_var;
void Color32_t129_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t248 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t248 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t248_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m1190(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t420_il2cpp_TypeInfo_var;
void Quaternion_t39_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t420 * tmp;
		tmp = (DefaultMemberAttribute_t420 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t420_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1506(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t420_il2cpp_TypeInfo_var;
void Matrix4x4_t130_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t420 * tmp;
		tmp = (DefaultMemberAttribute_t420 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t420_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1506(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Matrix4x4_t130_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m556(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Matrix4x4_t130_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m558(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Matrix4x4_t130_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m560(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Matrix4x4_t130_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m563(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Matrix4x4_t130_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m576(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Matrix4x4_t130_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m579(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Matrix4x4_t130_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m580(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Bounds_t27_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m603(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Bounds_t27_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m606(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Bounds_t27_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m609(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Bounds_t27_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m613(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t420_il2cpp_TypeInfo_var;
void Vector4_t131_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t420 * tmp;
		tmp = (DefaultMemberAttribute_t420 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t420_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1506(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t307_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Resources_t137_CustomAttributesCacheGenerator_Resources_Load_m65(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t307 * tmp;
		tmp = (TypeInferenceRuleAttribute_t307 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t307_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1333(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t421_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t138_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t421 * tmp;
		tmp = (ObsoleteAttribute_t421 *)il2cpp_codegen_object_new (ObsoleteAttribute_t421_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1507(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t420_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t141_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t420 * tmp;
		tmp = (DefaultMemberAttribute_t420 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t420_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1506(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t141_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m653(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t141_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m656(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t141_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m659(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void WWW_t142_CustomAttributesCacheGenerator_WWW_DestroyWWW_m672(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void WWW_t142_CustomAttributesCacheGenerator_WWW_InitWWW_m673(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void WWW_t142_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m675(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void WWW_t142_CustomAttributesCacheGenerator_WWW_get_bytes_m679(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void WWW_t142_CustomAttributesCacheGenerator_WWW_get_error_m680(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void WWW_t142_CustomAttributesCacheGenerator_WWW_get_isDone_m681(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t304_il2cpp_TypeInfo_var;
void WWWForm_t146_CustomAttributesCacheGenerator_WWWForm_AddField_m685(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t304_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(287);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t304 * tmp;
		tmp = (ExcludeFromDocsAttribute_t304 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t304_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t303_il2cpp_TypeInfo_var;
void WWWForm_t146_CustomAttributesCacheGenerator_WWWForm_t146_WWWForm_AddField_m686_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t303 * tmp;
		tmp = (DefaultValueAttribute_t303 *)il2cpp_codegen_object_new (DefaultValueAttribute_t303_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1327(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t303_il2cpp_TypeInfo_var;
void WWWTranscoder_t147_CustomAttributesCacheGenerator_WWWTranscoder_t147_WWWTranscoder_QPEncode_m693_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t303 * tmp;
		tmp = (DefaultValueAttribute_t303 *)il2cpp_codegen_object_new (DefaultValueAttribute_t303_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1327(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t303_il2cpp_TypeInfo_var;
void WWWTranscoder_t147_CustomAttributesCacheGenerator_WWWTranscoder_t147_WWWTranscoder_SevenBitClean_m696_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t303 * tmp;
		tmp = (DefaultValueAttribute_t303 *)il2cpp_codegen_object_new (DefaultValueAttribute_t303_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1327(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t421_il2cpp_TypeInfo_var;
void CacheIndex_t148_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t421 * tmp;
		tmp = (ObsoleteAttribute_t421 *)il2cpp_codegen_object_new (ObsoleteAttribute_t421_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1507(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t417_il2cpp_TypeInfo_var;
void UnityString_t149_CustomAttributesCacheGenerator_UnityString_t149_UnityString_Format_m698_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t417 * tmp;
		tmp = (ParamArrayAttribute_t417 *)il2cpp_codegen_object_new (ParamArrayAttribute_t417_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1502(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void AsyncOperation_t53_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m700(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Behaviour_t84_CustomAttributesCacheGenerator_Behaviour_get_enabled_m117(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Behaviour_t84_CustomAttributesCacheGenerator_Behaviour_set_enabled_m100(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Camera_t43_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m712(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Camera_t43_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m713(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Camera_t43_CustomAttributesCacheGenerator_Camera_get_orthographicSize_m137(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Camera_t43_CustomAttributesCacheGenerator_Camera_get_aspect_m138(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Camera_t43_CustomAttributesCacheGenerator_Camera_get_cullingMask_m714(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Camera_t43_CustomAttributesCacheGenerator_Camera_get_eventMask_m715(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Camera_t43_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m716(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Camera_t43_CustomAttributesCacheGenerator_Camera_get_targetTexture_m718(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Camera_t43_CustomAttributesCacheGenerator_Camera_get_clearFlags_m719(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Camera_t43_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m721(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Camera_t43_CustomAttributesCacheGenerator_Camera_get_main_m136(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Camera_t43_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m722(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Camera_t43_CustomAttributesCacheGenerator_Camera_GetAllCameras_m723(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Camera_t43_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m728(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Camera_t43_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m730(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t423_il2cpp_TypeInfo_var;
void CameraCallback_t152_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t423_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t423 * tmp;
		tmp = (EditorBrowsableAttribute_t423 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t423_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1510(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Debug_t153_CustomAttributesCacheGenerator_Debug_Internal_Log_m731(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t258_il2cpp_TypeInfo_var;
void Debug_t153_CustomAttributesCacheGenerator_Debug_t153_Debug_Internal_Log_m731_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(280);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t258 * tmp;
		tmp = (WritableAttribute_t258 *)il2cpp_codegen_object_new (WritableAttribute_t258_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m1200(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Display_t156_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m757(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Display_t156_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m758(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Display_t156_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m759(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Display_t156_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m760(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Display_t156_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m761(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Display_t156_CustomAttributesCacheGenerator_Display_SetParamsImpl_m762(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Display_t156_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m763(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Display_t156_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m764(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void MonoBehaviour_t3_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m95(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void MonoBehaviour_t3_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m766(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Input_t38_CustomAttributesCacheGenerator_Input_GetKeyInt_m768(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Input_t38_CustomAttributesCacheGenerator_Input_GetKeyDownInt_m769(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Input_t38_CustomAttributesCacheGenerator_Input_GetMouseButton_m140(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Input_t38_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m770(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Input_t38_CustomAttributesCacheGenerator_Input_get_mousePosition_m771(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Input_t38_CustomAttributesCacheGenerator_Input_GetTouch_m129(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Input_t38_CustomAttributesCacheGenerator_Input_get_touchCount_m128(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Object_t26_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m773(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Object_t26_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m775(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Object_t26_CustomAttributesCacheGenerator_Object_Destroy_m94(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t303_il2cpp_TypeInfo_var;
void Object_t26_CustomAttributesCacheGenerator_Object_t26_Object_Destroy_m94_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t303 * tmp;
		tmp = (DefaultValueAttribute_t303 *)il2cpp_codegen_object_new (DefaultValueAttribute_t303_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1327(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t304_il2cpp_TypeInfo_var;
void Object_t26_CustomAttributesCacheGenerator_Object_Destroy_m70(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t304_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(287);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t304 * tmp;
		tmp = (ExcludeFromDocsAttribute_t304 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t304_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Object_t26_CustomAttributesCacheGenerator_Object_get_name_m776(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Object_t26_CustomAttributesCacheGenerator_Object_ToString_m170(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t307_il2cpp_TypeInfo_var;
void Object_t26_CustomAttributesCacheGenerator_Object_Instantiate_m122(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t307 * tmp;
		tmp = (TypeInferenceRuleAttribute_t307 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t307_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1333(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t307_il2cpp_TypeInfo_var;
void Object_t26_CustomAttributesCacheGenerator_Object_Instantiate_m66(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t307 * tmp;
		tmp = (TypeInferenceRuleAttribute_t307 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t307_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1333(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Component_t25_CustomAttributesCacheGenerator_Component_get_transform_m56(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Component_t25_CustomAttributesCacheGenerator_Component_get_gameObject_m67(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Component_t25_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m783(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t424_il2cpp_TypeInfo_var;
void Component_t25_CustomAttributesCacheGenerator_Component_GetComponent_m1511(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t424_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t424 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t424 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t424_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1512(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GameObject_t1_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m784(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t424_il2cpp_TypeInfo_var;
void GameObject_t1_CustomAttributesCacheGenerator_GameObject_GetComponent_m1514(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t424_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t424 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t424 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t424_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1512(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GameObject_t1_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m785(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GameObject_t1_CustomAttributesCacheGenerator_GameObject_get_transform_m59(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GameObject_t1_CustomAttributesCacheGenerator_GameObject_SetActive_m160(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GameObject_t1_CustomAttributesCacheGenerator_GameObject_get_activeSelf_m161(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GameObject_t1_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m164(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GameObject_t1_CustomAttributesCacheGenerator_GameObject_get_tag_m68(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GameObject_t1_CustomAttributesCacheGenerator_GameObject_SendMessage_m786(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t303_il2cpp_TypeInfo_var;
void GameObject_t1_CustomAttributesCacheGenerator_GameObject_t1_GameObject_SendMessage_m786_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t303 * tmp;
		tmp = (DefaultValueAttribute_t303 *)il2cpp_codegen_object_new (DefaultValueAttribute_t303_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1327(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t303_il2cpp_TypeInfo_var;
void GameObject_t1_CustomAttributesCacheGenerator_GameObject_t1_GameObject_SendMessage_m786_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t303 * tmp;
		tmp = (DefaultValueAttribute_t303 *)il2cpp_codegen_object_new (DefaultValueAttribute_t303_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1327(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void GameObject_t1_CustomAttributesCacheGenerator_GameObject_Find_m101(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Transform_t13_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m790(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Transform_t13_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m791(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t304_il2cpp_TypeInfo_var;
void Transform_t13_CustomAttributesCacheGenerator_Transform_Translate_m151(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t304_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(287);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t304 * tmp;
		tmp = (ExcludeFromDocsAttribute_t304 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t304_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t303_il2cpp_TypeInfo_var;
void Transform_t13_CustomAttributesCacheGenerator_Transform_t13_Transform_Translate_m792_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t303 * tmp;
		tmp = (DefaultValueAttribute_t303 *)il2cpp_codegen_object_new (DefaultValueAttribute_t303_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1327(tmp, il2cpp_codegen_string_new_wrapper("Space.Self"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Transform_t13_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_RotateAroundInternal_m794(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t304_il2cpp_TypeInfo_var;
void Transform_t13_CustomAttributesCacheGenerator_Transform_Rotate_m154(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t304_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(287);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t304 * tmp;
		tmp = (ExcludeFromDocsAttribute_t304 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t304_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t303_il2cpp_TypeInfo_var;
void Transform_t13_CustomAttributesCacheGenerator_Transform_t13_Transform_Rotate_m795_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t303 * tmp;
		tmp = (DefaultValueAttribute_t303 *)il2cpp_codegen_object_new (DefaultValueAttribute_t303_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1327(tmp, il2cpp_codegen_string_new_wrapper("Space.Self"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Transform_t13_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformDirection_m797(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Transform_t13_CustomAttributesCacheGenerator_Transform_get_childCount_m798(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Transform_t13_CustomAttributesCacheGenerator_Transform_Find_m71(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Transform_t13_CustomAttributesCacheGenerator_Transform_GetChild_m800(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Time_t159_CustomAttributesCacheGenerator_Time_get_deltaTime_m150(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Time_t159_CustomAttributesCacheGenerator_Time_get_fixedDeltaTime_m146(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Time_t159_CustomAttributesCacheGenerator_Time_set_timeScale_m139(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Random_t160_CustomAttributesCacheGenerator_Random_RandomRangeInt_m801(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void PlayerPrefs_t161_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m803(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t303_il2cpp_TypeInfo_var;
void PlayerPrefs_t161_CustomAttributesCacheGenerator_PlayerPrefs_t161_PlayerPrefs_GetString_m803_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t303 * tmp;
		tmp = (DefaultValueAttribute_t303 *)il2cpp_codegen_object_new (DefaultValueAttribute_t303_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1327(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t304_il2cpp_TypeInfo_var;
void PlayerPrefs_t161_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m804(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t304_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(287);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t304 * tmp;
		tmp = (ExcludeFromDocsAttribute_t304 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t304_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Collider_t44_CustomAttributesCacheGenerator_Collider_set_enabled_m156(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void ContactPoint_t46_CustomAttributesCacheGenerator_ContactPoint_ColliderFromInstanceId_m821(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Physics2D_t36_CustomAttributesCacheGenerator_Physics2D_INTERNAL_get_gravity_m823(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t304_il2cpp_TypeInfo_var;
void Physics2D_t36_CustomAttributesCacheGenerator_Physics2D_OverlapCircle_m111(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t304_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(287);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t304 * tmp;
		tmp = (ExcludeFromDocsAttribute_t304 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t304_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Physics2D_t36_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapCircle_m824(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Rigidbody2D_t8_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_get_velocity_m825(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Rigidbody2D_t8_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_set_velocity_m826(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Rigidbody2D_t8_CustomAttributesCacheGenerator_Rigidbody2D_get_mass_m108(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Rigidbody2D_t8_CustomAttributesCacheGenerator_Rigidbody2D_get_gravityScale_m107(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t304_il2cpp_TypeInfo_var;
void Rigidbody2D_t8_CustomAttributesCacheGenerator_Rigidbody2D_AddForce_m119(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t304_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(287);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t304 * tmp;
		tmp = (ExcludeFromDocsAttribute_t304 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t304_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Rigidbody2D_t8_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_CALL_AddForce_m827(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Collider2D_t21_CustomAttributesCacheGenerator_Collider2D_INTERNAL_get_bounds_m828(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void CircleCollider2D_t31_CustomAttributesCacheGenerator_CircleCollider2D_get_radius_m125(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void BoxCollider2D_t34_CustomAttributesCacheGenerator_BoxCollider2D_INTERNAL_get_size_m829(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void AudioSource_t9_CustomAttributesCacheGenerator_AudioSource_set_volume_m115(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void AudioSource_t9_CustomAttributesCacheGenerator_AudioSource_set_pitch_m114(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void AudioSource_t9_CustomAttributesCacheGenerator_AudioSource_get_clip_m113(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void AudioSource_t9_CustomAttributesCacheGenerator_AudioSource_set_clip_m97(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void AudioSource_t9_CustomAttributesCacheGenerator_AudioSource_Play_m845(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t303_il2cpp_TypeInfo_var;
void AudioSource_t9_CustomAttributesCacheGenerator_AudioSource_t9_AudioSource_Play_m845_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t303 * tmp;
		tmp = (DefaultValueAttribute_t303 *)il2cpp_codegen_object_new (DefaultValueAttribute_t303_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1327(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t304_il2cpp_TypeInfo_var;
void AudioSource_t9_CustomAttributesCacheGenerator_AudioSource_Play_m116(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t304_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(287);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t304 * tmp;
		tmp = (ExcludeFromDocsAttribute_t304 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t304_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void AudioSource_t9_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m99(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void AudioSource_t9_CustomAttributesCacheGenerator_AudioSource_Stop_m133(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void AudioSource_t9_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m112(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void AudioSource_t9_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m846(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t303_il2cpp_TypeInfo_var;
void AudioSource_t9_CustomAttributesCacheGenerator_AudioSource_t9_AudioSource_PlayOneShot_m846_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t303 * tmp;
		tmp = (DefaultValueAttribute_t303 *)il2cpp_codegen_object_new (DefaultValueAttribute_t303_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1327(tmp, il2cpp_codegen_string_new_wrapper("1.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t304_il2cpp_TypeInfo_var;
void AudioSource_t9_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m96(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t304_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(287);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t304 * tmp;
		tmp = (ExcludeFromDocsAttribute_t304 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t304_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1331(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void AudioSource_t9_CustomAttributesCacheGenerator_AudioSource_set_loop_m98(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t421_il2cpp_TypeInfo_var;
void AnimationEvent_t174_CustomAttributesCacheGenerator_AnimationEvent_t174____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t421 * tmp;
		tmp = (ObsoleteAttribute_t421 *)il2cpp_codegen_object_new (ObsoleteAttribute_t421_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1507(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t420_il2cpp_TypeInfo_var;
void AnimationCurve_t177_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t420 * tmp;
		tmp = (DefaultMemberAttribute_t420 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t420_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1506(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t417_il2cpp_TypeInfo_var;
void AnimationCurve_t177_CustomAttributesCacheGenerator_AnimationCurve_t177_AnimationCurve__ctor_m872_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t417 * tmp;
		tmp = (ParamArrayAttribute_t417 *)il2cpp_codegen_object_new (ParamArrayAttribute_t417_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1502(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void AnimationCurve_t177_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m874(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void AnimationCurve_t177_CustomAttributesCacheGenerator_AnimationCurve_Init_m876(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t421_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t30_CustomAttributesCacheGenerator_AnimatorStateInfo_t30____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t421 * tmp;
		tmp = (ObsoleteAttribute_t421 *)il2cpp_codegen_object_new (ObsoleteAttribute_t421_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1507(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Animator_t7_CustomAttributesCacheGenerator_Animator_GetCurrentAnimatorStateInfo_m87(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Animator_t7_CustomAttributesCacheGenerator_Animator_StringToHash_m105(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Animator_t7_CustomAttributesCacheGenerator_Animator_SetTriggerString_m893(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t421_il2cpp_TypeInfo_var;
void CharacterInfo_t186_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t421 * tmp;
		tmp = (ObsoleteAttribute_t421 *)il2cpp_codegen_object_new (ObsoleteAttribute_t421_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1507(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t421_il2cpp_TypeInfo_var;
void CharacterInfo_t186_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t421 * tmp;
		tmp = (ObsoleteAttribute_t421 *)il2cpp_codegen_object_new (ObsoleteAttribute_t421_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1507(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t421_il2cpp_TypeInfo_var;
void CharacterInfo_t186_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t421 * tmp;
		tmp = (ObsoleteAttribute_t421 *)il2cpp_codegen_object_new (ObsoleteAttribute_t421_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1507(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t421_il2cpp_TypeInfo_var;
void CharacterInfo_t186_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t421 * tmp;
		tmp = (ObsoleteAttribute_t421 *)il2cpp_codegen_object_new (ObsoleteAttribute_t421_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1507(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void Font_t117_CustomAttributesCacheGenerator_Font_get_dynamic_m919(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t423_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t187_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t423_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t423 * tmp;
		tmp = (EditorBrowsableAttribute_t423 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t423_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1510(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void TextGenerator_t194_CustomAttributesCacheGenerator_TextGenerator_Init_m923(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void TextGenerator_t194_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m924(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void TextGenerator_t194_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m927(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void TextGenerator_t194_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m928(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void TextGenerator_t194_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m929(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void TextGenerator_t194_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m930(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void TextGenerator_t194_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m931(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void TextGenerator_t194_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m932(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void TextGenerator_t194_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m934(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void TextGenerator_t194_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m935(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void TextGenerator_t194_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m936(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void TextGenerator_t194_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m937(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void TextGenerator_t194_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m938(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t247_il2cpp_TypeInfo_var;
void TextGenerator_t194_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m939(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t247 * tmp;
		tmp = (WrapperlessIcall_t247 *)il2cpp_codegen_object_new (WrapperlessIcall_t247_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1189(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Request_t199_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Request_t199_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Request_t199_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Request_t199_CustomAttributesCacheGenerator_Request_get_sourceId_m960(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Request_t199_CustomAttributesCacheGenerator_Request_get_appId_m961(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Request_t199_CustomAttributesCacheGenerator_Request_get_domain_m962(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Response_t201_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Response_t201_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Response_t201_CustomAttributesCacheGenerator_Response_get_success_m971(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Response_t201_CustomAttributesCacheGenerator_Response_set_success_m972(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Response_t201_CustomAttributesCacheGenerator_Response_get_extendedInfo_m973(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Response_t201_CustomAttributesCacheGenerator_Response_set_extendedInfo_m974(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchRequest_t204_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchRequest_t204_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchRequest_t204_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchRequest_t204_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchRequest_t204_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchRequest_t204_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m979(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchRequest_t204_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m980(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchRequest_t204_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m981(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchRequest_t204_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m982(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchRequest_t204_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m983(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchRequest_t204_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m984(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchRequest_t204_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m985(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchRequest_t204_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m986(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchRequest_t204_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m987(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchResponse_t205_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchResponse_t205_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchResponse_t205_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchResponse_t205_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchResponse_t205_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchResponse_t205_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchResponse_t205_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m990(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchResponse_t205_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m991(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchResponse_t205_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m992(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchResponse_t205_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m993(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchResponse_t205_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m994(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchResponse_t205_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m995(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchResponse_t205_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m996(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchResponse_t205_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m997(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchResponse_t205_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m998(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchResponse_t205_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m999(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchResponse_t205_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m1000(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void CreateMatchResponse_t205_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m1001(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void JoinMatchRequest_t206_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void JoinMatchRequest_t206_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void JoinMatchRequest_t206_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m1005(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void JoinMatchRequest_t206_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m1006(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void JoinMatchRequest_t206_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m1007(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void JoinMatchRequest_t206_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m1008(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void JoinMatchResponse_t207_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void JoinMatchResponse_t207_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void JoinMatchResponse_t207_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void JoinMatchResponse_t207_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void JoinMatchResponse_t207_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void JoinMatchResponse_t207_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void JoinMatchResponse_t207_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m1011(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void JoinMatchResponse_t207_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m1012(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void JoinMatchResponse_t207_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m1013(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void JoinMatchResponse_t207_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m1014(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void JoinMatchResponse_t207_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m1015(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void JoinMatchResponse_t207_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m1016(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void JoinMatchResponse_t207_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m1017(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void JoinMatchResponse_t207_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m1018(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void JoinMatchResponse_t207_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m1019(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void JoinMatchResponse_t207_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m1020(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void JoinMatchResponse_t207_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m1021(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void JoinMatchResponse_t207_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m1022(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t208_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t208_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m1026(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t208_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m1027(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void DropConnectionRequest_t209_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void DropConnectionRequest_t209_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void DropConnectionRequest_t209_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m1030(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void DropConnectionRequest_t209_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m1031(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void DropConnectionRequest_t209_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m1032(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void DropConnectionRequest_t209_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m1033(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void ListMatchRequest_t210_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void ListMatchRequest_t210_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void ListMatchRequest_t210_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void ListMatchRequest_t210_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void ListMatchRequest_t210_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void ListMatchRequest_t210_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m1036(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void ListMatchRequest_t210_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m1037(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void ListMatchRequest_t210_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m1038(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void ListMatchRequest_t210_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m1039(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void ListMatchRequest_t210_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m1040(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void ListMatchRequest_t210_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m1041(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void ListMatchRequest_t210_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m1042(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void ListMatchRequest_t210_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m1043(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t211_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t211_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t211_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t211_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m1046(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t211_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m1047(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t211_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m1048(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t211_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m1049(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t211_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m1050(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t211_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m1051(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDesc_t213_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDesc_t213_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDesc_t213_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDesc_t213_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDesc_t213_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDesc_t213_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDesc_t213_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDesc_t213_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDesc_t213_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDesc_t213_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m1055(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDesc_t213_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m1056(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDesc_t213_CustomAttributesCacheGenerator_MatchDesc_get_name_m1057(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDesc_t213_CustomAttributesCacheGenerator_MatchDesc_set_name_m1058(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDesc_t213_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m1059(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDesc_t213_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m1060(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDesc_t213_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m1061(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDesc_t213_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m1062(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDesc_t213_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m1063(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDesc_t213_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m1064(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDesc_t213_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m1065(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDesc_t213_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m1066(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDesc_t213_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m1067(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDesc_t213_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m1068(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void MatchDesc_t213_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m1069(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void ListMatchResponse_t215_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void ListMatchResponse_t215_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m1073(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void ListMatchResponse_t215_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m1074(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttribute.h"
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttributeMethodDeclarations.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
extern TypeInfo* DefaultValueAttribute_t426_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t216_il2cpp_TypeInfo_var;
void AppID_t216_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(290);
		AppID_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(158);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t426 * tmp;
		tmp = (DefaultValueAttribute_t426 *)il2cpp_codegen_object_new (DefaultValueAttribute_t426_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1518(tmp, Box(AppID_t216_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t426_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t217_il2cpp_TypeInfo_var;
void SourceID_t217_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(290);
		SourceID_t217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(157);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t426 * tmp;
		tmp = (DefaultValueAttribute_t426 *)il2cpp_codegen_object_new (DefaultValueAttribute_t426_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1518(tmp, Box(SourceID_t217_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t426_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t218_il2cpp_TypeInfo_var;
void NetworkID_t218_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(290);
		NetworkID_t218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(163);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t426 * tmp;
		tmp = (DefaultValueAttribute_t426 *)il2cpp_codegen_object_new (DefaultValueAttribute_t426_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1518(tmp, Box(NetworkID_t218_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t426_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t219_il2cpp_TypeInfo_var;
void NodeID_t219_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(290);
		NodeID_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t426 * tmp;
		tmp = (DefaultValueAttribute_t426 *)il2cpp_codegen_object_new (DefaultValueAttribute_t426_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1518(tmp, Box(NodeID_t219_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t427_il2cpp_TypeInfo_var;
void NetworkMatch_t225_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m1519(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t427_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t427 * tmp;
		tmp = (DebuggerHiddenAttribute_t427 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t427_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1520(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t429_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t427_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t429_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1526(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t427_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t427 * tmp;
		tmp = (DebuggerHiddenAttribute_t427 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t427_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1520(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t427_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t429_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m1527(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t427_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t427 * tmp;
		tmp = (DebuggerHiddenAttribute_t427 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t427_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1520(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t427_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t429_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m1529(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t427_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t427 * tmp;
		tmp = (DebuggerHiddenAttribute_t427 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t427_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1520(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttribute.h"
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttributeMethodDeclarations.h"
extern TypeInfo* GeneratedCodeAttribute_t430_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t423_il2cpp_TypeInfo_var;
void JsonArray_t226_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		EditorBrowsableAttribute_t423_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t430 * tmp;
		tmp = (GeneratedCodeAttribute_t430 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t430_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1530(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t423 * tmp;
		tmp = (EditorBrowsableAttribute_t423 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t423_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1510(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t423_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultMemberAttribute_t420_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t430_il2cpp_TypeInfo_var;
void JsonObject_t229_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t423_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		DefaultMemberAttribute_t420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		GeneratedCodeAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t423 * tmp;
		tmp = (EditorBrowsableAttribute_t423 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t423_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1510(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		DefaultMemberAttribute_t420 * tmp;
		tmp = (DefaultMemberAttribute_t420 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t420_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1506(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t430 * tmp;
		tmp = (GeneratedCodeAttribute_t430 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t430_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1530(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t430_il2cpp_TypeInfo_var;
void SimpleJson_t232_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t430 * tmp;
		tmp = (GeneratedCodeAttribute_t430 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t430_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1530(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t431_il2cpp_TypeInfo_var;
void SimpleJson_t232_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m1118(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t431_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t431 * tmp;
		tmp = (SuppressMessageAttribute_t431 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t431_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1531(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1532(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t431_il2cpp_TypeInfo_var;
void SimpleJson_t232_CustomAttributesCacheGenerator_SimpleJson_NextToken_m1130(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t431_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t431 * tmp;
		tmp = (SuppressMessageAttribute_t431 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t431_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1531(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t423_il2cpp_TypeInfo_var;
void SimpleJson_t232_CustomAttributesCacheGenerator_SimpleJson_t232____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t423_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t423 * tmp;
		tmp = (EditorBrowsableAttribute_t423 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t423_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1510(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t430_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t230_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t430 * tmp;
		tmp = (GeneratedCodeAttribute_t430 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t430_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1530(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t431_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t230_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m1533(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t431_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t431 * tmp;
		tmp = (SuppressMessageAttribute_t431 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t431_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1531(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1532(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t430_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t231_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t430 * tmp;
		tmp = (GeneratedCodeAttribute_t430 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t430_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1530(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t431_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t231_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m1147(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t431_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t431 * tmp;
		tmp = (SuppressMessageAttribute_t431 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t431_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1531(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1532(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t431_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t231_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m1148(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t431_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t431 * tmp;
		tmp = (SuppressMessageAttribute_t431 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t431_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1531(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1532(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t430_il2cpp_TypeInfo_var;
void ReflectionUtils_t246_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t430 * tmp;
		tmp = (GeneratedCodeAttribute_t430 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t430_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1530(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t417_il2cpp_TypeInfo_var;
void ReflectionUtils_t246_CustomAttributesCacheGenerator_ReflectionUtils_t246_ReflectionUtils_GetConstructorInfo_m1173_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t417 * tmp;
		tmp = (ParamArrayAttribute_t417 *)il2cpp_codegen_object_new (ParamArrayAttribute_t417_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1502(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t417_il2cpp_TypeInfo_var;
void ReflectionUtils_t246_CustomAttributesCacheGenerator_ReflectionUtils_t246_ReflectionUtils_GetContructor_m1178_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t417 * tmp;
		tmp = (ParamArrayAttribute_t417 *)il2cpp_codegen_object_new (ParamArrayAttribute_t417_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1502(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t417_il2cpp_TypeInfo_var;
void ReflectionUtils_t246_CustomAttributesCacheGenerator_ReflectionUtils_t246_ReflectionUtils_GetConstructorByReflection_m1180_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t417 * tmp;
		tmp = (ParamArrayAttribute_t417 *)il2cpp_codegen_object_new (ParamArrayAttribute_t417_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1502(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t420_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t432_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t420 * tmp;
		tmp = (DefaultMemberAttribute_t420 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t420_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1506(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t417_il2cpp_TypeInfo_var;
void ConstructorDelegate_t239_CustomAttributesCacheGenerator_ConstructorDelegate_t239_ConstructorDelegate_Invoke_m1158_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t417 * tmp;
		tmp = (ParamArrayAttribute_t417 *)il2cpp_codegen_object_new (ParamArrayAttribute_t417_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1502(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t417_il2cpp_TypeInfo_var;
void ConstructorDelegate_t239_CustomAttributesCacheGenerator_ConstructorDelegate_t239_ConstructorDelegate_BeginInvoke_m1159_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t417 * tmp;
		tmp = (ParamArrayAttribute_t417 *)il2cpp_codegen_object_new (ParamArrayAttribute_t417_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1502(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t241_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t242_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t243_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t244_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t245_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttribute.h"
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttributeMethodDeclarations.h"
extern TypeInfo* AttributeUsageAttribute_t434_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t248_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t434_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t434 * tmp;
		tmp = (AttributeUsageAttribute_t434 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t434_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1557(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t434_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t253_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t434_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t434 * tmp;
		tmp = (AttributeUsageAttribute_t434 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t434_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1557(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m1558(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t434_il2cpp_TypeInfo_var;
void RequireComponent_t254_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t434_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t434 * tmp;
		tmp = (AttributeUsageAttribute_t434 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t434_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1557(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1559(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t434_il2cpp_TypeInfo_var;
void WritableAttribute_t258_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t434_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t434 * tmp;
		tmp = (AttributeUsageAttribute_t434 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t434_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1557(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1559(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t434_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t259_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t434_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t434 * tmp;
		tmp = (AttributeUsageAttribute_t434 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t434_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1557(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Achievement_t271_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Achievement_t271_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Achievement_t271_CustomAttributesCacheGenerator_Achievement_get_id_m1233(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Achievement_t271_CustomAttributesCacheGenerator_Achievement_set_id_m1234(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Achievement_t271_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m1235(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Achievement_t271_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m1236(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void AchievementDescription_t272_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void AchievementDescription_t272_CustomAttributesCacheGenerator_AchievementDescription_get_id_m1243(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void AchievementDescription_t272_CustomAttributesCacheGenerator_AchievementDescription_set_id_m1244(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Score_t273_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Score_t273_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Score_t273_CustomAttributesCacheGenerator_Score_get_leaderboardID_m1253(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Score_t273_CustomAttributesCacheGenerator_Score_set_leaderboardID_m1254(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Score_t273_CustomAttributesCacheGenerator_Score_get_value_m1255(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Score_t273_CustomAttributesCacheGenerator_Score_set_value_m1256(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Leaderboard_t76_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Leaderboard_t76_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Leaderboard_t76_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Leaderboard_t76_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Leaderboard_t76_CustomAttributesCacheGenerator_Leaderboard_get_id_m1264(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Leaderboard_t76_CustomAttributesCacheGenerator_Leaderboard_set_id_m1265(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Leaderboard_t76_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m1266(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Leaderboard_t76_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m1267(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Leaderboard_t76_CustomAttributesCacheGenerator_Leaderboard_get_range_m1268(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Leaderboard_t76_CustomAttributesCacheGenerator_Leaderboard_set_range_m1269(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Leaderboard_t76_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m1270(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void Leaderboard_t76_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m1271(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t418 * tmp;
		tmp = (CompilerGeneratedAttribute_t418 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1504(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t424_il2cpp_TypeInfo_var;
void StackTraceUtility_t285_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m1283(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t424_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t424 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t424 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t424_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1512(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t424_il2cpp_TypeInfo_var;
void StackTraceUtility_t285_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m1286(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t424_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t424 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t424 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t424_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1512(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t424_il2cpp_TypeInfo_var;
void StackTraceUtility_t285_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m1288(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t424_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t424 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t424 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t424_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1512(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t434_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t286_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t434_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t434 * tmp;
		tmp = (AttributeUsageAttribute_t434 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t434_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1557(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1559(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t305_il2cpp_TypeInfo_var;
void ArgumentCache_t292_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		FormerlySerializedAsAttribute_t305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t305 * tmp;
		tmp = (FormerlySerializedAsAttribute_t305 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t305_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1332(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t305_il2cpp_TypeInfo_var;
void PersistentCall_t295_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		FormerlySerializedAsAttribute_t305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t305 * tmp;
		tmp = (FormerlySerializedAsAttribute_t305 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t305_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1332(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t305_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void PersistentCall_t295_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t305 * tmp;
		tmp = (FormerlySerializedAsAttribute_t305 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t305_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1332(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t305 * tmp;
		tmp = (FormerlySerializedAsAttribute_t305 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t305_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1332(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t305_il2cpp_TypeInfo_var;
void PersistentCallGroup_t297_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		FormerlySerializedAsAttribute_t305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t305 * tmp;
		tmp = (FormerlySerializedAsAttribute_t305 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t305_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1332(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t305_il2cpp_TypeInfo_var;
void UnityEventBase_t300_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		FormerlySerializedAsAttribute_t305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t305 * tmp;
		tmp = (FormerlySerializedAsAttribute_t305 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t305_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1332(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t140_il2cpp_TypeInfo_var;
void UnityEventBase_t300_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t140 * tmp;
		tmp = (SerializeField_t140 *)il2cpp_codegen_object_new (SerializeField_t140_il2cpp_TypeInfo_var);
		SerializeField__ctor_m650(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t255_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t302_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t255_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t255 * tmp;
		tmp = (AddComponentMenu_t255 *)il2cpp_codegen_object_new (AddComponentMenu_t255_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m1195(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t434_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t303_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t434_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t434 * tmp;
		tmp = (AttributeUsageAttribute_t434 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t434_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1557(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t434_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t304_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t434_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t434 * tmp;
		tmp = (AttributeUsageAttribute_t434 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t434_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1557(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t434_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t305_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t434_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t434 * tmp;
		tmp = (AttributeUsageAttribute_t434 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t434_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1557(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1559(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m1558(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t434_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t307_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t434_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t434 * tmp;
		tmp = (AttributeUsageAttribute_t434 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t434_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1557(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[508] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t52_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m172,
	AssetBundleCreateRequest_t52_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m173,
	AssetBundle_t54_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m177,
	AssetBundle_t54_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m178,
	AssetBundle_t54_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m179,
	LayerMask_t15_CustomAttributesCacheGenerator_LayerMask_LayerToName_m182,
	LayerMask_t15_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m183,
	LayerMask_t15_CustomAttributesCacheGenerator_LayerMask_t15_LayerMask_GetMask_m184_Arg0_ParameterInfo,
	SystemInfo_t59_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m186,
	Coroutine_t64_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m191,
	ScriptableObject_t65_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m194,
	ScriptableObject_t65_CustomAttributesCacheGenerator_ScriptableObject_t65_ScriptableObject_Internal_CreateScriptableObject_m194_Arg0_ParameterInfo,
	ScriptableObject_t65_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m195,
	ScriptableObject_t65_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m197,
	GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m202,
	GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m203,
	GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m204,
	GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m205,
	GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m206,
	GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m207,
	GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m208,
	GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m209,
	GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m210,
	GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m211,
	GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m212,
	GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m213,
	GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m214,
	GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m215,
	GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m216,
	GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m217,
	GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m218,
	GameCenterPlatform_t75_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m222,
	GcLeaderboard_t77_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m266,
	GcLeaderboard_t77_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m267,
	GcLeaderboard_t77_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m268,
	GcLeaderboard_t77_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m269,
	Renderer_t24_CustomAttributesCacheGenerator_Renderer_set_enabled_m157,
	Renderer_t24_CustomAttributesCacheGenerator_Renderer_get_bounds_m73,
	Screen_t79_CustomAttributesCacheGenerator_Screen_get_width_m290,
	Screen_t79_CustomAttributesCacheGenerator_Screen_get_height_m291,
	Texture2D_t81_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m294,
	Texture2D_t81_CustomAttributesCacheGenerator_Texture2D_t81_Texture2D_Internal_Create_m294_Arg0_ParameterInfo,
	GUILayer_t86_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m296,
	Gradient_t90_CustomAttributesCacheGenerator_Gradient_Init_m300,
	Gradient_t90_CustomAttributesCacheGenerator_Gradient_Cleanup_m301,
	GUI_t99_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t99_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t99_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m309,
	GUI_t99_CustomAttributesCacheGenerator_GUI_set_changed_m312,
	GUILayoutUtility_t106_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m325,
	GUILayoutUtility_t106_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m327,
	GUIUtility_t114_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m359,
	GUIUtility_t114_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m361,
	GUIUtility_t114_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m365,
	GUISettings_t115_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t115_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t115_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t115_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t115_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t97_CustomAttributesCacheGenerator,
	GUISkin_t97_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t97_CustomAttributesCacheGenerator_m_box,
	GUISkin_t97_CustomAttributesCacheGenerator_m_button,
	GUISkin_t97_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t97_CustomAttributesCacheGenerator_m_label,
	GUISkin_t97_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t97_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t97_CustomAttributesCacheGenerator_m_window,
	GUISkin_t97_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t97_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t97_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t97_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t97_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t97_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t97_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t97_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t97_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t97_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t97_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t97_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t97_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t97_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t97_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t120_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t120_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t120_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t121_CustomAttributesCacheGenerator_GUIStyleState_Init_m432,
	GUIStyleState_t121_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m433,
	GUIStyleState_t121_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m434,
	GUIStyleState_t121_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m435,
	RectOffset_t109_CustomAttributesCacheGenerator_RectOffset_Init_m441,
	RectOffset_t109_CustomAttributesCacheGenerator_RectOffset_Cleanup_m442,
	RectOffset_t109_CustomAttributesCacheGenerator_RectOffset_get_left_m443,
	RectOffset_t109_CustomAttributesCacheGenerator_RectOffset_set_left_m444,
	RectOffset_t109_CustomAttributesCacheGenerator_RectOffset_get_right_m445,
	RectOffset_t109_CustomAttributesCacheGenerator_RectOffset_set_right_m446,
	RectOffset_t109_CustomAttributesCacheGenerator_RectOffset_get_top_m447,
	RectOffset_t109_CustomAttributesCacheGenerator_RectOffset_set_top_m448,
	RectOffset_t109_CustomAttributesCacheGenerator_RectOffset_get_bottom_m449,
	RectOffset_t109_CustomAttributesCacheGenerator_RectOffset_set_bottom_m450,
	RectOffset_t109_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m451,
	RectOffset_t109_CustomAttributesCacheGenerator_RectOffset_get_vertical_m452,
	GUIStyle_t105_CustomAttributesCacheGenerator_GUIStyle_Init_m457,
	GUIStyle_t105_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m458,
	GUIStyle_t105_CustomAttributesCacheGenerator_GUIStyle_get_name_m459,
	GUIStyle_t105_CustomAttributesCacheGenerator_GUIStyle_set_name_m460,
	GUIStyle_t105_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m462,
	GUIStyle_t105_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m465,
	GUIStyle_t105_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m466,
	GUIStyle_t105_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m467,
	GUIStyle_t105_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m468,
	GUIStyle_t105_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m469,
	GUIStyle_t105_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m470,
	GUIStyle_t105_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m471,
	GUIStyle_t105_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m472,
	TouchScreenKeyboard_t123_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m475,
	Event_t124_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t124_CustomAttributesCacheGenerator_Event_Init_m478,
	Event_t124_CustomAttributesCacheGenerator_Event_Cleanup_m480,
	Event_t124_CustomAttributesCacheGenerator_Event_get_type_m481,
	Event_t124_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m483,
	Event_t124_CustomAttributesCacheGenerator_Event_get_modifiers_m484,
	Event_t124_CustomAttributesCacheGenerator_Event_get_character_m485,
	Event_t124_CustomAttributesCacheGenerator_Event_get_commandName_m486,
	Event_t124_CustomAttributesCacheGenerator_Event_get_keyCode_m487,
	Event_t124_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m489,
	EventModifiers_t128_CustomAttributesCacheGenerator,
	Vector2_t18_CustomAttributesCacheGenerator,
	Vector3_t4_CustomAttributesCacheGenerator,
	Color_t88_CustomAttributesCacheGenerator,
	Color32_t129_CustomAttributesCacheGenerator,
	Quaternion_t39_CustomAttributesCacheGenerator,
	Matrix4x4_t130_CustomAttributesCacheGenerator,
	Matrix4x4_t130_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m556,
	Matrix4x4_t130_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m558,
	Matrix4x4_t130_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m560,
	Matrix4x4_t130_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m563,
	Matrix4x4_t130_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m576,
	Matrix4x4_t130_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m579,
	Matrix4x4_t130_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m580,
	Bounds_t27_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m603,
	Bounds_t27_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m606,
	Bounds_t27_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m609,
	Bounds_t27_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m613,
	Vector4_t131_CustomAttributesCacheGenerator,
	Resources_t137_CustomAttributesCacheGenerator_Resources_Load_m65,
	SerializePrivateVariables_t138_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t141_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t141_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m653,
	SphericalHarmonicsL2_t141_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m656,
	SphericalHarmonicsL2_t141_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m659,
	WWW_t142_CustomAttributesCacheGenerator_WWW_DestroyWWW_m672,
	WWW_t142_CustomAttributesCacheGenerator_WWW_InitWWW_m673,
	WWW_t142_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m675,
	WWW_t142_CustomAttributesCacheGenerator_WWW_get_bytes_m679,
	WWW_t142_CustomAttributesCacheGenerator_WWW_get_error_m680,
	WWW_t142_CustomAttributesCacheGenerator_WWW_get_isDone_m681,
	WWWForm_t146_CustomAttributesCacheGenerator_WWWForm_AddField_m685,
	WWWForm_t146_CustomAttributesCacheGenerator_WWWForm_t146_WWWForm_AddField_m686_Arg2_ParameterInfo,
	WWWTranscoder_t147_CustomAttributesCacheGenerator_WWWTranscoder_t147_WWWTranscoder_QPEncode_m693_Arg1_ParameterInfo,
	WWWTranscoder_t147_CustomAttributesCacheGenerator_WWWTranscoder_t147_WWWTranscoder_SevenBitClean_m696_Arg1_ParameterInfo,
	CacheIndex_t148_CustomAttributesCacheGenerator,
	UnityString_t149_CustomAttributesCacheGenerator_UnityString_t149_UnityString_Format_m698_Arg1_ParameterInfo,
	AsyncOperation_t53_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m700,
	Behaviour_t84_CustomAttributesCacheGenerator_Behaviour_get_enabled_m117,
	Behaviour_t84_CustomAttributesCacheGenerator_Behaviour_set_enabled_m100,
	Camera_t43_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m712,
	Camera_t43_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m713,
	Camera_t43_CustomAttributesCacheGenerator_Camera_get_orthographicSize_m137,
	Camera_t43_CustomAttributesCacheGenerator_Camera_get_aspect_m138,
	Camera_t43_CustomAttributesCacheGenerator_Camera_get_cullingMask_m714,
	Camera_t43_CustomAttributesCacheGenerator_Camera_get_eventMask_m715,
	Camera_t43_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m716,
	Camera_t43_CustomAttributesCacheGenerator_Camera_get_targetTexture_m718,
	Camera_t43_CustomAttributesCacheGenerator_Camera_get_clearFlags_m719,
	Camera_t43_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m721,
	Camera_t43_CustomAttributesCacheGenerator_Camera_get_main_m136,
	Camera_t43_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m722,
	Camera_t43_CustomAttributesCacheGenerator_Camera_GetAllCameras_m723,
	Camera_t43_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m728,
	Camera_t43_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m730,
	CameraCallback_t152_CustomAttributesCacheGenerator,
	Debug_t153_CustomAttributesCacheGenerator_Debug_Internal_Log_m731,
	Debug_t153_CustomAttributesCacheGenerator_Debug_t153_Debug_Internal_Log_m731_Arg2_ParameterInfo,
	Display_t156_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m757,
	Display_t156_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m758,
	Display_t156_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m759,
	Display_t156_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m760,
	Display_t156_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m761,
	Display_t156_CustomAttributesCacheGenerator_Display_SetParamsImpl_m762,
	Display_t156_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m763,
	Display_t156_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m764,
	MonoBehaviour_t3_CustomAttributesCacheGenerator_MonoBehaviour_Invoke_m95,
	MonoBehaviour_t3_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m766,
	Input_t38_CustomAttributesCacheGenerator_Input_GetKeyInt_m768,
	Input_t38_CustomAttributesCacheGenerator_Input_GetKeyDownInt_m769,
	Input_t38_CustomAttributesCacheGenerator_Input_GetMouseButton_m140,
	Input_t38_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m770,
	Input_t38_CustomAttributesCacheGenerator_Input_get_mousePosition_m771,
	Input_t38_CustomAttributesCacheGenerator_Input_GetTouch_m129,
	Input_t38_CustomAttributesCacheGenerator_Input_get_touchCount_m128,
	Object_t26_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m773,
	Object_t26_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m775,
	Object_t26_CustomAttributesCacheGenerator_Object_Destroy_m94,
	Object_t26_CustomAttributesCacheGenerator_Object_t26_Object_Destroy_m94_Arg1_ParameterInfo,
	Object_t26_CustomAttributesCacheGenerator_Object_Destroy_m70,
	Object_t26_CustomAttributesCacheGenerator_Object_get_name_m776,
	Object_t26_CustomAttributesCacheGenerator_Object_ToString_m170,
	Object_t26_CustomAttributesCacheGenerator_Object_Instantiate_m122,
	Object_t26_CustomAttributesCacheGenerator_Object_Instantiate_m66,
	Component_t25_CustomAttributesCacheGenerator_Component_get_transform_m56,
	Component_t25_CustomAttributesCacheGenerator_Component_get_gameObject_m67,
	Component_t25_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m783,
	Component_t25_CustomAttributesCacheGenerator_Component_GetComponent_m1511,
	GameObject_t1_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m784,
	GameObject_t1_CustomAttributesCacheGenerator_GameObject_GetComponent_m1514,
	GameObject_t1_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m785,
	GameObject_t1_CustomAttributesCacheGenerator_GameObject_get_transform_m59,
	GameObject_t1_CustomAttributesCacheGenerator_GameObject_SetActive_m160,
	GameObject_t1_CustomAttributesCacheGenerator_GameObject_get_activeSelf_m161,
	GameObject_t1_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m164,
	GameObject_t1_CustomAttributesCacheGenerator_GameObject_get_tag_m68,
	GameObject_t1_CustomAttributesCacheGenerator_GameObject_SendMessage_m786,
	GameObject_t1_CustomAttributesCacheGenerator_GameObject_t1_GameObject_SendMessage_m786_Arg1_ParameterInfo,
	GameObject_t1_CustomAttributesCacheGenerator_GameObject_t1_GameObject_SendMessage_m786_Arg2_ParameterInfo,
	GameObject_t1_CustomAttributesCacheGenerator_GameObject_Find_m101,
	Transform_t13_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m790,
	Transform_t13_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m791,
	Transform_t13_CustomAttributesCacheGenerator_Transform_Translate_m151,
	Transform_t13_CustomAttributesCacheGenerator_Transform_t13_Transform_Translate_m792_Arg1_ParameterInfo,
	Transform_t13_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_RotateAroundInternal_m794,
	Transform_t13_CustomAttributesCacheGenerator_Transform_Rotate_m154,
	Transform_t13_CustomAttributesCacheGenerator_Transform_t13_Transform_Rotate_m795_Arg2_ParameterInfo,
	Transform_t13_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformDirection_m797,
	Transform_t13_CustomAttributesCacheGenerator_Transform_get_childCount_m798,
	Transform_t13_CustomAttributesCacheGenerator_Transform_Find_m71,
	Transform_t13_CustomAttributesCacheGenerator_Transform_GetChild_m800,
	Time_t159_CustomAttributesCacheGenerator_Time_get_deltaTime_m150,
	Time_t159_CustomAttributesCacheGenerator_Time_get_fixedDeltaTime_m146,
	Time_t159_CustomAttributesCacheGenerator_Time_set_timeScale_m139,
	Random_t160_CustomAttributesCacheGenerator_Random_RandomRangeInt_m801,
	PlayerPrefs_t161_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m803,
	PlayerPrefs_t161_CustomAttributesCacheGenerator_PlayerPrefs_t161_PlayerPrefs_GetString_m803_Arg1_ParameterInfo,
	PlayerPrefs_t161_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m804,
	Collider_t44_CustomAttributesCacheGenerator_Collider_set_enabled_m156,
	ContactPoint_t46_CustomAttributesCacheGenerator_ContactPoint_ColliderFromInstanceId_m821,
	Physics2D_t36_CustomAttributesCacheGenerator_Physics2D_INTERNAL_get_gravity_m823,
	Physics2D_t36_CustomAttributesCacheGenerator_Physics2D_OverlapCircle_m111,
	Physics2D_t36_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapCircle_m824,
	Rigidbody2D_t8_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_get_velocity_m825,
	Rigidbody2D_t8_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_set_velocity_m826,
	Rigidbody2D_t8_CustomAttributesCacheGenerator_Rigidbody2D_get_mass_m108,
	Rigidbody2D_t8_CustomAttributesCacheGenerator_Rigidbody2D_get_gravityScale_m107,
	Rigidbody2D_t8_CustomAttributesCacheGenerator_Rigidbody2D_AddForce_m119,
	Rigidbody2D_t8_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_CALL_AddForce_m827,
	Collider2D_t21_CustomAttributesCacheGenerator_Collider2D_INTERNAL_get_bounds_m828,
	CircleCollider2D_t31_CustomAttributesCacheGenerator_CircleCollider2D_get_radius_m125,
	BoxCollider2D_t34_CustomAttributesCacheGenerator_BoxCollider2D_INTERNAL_get_size_m829,
	AudioSource_t9_CustomAttributesCacheGenerator_AudioSource_set_volume_m115,
	AudioSource_t9_CustomAttributesCacheGenerator_AudioSource_set_pitch_m114,
	AudioSource_t9_CustomAttributesCacheGenerator_AudioSource_get_clip_m113,
	AudioSource_t9_CustomAttributesCacheGenerator_AudioSource_set_clip_m97,
	AudioSource_t9_CustomAttributesCacheGenerator_AudioSource_Play_m845,
	AudioSource_t9_CustomAttributesCacheGenerator_AudioSource_t9_AudioSource_Play_m845_Arg0_ParameterInfo,
	AudioSource_t9_CustomAttributesCacheGenerator_AudioSource_Play_m116,
	AudioSource_t9_CustomAttributesCacheGenerator_AudioSource_PlayDelayed_m99,
	AudioSource_t9_CustomAttributesCacheGenerator_AudioSource_Stop_m133,
	AudioSource_t9_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m112,
	AudioSource_t9_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m846,
	AudioSource_t9_CustomAttributesCacheGenerator_AudioSource_t9_AudioSource_PlayOneShot_m846_Arg1_ParameterInfo,
	AudioSource_t9_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m96,
	AudioSource_t9_CustomAttributesCacheGenerator_AudioSource_set_loop_m98,
	AnimationEvent_t174_CustomAttributesCacheGenerator_AnimationEvent_t174____data_PropertyInfo,
	AnimationCurve_t177_CustomAttributesCacheGenerator,
	AnimationCurve_t177_CustomAttributesCacheGenerator_AnimationCurve_t177_AnimationCurve__ctor_m872_Arg0_ParameterInfo,
	AnimationCurve_t177_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m874,
	AnimationCurve_t177_CustomAttributesCacheGenerator_AnimationCurve_Init_m876,
	AnimatorStateInfo_t30_CustomAttributesCacheGenerator_AnimatorStateInfo_t30____nameHash_PropertyInfo,
	Animator_t7_CustomAttributesCacheGenerator_Animator_GetCurrentAnimatorStateInfo_m87,
	Animator_t7_CustomAttributesCacheGenerator_Animator_StringToHash_m105,
	Animator_t7_CustomAttributesCacheGenerator_Animator_SetTriggerString_m893,
	CharacterInfo_t186_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t186_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t186_CustomAttributesCacheGenerator_width,
	CharacterInfo_t186_CustomAttributesCacheGenerator_flipped,
	Font_t117_CustomAttributesCacheGenerator_Font_get_dynamic_m919,
	FontTextureRebuildCallback_t187_CustomAttributesCacheGenerator,
	TextGenerator_t194_CustomAttributesCacheGenerator_TextGenerator_Init_m923,
	TextGenerator_t194_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m924,
	TextGenerator_t194_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m927,
	TextGenerator_t194_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m928,
	TextGenerator_t194_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m929,
	TextGenerator_t194_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m930,
	TextGenerator_t194_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m931,
	TextGenerator_t194_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m932,
	TextGenerator_t194_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m934,
	TextGenerator_t194_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m935,
	TextGenerator_t194_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m936,
	TextGenerator_t194_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m937,
	TextGenerator_t194_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m938,
	TextGenerator_t194_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m939,
	Request_t199_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t199_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t199_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t199_CustomAttributesCacheGenerator_Request_get_sourceId_m960,
	Request_t199_CustomAttributesCacheGenerator_Request_get_appId_m961,
	Request_t199_CustomAttributesCacheGenerator_Request_get_domain_m962,
	Response_t201_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t201_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t201_CustomAttributesCacheGenerator_Response_get_success_m971,
	Response_t201_CustomAttributesCacheGenerator_Response_set_success_m972,
	Response_t201_CustomAttributesCacheGenerator_Response_get_extendedInfo_m973,
	Response_t201_CustomAttributesCacheGenerator_Response_set_extendedInfo_m974,
	CreateMatchRequest_t204_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t204_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t204_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t204_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t204_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t204_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m979,
	CreateMatchRequest_t204_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m980,
	CreateMatchRequest_t204_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m981,
	CreateMatchRequest_t204_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m982,
	CreateMatchRequest_t204_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m983,
	CreateMatchRequest_t204_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m984,
	CreateMatchRequest_t204_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m985,
	CreateMatchRequest_t204_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m986,
	CreateMatchRequest_t204_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m987,
	CreateMatchResponse_t205_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t205_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t205_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t205_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t205_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t205_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t205_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m990,
	CreateMatchResponse_t205_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m991,
	CreateMatchResponse_t205_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m992,
	CreateMatchResponse_t205_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m993,
	CreateMatchResponse_t205_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m994,
	CreateMatchResponse_t205_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m995,
	CreateMatchResponse_t205_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m996,
	CreateMatchResponse_t205_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m997,
	CreateMatchResponse_t205_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m998,
	CreateMatchResponse_t205_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m999,
	CreateMatchResponse_t205_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m1000,
	CreateMatchResponse_t205_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m1001,
	JoinMatchRequest_t206_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t206_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t206_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m1005,
	JoinMatchRequest_t206_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m1006,
	JoinMatchRequest_t206_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m1007,
	JoinMatchRequest_t206_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m1008,
	JoinMatchResponse_t207_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t207_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t207_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t207_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t207_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t207_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t207_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m1011,
	JoinMatchResponse_t207_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m1012,
	JoinMatchResponse_t207_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m1013,
	JoinMatchResponse_t207_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m1014,
	JoinMatchResponse_t207_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m1015,
	JoinMatchResponse_t207_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m1016,
	JoinMatchResponse_t207_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m1017,
	JoinMatchResponse_t207_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m1018,
	JoinMatchResponse_t207_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m1019,
	JoinMatchResponse_t207_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m1020,
	JoinMatchResponse_t207_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m1021,
	JoinMatchResponse_t207_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m1022,
	DestroyMatchRequest_t208_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t208_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m1026,
	DestroyMatchRequest_t208_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m1027,
	DropConnectionRequest_t209_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t209_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t209_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m1030,
	DropConnectionRequest_t209_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m1031,
	DropConnectionRequest_t209_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m1032,
	DropConnectionRequest_t209_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m1033,
	ListMatchRequest_t210_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t210_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t210_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t210_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t210_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t210_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m1036,
	ListMatchRequest_t210_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m1037,
	ListMatchRequest_t210_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m1038,
	ListMatchRequest_t210_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m1039,
	ListMatchRequest_t210_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m1040,
	ListMatchRequest_t210_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m1041,
	ListMatchRequest_t210_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m1042,
	ListMatchRequest_t210_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m1043,
	MatchDirectConnectInfo_t211_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t211_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t211_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t211_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m1046,
	MatchDirectConnectInfo_t211_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m1047,
	MatchDirectConnectInfo_t211_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m1048,
	MatchDirectConnectInfo_t211_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m1049,
	MatchDirectConnectInfo_t211_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m1050,
	MatchDirectConnectInfo_t211_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m1051,
	MatchDesc_t213_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t213_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t213_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t213_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t213_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t213_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t213_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t213_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t213_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t213_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m1055,
	MatchDesc_t213_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m1056,
	MatchDesc_t213_CustomAttributesCacheGenerator_MatchDesc_get_name_m1057,
	MatchDesc_t213_CustomAttributesCacheGenerator_MatchDesc_set_name_m1058,
	MatchDesc_t213_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m1059,
	MatchDesc_t213_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m1060,
	MatchDesc_t213_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m1061,
	MatchDesc_t213_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m1062,
	MatchDesc_t213_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m1063,
	MatchDesc_t213_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m1064,
	MatchDesc_t213_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m1065,
	MatchDesc_t213_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m1066,
	MatchDesc_t213_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m1067,
	MatchDesc_t213_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m1068,
	MatchDesc_t213_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m1069,
	ListMatchResponse_t215_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t215_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m1073,
	ListMatchResponse_t215_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m1074,
	AppID_t216_CustomAttributesCacheGenerator,
	SourceID_t217_CustomAttributesCacheGenerator,
	NetworkID_t218_CustomAttributesCacheGenerator,
	NodeID_t219_CustomAttributesCacheGenerator,
	NetworkMatch_t225_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m1519,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t429_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t429_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1526,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t429_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m1527,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t429_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m1529,
	JsonArray_t226_CustomAttributesCacheGenerator,
	JsonObject_t229_CustomAttributesCacheGenerator,
	SimpleJson_t232_CustomAttributesCacheGenerator,
	SimpleJson_t232_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m1118,
	SimpleJson_t232_CustomAttributesCacheGenerator_SimpleJson_NextToken_m1130,
	SimpleJson_t232_CustomAttributesCacheGenerator_SimpleJson_t232____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t230_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t230_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m1533,
	PocoJsonSerializerStrategy_t231_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t231_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m1147,
	PocoJsonSerializerStrategy_t231_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m1148,
	ReflectionUtils_t246_CustomAttributesCacheGenerator,
	ReflectionUtils_t246_CustomAttributesCacheGenerator_ReflectionUtils_t246_ReflectionUtils_GetConstructorInfo_m1173_Arg1_ParameterInfo,
	ReflectionUtils_t246_CustomAttributesCacheGenerator_ReflectionUtils_t246_ReflectionUtils_GetContructor_m1178_Arg1_ParameterInfo,
	ReflectionUtils_t246_CustomAttributesCacheGenerator_ReflectionUtils_t246_ReflectionUtils_GetConstructorByReflection_m1180_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t432_CustomAttributesCacheGenerator,
	ConstructorDelegate_t239_CustomAttributesCacheGenerator_ConstructorDelegate_t239_ConstructorDelegate_Invoke_m1158_Arg0_ParameterInfo,
	ConstructorDelegate_t239_CustomAttributesCacheGenerator_ConstructorDelegate_t239_ConstructorDelegate_BeginInvoke_m1159_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t241_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t242_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t243_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t244_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t245_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t248_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t253_CustomAttributesCacheGenerator,
	RequireComponent_t254_CustomAttributesCacheGenerator,
	WritableAttribute_t258_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t259_CustomAttributesCacheGenerator,
	Achievement_t271_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t271_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t271_CustomAttributesCacheGenerator_Achievement_get_id_m1233,
	Achievement_t271_CustomAttributesCacheGenerator_Achievement_set_id_m1234,
	Achievement_t271_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m1235,
	Achievement_t271_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m1236,
	AchievementDescription_t272_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t272_CustomAttributesCacheGenerator_AchievementDescription_get_id_m1243,
	AchievementDescription_t272_CustomAttributesCacheGenerator_AchievementDescription_set_id_m1244,
	Score_t273_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t273_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t273_CustomAttributesCacheGenerator_Score_get_leaderboardID_m1253,
	Score_t273_CustomAttributesCacheGenerator_Score_set_leaderboardID_m1254,
	Score_t273_CustomAttributesCacheGenerator_Score_get_value_m1255,
	Score_t273_CustomAttributesCacheGenerator_Score_set_value_m1256,
	Leaderboard_t76_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t76_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t76_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t76_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t76_CustomAttributesCacheGenerator_Leaderboard_get_id_m1264,
	Leaderboard_t76_CustomAttributesCacheGenerator_Leaderboard_set_id_m1265,
	Leaderboard_t76_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m1266,
	Leaderboard_t76_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m1267,
	Leaderboard_t76_CustomAttributesCacheGenerator_Leaderboard_get_range_m1268,
	Leaderboard_t76_CustomAttributesCacheGenerator_Leaderboard_set_range_m1269,
	Leaderboard_t76_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m1270,
	Leaderboard_t76_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m1271,
	StackTraceUtility_t285_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m1283,
	StackTraceUtility_t285_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m1286,
	StackTraceUtility_t285_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m1288,
	SharedBetweenAnimatorsAttribute_t286_CustomAttributesCacheGenerator,
	ArgumentCache_t292_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	PersistentCall_t295_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t295_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t297_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t300_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t300_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t302_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t303_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t304_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t305_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t307_CustomAttributesCacheGenerator,
};
