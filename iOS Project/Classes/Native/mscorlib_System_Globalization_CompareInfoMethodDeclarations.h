#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.CompareInfo
struct CompareInfo_t907;
// System.Globalization.CultureInfo
struct CultureInfo_t376;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Globalization.SortKey
struct SortKey_t963;
// System.Globalization.CompareOptions
#include "mscorlib_System_Globalization_CompareOptions.h"

// System.Void System.Globalization.CompareInfo::.ctor()
extern "C" void CompareInfo__ctor_m5359 (CompareInfo_t907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CompareInfo::.ctor(System.Globalization.CultureInfo)
extern "C" void CompareInfo__ctor_m5360 (CompareInfo_t907 * __this, CultureInfo_t376 * ___ci, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CompareInfo::.cctor()
extern "C" void CompareInfo__cctor_m5361 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CompareInfo::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void CompareInfo_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m5362 (CompareInfo_t907 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CompareInfo::get_UseManagedCollation()
extern "C" bool CompareInfo_get_UseManagedCollation_m5363 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CompareInfo::construct_compareinfo(System.String)
extern "C" void CompareInfo_construct_compareinfo_m5364 (CompareInfo_t907 * __this, String_t* ___locale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CompareInfo::free_internal_collator()
extern "C" void CompareInfo_free_internal_collator_m5365 (CompareInfo_t907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::internal_compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C" int32_t CompareInfo_internal_compare_m5366 (CompareInfo_t907 * __this, String_t* ___str1, int32_t ___offset1, int32_t ___length1, String_t* ___str2, int32_t ___offset2, int32_t ___length2, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CompareInfo::assign_sortkey(System.Object,System.String,System.Globalization.CompareOptions)
extern "C" void CompareInfo_assign_sortkey_m5367 (CompareInfo_t907 * __this, Object_t * ___key, String_t* ___source, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::internal_index(System.String,System.Int32,System.Int32,System.String,System.Globalization.CompareOptions,System.Boolean)
extern "C" int32_t CompareInfo_internal_index_m5368 (CompareInfo_t907 * __this, String_t* ___source, int32_t ___sindex, int32_t ___count, String_t* ___value, int32_t ___options, bool ___first, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CompareInfo::Finalize()
extern "C" void CompareInfo_Finalize_m5369 (CompareInfo_t907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::internal_compare_managed(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C" int32_t CompareInfo_internal_compare_managed_m5370 (CompareInfo_t907 * __this, String_t* ___str1, int32_t ___offset1, int32_t ___length1, String_t* ___str2, int32_t ___offset2, int32_t ___length2, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::internal_compare_switch(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C" int32_t CompareInfo_internal_compare_switch_m5371 (CompareInfo_t907 * __this, String_t* ___str1, int32_t ___offset1, int32_t ___length1, String_t* ___str2, int32_t ___offset2, int32_t ___length2, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.String)
extern "C" int32_t CompareInfo_Compare_m5372 (CompareInfo_t907 * __this, String_t* ___string1, String_t* ___string2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.String,System.Globalization.CompareOptions)
extern "C" int32_t CompareInfo_Compare_m5373 (CompareInfo_t907 * __this, String_t* ___string1, String_t* ___string2, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C" int32_t CompareInfo_Compare_m5374 (CompareInfo_t907 * __this, String_t* ___string1, int32_t ___offset1, int32_t ___length1, String_t* ___string2, int32_t ___offset2, int32_t ___length2, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CompareInfo::Equals(System.Object)
extern "C" bool CompareInfo_Equals_m5375 (CompareInfo_t907 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::GetHashCode()
extern "C" int32_t CompareInfo_GetHashCode_m5376 (CompareInfo_t907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.SortKey System.Globalization.CompareInfo::GetSortKey(System.String,System.Globalization.CompareOptions)
extern "C" SortKey_t963 * CompareInfo_GetSortKey_m5377 (CompareInfo_t907 * __this, String_t* ___source, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::IndexOf(System.String,System.String,System.Int32,System.Int32)
extern "C" int32_t CompareInfo_IndexOf_m5378 (CompareInfo_t907 * __this, String_t* ___source, String_t* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::internal_index_managed(System.String,System.Int32,System.Int32,System.String,System.Globalization.CompareOptions,System.Boolean)
extern "C" int32_t CompareInfo_internal_index_managed_m5379 (CompareInfo_t907 * __this, String_t* ___s1, int32_t ___sindex, int32_t ___count, String_t* ___s2, int32_t ___opt, bool ___first, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::internal_index_switch(System.String,System.Int32,System.Int32,System.String,System.Globalization.CompareOptions,System.Boolean)
extern "C" int32_t CompareInfo_internal_index_switch_m5380 (CompareInfo_t907 * __this, String_t* ___s1, int32_t ___sindex, int32_t ___count, String_t* ___s2, int32_t ___opt, bool ___first, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::IndexOf(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C" int32_t CompareInfo_IndexOf_m5381 (CompareInfo_t907 * __this, String_t* ___source, String_t* ___value, int32_t ___startIndex, int32_t ___count, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CompareInfo::IsPrefix(System.String,System.String,System.Globalization.CompareOptions)
extern "C" bool CompareInfo_IsPrefix_m5382 (CompareInfo_t907 * __this, String_t* ___source, String_t* ___prefix, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CompareInfo::IsSuffix(System.String,System.String,System.Globalization.CompareOptions)
extern "C" bool CompareInfo_IsSuffix_m5383 (CompareInfo_t907 * __this, String_t* ___source, String_t* ___suffix, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::LastIndexOf(System.String,System.String,System.Int32,System.Int32)
extern "C" int32_t CompareInfo_LastIndexOf_m5384 (CompareInfo_t907 * __this, String_t* ___source, String_t* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::LastIndexOf(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C" int32_t CompareInfo_LastIndexOf_m5385 (CompareInfo_t907 * __this, String_t* ___source, String_t* ___value, int32_t ___startIndex, int32_t ___count, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CompareInfo::ToString()
extern "C" String_t* CompareInfo_ToString_m5386 (CompareInfo_t907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::get_LCID()
extern "C" int32_t CompareInfo_get_LCID_m5387 (CompareInfo_t907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
