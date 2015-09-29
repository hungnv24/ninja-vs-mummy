#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttribute.h"
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttributeMethodDeclarations.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttribute.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttributeMethodDeclarations.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttribute.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttributeMethodDeclarations.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttribute.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttributeMethodDeclarations.h"
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttribute.h"
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttributeMethodDeclarations.h"
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttribute.h"
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttribute.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttributeMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToA.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToAMethodDeclarations.h"
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttribute.h"
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttributeMethodDeclarations.h"
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttribute.h"
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttributeMethodDeclarations.h"
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttribute.h"
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttributeMethodDeclarations.h"
extern TypeInfo* AssemblyCopyrightAttribute_t732_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDescriptionAttribute_t736_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyProductAttribute_t733_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyTitleAttribute_t738_il2cpp_TypeInfo_var;
extern TypeInfo* CLSCompliantAttribute_t729_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyCompanyAttribute_t734_il2cpp_TypeInfo_var;
extern TypeInfo* ComVisibleAttribute_t737_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t48_il2cpp_TypeInfo_var;
extern TypeInfo* InternalsVisibleToAttribute_t415_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyKeyFileAttribute_t742_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDelaySignAttribute_t741_il2cpp_TypeInfo_var;
extern TypeInfo* NeutralResourcesLanguageAttribute_t728_il2cpp_TypeInfo_var;
void g_Mono_Security_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AssemblyCopyrightAttribute_t732_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1171);
		AssemblyDescriptionAttribute_t736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1175);
		AssemblyProductAttribute_t733_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1172);
		AssemblyTitleAttribute_t738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1177);
		CLSCompliantAttribute_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1168);
		AssemblyCompanyAttribute_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1173);
		ComVisibleAttribute_t737_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1176);
		RuntimeCompatibilityAttribute_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		InternalsVisibleToAttribute_t415_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(275);
		AssemblyKeyFileAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1181);
		AssemblyDelaySignAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1180);
		NeutralResourcesLanguageAttribute_t728_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1167);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 12;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AssemblyCopyrightAttribute_t732 * tmp;
		tmp = (AssemblyCopyrightAttribute_t732 *)il2cpp_codegen_object_new (AssemblyCopyrightAttribute_t732_il2cpp_TypeInfo_var);
		AssemblyCopyrightAttribute__ctor_m2733(tmp, il2cpp_codegen_string_new_wrapper("(c) 2003-2004 Various Authors"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDescriptionAttribute_t736 * tmp;
		tmp = (AssemblyDescriptionAttribute_t736 *)il2cpp_codegen_object_new (AssemblyDescriptionAttribute_t736_il2cpp_TypeInfo_var);
		AssemblyDescriptionAttribute__ctor_m2737(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		AssemblyProductAttribute_t733 * tmp;
		tmp = (AssemblyProductAttribute_t733 *)il2cpp_codegen_object_new (AssemblyProductAttribute_t733_il2cpp_TypeInfo_var);
		AssemblyProductAttribute__ctor_m2734(tmp, il2cpp_codegen_string_new_wrapper("MONO CLI"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTitleAttribute_t738 * tmp;
		tmp = (AssemblyTitleAttribute_t738 *)il2cpp_codegen_object_new (AssemblyTitleAttribute_t738_il2cpp_TypeInfo_var);
		AssemblyTitleAttribute__ctor_m2739(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		CLSCompliantAttribute_t729 * tmp;
		tmp = (CLSCompliantAttribute_t729 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t729_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2730(tmp, true, NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCompanyAttribute_t734 * tmp;
		tmp = (AssemblyCompanyAttribute_t734 *)il2cpp_codegen_object_new (AssemblyCompanyAttribute_t734_il2cpp_TypeInfo_var);
		AssemblyCompanyAttribute__ctor_m2735(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		ComVisibleAttribute_t737 * tmp;
		tmp = (ComVisibleAttribute_t737 *)il2cpp_codegen_object_new (ComVisibleAttribute_t737_il2cpp_TypeInfo_var);
		ComVisibleAttribute__ctor_m2738(tmp, false, NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t48 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t48 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t48_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m165(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m166(tmp, true, NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t415 * tmp;
		tmp = (InternalsVisibleToAttribute_t415 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t415_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1500(tmp, il2cpp_codegen_string_new_wrapper("System, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		AssemblyKeyFileAttribute_t742 * tmp;
		tmp = (AssemblyKeyFileAttribute_t742 *)il2cpp_codegen_object_new (AssemblyKeyFileAttribute_t742_il2cpp_TypeInfo_var);
		AssemblyKeyFileAttribute__ctor_m2743(tmp, il2cpp_codegen_string_new_wrapper("../mono.pub"), NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDelaySignAttribute_t741 * tmp;
		tmp = (AssemblyDelaySignAttribute_t741 *)il2cpp_codegen_object_new (AssemblyDelaySignAttribute_t741_il2cpp_TypeInfo_var);
		AssemblyDelaySignAttribute__ctor_m2742(tmp, true, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		NeutralResourcesLanguageAttribute_t728 * tmp;
		tmp = (NeutralResourcesLanguageAttribute_t728 *)il2cpp_codegen_object_new (NeutralResourcesLanguageAttribute_t728_il2cpp_TypeInfo_var);
		NeutralResourcesLanguageAttribute__ctor_m2729(tmp, il2cpp_codegen_string_new_wrapper("en-US"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t729_il2cpp_TypeInfo_var;
void BigInteger_t772_CustomAttributesCacheGenerator_BigInteger__ctor_m2873(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1168);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t729 * tmp;
		tmp = (CLSCompliantAttribute_t729 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t729_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2730(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t729_il2cpp_TypeInfo_var;
void BigInteger_t772_CustomAttributesCacheGenerator_BigInteger__ctor_m2875(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1168);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t729 * tmp;
		tmp = (CLSCompliantAttribute_t729 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t729_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2730(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t729_il2cpp_TypeInfo_var;
void BigInteger_t772_CustomAttributesCacheGenerator_BigInteger__ctor_m2877(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1168);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t729 * tmp;
		tmp = (CLSCompliantAttribute_t729 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t729_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2730(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t729_il2cpp_TypeInfo_var;
void BigInteger_t772_CustomAttributesCacheGenerator_BigInteger_SetBit_m2884(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1168);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t729 * tmp;
		tmp = (CLSCompliantAttribute_t729 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t729_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2730(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t729_il2cpp_TypeInfo_var;
void BigInteger_t772_CustomAttributesCacheGenerator_BigInteger_SetBit_m2885(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1168);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t729 * tmp;
		tmp = (CLSCompliantAttribute_t729 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t729_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2730(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t729_il2cpp_TypeInfo_var;
void BigInteger_t772_CustomAttributesCacheGenerator_BigInteger_ToString_m2888(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1168);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t729 * tmp;
		tmp = (CLSCompliantAttribute_t729 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t729_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2730(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t729_il2cpp_TypeInfo_var;
void BigInteger_t772_CustomAttributesCacheGenerator_BigInteger_ToString_m2889(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1168);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t729 * tmp;
		tmp = (CLSCompliantAttribute_t729 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t729_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2730(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t729_il2cpp_TypeInfo_var;
void BigInteger_t772_CustomAttributesCacheGenerator_BigInteger_op_Implicit_m2899(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1168);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t729 * tmp;
		tmp = (CLSCompliantAttribute_t729 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t729_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2730(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t729_il2cpp_TypeInfo_var;
void BigInteger_t772_CustomAttributesCacheGenerator_BigInteger_op_Modulus_m2903(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1168);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t729 * tmp;
		tmp = (CLSCompliantAttribute_t729 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t729_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2730(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t729_il2cpp_TypeInfo_var;
void BigInteger_t772_CustomAttributesCacheGenerator_BigInteger_op_Equality_m2909(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1168);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t729 * tmp;
		tmp = (CLSCompliantAttribute_t729 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t729_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2730(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t729_il2cpp_TypeInfo_var;
void BigInteger_t772_CustomAttributesCacheGenerator_BigInteger_op_Inequality_m2910(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1168);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t729 * tmp;
		tmp = (CLSCompliantAttribute_t729 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t729_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2730(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t729_il2cpp_TypeInfo_var;
void ModulusRing_t773_CustomAttributesCacheGenerator_ModulusRing_Pow_m2857(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1168);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t729 * tmp;
		tmp = (CLSCompliantAttribute_t729 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t729_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2730(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t420_il2cpp_TypeInfo_var;
void ASN1_t692_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void PKCS12_t716_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5(CustomAttributesCache* cache)
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
void PKCS12_t716_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6(CustomAttributesCache* cache)
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
void PKCS12_t716_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7(CustomAttributesCache* cache)
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
void PKCS12_t716_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8(CustomAttributesCache* cache)
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
void X509Certificate_t577_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF(CustomAttributesCache* cache)
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
void X509Certificate_t577_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10(CustomAttributesCache* cache)
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
void X509Certificate_t577_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t420_il2cpp_TypeInfo_var;
void X509CertificateCollection_t717_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t419_il2cpp_TypeInfo_var;
void X509ChainStatusFlags_t804_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t420_il2cpp_TypeInfo_var;
void X509Crl_t694_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void X509Crl_t694_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t420_il2cpp_TypeInfo_var;
void X509ExtensionCollection_t720_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void ExtendedKeyUsageExtension_t807_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14(CustomAttributesCache* cache)
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
extern TypeInfo* FlagsAttribute_t419_il2cpp_TypeInfo_var;
void KeyUsages_t809_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* FlagsAttribute_t419_il2cpp_TypeInfo_var;
void CertTypes_t811_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t420_il2cpp_TypeInfo_var;
void CipherSuiteCollection_t824_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void HttpsClientStream_t842_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2(CustomAttributesCache* cache)
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
void HttpsClientStream_t842_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3(CustomAttributesCache* cache)
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
void HttpsClientStream_t842_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__0_m3337(CustomAttributesCache* cache)
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
void HttpsClientStream_t842_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__1_m3338(CustomAttributesCache* cache)
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
void RSASslSignatureDeformatter_t848_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15(CustomAttributesCache* cache)
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
void RSASslSignatureFormatter_t850_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16(CustomAttributesCache* cache)
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
extern TypeInfo* FlagsAttribute_t419_il2cpp_TypeInfo_var;
void SecurityProtocolType_t853_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t418_il2cpp_TypeInfo_var;
void U3CPrivateImplementationDetailsU3E_t888_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern const CustomAttributesCacheGenerator g_Mono_Security_Assembly_AttributeGenerators[39] = 
{
	NULL,
	g_Mono_Security_Assembly_CustomAttributesCacheGenerator,
	BigInteger_t772_CustomAttributesCacheGenerator_BigInteger__ctor_m2873,
	BigInteger_t772_CustomAttributesCacheGenerator_BigInteger__ctor_m2875,
	BigInteger_t772_CustomAttributesCacheGenerator_BigInteger__ctor_m2877,
	BigInteger_t772_CustomAttributesCacheGenerator_BigInteger_SetBit_m2884,
	BigInteger_t772_CustomAttributesCacheGenerator_BigInteger_SetBit_m2885,
	BigInteger_t772_CustomAttributesCacheGenerator_BigInteger_ToString_m2888,
	BigInteger_t772_CustomAttributesCacheGenerator_BigInteger_ToString_m2889,
	BigInteger_t772_CustomAttributesCacheGenerator_BigInteger_op_Implicit_m2899,
	BigInteger_t772_CustomAttributesCacheGenerator_BigInteger_op_Modulus_m2903,
	BigInteger_t772_CustomAttributesCacheGenerator_BigInteger_op_Equality_m2909,
	BigInteger_t772_CustomAttributesCacheGenerator_BigInteger_op_Inequality_m2910,
	ModulusRing_t773_CustomAttributesCacheGenerator_ModulusRing_Pow_m2857,
	ASN1_t692_CustomAttributesCacheGenerator,
	PKCS12_t716_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5,
	PKCS12_t716_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6,
	PKCS12_t716_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7,
	PKCS12_t716_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8,
	X509Certificate_t577_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF,
	X509Certificate_t577_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10,
	X509Certificate_t577_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11,
	X509CertificateCollection_t717_CustomAttributesCacheGenerator,
	X509ChainStatusFlags_t804_CustomAttributesCacheGenerator,
	X509Crl_t694_CustomAttributesCacheGenerator,
	X509Crl_t694_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13,
	X509ExtensionCollection_t720_CustomAttributesCacheGenerator,
	ExtendedKeyUsageExtension_t807_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14,
	KeyUsages_t809_CustomAttributesCacheGenerator,
	CertTypes_t811_CustomAttributesCacheGenerator,
	CipherSuiteCollection_t824_CustomAttributesCacheGenerator,
	HttpsClientStream_t842_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2,
	HttpsClientStream_t842_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3,
	HttpsClientStream_t842_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__0_m3337,
	HttpsClientStream_t842_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__1_m3338,
	RSASslSignatureDeformatter_t848_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15,
	RSASslSignatureFormatter_t850_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16,
	SecurityProtocolType_t853_CustomAttributesCacheGenerator,
	U3CPrivateImplementationDetailsU3E_t888_CustomAttributesCacheGenerator,
};
