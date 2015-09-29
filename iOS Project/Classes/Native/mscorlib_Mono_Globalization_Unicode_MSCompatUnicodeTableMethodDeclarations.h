#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.MSCompatUnicodeTable
struct MSCompatUnicodeTable_t953;
// Mono.Globalization.Unicode.TailoringInfo
struct TailoringInfo_t947;
// System.Globalization.CultureInfo
struct CultureInfo_t376;
// Mono.Globalization.Unicode.Contraction[]
struct ContractionU5BU5D_t961;
// Mono.Globalization.Unicode.Level2Map[]
struct Level2MapU5BU5D_t962;
// System.String
struct String_t;
// Mono.Globalization.Unicode.CodePointIndexer
struct CodePointIndexer_t946;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::.cctor()
extern "C" void MSCompatUnicodeTable__cctor_m4621 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.TailoringInfo Mono.Globalization.Unicode.MSCompatUnicodeTable::GetTailoringInfo(System.Int32)
extern "C" TailoringInfo_t947 * MSCompatUnicodeTable_GetTailoringInfo_m4622 (Object_t * __this /* static, unused */, int32_t ___lcid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::BuildTailoringTables(System.Globalization.CultureInfo,Mono.Globalization.Unicode.TailoringInfo,Mono.Globalization.Unicode.Contraction[]&,Mono.Globalization.Unicode.Level2Map[]&)
extern "C" void MSCompatUnicodeTable_BuildTailoringTables_m4623 (Object_t * __this /* static, unused */, CultureInfo_t376 * ___culture, TailoringInfo_t947 * ___t, ContractionU5BU5D_t961** ___contractions, Level2MapU5BU5D_t962** ___diacriticals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::SetCJKReferences(System.String,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&,System.Byte*&,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&)
extern "C" void MSCompatUnicodeTable_SetCJKReferences_m4624 (Object_t * __this /* static, unused */, String_t* ___name, CodePointIndexer_t946 ** ___cjkIndexer, uint8_t** ___catTable, uint8_t** ___lv1Table, CodePointIndexer_t946 ** ___lv2Indexer, uint8_t** ___lv2Table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.MSCompatUnicodeTable::Category(System.Int32)
extern "C" uint8_t MSCompatUnicodeTable_Category_m4625 (Object_t * __this /* static, unused */, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.MSCompatUnicodeTable::Level1(System.Int32)
extern "C" uint8_t MSCompatUnicodeTable_Level1_m4626 (Object_t * __this /* static, unused */, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.MSCompatUnicodeTable::Level2(System.Int32)
extern "C" uint8_t MSCompatUnicodeTable_Level2_m4627 (Object_t * __this /* static, unused */, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.MSCompatUnicodeTable::Level3(System.Int32)
extern "C" uint8_t MSCompatUnicodeTable_Level3_m4628 (Object_t * __this /* static, unused */, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsIgnorable(System.Int32,System.Byte)
extern "C" bool MSCompatUnicodeTable_IsIgnorable_m4629 (Object_t * __this /* static, unused */, int32_t ___cp, uint8_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsIgnorableNonSpacing(System.Int32)
extern "C" bool MSCompatUnicodeTable_IsIgnorableNonSpacing_m4630 (Object_t * __this /* static, unused */, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.MSCompatUnicodeTable::ToKanaTypeInsensitive(System.Int32)
extern "C" int32_t MSCompatUnicodeTable_ToKanaTypeInsensitive_m4631 (Object_t * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.MSCompatUnicodeTable::ToWidthCompat(System.Int32)
extern "C" int32_t MSCompatUnicodeTable_ToWidthCompat_m4632 (Object_t * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::HasSpecialWeight(System.Char)
extern "C" bool MSCompatUnicodeTable_HasSpecialWeight_m4633 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsHalfWidthKana(System.Char)
extern "C" bool MSCompatUnicodeTable_IsHalfWidthKana_m4634 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsHiragana(System.Char)
extern "C" bool MSCompatUnicodeTable_IsHiragana_m4635 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsJapaneseSmallLetter(System.Char)
extern "C" bool MSCompatUnicodeTable_IsJapaneseSmallLetter_m4636 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Globalization.Unicode.MSCompatUnicodeTable::GetResource(System.String)
extern "C" IntPtr_t MSCompatUnicodeTable_GetResource_m4637 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Globalization.Unicode.MSCompatUnicodeTable::UInt32FromBytePtr(System.Byte*,System.UInt32)
extern "C" uint32_t MSCompatUnicodeTable_UInt32FromBytePtr_m4638 (Object_t * __this /* static, unused */, uint8_t* ___raw, uint32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::FillCJK(System.String,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&,System.Byte*&,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&)
extern "C" void MSCompatUnicodeTable_FillCJK_m4639 (Object_t * __this /* static, unused */, String_t* ___culture, CodePointIndexer_t946 ** ___cjkIndexer, uint8_t** ___catTable, uint8_t** ___lv1Table, CodePointIndexer_t946 ** ___lv2Indexer, uint8_t** ___lv2Table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::FillCJKCore(System.String,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&,System.Byte*&,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&)
extern "C" void MSCompatUnicodeTable_FillCJKCore_m4640 (Object_t * __this /* static, unused */, String_t* ___culture, CodePointIndexer_t946 ** ___cjkIndexer, uint8_t** ___catTable, uint8_t** ___lv1Table, CodePointIndexer_t946 ** ___cjkLv2Indexer, uint8_t** ___lv2Table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
