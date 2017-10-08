#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t993556171;
// System.String[]
struct StringU5BU5D_t2563340356;
// System.Byte[]
struct ByteU5BU5D_t790048969;
// System.String
struct String_t;
// System.Security.Cryptography.RSA
struct RSA_t3399184103;
// System.Reflection.Module
struct Module_t3781704096;
// System.Type
struct Type_t;
// System.Reflection.Emit.LocalBuilder[]
struct LocalBuilderU5BU5D_t707567211;
// System.Reflection.Emit.ILTokenInfo[]
struct ILTokenInfoU5BU5D_t2708734083;
// System.Reflection.Emit.ILGenerator/LabelData[]
struct LabelDataU5BU5D_t2423004871;
// System.Reflection.Emit.ILGenerator/LabelFixup[]
struct LabelFixupU5BU5D_t4142044778;
// System.Reflection.Emit.TokenGenerator
struct TokenGenerator_t1955170471;
// System.Void
struct Void_t3911667008;
// System.Reflection.ModuleResolveEventHandler
struct ModuleResolveEventHandler_t1693268077;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t712711328;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t2232778290;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_t1767180823;
// System.IntPtr[]
struct IntPtrU5BU5D_t3440565878;
// System.Collections.IDictionary
struct IDictionary_t1952629169;
// System.Boolean[]
struct BooleanU5BU5D_t2012589245;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t365221040;
// System.Char[]
struct CharU5BU5D_t233192964;
// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t2474551623;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t2166840081;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t2438381431;
// System.Security.Policy.Evidence
struct Evidence_t620674145;
// System.Security.PermissionSet
struct PermissionSet_t3784804660;
// System.Reflection.Assembly
struct Assembly_t2995492547;
// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t3589075774;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t1835837594;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t1541049976;
// System.Type[]
struct TypeU5BU5D_t2527952568;
// System.Reflection.MemberFilter
struct MemberFilter_t917391402;
// System.Reflection.Emit.ParameterBuilder[]
struct ParameterBuilderU5BU5D_t2719241758;
// System.Reflection.Emit.GenericTypeParameterBuilder[]
struct GenericTypeParameterBuilderU5BU5D_t3959944817;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t2420889449;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2133752174;
// System.Globalization.CultureInfo
struct CultureInfo_t1134286991;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t3023086057;
// System.Version
struct Version_t1834903876;
// System.Object[]
struct ObjectU5BU5D_t2640533940;
// System.Reflection.MonoMethod
struct MonoMethod_t;
// System.Reflection.TypeFilter
struct TypeFilter_t3449324972;
// System.Reflection.Emit.MethodBuilder[]
struct MethodBuilderU5BU5D_t1177375243;
// System.Reflection.Emit.ConstructorBuilder[]
struct ConstructorBuilderU5BU5D_t3472911591;
// System.Reflection.Emit.PropertyBuilder[]
struct PropertyBuilderU5BU5D_t2235307285;
// System.Reflection.Emit.FieldBuilder[]
struct FieldBuilderU5BU5D_t3602960745;
// System.Reflection.Emit.TypeBuilder[]
struct TypeBuilderU5BU5D_t3708399551;
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t1756322985;
// System.IAsyncResult
struct IAsyncResult_t1540755092;
// System.AsyncCallback
struct AsyncCallback_t2013852343;
// System.Delegate
struct Delegate_t77771241;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t2758415106;
// System.Collections.Hashtable
struct Hashtable_t1881663185;
// System.Int32[]
struct Int32U5BU5D_t977882480;
// System.Reflection.Emit.ModuleBuilderTokenGenerator
struct ModuleBuilderTokenGenerator_t59605324;
// System.Diagnostics.SymbolStore.ISymbolWriter
struct ISymbolWriter_t3219355681;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef MODULEBUILDERTOKENGENERATOR_T59605324_H
#define MODULEBUILDERTOKENGENERATOR_T59605324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ModuleBuilderTokenGenerator
struct  ModuleBuilderTokenGenerator_t59605324  : public RuntimeObject
{
public:
	// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.ModuleBuilderTokenGenerator::mb
	ModuleBuilder_t993556171 * ___mb_0;

public:
	inline static int32_t get_offset_of_mb_0() { return static_cast<int32_t>(offsetof(ModuleBuilderTokenGenerator_t59605324, ___mb_0)); }
	inline ModuleBuilder_t993556171 * get_mb_0() const { return ___mb_0; }
	inline ModuleBuilder_t993556171 ** get_address_of_mb_0() { return &___mb_0; }
	inline void set_mb_0(ModuleBuilder_t993556171 * value)
	{
		___mb_0 = value;
		Il2CppCodeGenWriteBarrier((&___mb_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULEBUILDERTOKENGENERATOR_T59605324_H
#ifndef VALUETYPE_T2090162233_H
#define VALUETYPE_T2090162233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2090162233  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2090162233_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2090162233_marshaled_com
{
};
#endif // VALUETYPE_T2090162233_H
#ifndef OPCODENAMES_T475096032_H
#define OPCODENAMES_T475096032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.OpCodeNames
struct  OpCodeNames_t475096032  : public RuntimeObject
{
public:

public:
};

struct OpCodeNames_t475096032_StaticFields
{
public:
	// System.String[] System.Reflection.Emit.OpCodeNames::names
	StringU5BU5D_t2563340356* ___names_0;

public:
	inline static int32_t get_offset_of_names_0() { return static_cast<int32_t>(offsetof(OpCodeNames_t475096032_StaticFields, ___names_0)); }
	inline StringU5BU5D_t2563340356* get_names_0() const { return ___names_0; }
	inline StringU5BU5D_t2563340356** get_address_of_names_0() { return &___names_0; }
	inline void set_names_0(StringU5BU5D_t2563340356* value)
	{
		___names_0 = value;
		Il2CppCodeGenWriteBarrier((&___names_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPCODENAMES_T475096032_H
#ifndef STRONGNAMEKEYPAIR_T3023086057_H
#define STRONGNAMEKEYPAIR_T3023086057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.StrongNameKeyPair
struct  StrongNameKeyPair_t3023086057  : public RuntimeObject
{
public:
	// System.Byte[] System.Reflection.StrongNameKeyPair::_publicKey
	ByteU5BU5D_t790048969* ____publicKey_0;
	// System.String System.Reflection.StrongNameKeyPair::_keyPairContainer
	String_t* ____keyPairContainer_1;
	// System.Boolean System.Reflection.StrongNameKeyPair::_keyPairExported
	bool ____keyPairExported_2;
	// System.Byte[] System.Reflection.StrongNameKeyPair::_keyPairArray
	ByteU5BU5D_t790048969* ____keyPairArray_3;
	// System.Security.Cryptography.RSA System.Reflection.StrongNameKeyPair::_rsa
	RSA_t3399184103 * ____rsa_4;

public:
	inline static int32_t get_offset_of__publicKey_0() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t3023086057, ____publicKey_0)); }
	inline ByteU5BU5D_t790048969* get__publicKey_0() const { return ____publicKey_0; }
	inline ByteU5BU5D_t790048969** get_address_of__publicKey_0() { return &____publicKey_0; }
	inline void set__publicKey_0(ByteU5BU5D_t790048969* value)
	{
		____publicKey_0 = value;
		Il2CppCodeGenWriteBarrier((&____publicKey_0), value);
	}

	inline static int32_t get_offset_of__keyPairContainer_1() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t3023086057, ____keyPairContainer_1)); }
	inline String_t* get__keyPairContainer_1() const { return ____keyPairContainer_1; }
	inline String_t** get_address_of__keyPairContainer_1() { return &____keyPairContainer_1; }
	inline void set__keyPairContainer_1(String_t* value)
	{
		____keyPairContainer_1 = value;
		Il2CppCodeGenWriteBarrier((&____keyPairContainer_1), value);
	}

	inline static int32_t get_offset_of__keyPairExported_2() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t3023086057, ____keyPairExported_2)); }
	inline bool get__keyPairExported_2() const { return ____keyPairExported_2; }
	inline bool* get_address_of__keyPairExported_2() { return &____keyPairExported_2; }
	inline void set__keyPairExported_2(bool value)
	{
		____keyPairExported_2 = value;
	}

	inline static int32_t get_offset_of__keyPairArray_3() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t3023086057, ____keyPairArray_3)); }
	inline ByteU5BU5D_t790048969* get__keyPairArray_3() const { return ____keyPairArray_3; }
	inline ByteU5BU5D_t790048969** get_address_of__keyPairArray_3() { return &____keyPairArray_3; }
	inline void set__keyPairArray_3(ByteU5BU5D_t790048969* value)
	{
		____keyPairArray_3 = value;
		Il2CppCodeGenWriteBarrier((&____keyPairArray_3), value);
	}

	inline static int32_t get_offset_of__rsa_4() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t3023086057, ____rsa_4)); }
	inline RSA_t3399184103 * get__rsa_4() const { return ____rsa_4; }
	inline RSA_t3399184103 ** get_address_of__rsa_4() { return &____rsa_4; }
	inline void set__rsa_4(RSA_t3399184103 * value)
	{
		____rsa_4 = value;
		Il2CppCodeGenWriteBarrier((&____rsa_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEKEYPAIR_T3023086057_H
#ifndef RESOURCECLOSEHANDLER_T68436358_H
#define RESOURCECLOSEHANDLER_T68436358_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly/ResourceCloseHandler
struct  ResourceCloseHandler_t68436358  : public RuntimeObject
{
public:
	// System.Reflection.Module System.Reflection.Assembly/ResourceCloseHandler::module
	Module_t3781704096 * ___module_0;

public:
	inline static int32_t get_offset_of_module_0() { return static_cast<int32_t>(offsetof(ResourceCloseHandler_t68436358, ___module_0)); }
	inline Module_t3781704096 * get_module_0() const { return ___module_0; }
	inline Module_t3781704096 ** get_address_of_module_0() { return &___module_0; }
	inline void set_module_0(Module_t3781704096 * value)
	{
		___module_0 = value;
		Il2CppCodeGenWriteBarrier((&___module_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCECLOSEHANDLER_T68436358_H
#ifndef ATTRIBUTE_T2408019351_H
#define ATTRIBUTE_T2408019351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t2408019351  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T2408019351_H
#ifndef LOCALVARIABLEINFO_T834394254_H
#define LOCALVARIABLEINFO_T834394254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.LocalVariableInfo
struct  LocalVariableInfo_t834394254  : public RuntimeObject
{
public:
	// System.Type System.Reflection.LocalVariableInfo::type
	Type_t * ___type_0;
	// System.Boolean System.Reflection.LocalVariableInfo::is_pinned
	bool ___is_pinned_1;
	// System.UInt16 System.Reflection.LocalVariableInfo::position
	uint16_t ___position_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(LocalVariableInfo_t834394254, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_is_pinned_1() { return static_cast<int32_t>(offsetof(LocalVariableInfo_t834394254, ___is_pinned_1)); }
	inline bool get_is_pinned_1() const { return ___is_pinned_1; }
	inline bool* get_address_of_is_pinned_1() { return &___is_pinned_1; }
	inline void set_is_pinned_1(bool value)
	{
		___is_pinned_1 = value;
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(LocalVariableInfo_t834394254, ___position_2)); }
	inline uint16_t get_position_2() const { return ___position_2; }
	inline uint16_t* get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(uint16_t value)
	{
		___position_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALVARIABLEINFO_T834394254_H
#ifndef BINDER_T3835233561_H
#define BINDER_T3835233561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Binder
struct  Binder_t3835233561  : public RuntimeObject
{
public:

public:
};

struct Binder_t3835233561_StaticFields
{
public:
	// System.Reflection.Binder System.Reflection.Binder::default_binder
	Binder_t3835233561 * ___default_binder_0;

public:
	inline static int32_t get_offset_of_default_binder_0() { return static_cast<int32_t>(offsetof(Binder_t3835233561_StaticFields, ___default_binder_0)); }
	inline Binder_t3835233561 * get_default_binder_0() const { return ___default_binder_0; }
	inline Binder_t3835233561 ** get_address_of_default_binder_0() { return &___default_binder_0; }
	inline void set_default_binder_0(Binder_t3835233561 * value)
	{
		___default_binder_0 = value;
		Il2CppCodeGenWriteBarrier((&___default_binder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDER_T3835233561_H
#ifndef ILGENERATOR_T365221040_H
#define ILGENERATOR_T365221040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILGenerator
struct  ILGenerator_t365221040  : public RuntimeObject
{
public:
	// System.Byte[] System.Reflection.Emit.ILGenerator::code
	ByteU5BU5D_t790048969* ___code_1;
	// System.Int32 System.Reflection.Emit.ILGenerator::code_len
	int32_t ___code_len_2;
	// System.Int32 System.Reflection.Emit.ILGenerator::max_stack
	int32_t ___max_stack_3;
	// System.Int32 System.Reflection.Emit.ILGenerator::cur_stack
	int32_t ___cur_stack_4;
	// System.Reflection.Emit.LocalBuilder[] System.Reflection.Emit.ILGenerator::locals
	LocalBuilderU5BU5D_t707567211* ___locals_5;
	// System.Int32 System.Reflection.Emit.ILGenerator::num_token_fixups
	int32_t ___num_token_fixups_6;
	// System.Reflection.Emit.ILTokenInfo[] System.Reflection.Emit.ILGenerator::token_fixups
	ILTokenInfoU5BU5D_t2708734083* ___token_fixups_7;
	// System.Reflection.Emit.ILGenerator/LabelData[] System.Reflection.Emit.ILGenerator::labels
	LabelDataU5BU5D_t2423004871* ___labels_8;
	// System.Int32 System.Reflection.Emit.ILGenerator::num_labels
	int32_t ___num_labels_9;
	// System.Reflection.Emit.ILGenerator/LabelFixup[] System.Reflection.Emit.ILGenerator::fixups
	LabelFixupU5BU5D_t4142044778* ___fixups_10;
	// System.Int32 System.Reflection.Emit.ILGenerator::num_fixups
	int32_t ___num_fixups_11;
	// System.Reflection.Module System.Reflection.Emit.ILGenerator::module
	Module_t3781704096 * ___module_12;
	// System.Reflection.Emit.TokenGenerator System.Reflection.Emit.ILGenerator::token_gen
	RuntimeObject* ___token_gen_13;

public:
	inline static int32_t get_offset_of_code_1() { return static_cast<int32_t>(offsetof(ILGenerator_t365221040, ___code_1)); }
	inline ByteU5BU5D_t790048969* get_code_1() const { return ___code_1; }
	inline ByteU5BU5D_t790048969** get_address_of_code_1() { return &___code_1; }
	inline void set_code_1(ByteU5BU5D_t790048969* value)
	{
		___code_1 = value;
		Il2CppCodeGenWriteBarrier((&___code_1), value);
	}

	inline static int32_t get_offset_of_code_len_2() { return static_cast<int32_t>(offsetof(ILGenerator_t365221040, ___code_len_2)); }
	inline int32_t get_code_len_2() const { return ___code_len_2; }
	inline int32_t* get_address_of_code_len_2() { return &___code_len_2; }
	inline void set_code_len_2(int32_t value)
	{
		___code_len_2 = value;
	}

	inline static int32_t get_offset_of_max_stack_3() { return static_cast<int32_t>(offsetof(ILGenerator_t365221040, ___max_stack_3)); }
	inline int32_t get_max_stack_3() const { return ___max_stack_3; }
	inline int32_t* get_address_of_max_stack_3() { return &___max_stack_3; }
	inline void set_max_stack_3(int32_t value)
	{
		___max_stack_3 = value;
	}

	inline static int32_t get_offset_of_cur_stack_4() { return static_cast<int32_t>(offsetof(ILGenerator_t365221040, ___cur_stack_4)); }
	inline int32_t get_cur_stack_4() const { return ___cur_stack_4; }
	inline int32_t* get_address_of_cur_stack_4() { return &___cur_stack_4; }
	inline void set_cur_stack_4(int32_t value)
	{
		___cur_stack_4 = value;
	}

	inline static int32_t get_offset_of_locals_5() { return static_cast<int32_t>(offsetof(ILGenerator_t365221040, ___locals_5)); }
	inline LocalBuilderU5BU5D_t707567211* get_locals_5() const { return ___locals_5; }
	inline LocalBuilderU5BU5D_t707567211** get_address_of_locals_5() { return &___locals_5; }
	inline void set_locals_5(LocalBuilderU5BU5D_t707567211* value)
	{
		___locals_5 = value;
		Il2CppCodeGenWriteBarrier((&___locals_5), value);
	}

	inline static int32_t get_offset_of_num_token_fixups_6() { return static_cast<int32_t>(offsetof(ILGenerator_t365221040, ___num_token_fixups_6)); }
	inline int32_t get_num_token_fixups_6() const { return ___num_token_fixups_6; }
	inline int32_t* get_address_of_num_token_fixups_6() { return &___num_token_fixups_6; }
	inline void set_num_token_fixups_6(int32_t value)
	{
		___num_token_fixups_6 = value;
	}

	inline static int32_t get_offset_of_token_fixups_7() { return static_cast<int32_t>(offsetof(ILGenerator_t365221040, ___token_fixups_7)); }
	inline ILTokenInfoU5BU5D_t2708734083* get_token_fixups_7() const { return ___token_fixups_7; }
	inline ILTokenInfoU5BU5D_t2708734083** get_address_of_token_fixups_7() { return &___token_fixups_7; }
	inline void set_token_fixups_7(ILTokenInfoU5BU5D_t2708734083* value)
	{
		___token_fixups_7 = value;
		Il2CppCodeGenWriteBarrier((&___token_fixups_7), value);
	}

	inline static int32_t get_offset_of_labels_8() { return static_cast<int32_t>(offsetof(ILGenerator_t365221040, ___labels_8)); }
	inline LabelDataU5BU5D_t2423004871* get_labels_8() const { return ___labels_8; }
	inline LabelDataU5BU5D_t2423004871** get_address_of_labels_8() { return &___labels_8; }
	inline void set_labels_8(LabelDataU5BU5D_t2423004871* value)
	{
		___labels_8 = value;
		Il2CppCodeGenWriteBarrier((&___labels_8), value);
	}

	inline static int32_t get_offset_of_num_labels_9() { return static_cast<int32_t>(offsetof(ILGenerator_t365221040, ___num_labels_9)); }
	inline int32_t get_num_labels_9() const { return ___num_labels_9; }
	inline int32_t* get_address_of_num_labels_9() { return &___num_labels_9; }
	inline void set_num_labels_9(int32_t value)
	{
		___num_labels_9 = value;
	}

	inline static int32_t get_offset_of_fixups_10() { return static_cast<int32_t>(offsetof(ILGenerator_t365221040, ___fixups_10)); }
	inline LabelFixupU5BU5D_t4142044778* get_fixups_10() const { return ___fixups_10; }
	inline LabelFixupU5BU5D_t4142044778** get_address_of_fixups_10() { return &___fixups_10; }
	inline void set_fixups_10(LabelFixupU5BU5D_t4142044778* value)
	{
		___fixups_10 = value;
		Il2CppCodeGenWriteBarrier((&___fixups_10), value);
	}

	inline static int32_t get_offset_of_num_fixups_11() { return static_cast<int32_t>(offsetof(ILGenerator_t365221040, ___num_fixups_11)); }
	inline int32_t get_num_fixups_11() const { return ___num_fixups_11; }
	inline int32_t* get_address_of_num_fixups_11() { return &___num_fixups_11; }
	inline void set_num_fixups_11(int32_t value)
	{
		___num_fixups_11 = value;
	}

	inline static int32_t get_offset_of_module_12() { return static_cast<int32_t>(offsetof(ILGenerator_t365221040, ___module_12)); }
	inline Module_t3781704096 * get_module_12() const { return ___module_12; }
	inline Module_t3781704096 ** get_address_of_module_12() { return &___module_12; }
	inline void set_module_12(Module_t3781704096 * value)
	{
		___module_12 = value;
		Il2CppCodeGenWriteBarrier((&___module_12), value);
	}

	inline static int32_t get_offset_of_token_gen_13() { return static_cast<int32_t>(offsetof(ILGenerator_t365221040, ___token_gen_13)); }
	inline RuntimeObject* get_token_gen_13() const { return ___token_gen_13; }
	inline RuntimeObject** get_address_of_token_gen_13() { return &___token_gen_13; }
	inline void set_token_gen_13(RuntimeObject* value)
	{
		___token_gen_13 = value;
		Il2CppCodeGenWriteBarrier((&___token_gen_13), value);
	}
};

struct ILGenerator_t365221040_StaticFields
{
public:
	// System.Type System.Reflection.Emit.ILGenerator::void_type
	Type_t * ___void_type_0;

public:
	inline static int32_t get_offset_of_void_type_0() { return static_cast<int32_t>(offsetof(ILGenerator_t365221040_StaticFields, ___void_type_0)); }
	inline Type_t * get_void_type_0() const { return ___void_type_0; }
	inline Type_t ** get_address_of_void_type_0() { return &___void_type_0; }
	inline void set_void_type_0(Type_t * value)
	{
		___void_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___void_type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ILGENERATOR_T365221040_H
#ifndef POINTER_T3446410285_H
#define POINTER_T3446410285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Pointer
struct  Pointer_t3446410285  : public RuntimeObject
{
public:
	// System.Void* System.Reflection.Pointer::data
	void* ___data_0;
	// System.Type System.Reflection.Pointer::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(Pointer_t3446410285, ___data_0)); }
	inline void* get_data_0() const { return ___data_0; }
	inline void** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(void* value)
	{
		___data_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(Pointer_t3446410285, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTER_T3446410285_H
#ifndef RESOLVEEVENTHOLDER_T2438381431_H
#define RESOLVEEVENTHOLDER_T2438381431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly/ResolveEventHolder
struct  ResolveEventHolder_t2438381431  : public RuntimeObject
{
public:
	// System.Reflection.ModuleResolveEventHandler System.Reflection.Assembly/ResolveEventHolder::ModuleResolve
	ModuleResolveEventHandler_t1693268077 * ___ModuleResolve_0;

public:
	inline static int32_t get_offset_of_ModuleResolve_0() { return static_cast<int32_t>(offsetof(ResolveEventHolder_t2438381431, ___ModuleResolve_0)); }
	inline ModuleResolveEventHandler_t1693268077 * get_ModuleResolve_0() const { return ___ModuleResolve_0; }
	inline ModuleResolveEventHandler_t1693268077 ** get_address_of_ModuleResolve_0() { return &___ModuleResolve_0; }
	inline void set_ModuleResolve_0(ModuleResolveEventHandler_t1693268077 * value)
	{
		___ModuleResolve_0 = value;
		Il2CppCodeGenWriteBarrier((&___ModuleResolve_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTHOLDER_T2438381431_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef CUSTOMATTRIBUTEDATA_T3646440611_H
#define CUSTOMATTRIBUTEDATA_T3646440611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeData
struct  CustomAttributeData_t3646440611  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t712711328 * ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	RuntimeObject* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	RuntimeObject* ___namedArgs_2;

public:
	inline static int32_t get_offset_of_ctorInfo_0() { return static_cast<int32_t>(offsetof(CustomAttributeData_t3646440611, ___ctorInfo_0)); }
	inline ConstructorInfo_t712711328 * get_ctorInfo_0() const { return ___ctorInfo_0; }
	inline ConstructorInfo_t712711328 ** get_address_of_ctorInfo_0() { return &___ctorInfo_0; }
	inline void set_ctorInfo_0(ConstructorInfo_t712711328 * value)
	{
		___ctorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___ctorInfo_0), value);
	}

	inline static int32_t get_offset_of_ctorArgs_1() { return static_cast<int32_t>(offsetof(CustomAttributeData_t3646440611, ___ctorArgs_1)); }
	inline RuntimeObject* get_ctorArgs_1() const { return ___ctorArgs_1; }
	inline RuntimeObject** get_address_of_ctorArgs_1() { return &___ctorArgs_1; }
	inline void set_ctorArgs_1(RuntimeObject* value)
	{
		___ctorArgs_1 = value;
		Il2CppCodeGenWriteBarrier((&___ctorArgs_1), value);
	}

	inline static int32_t get_offset_of_namedArgs_2() { return static_cast<int32_t>(offsetof(CustomAttributeData_t3646440611, ___namedArgs_2)); }
	inline RuntimeObject* get_namedArgs_2() const { return ___namedArgs_2; }
	inline RuntimeObject** get_address_of_namedArgs_2() { return &___namedArgs_2; }
	inline void set_namedArgs_2(RuntimeObject* value)
	{
		___namedArgs_2 = value;
		Il2CppCodeGenWriteBarrier((&___namedArgs_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMATTRIBUTEDATA_T3646440611_H
#ifndef MISSING_T2084968886_H
#define MISSING_T2084968886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Missing
struct  Missing_t2084968886  : public RuntimeObject
{
public:

public:
};

struct Missing_t2084968886_StaticFields
{
public:
	// System.Reflection.Missing System.Reflection.Missing::Value
	Missing_t2084968886 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Missing_t2084968886_StaticFields, ___Value_0)); }
	inline Missing_t2084968886 * get_Value_0() const { return ___Value_0; }
	inline Missing_t2084968886 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(Missing_t2084968886 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSING_T2084968886_H
#ifndef EXCEPTION_T3765817724_H
#define EXCEPTION_T3765817724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t3765817724  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t3440565878* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t3765817724 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t3765817724, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t3440565878* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t3440565878** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t3440565878* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t3765817724, ___inner_exception_1)); }
	inline Exception_t3765817724 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t3765817724 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t3765817724 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t3765817724, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t3765817724, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t3765817724, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t3765817724, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t3765817724, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t3765817724, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t3765817724, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t3765817724, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t3765817724, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T3765817724_H
#ifndef ASSEMBLYDEFAULTALIASATTRIBUTE_T3972386645_H
#define ASSEMBLYDEFAULTALIASATTRIBUTE_T3972386645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDefaultAliasAttribute
struct  AssemblyDefaultAliasAttribute_t3972386645  : public Attribute_t2408019351
{
public:
	// System.String System.Reflection.AssemblyDefaultAliasAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyDefaultAliasAttribute_t3972386645, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDEFAULTALIASATTRIBUTE_T3972386645_H
#ifndef ASSEMBLYDELAYSIGNATTRIBUTE_T3173294642_H
#define ASSEMBLYDELAYSIGNATTRIBUTE_T3173294642_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDelaySignAttribute
struct  AssemblyDelaySignAttribute_t3173294642  : public Attribute_t2408019351
{
public:
	// System.Boolean System.Reflection.AssemblyDelaySignAttribute::delay
	bool ___delay_0;

public:
	inline static int32_t get_offset_of_delay_0() { return static_cast<int32_t>(offsetof(AssemblyDelaySignAttribute_t3173294642, ___delay_0)); }
	inline bool get_delay_0() const { return ___delay_0; }
	inline bool* get_address_of_delay_0() { return &___delay_0; }
	inline void set_delay_0(bool value)
	{
		___delay_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDELAYSIGNATTRIBUTE_T3173294642_H
#ifndef ASSEMBLYDESCRIPTIONATTRIBUTE_T1300596732_H
#define ASSEMBLYDESCRIPTIONATTRIBUTE_T1300596732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDescriptionAttribute
struct  AssemblyDescriptionAttribute_t1300596732  : public Attribute_t2408019351
{
public:
	// System.String System.Reflection.AssemblyDescriptionAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyDescriptionAttribute_t1300596732, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDESCRIPTIONATTRIBUTE_T1300596732_H
#ifndef ASSEMBLYCOPYRIGHTATTRIBUTE_T2197104535_H
#define ASSEMBLYCOPYRIGHTATTRIBUTE_T2197104535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyCopyrightAttribute
struct  AssemblyCopyrightAttribute_t2197104535  : public Attribute_t2408019351
{
public:
	// System.String System.Reflection.AssemblyCopyrightAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyCopyrightAttribute_t2197104535, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYCOPYRIGHTATTRIBUTE_T2197104535_H
#ifndef ASSEMBLYFILEVERSIONATTRIBUTE_T2452209626_H
#define ASSEMBLYFILEVERSIONATTRIBUTE_T2452209626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyFileVersionAttribute
struct  AssemblyFileVersionAttribute_t2452209626  : public Attribute_t2408019351
{
public:
	// System.String System.Reflection.AssemblyFileVersionAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyFileVersionAttribute_t2452209626, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYFILEVERSIONATTRIBUTE_T2452209626_H
#ifndef ASSEMBLYCONFIGURATIONATTRIBUTE_T2715114950_H
#define ASSEMBLYCONFIGURATIONATTRIBUTE_T2715114950_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyConfigurationAttribute
struct  AssemblyConfigurationAttribute_t2715114950  : public Attribute_t2408019351
{
public:
	// System.String System.Reflection.AssemblyConfigurationAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyConfigurationAttribute_t2715114950, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYCONFIGURATIONATTRIBUTE_T2715114950_H
#ifndef ASSEMBLYKEYFILEATTRIBUTE_T3472747318_H
#define ASSEMBLYKEYFILEATTRIBUTE_T3472747318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyKeyFileAttribute
struct  AssemblyKeyFileAttribute_t3472747318  : public Attribute_t2408019351
{
public:
	// System.String System.Reflection.AssemblyKeyFileAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyKeyFileAttribute_t3472747318, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYKEYFILEATTRIBUTE_T3472747318_H
#ifndef TARGETEXCEPTION_T2125425491_H
#define TARGETEXCEPTION_T2125425491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetException
struct  TargetException_t2125425491  : public Exception_t3765817724
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETEXCEPTION_T2125425491_H
#ifndef ASSEMBLYPRODUCTATTRIBUTE_T4029260766_H
#define ASSEMBLYPRODUCTATTRIBUTE_T4029260766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyProductAttribute
struct  AssemblyProductAttribute_t4029260766  : public Attribute_t2408019351
{
public:
	// System.String System.Reflection.AssemblyProductAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyProductAttribute_t4029260766, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYPRODUCTATTRIBUTE_T4029260766_H
#ifndef ASSEMBLYTITLEATTRIBUTE_T2177772039_H
#define ASSEMBLYTITLEATTRIBUTE_T2177772039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyTitleAttribute
struct  AssemblyTitleAttribute_t2177772039  : public Attribute_t2408019351
{
public:
	// System.String System.Reflection.AssemblyTitleAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyTitleAttribute_t2177772039, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYTITLEATTRIBUTE_T2177772039_H
#ifndef ASSEMBLYTRADEMARKATTRIBUTE_T2384749210_H
#define ASSEMBLYTRADEMARKATTRIBUTE_T2384749210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyTrademarkAttribute
struct  AssemblyTrademarkAttribute_t2384749210  : public Attribute_t2408019351
{
public:
	// System.String System.Reflection.AssemblyTrademarkAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyTrademarkAttribute_t2384749210, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYTRADEMARKATTRIBUTE_T2384749210_H
#ifndef DEFAULT_T803115049_H
#define DEFAULT_T803115049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Binder/Default
struct  Default_t803115049  : public Binder_t3835233561
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULT_T803115049_H
#ifndef PARAMETERMODIFIER_T2618048512_H
#define PARAMETERMODIFIER_T2618048512_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterModifier
struct  ParameterModifier_t2618048512 
{
public:
	// System.Boolean[] System.Reflection.ParameterModifier::_byref
	BooleanU5BU5D_t2012589245* ____byref_0;

public:
	inline static int32_t get_offset_of__byref_0() { return static_cast<int32_t>(offsetof(ParameterModifier_t2618048512, ____byref_0)); }
	inline BooleanU5BU5D_t2012589245* get__byref_0() const { return ____byref_0; }
	inline BooleanU5BU5D_t2012589245** get_address_of__byref_0() { return &____byref_0; }
	inline void set__byref_0(BooleanU5BU5D_t2012589245* value)
	{
		____byref_0 = value;
		Il2CppCodeGenWriteBarrier((&____byref_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t2618048512_marshaled_pinvoke
{
	int32_t* ____byref_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t2618048512_marshaled_com
{
	int32_t* ____byref_0;
};
#endif // PARAMETERMODIFIER_T2618048512_H
#ifndef PROPERTYINFO_T_H
#define PROPERTYINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYINFO_T_H
#ifndef ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T540950129_H
#define ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T540950129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyInformationalVersionAttribute
struct  AssemblyInformationalVersionAttribute_t540950129  : public Attribute_t2408019351
{
public:
	// System.String System.Reflection.AssemblyInformationalVersionAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyInformationalVersionAttribute_t540950129, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T540950129_H
#ifndef METHODBASE_T3729707973_H
#define METHODBASE_T3729707973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t3729707973  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T3729707973_H
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
#ifndef TARGETINVOCATIONEXCEPTION_T3639793784_H
#define TARGETINVOCATIONEXCEPTION_T3639793784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetInvocationException
struct  TargetInvocationException_t3639793784  : public Exception_t3765817724
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETINVOCATIONEXCEPTION_T3639793784_H
#ifndef VOID_T3911667008_H
#define VOID_T3911667008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t3911667008 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T3911667008_H
#ifndef ILTOKENINFO_T2703604774_H
#define ILTOKENINFO_T2703604774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILTokenInfo
struct  ILTokenInfo_t2703604774 
{
public:
	// System.Reflection.MemberInfo System.Reflection.Emit.ILTokenInfo::member
	MemberInfo_t * ___member_0;
	// System.Int32 System.Reflection.Emit.ILTokenInfo::code_pos
	int32_t ___code_pos_1;

public:
	inline static int32_t get_offset_of_member_0() { return static_cast<int32_t>(offsetof(ILTokenInfo_t2703604774, ___member_0)); }
	inline MemberInfo_t * get_member_0() const { return ___member_0; }
	inline MemberInfo_t ** get_address_of_member_0() { return &___member_0; }
	inline void set_member_0(MemberInfo_t * value)
	{
		___member_0 = value;
		Il2CppCodeGenWriteBarrier((&___member_0), value);
	}

	inline static int32_t get_offset_of_code_pos_1() { return static_cast<int32_t>(offsetof(ILTokenInfo_t2703604774, ___code_pos_1)); }
	inline int32_t get_code_pos_1() const { return ___code_pos_1; }
	inline int32_t* get_address_of_code_pos_1() { return &___code_pos_1; }
	inline void set_code_pos_1(int32_t value)
	{
		___code_pos_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.ILTokenInfo
struct ILTokenInfo_t2703604774_marshaled_pinvoke
{
	MemberInfo_t * ___member_0;
	int32_t ___code_pos_1;
};
// Native definition for COM marshalling of System.Reflection.Emit.ILTokenInfo
struct ILTokenInfo_t2703604774_marshaled_com
{
	MemberInfo_t * ___member_0;
	int32_t ___code_pos_1;
};
#endif // ILTOKENINFO_T2703604774_H
#ifndef LABELFIXUP_T359068939_H
#define LABELFIXUP_T359068939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILGenerator/LabelFixup
struct  LabelFixup_t359068939 
{
public:
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelFixup::offset
	int32_t ___offset_0;
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelFixup::pos
	int32_t ___pos_1;
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelFixup::label_idx
	int32_t ___label_idx_2;

public:
	inline static int32_t get_offset_of_offset_0() { return static_cast<int32_t>(offsetof(LabelFixup_t359068939, ___offset_0)); }
	inline int32_t get_offset_0() const { return ___offset_0; }
	inline int32_t* get_address_of_offset_0() { return &___offset_0; }
	inline void set_offset_0(int32_t value)
	{
		___offset_0 = value;
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(LabelFixup_t359068939, ___pos_1)); }
	inline int32_t get_pos_1() const { return ___pos_1; }
	inline int32_t* get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(int32_t value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_label_idx_2() { return static_cast<int32_t>(offsetof(LabelFixup_t359068939, ___label_idx_2)); }
	inline int32_t get_label_idx_2() const { return ___label_idx_2; }
	inline int32_t* get_address_of_label_idx_2() { return &___label_idx_2; }
	inline void set_label_idx_2(int32_t value)
	{
		___label_idx_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LABELFIXUP_T359068939_H
#ifndef LABELDATA_T248639538_H
#define LABELDATA_T248639538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILGenerator/LabelData
struct  LabelData_t248639538 
{
public:
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelData::addr
	int32_t ___addr_0;
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelData::maxStack
	int32_t ___maxStack_1;

public:
	inline static int32_t get_offset_of_addr_0() { return static_cast<int32_t>(offsetof(LabelData_t248639538, ___addr_0)); }
	inline int32_t get_addr_0() const { return ___addr_0; }
	inline int32_t* get_address_of_addr_0() { return &___addr_0; }
	inline void set_addr_0(int32_t value)
	{
		___addr_0 = value;
	}

	inline static int32_t get_offset_of_maxStack_1() { return static_cast<int32_t>(offsetof(LabelData_t248639538, ___maxStack_1)); }
	inline int32_t get_maxStack_1() const { return ___maxStack_1; }
	inline int32_t* get_address_of_maxStack_1() { return &___maxStack_1; }
	inline void set_maxStack_1(int32_t value)
	{
		___maxStack_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LABELDATA_T248639538_H
#ifndef LABEL_T2538759339_H
#define LABEL_T2538759339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.Label
struct  Label_t2538759339 
{
public:
	// System.Int32 System.Reflection.Emit.Label::label
	int32_t ___label_0;

public:
	inline static int32_t get_offset_of_label_0() { return static_cast<int32_t>(offsetof(Label_t2538759339, ___label_0)); }
	inline int32_t get_label_0() const { return ___label_0; }
	inline int32_t* get_address_of_label_0() { return &___label_0; }
	inline void set_label_0(int32_t value)
	{
		___label_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LABEL_T2538759339_H
#ifndef LOCALBUILDER_T374478430_H
#define LOCALBUILDER_T374478430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.LocalBuilder
struct  LocalBuilder_t374478430  : public LocalVariableInfo_t834394254
{
public:
	// System.Reflection.Emit.ILGenerator System.Reflection.Emit.LocalBuilder::ilgen
	ILGenerator_t365221040 * ___ilgen_3;

public:
	inline static int32_t get_offset_of_ilgen_3() { return static_cast<int32_t>(offsetof(LocalBuilder_t374478430, ___ilgen_3)); }
	inline ILGenerator_t365221040 * get_ilgen_3() const { return ___ilgen_3; }
	inline ILGenerator_t365221040 ** get_address_of_ilgen_3() { return &___ilgen_3; }
	inline void set_ilgen_3(ILGenerator_t365221040 * value)
	{
		___ilgen_3 = value;
		Il2CppCodeGenWriteBarrier((&___ilgen_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALBUILDER_T374478430_H
#ifndef ASSEMBLYCOMPANYATTRIBUTE_T326698811_H
#define ASSEMBLYCOMPANYATTRIBUTE_T326698811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyCompanyAttribute
struct  AssemblyCompanyAttribute_t326698811  : public Attribute_t2408019351
{
public:
	// System.String System.Reflection.AssemblyCompanyAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyCompanyAttribute_t326698811, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYCOMPANYATTRIBUTE_T326698811_H
#ifndef METHODTOKEN_T3234769345_H
#define METHODTOKEN_T3234769345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.MethodToken
struct  MethodToken_t3234769345 
{
public:
	// System.Int32 System.Reflection.Emit.MethodToken::tokValue
	int32_t ___tokValue_0;

public:
	inline static int32_t get_offset_of_tokValue_0() { return static_cast<int32_t>(offsetof(MethodToken_t3234769345, ___tokValue_0)); }
	inline int32_t get_tokValue_0() const { return ___tokValue_0; }
	inline int32_t* get_address_of_tokValue_0() { return &___tokValue_0; }
	inline void set_tokValue_0(int32_t value)
	{
		___tokValue_0 = value;
	}
};

struct MethodToken_t3234769345_StaticFields
{
public:
	// System.Reflection.Emit.MethodToken System.Reflection.Emit.MethodToken::Empty
	MethodToken_t3234769345  ___Empty_1;

public:
	inline static int32_t get_offset_of_Empty_1() { return static_cast<int32_t>(offsetof(MethodToken_t3234769345_StaticFields, ___Empty_1)); }
	inline MethodToken_t3234769345  get_Empty_1() const { return ___Empty_1; }
	inline MethodToken_t3234769345 * get_address_of_Empty_1() { return &___Empty_1; }
	inline void set_Empty_1(MethodToken_t3234769345  value)
	{
		___Empty_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODTOKEN_T3234769345_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SYSTEMEXCEPTION_T972320735_H
#define SYSTEMEXCEPTION_T972320735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t972320735  : public Exception_t3765817724
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T972320735_H
#ifndef ENUM_T3437500853_H
#define ENUM_T3437500853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t3437500853  : public ValueType_t2090162233
{
public:

public:
};

struct Enum_t3437500853_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t233192964* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t3437500853_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t233192964* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t233192964** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t233192964* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t3437500853_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t3437500853_marshaled_com
{
};
#endif // ENUM_T3437500853_H
#ifndef NEUTRALRESOURCESLANGUAGEATTRIBUTE_T1795916304_H
#define NEUTRALRESOURCESLANGUAGEATTRIBUTE_T1795916304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.NeutralResourcesLanguageAttribute
struct  NeutralResourcesLanguageAttribute_t1795916304  : public Attribute_t2408019351
{
public:
	// System.String System.Resources.NeutralResourcesLanguageAttribute::culture
	String_t* ___culture_0;

public:
	inline static int32_t get_offset_of_culture_0() { return static_cast<int32_t>(offsetof(NeutralResourcesLanguageAttribute_t1795916304, ___culture_0)); }
	inline String_t* get_culture_0() const { return ___culture_0; }
	inline String_t** get_address_of_culture_0() { return &___culture_0; }
	inline void set_culture_0(String_t* value)
	{
		___culture_0 = value;
		Il2CppCodeGenWriteBarrier((&___culture_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEUTRALRESOURCESLANGUAGEATTRIBUTE_T1795916304_H
#ifndef EVENTINFO_T_H
#define EVENTINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventInfo
struct  EventInfo_t  : public MemberInfo_t
{
public:
	// System.Reflection.EventInfo/AddEventAdapter System.Reflection.EventInfo::cached_add_event
	AddEventAdapter_t2474551623 * ___cached_add_event_0;

public:
	inline static int32_t get_offset_of_cached_add_event_0() { return static_cast<int32_t>(offsetof(EventInfo_t, ___cached_add_event_0)); }
	inline AddEventAdapter_t2474551623 * get_cached_add_event_0() const { return ___cached_add_event_0; }
	inline AddEventAdapter_t2474551623 ** get_address_of_cached_add_event_0() { return &___cached_add_event_0; }
	inline void set_cached_add_event_0(AddEventAdapter_t2474551623 * value)
	{
		___cached_add_event_0 = value;
		Il2CppCodeGenWriteBarrier((&___cached_add_event_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTINFO_T_H
#ifndef TARGETPARAMETERCOUNTEXCEPTION_T2717343117_H
#define TARGETPARAMETERCOUNTEXCEPTION_T2717343117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetParameterCountException
struct  TargetParameterCountException_t2717343117  : public Exception_t3765817724
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETPARAMETERCOUNTEXCEPTION_T2717343117_H
#ifndef OPCODE_T2368491978_H
#define OPCODE_T2368491978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.OpCode
struct  OpCode_t2368491978 
{
public:
	// System.Byte System.Reflection.Emit.OpCode::op1
	uint8_t ___op1_0;
	// System.Byte System.Reflection.Emit.OpCode::op2
	uint8_t ___op2_1;
	// System.Byte System.Reflection.Emit.OpCode::push
	uint8_t ___push_2;
	// System.Byte System.Reflection.Emit.OpCode::pop
	uint8_t ___pop_3;
	// System.Byte System.Reflection.Emit.OpCode::size
	uint8_t ___size_4;
	// System.Byte System.Reflection.Emit.OpCode::type
	uint8_t ___type_5;
	// System.Byte System.Reflection.Emit.OpCode::args
	uint8_t ___args_6;
	// System.Byte System.Reflection.Emit.OpCode::flow
	uint8_t ___flow_7;

public:
	inline static int32_t get_offset_of_op1_0() { return static_cast<int32_t>(offsetof(OpCode_t2368491978, ___op1_0)); }
	inline uint8_t get_op1_0() const { return ___op1_0; }
	inline uint8_t* get_address_of_op1_0() { return &___op1_0; }
	inline void set_op1_0(uint8_t value)
	{
		___op1_0 = value;
	}

	inline static int32_t get_offset_of_op2_1() { return static_cast<int32_t>(offsetof(OpCode_t2368491978, ___op2_1)); }
	inline uint8_t get_op2_1() const { return ___op2_1; }
	inline uint8_t* get_address_of_op2_1() { return &___op2_1; }
	inline void set_op2_1(uint8_t value)
	{
		___op2_1 = value;
	}

	inline static int32_t get_offset_of_push_2() { return static_cast<int32_t>(offsetof(OpCode_t2368491978, ___push_2)); }
	inline uint8_t get_push_2() const { return ___push_2; }
	inline uint8_t* get_address_of_push_2() { return &___push_2; }
	inline void set_push_2(uint8_t value)
	{
		___push_2 = value;
	}

	inline static int32_t get_offset_of_pop_3() { return static_cast<int32_t>(offsetof(OpCode_t2368491978, ___pop_3)); }
	inline uint8_t get_pop_3() const { return ___pop_3; }
	inline uint8_t* get_address_of_pop_3() { return &___pop_3; }
	inline void set_pop_3(uint8_t value)
	{
		___pop_3 = value;
	}

	inline static int32_t get_offset_of_size_4() { return static_cast<int32_t>(offsetof(OpCode_t2368491978, ___size_4)); }
	inline uint8_t get_size_4() const { return ___size_4; }
	inline uint8_t* get_address_of_size_4() { return &___size_4; }
	inline void set_size_4(uint8_t value)
	{
		___size_4 = value;
	}

	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(OpCode_t2368491978, ___type_5)); }
	inline uint8_t get_type_5() const { return ___type_5; }
	inline uint8_t* get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(uint8_t value)
	{
		___type_5 = value;
	}

	inline static int32_t get_offset_of_args_6() { return static_cast<int32_t>(offsetof(OpCode_t2368491978, ___args_6)); }
	inline uint8_t get_args_6() const { return ___args_6; }
	inline uint8_t* get_address_of_args_6() { return &___args_6; }
	inline void set_args_6(uint8_t value)
	{
		___args_6 = value;
	}

	inline static int32_t get_offset_of_flow_7() { return static_cast<int32_t>(offsetof(OpCode_t2368491978, ___flow_7)); }
	inline uint8_t get_flow_7() const { return ___flow_7; }
	inline uint8_t* get_address_of_flow_7() { return &___flow_7; }
	inline void set_flow_7(uint8_t value)
	{
		___flow_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPCODE_T2368491978_H
#ifndef CUSTOMATTRIBUTETYPEDARGUMENT_T215531209_H
#define CUSTOMATTRIBUTETYPEDARGUMENT_T215531209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t215531209 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t215531209, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___argumentType_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t215531209, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t215531209_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t215531209_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
#endif // CUSTOMATTRIBUTETYPEDARGUMENT_T215531209_H
#ifndef PINFO_T1848253222_H
#define PINFO_T1848253222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PInfo
struct  PInfo_t1848253222 
{
public:
	// System.Int32 System.Reflection.PInfo::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PInfo_t1848253222, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PINFO_T1848253222_H
#ifndef PARAMETERATTRIBUTES_T2401836334_H
#define PARAMETERATTRIBUTES_T2401836334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterAttributes
struct  ParameterAttributes_t2401836334 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParameterAttributes_t2401836334, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERATTRIBUTES_T2401836334_H
#ifndef MONOEVENT_T_H
#define MONOEVENT_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoEvent
struct  MonoEvent_t  : public EventInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoEvent::klass
	IntPtr_t ___klass_1;
	// System.IntPtr System.Reflection.MonoEvent::handle
	IntPtr_t ___handle_2;

public:
	inline static int32_t get_offset_of_klass_1() { return static_cast<int32_t>(offsetof(MonoEvent_t, ___klass_1)); }
	inline IntPtr_t get_klass_1() const { return ___klass_1; }
	inline IntPtr_t* get_address_of_klass_1() { return &___klass_1; }
	inline void set_klass_1(IntPtr_t value)
	{
		___klass_1 = value;
	}

	inline static int32_t get_offset_of_handle_2() { return static_cast<int32_t>(offsetof(MonoEvent_t, ___handle_2)); }
	inline IntPtr_t get_handle_2() const { return ___handle_2; }
	inline IntPtr_t* get_address_of_handle_2() { return &___handle_2; }
	inline void set_handle_2(IntPtr_t value)
	{
		___handle_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOEVENT_T_H
#ifndef FIELDATTRIBUTES_T3288297181_H
#define FIELDATTRIBUTES_T3288297181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldAttributes
struct  FieldAttributes_t3288297181 
{
public:
	// System.Int32 System.Reflection.FieldAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FieldAttributes_t3288297181, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDATTRIBUTES_T3288297181_H
#ifndef PROPERTYATTRIBUTES_T3131603416_H
#define PROPERTYATTRIBUTES_T3131603416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyAttributes
struct  PropertyAttributes_t3131603416 
{
public:
	// System.Int32 System.Reflection.PropertyAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PropertyAttributes_t3131603416, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYATTRIBUTES_T3131603416_H
#ifndef RESOURCEATTRIBUTES_T4084341001_H
#define RESOURCEATTRIBUTES_T4084341001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ResourceAttributes
struct  ResourceAttributes_t4084341001 
{
public:
	// System.Int32 System.Reflection.ResourceAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ResourceAttributes_t4084341001, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEATTRIBUTES_T4084341001_H
#ifndef RESOURCELOCATION_T3276512613_H
#define RESOURCELOCATION_T3276512613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ResourceLocation
struct  ResourceLocation_t3276512613 
{
public:
	// System.Int32 System.Reflection.ResourceLocation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ResourceLocation_t3276512613, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCELOCATION_T3276512613_H
#ifndef TYPEATTRIBUTES_T965884859_H
#define TYPEATTRIBUTES_T965884859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeAttributes
struct  TypeAttributes_t965884859 
{
public:
	// System.Int32 System.Reflection.TypeAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeAttributes_t965884859, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEATTRIBUTES_T965884859_H
#ifndef RUNTIMEMETHODHANDLE_T2363731392_H
#define RUNTIMEMETHODHANDLE_T2363731392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeMethodHandle
struct  RuntimeMethodHandle_t2363731392 
{
public:
	// System.IntPtr System.RuntimeMethodHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t2363731392, ___value_0)); }
	inline IntPtr_t get_value_0() const { return ___value_0; }
	inline IntPtr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(IntPtr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEMETHODHANDLE_T2363731392_H
#ifndef UNMANAGEDTYPE_T3086549377_H
#define UNMANAGEDTYPE_T3086549377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedType
struct  UnmanagedType_t3086549377 
{
public:
	// System.Int32 System.Runtime.InteropServices.UnmanagedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnmanagedType_t3086549377, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDTYPE_T3086549377_H
#ifndef ASSEMBLYHASHALGORITHM_T1020511023_H
#define ASSEMBLYHASHALGORITHM_T1020511023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyHashAlgorithm
struct  AssemblyHashAlgorithm_t1020511023 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyHashAlgorithm::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyHashAlgorithm_t1020511023, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYHASHALGORITHM_T1020511023_H
#ifndef ASSEMBLYVERSIONCOMPATIBILITY_T1441624298_H
#define ASSEMBLYVERSIONCOMPATIBILITY_T1441624298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyVersionCompatibility
struct  AssemblyVersionCompatibility_t1441624298 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyVersionCompatibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyVersionCompatibility_t1441624298, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYVERSIONCOMPATIBILITY_T1441624298_H
#ifndef RUNTIMEFIELDHANDLE_T2468717698_H
#define RUNTIMEFIELDHANDLE_T2468717698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t2468717698 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t2468717698, ___value_0)); }
	inline IntPtr_t get_value_0() const { return ___value_0; }
	inline IntPtr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(IntPtr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T2468717698_H
#ifndef PROCESSORARCHITECTURE_T2011319080_H
#define PROCESSORARCHITECTURE_T2011319080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ProcessorArchitecture
struct  ProcessorArchitecture_t2011319080 
{
public:
	// System.Int32 System.Reflection.ProcessorArchitecture::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProcessorArchitecture_t2011319080, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROCESSORARCHITECTURE_T2011319080_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t3729707973
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef DELEGATE_T77771241_H
#define DELEGATE_T77771241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t77771241  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t2166840081 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t77771241, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t77771241, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t77771241, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t77771241, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t77771241, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t77771241, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t77771241, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t77771241, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t77771241, ___data_8)); }
	inline DelegateData_t2166840081 * get_data_8() const { return ___data_8; }
	inline DelegateData_t2166840081 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t2166840081 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T77771241_H
#ifndef METHODATTRIBUTES_T2795530895_H
#define METHODATTRIBUTES_T2795530895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodAttributes
struct  MethodAttributes_t2795530895 
{
public:
	// System.Int32 System.Reflection.MethodAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodAttributes_t2795530895, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODATTRIBUTES_T2795530895_H
#ifndef OPCODES_T670429032_H
#define OPCODES_T670429032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.OpCodes
struct  OpCodes_t670429032  : public RuntimeObject
{
public:

public:
};

struct OpCodes_t670429032_StaticFields
{
public:
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Nop
	OpCode_t2368491978  ___Nop_0;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Break
	OpCode_t2368491978  ___Break_1;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg_0
	OpCode_t2368491978  ___Ldarg_0_2;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg_1
	OpCode_t2368491978  ___Ldarg_1_3;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg_2
	OpCode_t2368491978  ___Ldarg_2_4;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg_3
	OpCode_t2368491978  ___Ldarg_3_5;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc_0
	OpCode_t2368491978  ___Ldloc_0_6;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc_1
	OpCode_t2368491978  ___Ldloc_1_7;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc_2
	OpCode_t2368491978  ___Ldloc_2_8;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc_3
	OpCode_t2368491978  ___Ldloc_3_9;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc_0
	OpCode_t2368491978  ___Stloc_0_10;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc_1
	OpCode_t2368491978  ___Stloc_1_11;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc_2
	OpCode_t2368491978  ___Stloc_2_12;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc_3
	OpCode_t2368491978  ___Stloc_3_13;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg_S
	OpCode_t2368491978  ___Ldarg_S_14;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarga_S
	OpCode_t2368491978  ___Ldarga_S_15;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Starg_S
	OpCode_t2368491978  ___Starg_S_16;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc_S
	OpCode_t2368491978  ___Ldloc_S_17;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloca_S
	OpCode_t2368491978  ___Ldloca_S_18;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc_S
	OpCode_t2368491978  ___Stloc_S_19;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldnull
	OpCode_t2368491978  ___Ldnull_20;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_M1
	OpCode_t2368491978  ___Ldc_I4_M1_21;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_0
	OpCode_t2368491978  ___Ldc_I4_0_22;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_1
	OpCode_t2368491978  ___Ldc_I4_1_23;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_2
	OpCode_t2368491978  ___Ldc_I4_2_24;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_3
	OpCode_t2368491978  ___Ldc_I4_3_25;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_4
	OpCode_t2368491978  ___Ldc_I4_4_26;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_5
	OpCode_t2368491978  ___Ldc_I4_5_27;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_6
	OpCode_t2368491978  ___Ldc_I4_6_28;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_7
	OpCode_t2368491978  ___Ldc_I4_7_29;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_8
	OpCode_t2368491978  ___Ldc_I4_8_30;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_S
	OpCode_t2368491978  ___Ldc_I4_S_31;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4
	OpCode_t2368491978  ___Ldc_I4_32;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I8
	OpCode_t2368491978  ___Ldc_I8_33;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_R4
	OpCode_t2368491978  ___Ldc_R4_34;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_R8
	OpCode_t2368491978  ___Ldc_R8_35;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Dup
	OpCode_t2368491978  ___Dup_36;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Pop
	OpCode_t2368491978  ___Pop_37;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Jmp
	OpCode_t2368491978  ___Jmp_38;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Call
	OpCode_t2368491978  ___Call_39;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Calli
	OpCode_t2368491978  ___Calli_40;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ret
	OpCode_t2368491978  ___Ret_41;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Br_S
	OpCode_t2368491978  ___Br_S_42;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Brfalse_S
	OpCode_t2368491978  ___Brfalse_S_43;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Brtrue_S
	OpCode_t2368491978  ___Brtrue_S_44;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Beq_S
	OpCode_t2368491978  ___Beq_S_45;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bge_S
	OpCode_t2368491978  ___Bge_S_46;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bgt_S
	OpCode_t2368491978  ___Bgt_S_47;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ble_S
	OpCode_t2368491978  ___Ble_S_48;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Blt_S
	OpCode_t2368491978  ___Blt_S_49;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bne_Un_S
	OpCode_t2368491978  ___Bne_Un_S_50;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bge_Un_S
	OpCode_t2368491978  ___Bge_Un_S_51;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bgt_Un_S
	OpCode_t2368491978  ___Bgt_Un_S_52;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ble_Un_S
	OpCode_t2368491978  ___Ble_Un_S_53;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Blt_Un_S
	OpCode_t2368491978  ___Blt_Un_S_54;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Br
	OpCode_t2368491978  ___Br_55;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Brfalse
	OpCode_t2368491978  ___Brfalse_56;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Brtrue
	OpCode_t2368491978  ___Brtrue_57;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Beq
	OpCode_t2368491978  ___Beq_58;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bge
	OpCode_t2368491978  ___Bge_59;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bgt
	OpCode_t2368491978  ___Bgt_60;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ble
	OpCode_t2368491978  ___Ble_61;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Blt
	OpCode_t2368491978  ___Blt_62;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bne_Un
	OpCode_t2368491978  ___Bne_Un_63;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bge_Un
	OpCode_t2368491978  ___Bge_Un_64;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bgt_Un
	OpCode_t2368491978  ___Bgt_Un_65;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ble_Un
	OpCode_t2368491978  ___Ble_Un_66;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Blt_Un
	OpCode_t2368491978  ___Blt_Un_67;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Switch
	OpCode_t2368491978  ___Switch_68;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_I1
	OpCode_t2368491978  ___Ldind_I1_69;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_U1
	OpCode_t2368491978  ___Ldind_U1_70;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_I2
	OpCode_t2368491978  ___Ldind_I2_71;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_U2
	OpCode_t2368491978  ___Ldind_U2_72;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_I4
	OpCode_t2368491978  ___Ldind_I4_73;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_U4
	OpCode_t2368491978  ___Ldind_U4_74;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_I8
	OpCode_t2368491978  ___Ldind_I8_75;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_I
	OpCode_t2368491978  ___Ldind_I_76;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_R4
	OpCode_t2368491978  ___Ldind_R4_77;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_R8
	OpCode_t2368491978  ___Ldind_R8_78;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_Ref
	OpCode_t2368491978  ___Ldind_Ref_79;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_Ref
	OpCode_t2368491978  ___Stind_Ref_80;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_I1
	OpCode_t2368491978  ___Stind_I1_81;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_I2
	OpCode_t2368491978  ___Stind_I2_82;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_I4
	OpCode_t2368491978  ___Stind_I4_83;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_I8
	OpCode_t2368491978  ___Stind_I8_84;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_R4
	OpCode_t2368491978  ___Stind_R4_85;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_R8
	OpCode_t2368491978  ___Stind_R8_86;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Add
	OpCode_t2368491978  ___Add_87;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Sub
	OpCode_t2368491978  ___Sub_88;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Mul
	OpCode_t2368491978  ___Mul_89;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Div
	OpCode_t2368491978  ___Div_90;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Div_Un
	OpCode_t2368491978  ___Div_Un_91;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Rem
	OpCode_t2368491978  ___Rem_92;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Rem_Un
	OpCode_t2368491978  ___Rem_Un_93;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::And
	OpCode_t2368491978  ___And_94;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Or
	OpCode_t2368491978  ___Or_95;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Xor
	OpCode_t2368491978  ___Xor_96;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Shl
	OpCode_t2368491978  ___Shl_97;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Shr
	OpCode_t2368491978  ___Shr_98;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Shr_Un
	OpCode_t2368491978  ___Shr_Un_99;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Neg
	OpCode_t2368491978  ___Neg_100;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Not
	OpCode_t2368491978  ___Not_101;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_I1
	OpCode_t2368491978  ___Conv_I1_102;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_I2
	OpCode_t2368491978  ___Conv_I2_103;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_I4
	OpCode_t2368491978  ___Conv_I4_104;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_I8
	OpCode_t2368491978  ___Conv_I8_105;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_R4
	OpCode_t2368491978  ___Conv_R4_106;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_R8
	OpCode_t2368491978  ___Conv_R8_107;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_U4
	OpCode_t2368491978  ___Conv_U4_108;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_U8
	OpCode_t2368491978  ___Conv_U8_109;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Callvirt
	OpCode_t2368491978  ___Callvirt_110;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Cpobj
	OpCode_t2368491978  ___Cpobj_111;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldobj
	OpCode_t2368491978  ___Ldobj_112;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldstr
	OpCode_t2368491978  ___Ldstr_113;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Newobj
	OpCode_t2368491978  ___Newobj_114;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Castclass
	OpCode_t2368491978  ___Castclass_115;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Isinst
	OpCode_t2368491978  ___Isinst_116;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_R_Un
	OpCode_t2368491978  ___Conv_R_Un_117;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Unbox
	OpCode_t2368491978  ___Unbox_118;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Throw
	OpCode_t2368491978  ___Throw_119;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldfld
	OpCode_t2368491978  ___Ldfld_120;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldflda
	OpCode_t2368491978  ___Ldflda_121;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stfld
	OpCode_t2368491978  ___Stfld_122;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldsfld
	OpCode_t2368491978  ___Ldsfld_123;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldsflda
	OpCode_t2368491978  ___Ldsflda_124;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stsfld
	OpCode_t2368491978  ___Stsfld_125;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stobj
	OpCode_t2368491978  ___Stobj_126;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I1_Un
	OpCode_t2368491978  ___Conv_Ovf_I1_Un_127;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I2_Un
	OpCode_t2368491978  ___Conv_Ovf_I2_Un_128;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I4_Un
	OpCode_t2368491978  ___Conv_Ovf_I4_Un_129;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I8_Un
	OpCode_t2368491978  ___Conv_Ovf_I8_Un_130;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U1_Un
	OpCode_t2368491978  ___Conv_Ovf_U1_Un_131;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U2_Un
	OpCode_t2368491978  ___Conv_Ovf_U2_Un_132;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U4_Un
	OpCode_t2368491978  ___Conv_Ovf_U4_Un_133;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U8_Un
	OpCode_t2368491978  ___Conv_Ovf_U8_Un_134;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I_Un
	OpCode_t2368491978  ___Conv_Ovf_I_Un_135;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U_Un
	OpCode_t2368491978  ___Conv_Ovf_U_Un_136;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Box
	OpCode_t2368491978  ___Box_137;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Newarr
	OpCode_t2368491978  ___Newarr_138;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldlen
	OpCode_t2368491978  ___Ldlen_139;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelema
	OpCode_t2368491978  ___Ldelema_140;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_I1
	OpCode_t2368491978  ___Ldelem_I1_141;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_U1
	OpCode_t2368491978  ___Ldelem_U1_142;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_I2
	OpCode_t2368491978  ___Ldelem_I2_143;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_U2
	OpCode_t2368491978  ___Ldelem_U2_144;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_I4
	OpCode_t2368491978  ___Ldelem_I4_145;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_U4
	OpCode_t2368491978  ___Ldelem_U4_146;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_I8
	OpCode_t2368491978  ___Ldelem_I8_147;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_I
	OpCode_t2368491978  ___Ldelem_I_148;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_R4
	OpCode_t2368491978  ___Ldelem_R4_149;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_R8
	OpCode_t2368491978  ___Ldelem_R8_150;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_Ref
	OpCode_t2368491978  ___Ldelem_Ref_151;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_I
	OpCode_t2368491978  ___Stelem_I_152;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_I1
	OpCode_t2368491978  ___Stelem_I1_153;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_I2
	OpCode_t2368491978  ___Stelem_I2_154;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_I4
	OpCode_t2368491978  ___Stelem_I4_155;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_I8
	OpCode_t2368491978  ___Stelem_I8_156;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_R4
	OpCode_t2368491978  ___Stelem_R4_157;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_R8
	OpCode_t2368491978  ___Stelem_R8_158;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_Ref
	OpCode_t2368491978  ___Stelem_Ref_159;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem
	OpCode_t2368491978  ___Ldelem_160;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem
	OpCode_t2368491978  ___Stelem_161;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Unbox_Any
	OpCode_t2368491978  ___Unbox_Any_162;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I1
	OpCode_t2368491978  ___Conv_Ovf_I1_163;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U1
	OpCode_t2368491978  ___Conv_Ovf_U1_164;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I2
	OpCode_t2368491978  ___Conv_Ovf_I2_165;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U2
	OpCode_t2368491978  ___Conv_Ovf_U2_166;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I4
	OpCode_t2368491978  ___Conv_Ovf_I4_167;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U4
	OpCode_t2368491978  ___Conv_Ovf_U4_168;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I8
	OpCode_t2368491978  ___Conv_Ovf_I8_169;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U8
	OpCode_t2368491978  ___Conv_Ovf_U8_170;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Refanyval
	OpCode_t2368491978  ___Refanyval_171;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ckfinite
	OpCode_t2368491978  ___Ckfinite_172;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Mkrefany
	OpCode_t2368491978  ___Mkrefany_173;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldtoken
	OpCode_t2368491978  ___Ldtoken_174;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_U2
	OpCode_t2368491978  ___Conv_U2_175;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_U1
	OpCode_t2368491978  ___Conv_U1_176;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_I
	OpCode_t2368491978  ___Conv_I_177;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I
	OpCode_t2368491978  ___Conv_Ovf_I_178;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U
	OpCode_t2368491978  ___Conv_Ovf_U_179;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Add_Ovf
	OpCode_t2368491978  ___Add_Ovf_180;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Add_Ovf_Un
	OpCode_t2368491978  ___Add_Ovf_Un_181;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Mul_Ovf
	OpCode_t2368491978  ___Mul_Ovf_182;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Mul_Ovf_Un
	OpCode_t2368491978  ___Mul_Ovf_Un_183;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Sub_Ovf
	OpCode_t2368491978  ___Sub_Ovf_184;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Sub_Ovf_Un
	OpCode_t2368491978  ___Sub_Ovf_Un_185;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Endfinally
	OpCode_t2368491978  ___Endfinally_186;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Leave
	OpCode_t2368491978  ___Leave_187;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Leave_S
	OpCode_t2368491978  ___Leave_S_188;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_I
	OpCode_t2368491978  ___Stind_I_189;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_U
	OpCode_t2368491978  ___Conv_U_190;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix7
	OpCode_t2368491978  ___Prefix7_191;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix6
	OpCode_t2368491978  ___Prefix6_192;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix5
	OpCode_t2368491978  ___Prefix5_193;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix4
	OpCode_t2368491978  ___Prefix4_194;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix3
	OpCode_t2368491978  ___Prefix3_195;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix2
	OpCode_t2368491978  ___Prefix2_196;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix1
	OpCode_t2368491978  ___Prefix1_197;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefixref
	OpCode_t2368491978  ___Prefixref_198;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Arglist
	OpCode_t2368491978  ___Arglist_199;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ceq
	OpCode_t2368491978  ___Ceq_200;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Cgt
	OpCode_t2368491978  ___Cgt_201;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Cgt_Un
	OpCode_t2368491978  ___Cgt_Un_202;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Clt
	OpCode_t2368491978  ___Clt_203;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Clt_Un
	OpCode_t2368491978  ___Clt_Un_204;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldftn
	OpCode_t2368491978  ___Ldftn_205;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldvirtftn
	OpCode_t2368491978  ___Ldvirtftn_206;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg
	OpCode_t2368491978  ___Ldarg_207;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarga
	OpCode_t2368491978  ___Ldarga_208;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Starg
	OpCode_t2368491978  ___Starg_209;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc
	OpCode_t2368491978  ___Ldloc_210;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloca
	OpCode_t2368491978  ___Ldloca_211;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc
	OpCode_t2368491978  ___Stloc_212;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Localloc
	OpCode_t2368491978  ___Localloc_213;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Endfilter
	OpCode_t2368491978  ___Endfilter_214;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Unaligned
	OpCode_t2368491978  ___Unaligned_215;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Volatile
	OpCode_t2368491978  ___Volatile_216;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Tailcall
	OpCode_t2368491978  ___Tailcall_217;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Initobj
	OpCode_t2368491978  ___Initobj_218;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Constrained
	OpCode_t2368491978  ___Constrained_219;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Cpblk
	OpCode_t2368491978  ___Cpblk_220;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Initblk
	OpCode_t2368491978  ___Initblk_221;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Rethrow
	OpCode_t2368491978  ___Rethrow_222;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Sizeof
	OpCode_t2368491978  ___Sizeof_223;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Refanytype
	OpCode_t2368491978  ___Refanytype_224;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Readonly
	OpCode_t2368491978  ___Readonly_225;

public:
	inline static int32_t get_offset_of_Nop_0() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Nop_0)); }
	inline OpCode_t2368491978  get_Nop_0() const { return ___Nop_0; }
	inline OpCode_t2368491978 * get_address_of_Nop_0() { return &___Nop_0; }
	inline void set_Nop_0(OpCode_t2368491978  value)
	{
		___Nop_0 = value;
	}

	inline static int32_t get_offset_of_Break_1() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Break_1)); }
	inline OpCode_t2368491978  get_Break_1() const { return ___Break_1; }
	inline OpCode_t2368491978 * get_address_of_Break_1() { return &___Break_1; }
	inline void set_Break_1(OpCode_t2368491978  value)
	{
		___Break_1 = value;
	}

	inline static int32_t get_offset_of_Ldarg_0_2() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldarg_0_2)); }
	inline OpCode_t2368491978  get_Ldarg_0_2() const { return ___Ldarg_0_2; }
	inline OpCode_t2368491978 * get_address_of_Ldarg_0_2() { return &___Ldarg_0_2; }
	inline void set_Ldarg_0_2(OpCode_t2368491978  value)
	{
		___Ldarg_0_2 = value;
	}

	inline static int32_t get_offset_of_Ldarg_1_3() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldarg_1_3)); }
	inline OpCode_t2368491978  get_Ldarg_1_3() const { return ___Ldarg_1_3; }
	inline OpCode_t2368491978 * get_address_of_Ldarg_1_3() { return &___Ldarg_1_3; }
	inline void set_Ldarg_1_3(OpCode_t2368491978  value)
	{
		___Ldarg_1_3 = value;
	}

	inline static int32_t get_offset_of_Ldarg_2_4() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldarg_2_4)); }
	inline OpCode_t2368491978  get_Ldarg_2_4() const { return ___Ldarg_2_4; }
	inline OpCode_t2368491978 * get_address_of_Ldarg_2_4() { return &___Ldarg_2_4; }
	inline void set_Ldarg_2_4(OpCode_t2368491978  value)
	{
		___Ldarg_2_4 = value;
	}

	inline static int32_t get_offset_of_Ldarg_3_5() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldarg_3_5)); }
	inline OpCode_t2368491978  get_Ldarg_3_5() const { return ___Ldarg_3_5; }
	inline OpCode_t2368491978 * get_address_of_Ldarg_3_5() { return &___Ldarg_3_5; }
	inline void set_Ldarg_3_5(OpCode_t2368491978  value)
	{
		___Ldarg_3_5 = value;
	}

	inline static int32_t get_offset_of_Ldloc_0_6() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldloc_0_6)); }
	inline OpCode_t2368491978  get_Ldloc_0_6() const { return ___Ldloc_0_6; }
	inline OpCode_t2368491978 * get_address_of_Ldloc_0_6() { return &___Ldloc_0_6; }
	inline void set_Ldloc_0_6(OpCode_t2368491978  value)
	{
		___Ldloc_0_6 = value;
	}

	inline static int32_t get_offset_of_Ldloc_1_7() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldloc_1_7)); }
	inline OpCode_t2368491978  get_Ldloc_1_7() const { return ___Ldloc_1_7; }
	inline OpCode_t2368491978 * get_address_of_Ldloc_1_7() { return &___Ldloc_1_7; }
	inline void set_Ldloc_1_7(OpCode_t2368491978  value)
	{
		___Ldloc_1_7 = value;
	}

	inline static int32_t get_offset_of_Ldloc_2_8() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldloc_2_8)); }
	inline OpCode_t2368491978  get_Ldloc_2_8() const { return ___Ldloc_2_8; }
	inline OpCode_t2368491978 * get_address_of_Ldloc_2_8() { return &___Ldloc_2_8; }
	inline void set_Ldloc_2_8(OpCode_t2368491978  value)
	{
		___Ldloc_2_8 = value;
	}

	inline static int32_t get_offset_of_Ldloc_3_9() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldloc_3_9)); }
	inline OpCode_t2368491978  get_Ldloc_3_9() const { return ___Ldloc_3_9; }
	inline OpCode_t2368491978 * get_address_of_Ldloc_3_9() { return &___Ldloc_3_9; }
	inline void set_Ldloc_3_9(OpCode_t2368491978  value)
	{
		___Ldloc_3_9 = value;
	}

	inline static int32_t get_offset_of_Stloc_0_10() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Stloc_0_10)); }
	inline OpCode_t2368491978  get_Stloc_0_10() const { return ___Stloc_0_10; }
	inline OpCode_t2368491978 * get_address_of_Stloc_0_10() { return &___Stloc_0_10; }
	inline void set_Stloc_0_10(OpCode_t2368491978  value)
	{
		___Stloc_0_10 = value;
	}

	inline static int32_t get_offset_of_Stloc_1_11() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Stloc_1_11)); }
	inline OpCode_t2368491978  get_Stloc_1_11() const { return ___Stloc_1_11; }
	inline OpCode_t2368491978 * get_address_of_Stloc_1_11() { return &___Stloc_1_11; }
	inline void set_Stloc_1_11(OpCode_t2368491978  value)
	{
		___Stloc_1_11 = value;
	}

	inline static int32_t get_offset_of_Stloc_2_12() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Stloc_2_12)); }
	inline OpCode_t2368491978  get_Stloc_2_12() const { return ___Stloc_2_12; }
	inline OpCode_t2368491978 * get_address_of_Stloc_2_12() { return &___Stloc_2_12; }
	inline void set_Stloc_2_12(OpCode_t2368491978  value)
	{
		___Stloc_2_12 = value;
	}

	inline static int32_t get_offset_of_Stloc_3_13() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Stloc_3_13)); }
	inline OpCode_t2368491978  get_Stloc_3_13() const { return ___Stloc_3_13; }
	inline OpCode_t2368491978 * get_address_of_Stloc_3_13() { return &___Stloc_3_13; }
	inline void set_Stloc_3_13(OpCode_t2368491978  value)
	{
		___Stloc_3_13 = value;
	}

	inline static int32_t get_offset_of_Ldarg_S_14() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldarg_S_14)); }
	inline OpCode_t2368491978  get_Ldarg_S_14() const { return ___Ldarg_S_14; }
	inline OpCode_t2368491978 * get_address_of_Ldarg_S_14() { return &___Ldarg_S_14; }
	inline void set_Ldarg_S_14(OpCode_t2368491978  value)
	{
		___Ldarg_S_14 = value;
	}

	inline static int32_t get_offset_of_Ldarga_S_15() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldarga_S_15)); }
	inline OpCode_t2368491978  get_Ldarga_S_15() const { return ___Ldarga_S_15; }
	inline OpCode_t2368491978 * get_address_of_Ldarga_S_15() { return &___Ldarga_S_15; }
	inline void set_Ldarga_S_15(OpCode_t2368491978  value)
	{
		___Ldarga_S_15 = value;
	}

	inline static int32_t get_offset_of_Starg_S_16() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Starg_S_16)); }
	inline OpCode_t2368491978  get_Starg_S_16() const { return ___Starg_S_16; }
	inline OpCode_t2368491978 * get_address_of_Starg_S_16() { return &___Starg_S_16; }
	inline void set_Starg_S_16(OpCode_t2368491978  value)
	{
		___Starg_S_16 = value;
	}

	inline static int32_t get_offset_of_Ldloc_S_17() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldloc_S_17)); }
	inline OpCode_t2368491978  get_Ldloc_S_17() const { return ___Ldloc_S_17; }
	inline OpCode_t2368491978 * get_address_of_Ldloc_S_17() { return &___Ldloc_S_17; }
	inline void set_Ldloc_S_17(OpCode_t2368491978  value)
	{
		___Ldloc_S_17 = value;
	}

	inline static int32_t get_offset_of_Ldloca_S_18() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldloca_S_18)); }
	inline OpCode_t2368491978  get_Ldloca_S_18() const { return ___Ldloca_S_18; }
	inline OpCode_t2368491978 * get_address_of_Ldloca_S_18() { return &___Ldloca_S_18; }
	inline void set_Ldloca_S_18(OpCode_t2368491978  value)
	{
		___Ldloca_S_18 = value;
	}

	inline static int32_t get_offset_of_Stloc_S_19() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Stloc_S_19)); }
	inline OpCode_t2368491978  get_Stloc_S_19() const { return ___Stloc_S_19; }
	inline OpCode_t2368491978 * get_address_of_Stloc_S_19() { return &___Stloc_S_19; }
	inline void set_Stloc_S_19(OpCode_t2368491978  value)
	{
		___Stloc_S_19 = value;
	}

	inline static int32_t get_offset_of_Ldnull_20() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldnull_20)); }
	inline OpCode_t2368491978  get_Ldnull_20() const { return ___Ldnull_20; }
	inline OpCode_t2368491978 * get_address_of_Ldnull_20() { return &___Ldnull_20; }
	inline void set_Ldnull_20(OpCode_t2368491978  value)
	{
		___Ldnull_20 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_M1_21() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldc_I4_M1_21)); }
	inline OpCode_t2368491978  get_Ldc_I4_M1_21() const { return ___Ldc_I4_M1_21; }
	inline OpCode_t2368491978 * get_address_of_Ldc_I4_M1_21() { return &___Ldc_I4_M1_21; }
	inline void set_Ldc_I4_M1_21(OpCode_t2368491978  value)
	{
		___Ldc_I4_M1_21 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_0_22() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldc_I4_0_22)); }
	inline OpCode_t2368491978  get_Ldc_I4_0_22() const { return ___Ldc_I4_0_22; }
	inline OpCode_t2368491978 * get_address_of_Ldc_I4_0_22() { return &___Ldc_I4_0_22; }
	inline void set_Ldc_I4_0_22(OpCode_t2368491978  value)
	{
		___Ldc_I4_0_22 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_1_23() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldc_I4_1_23)); }
	inline OpCode_t2368491978  get_Ldc_I4_1_23() const { return ___Ldc_I4_1_23; }
	inline OpCode_t2368491978 * get_address_of_Ldc_I4_1_23() { return &___Ldc_I4_1_23; }
	inline void set_Ldc_I4_1_23(OpCode_t2368491978  value)
	{
		___Ldc_I4_1_23 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_2_24() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldc_I4_2_24)); }
	inline OpCode_t2368491978  get_Ldc_I4_2_24() const { return ___Ldc_I4_2_24; }
	inline OpCode_t2368491978 * get_address_of_Ldc_I4_2_24() { return &___Ldc_I4_2_24; }
	inline void set_Ldc_I4_2_24(OpCode_t2368491978  value)
	{
		___Ldc_I4_2_24 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_3_25() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldc_I4_3_25)); }
	inline OpCode_t2368491978  get_Ldc_I4_3_25() const { return ___Ldc_I4_3_25; }
	inline OpCode_t2368491978 * get_address_of_Ldc_I4_3_25() { return &___Ldc_I4_3_25; }
	inline void set_Ldc_I4_3_25(OpCode_t2368491978  value)
	{
		___Ldc_I4_3_25 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_4_26() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldc_I4_4_26)); }
	inline OpCode_t2368491978  get_Ldc_I4_4_26() const { return ___Ldc_I4_4_26; }
	inline OpCode_t2368491978 * get_address_of_Ldc_I4_4_26() { return &___Ldc_I4_4_26; }
	inline void set_Ldc_I4_4_26(OpCode_t2368491978  value)
	{
		___Ldc_I4_4_26 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_5_27() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldc_I4_5_27)); }
	inline OpCode_t2368491978  get_Ldc_I4_5_27() const { return ___Ldc_I4_5_27; }
	inline OpCode_t2368491978 * get_address_of_Ldc_I4_5_27() { return &___Ldc_I4_5_27; }
	inline void set_Ldc_I4_5_27(OpCode_t2368491978  value)
	{
		___Ldc_I4_5_27 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_6_28() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldc_I4_6_28)); }
	inline OpCode_t2368491978  get_Ldc_I4_6_28() const { return ___Ldc_I4_6_28; }
	inline OpCode_t2368491978 * get_address_of_Ldc_I4_6_28() { return &___Ldc_I4_6_28; }
	inline void set_Ldc_I4_6_28(OpCode_t2368491978  value)
	{
		___Ldc_I4_6_28 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_7_29() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldc_I4_7_29)); }
	inline OpCode_t2368491978  get_Ldc_I4_7_29() const { return ___Ldc_I4_7_29; }
	inline OpCode_t2368491978 * get_address_of_Ldc_I4_7_29() { return &___Ldc_I4_7_29; }
	inline void set_Ldc_I4_7_29(OpCode_t2368491978  value)
	{
		___Ldc_I4_7_29 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_8_30() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldc_I4_8_30)); }
	inline OpCode_t2368491978  get_Ldc_I4_8_30() const { return ___Ldc_I4_8_30; }
	inline OpCode_t2368491978 * get_address_of_Ldc_I4_8_30() { return &___Ldc_I4_8_30; }
	inline void set_Ldc_I4_8_30(OpCode_t2368491978  value)
	{
		___Ldc_I4_8_30 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_S_31() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldc_I4_S_31)); }
	inline OpCode_t2368491978  get_Ldc_I4_S_31() const { return ___Ldc_I4_S_31; }
	inline OpCode_t2368491978 * get_address_of_Ldc_I4_S_31() { return &___Ldc_I4_S_31; }
	inline void set_Ldc_I4_S_31(OpCode_t2368491978  value)
	{
		___Ldc_I4_S_31 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_32() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldc_I4_32)); }
	inline OpCode_t2368491978  get_Ldc_I4_32() const { return ___Ldc_I4_32; }
	inline OpCode_t2368491978 * get_address_of_Ldc_I4_32() { return &___Ldc_I4_32; }
	inline void set_Ldc_I4_32(OpCode_t2368491978  value)
	{
		___Ldc_I4_32 = value;
	}

	inline static int32_t get_offset_of_Ldc_I8_33() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldc_I8_33)); }
	inline OpCode_t2368491978  get_Ldc_I8_33() const { return ___Ldc_I8_33; }
	inline OpCode_t2368491978 * get_address_of_Ldc_I8_33() { return &___Ldc_I8_33; }
	inline void set_Ldc_I8_33(OpCode_t2368491978  value)
	{
		___Ldc_I8_33 = value;
	}

	inline static int32_t get_offset_of_Ldc_R4_34() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldc_R4_34)); }
	inline OpCode_t2368491978  get_Ldc_R4_34() const { return ___Ldc_R4_34; }
	inline OpCode_t2368491978 * get_address_of_Ldc_R4_34() { return &___Ldc_R4_34; }
	inline void set_Ldc_R4_34(OpCode_t2368491978  value)
	{
		___Ldc_R4_34 = value;
	}

	inline static int32_t get_offset_of_Ldc_R8_35() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldc_R8_35)); }
	inline OpCode_t2368491978  get_Ldc_R8_35() const { return ___Ldc_R8_35; }
	inline OpCode_t2368491978 * get_address_of_Ldc_R8_35() { return &___Ldc_R8_35; }
	inline void set_Ldc_R8_35(OpCode_t2368491978  value)
	{
		___Ldc_R8_35 = value;
	}

	inline static int32_t get_offset_of_Dup_36() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Dup_36)); }
	inline OpCode_t2368491978  get_Dup_36() const { return ___Dup_36; }
	inline OpCode_t2368491978 * get_address_of_Dup_36() { return &___Dup_36; }
	inline void set_Dup_36(OpCode_t2368491978  value)
	{
		___Dup_36 = value;
	}

	inline static int32_t get_offset_of_Pop_37() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Pop_37)); }
	inline OpCode_t2368491978  get_Pop_37() const { return ___Pop_37; }
	inline OpCode_t2368491978 * get_address_of_Pop_37() { return &___Pop_37; }
	inline void set_Pop_37(OpCode_t2368491978  value)
	{
		___Pop_37 = value;
	}

	inline static int32_t get_offset_of_Jmp_38() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Jmp_38)); }
	inline OpCode_t2368491978  get_Jmp_38() const { return ___Jmp_38; }
	inline OpCode_t2368491978 * get_address_of_Jmp_38() { return &___Jmp_38; }
	inline void set_Jmp_38(OpCode_t2368491978  value)
	{
		___Jmp_38 = value;
	}

	inline static int32_t get_offset_of_Call_39() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Call_39)); }
	inline OpCode_t2368491978  get_Call_39() const { return ___Call_39; }
	inline OpCode_t2368491978 * get_address_of_Call_39() { return &___Call_39; }
	inline void set_Call_39(OpCode_t2368491978  value)
	{
		___Call_39 = value;
	}

	inline static int32_t get_offset_of_Calli_40() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Calli_40)); }
	inline OpCode_t2368491978  get_Calli_40() const { return ___Calli_40; }
	inline OpCode_t2368491978 * get_address_of_Calli_40() { return &___Calli_40; }
	inline void set_Calli_40(OpCode_t2368491978  value)
	{
		___Calli_40 = value;
	}

	inline static int32_t get_offset_of_Ret_41() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ret_41)); }
	inline OpCode_t2368491978  get_Ret_41() const { return ___Ret_41; }
	inline OpCode_t2368491978 * get_address_of_Ret_41() { return &___Ret_41; }
	inline void set_Ret_41(OpCode_t2368491978  value)
	{
		___Ret_41 = value;
	}

	inline static int32_t get_offset_of_Br_S_42() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Br_S_42)); }
	inline OpCode_t2368491978  get_Br_S_42() const { return ___Br_S_42; }
	inline OpCode_t2368491978 * get_address_of_Br_S_42() { return &___Br_S_42; }
	inline void set_Br_S_42(OpCode_t2368491978  value)
	{
		___Br_S_42 = value;
	}

	inline static int32_t get_offset_of_Brfalse_S_43() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Brfalse_S_43)); }
	inline OpCode_t2368491978  get_Brfalse_S_43() const { return ___Brfalse_S_43; }
	inline OpCode_t2368491978 * get_address_of_Brfalse_S_43() { return &___Brfalse_S_43; }
	inline void set_Brfalse_S_43(OpCode_t2368491978  value)
	{
		___Brfalse_S_43 = value;
	}

	inline static int32_t get_offset_of_Brtrue_S_44() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Brtrue_S_44)); }
	inline OpCode_t2368491978  get_Brtrue_S_44() const { return ___Brtrue_S_44; }
	inline OpCode_t2368491978 * get_address_of_Brtrue_S_44() { return &___Brtrue_S_44; }
	inline void set_Brtrue_S_44(OpCode_t2368491978  value)
	{
		___Brtrue_S_44 = value;
	}

	inline static int32_t get_offset_of_Beq_S_45() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Beq_S_45)); }
	inline OpCode_t2368491978  get_Beq_S_45() const { return ___Beq_S_45; }
	inline OpCode_t2368491978 * get_address_of_Beq_S_45() { return &___Beq_S_45; }
	inline void set_Beq_S_45(OpCode_t2368491978  value)
	{
		___Beq_S_45 = value;
	}

	inline static int32_t get_offset_of_Bge_S_46() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Bge_S_46)); }
	inline OpCode_t2368491978  get_Bge_S_46() const { return ___Bge_S_46; }
	inline OpCode_t2368491978 * get_address_of_Bge_S_46() { return &___Bge_S_46; }
	inline void set_Bge_S_46(OpCode_t2368491978  value)
	{
		___Bge_S_46 = value;
	}

	inline static int32_t get_offset_of_Bgt_S_47() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Bgt_S_47)); }
	inline OpCode_t2368491978  get_Bgt_S_47() const { return ___Bgt_S_47; }
	inline OpCode_t2368491978 * get_address_of_Bgt_S_47() { return &___Bgt_S_47; }
	inline void set_Bgt_S_47(OpCode_t2368491978  value)
	{
		___Bgt_S_47 = value;
	}

	inline static int32_t get_offset_of_Ble_S_48() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ble_S_48)); }
	inline OpCode_t2368491978  get_Ble_S_48() const { return ___Ble_S_48; }
	inline OpCode_t2368491978 * get_address_of_Ble_S_48() { return &___Ble_S_48; }
	inline void set_Ble_S_48(OpCode_t2368491978  value)
	{
		___Ble_S_48 = value;
	}

	inline static int32_t get_offset_of_Blt_S_49() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Blt_S_49)); }
	inline OpCode_t2368491978  get_Blt_S_49() const { return ___Blt_S_49; }
	inline OpCode_t2368491978 * get_address_of_Blt_S_49() { return &___Blt_S_49; }
	inline void set_Blt_S_49(OpCode_t2368491978  value)
	{
		___Blt_S_49 = value;
	}

	inline static int32_t get_offset_of_Bne_Un_S_50() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Bne_Un_S_50)); }
	inline OpCode_t2368491978  get_Bne_Un_S_50() const { return ___Bne_Un_S_50; }
	inline OpCode_t2368491978 * get_address_of_Bne_Un_S_50() { return &___Bne_Un_S_50; }
	inline void set_Bne_Un_S_50(OpCode_t2368491978  value)
	{
		___Bne_Un_S_50 = value;
	}

	inline static int32_t get_offset_of_Bge_Un_S_51() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Bge_Un_S_51)); }
	inline OpCode_t2368491978  get_Bge_Un_S_51() const { return ___Bge_Un_S_51; }
	inline OpCode_t2368491978 * get_address_of_Bge_Un_S_51() { return &___Bge_Un_S_51; }
	inline void set_Bge_Un_S_51(OpCode_t2368491978  value)
	{
		___Bge_Un_S_51 = value;
	}

	inline static int32_t get_offset_of_Bgt_Un_S_52() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Bgt_Un_S_52)); }
	inline OpCode_t2368491978  get_Bgt_Un_S_52() const { return ___Bgt_Un_S_52; }
	inline OpCode_t2368491978 * get_address_of_Bgt_Un_S_52() { return &___Bgt_Un_S_52; }
	inline void set_Bgt_Un_S_52(OpCode_t2368491978  value)
	{
		___Bgt_Un_S_52 = value;
	}

	inline static int32_t get_offset_of_Ble_Un_S_53() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ble_Un_S_53)); }
	inline OpCode_t2368491978  get_Ble_Un_S_53() const { return ___Ble_Un_S_53; }
	inline OpCode_t2368491978 * get_address_of_Ble_Un_S_53() { return &___Ble_Un_S_53; }
	inline void set_Ble_Un_S_53(OpCode_t2368491978  value)
	{
		___Ble_Un_S_53 = value;
	}

	inline static int32_t get_offset_of_Blt_Un_S_54() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Blt_Un_S_54)); }
	inline OpCode_t2368491978  get_Blt_Un_S_54() const { return ___Blt_Un_S_54; }
	inline OpCode_t2368491978 * get_address_of_Blt_Un_S_54() { return &___Blt_Un_S_54; }
	inline void set_Blt_Un_S_54(OpCode_t2368491978  value)
	{
		___Blt_Un_S_54 = value;
	}

	inline static int32_t get_offset_of_Br_55() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Br_55)); }
	inline OpCode_t2368491978  get_Br_55() const { return ___Br_55; }
	inline OpCode_t2368491978 * get_address_of_Br_55() { return &___Br_55; }
	inline void set_Br_55(OpCode_t2368491978  value)
	{
		___Br_55 = value;
	}

	inline static int32_t get_offset_of_Brfalse_56() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Brfalse_56)); }
	inline OpCode_t2368491978  get_Brfalse_56() const { return ___Brfalse_56; }
	inline OpCode_t2368491978 * get_address_of_Brfalse_56() { return &___Brfalse_56; }
	inline void set_Brfalse_56(OpCode_t2368491978  value)
	{
		___Brfalse_56 = value;
	}

	inline static int32_t get_offset_of_Brtrue_57() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Brtrue_57)); }
	inline OpCode_t2368491978  get_Brtrue_57() const { return ___Brtrue_57; }
	inline OpCode_t2368491978 * get_address_of_Brtrue_57() { return &___Brtrue_57; }
	inline void set_Brtrue_57(OpCode_t2368491978  value)
	{
		___Brtrue_57 = value;
	}

	inline static int32_t get_offset_of_Beq_58() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Beq_58)); }
	inline OpCode_t2368491978  get_Beq_58() const { return ___Beq_58; }
	inline OpCode_t2368491978 * get_address_of_Beq_58() { return &___Beq_58; }
	inline void set_Beq_58(OpCode_t2368491978  value)
	{
		___Beq_58 = value;
	}

	inline static int32_t get_offset_of_Bge_59() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Bge_59)); }
	inline OpCode_t2368491978  get_Bge_59() const { return ___Bge_59; }
	inline OpCode_t2368491978 * get_address_of_Bge_59() { return &___Bge_59; }
	inline void set_Bge_59(OpCode_t2368491978  value)
	{
		___Bge_59 = value;
	}

	inline static int32_t get_offset_of_Bgt_60() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Bgt_60)); }
	inline OpCode_t2368491978  get_Bgt_60() const { return ___Bgt_60; }
	inline OpCode_t2368491978 * get_address_of_Bgt_60() { return &___Bgt_60; }
	inline void set_Bgt_60(OpCode_t2368491978  value)
	{
		___Bgt_60 = value;
	}

	inline static int32_t get_offset_of_Ble_61() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ble_61)); }
	inline OpCode_t2368491978  get_Ble_61() const { return ___Ble_61; }
	inline OpCode_t2368491978 * get_address_of_Ble_61() { return &___Ble_61; }
	inline void set_Ble_61(OpCode_t2368491978  value)
	{
		___Ble_61 = value;
	}

	inline static int32_t get_offset_of_Blt_62() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Blt_62)); }
	inline OpCode_t2368491978  get_Blt_62() const { return ___Blt_62; }
	inline OpCode_t2368491978 * get_address_of_Blt_62() { return &___Blt_62; }
	inline void set_Blt_62(OpCode_t2368491978  value)
	{
		___Blt_62 = value;
	}

	inline static int32_t get_offset_of_Bne_Un_63() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Bne_Un_63)); }
	inline OpCode_t2368491978  get_Bne_Un_63() const { return ___Bne_Un_63; }
	inline OpCode_t2368491978 * get_address_of_Bne_Un_63() { return &___Bne_Un_63; }
	inline void set_Bne_Un_63(OpCode_t2368491978  value)
	{
		___Bne_Un_63 = value;
	}

	inline static int32_t get_offset_of_Bge_Un_64() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Bge_Un_64)); }
	inline OpCode_t2368491978  get_Bge_Un_64() const { return ___Bge_Un_64; }
	inline OpCode_t2368491978 * get_address_of_Bge_Un_64() { return &___Bge_Un_64; }
	inline void set_Bge_Un_64(OpCode_t2368491978  value)
	{
		___Bge_Un_64 = value;
	}

	inline static int32_t get_offset_of_Bgt_Un_65() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Bgt_Un_65)); }
	inline OpCode_t2368491978  get_Bgt_Un_65() const { return ___Bgt_Un_65; }
	inline OpCode_t2368491978 * get_address_of_Bgt_Un_65() { return &___Bgt_Un_65; }
	inline void set_Bgt_Un_65(OpCode_t2368491978  value)
	{
		___Bgt_Un_65 = value;
	}

	inline static int32_t get_offset_of_Ble_Un_66() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ble_Un_66)); }
	inline OpCode_t2368491978  get_Ble_Un_66() const { return ___Ble_Un_66; }
	inline OpCode_t2368491978 * get_address_of_Ble_Un_66() { return &___Ble_Un_66; }
	inline void set_Ble_Un_66(OpCode_t2368491978  value)
	{
		___Ble_Un_66 = value;
	}

	inline static int32_t get_offset_of_Blt_Un_67() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Blt_Un_67)); }
	inline OpCode_t2368491978  get_Blt_Un_67() const { return ___Blt_Un_67; }
	inline OpCode_t2368491978 * get_address_of_Blt_Un_67() { return &___Blt_Un_67; }
	inline void set_Blt_Un_67(OpCode_t2368491978  value)
	{
		___Blt_Un_67 = value;
	}

	inline static int32_t get_offset_of_Switch_68() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Switch_68)); }
	inline OpCode_t2368491978  get_Switch_68() const { return ___Switch_68; }
	inline OpCode_t2368491978 * get_address_of_Switch_68() { return &___Switch_68; }
	inline void set_Switch_68(OpCode_t2368491978  value)
	{
		___Switch_68 = value;
	}

	inline static int32_t get_offset_of_Ldind_I1_69() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldind_I1_69)); }
	inline OpCode_t2368491978  get_Ldind_I1_69() const { return ___Ldind_I1_69; }
	inline OpCode_t2368491978 * get_address_of_Ldind_I1_69() { return &___Ldind_I1_69; }
	inline void set_Ldind_I1_69(OpCode_t2368491978  value)
	{
		___Ldind_I1_69 = value;
	}

	inline static int32_t get_offset_of_Ldind_U1_70() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldind_U1_70)); }
	inline OpCode_t2368491978  get_Ldind_U1_70() const { return ___Ldind_U1_70; }
	inline OpCode_t2368491978 * get_address_of_Ldind_U1_70() { return &___Ldind_U1_70; }
	inline void set_Ldind_U1_70(OpCode_t2368491978  value)
	{
		___Ldind_U1_70 = value;
	}

	inline static int32_t get_offset_of_Ldind_I2_71() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldind_I2_71)); }
	inline OpCode_t2368491978  get_Ldind_I2_71() const { return ___Ldind_I2_71; }
	inline OpCode_t2368491978 * get_address_of_Ldind_I2_71() { return &___Ldind_I2_71; }
	inline void set_Ldind_I2_71(OpCode_t2368491978  value)
	{
		___Ldind_I2_71 = value;
	}

	inline static int32_t get_offset_of_Ldind_U2_72() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldind_U2_72)); }
	inline OpCode_t2368491978  get_Ldind_U2_72() const { return ___Ldind_U2_72; }
	inline OpCode_t2368491978 * get_address_of_Ldind_U2_72() { return &___Ldind_U2_72; }
	inline void set_Ldind_U2_72(OpCode_t2368491978  value)
	{
		___Ldind_U2_72 = value;
	}

	inline static int32_t get_offset_of_Ldind_I4_73() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldind_I4_73)); }
	inline OpCode_t2368491978  get_Ldind_I4_73() const { return ___Ldind_I4_73; }
	inline OpCode_t2368491978 * get_address_of_Ldind_I4_73() { return &___Ldind_I4_73; }
	inline void set_Ldind_I4_73(OpCode_t2368491978  value)
	{
		___Ldind_I4_73 = value;
	}

	inline static int32_t get_offset_of_Ldind_U4_74() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldind_U4_74)); }
	inline OpCode_t2368491978  get_Ldind_U4_74() const { return ___Ldind_U4_74; }
	inline OpCode_t2368491978 * get_address_of_Ldind_U4_74() { return &___Ldind_U4_74; }
	inline void set_Ldind_U4_74(OpCode_t2368491978  value)
	{
		___Ldind_U4_74 = value;
	}

	inline static int32_t get_offset_of_Ldind_I8_75() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldind_I8_75)); }
	inline OpCode_t2368491978  get_Ldind_I8_75() const { return ___Ldind_I8_75; }
	inline OpCode_t2368491978 * get_address_of_Ldind_I8_75() { return &___Ldind_I8_75; }
	inline void set_Ldind_I8_75(OpCode_t2368491978  value)
	{
		___Ldind_I8_75 = value;
	}

	inline static int32_t get_offset_of_Ldind_I_76() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldind_I_76)); }
	inline OpCode_t2368491978  get_Ldind_I_76() const { return ___Ldind_I_76; }
	inline OpCode_t2368491978 * get_address_of_Ldind_I_76() { return &___Ldind_I_76; }
	inline void set_Ldind_I_76(OpCode_t2368491978  value)
	{
		___Ldind_I_76 = value;
	}

	inline static int32_t get_offset_of_Ldind_R4_77() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldind_R4_77)); }
	inline OpCode_t2368491978  get_Ldind_R4_77() const { return ___Ldind_R4_77; }
	inline OpCode_t2368491978 * get_address_of_Ldind_R4_77() { return &___Ldind_R4_77; }
	inline void set_Ldind_R4_77(OpCode_t2368491978  value)
	{
		___Ldind_R4_77 = value;
	}

	inline static int32_t get_offset_of_Ldind_R8_78() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldind_R8_78)); }
	inline OpCode_t2368491978  get_Ldind_R8_78() const { return ___Ldind_R8_78; }
	inline OpCode_t2368491978 * get_address_of_Ldind_R8_78() { return &___Ldind_R8_78; }
	inline void set_Ldind_R8_78(OpCode_t2368491978  value)
	{
		___Ldind_R8_78 = value;
	}

	inline static int32_t get_offset_of_Ldind_Ref_79() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldind_Ref_79)); }
	inline OpCode_t2368491978  get_Ldind_Ref_79() const { return ___Ldind_Ref_79; }
	inline OpCode_t2368491978 * get_address_of_Ldind_Ref_79() { return &___Ldind_Ref_79; }
	inline void set_Ldind_Ref_79(OpCode_t2368491978  value)
	{
		___Ldind_Ref_79 = value;
	}

	inline static int32_t get_offset_of_Stind_Ref_80() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Stind_Ref_80)); }
	inline OpCode_t2368491978  get_Stind_Ref_80() const { return ___Stind_Ref_80; }
	inline OpCode_t2368491978 * get_address_of_Stind_Ref_80() { return &___Stind_Ref_80; }
	inline void set_Stind_Ref_80(OpCode_t2368491978  value)
	{
		___Stind_Ref_80 = value;
	}

	inline static int32_t get_offset_of_Stind_I1_81() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Stind_I1_81)); }
	inline OpCode_t2368491978  get_Stind_I1_81() const { return ___Stind_I1_81; }
	inline OpCode_t2368491978 * get_address_of_Stind_I1_81() { return &___Stind_I1_81; }
	inline void set_Stind_I1_81(OpCode_t2368491978  value)
	{
		___Stind_I1_81 = value;
	}

	inline static int32_t get_offset_of_Stind_I2_82() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Stind_I2_82)); }
	inline OpCode_t2368491978  get_Stind_I2_82() const { return ___Stind_I2_82; }
	inline OpCode_t2368491978 * get_address_of_Stind_I2_82() { return &___Stind_I2_82; }
	inline void set_Stind_I2_82(OpCode_t2368491978  value)
	{
		___Stind_I2_82 = value;
	}

	inline static int32_t get_offset_of_Stind_I4_83() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Stind_I4_83)); }
	inline OpCode_t2368491978  get_Stind_I4_83() const { return ___Stind_I4_83; }
	inline OpCode_t2368491978 * get_address_of_Stind_I4_83() { return &___Stind_I4_83; }
	inline void set_Stind_I4_83(OpCode_t2368491978  value)
	{
		___Stind_I4_83 = value;
	}

	inline static int32_t get_offset_of_Stind_I8_84() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Stind_I8_84)); }
	inline OpCode_t2368491978  get_Stind_I8_84() const { return ___Stind_I8_84; }
	inline OpCode_t2368491978 * get_address_of_Stind_I8_84() { return &___Stind_I8_84; }
	inline void set_Stind_I8_84(OpCode_t2368491978  value)
	{
		___Stind_I8_84 = value;
	}

	inline static int32_t get_offset_of_Stind_R4_85() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Stind_R4_85)); }
	inline OpCode_t2368491978  get_Stind_R4_85() const { return ___Stind_R4_85; }
	inline OpCode_t2368491978 * get_address_of_Stind_R4_85() { return &___Stind_R4_85; }
	inline void set_Stind_R4_85(OpCode_t2368491978  value)
	{
		___Stind_R4_85 = value;
	}

	inline static int32_t get_offset_of_Stind_R8_86() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Stind_R8_86)); }
	inline OpCode_t2368491978  get_Stind_R8_86() const { return ___Stind_R8_86; }
	inline OpCode_t2368491978 * get_address_of_Stind_R8_86() { return &___Stind_R8_86; }
	inline void set_Stind_R8_86(OpCode_t2368491978  value)
	{
		___Stind_R8_86 = value;
	}

	inline static int32_t get_offset_of_Add_87() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Add_87)); }
	inline OpCode_t2368491978  get_Add_87() const { return ___Add_87; }
	inline OpCode_t2368491978 * get_address_of_Add_87() { return &___Add_87; }
	inline void set_Add_87(OpCode_t2368491978  value)
	{
		___Add_87 = value;
	}

	inline static int32_t get_offset_of_Sub_88() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Sub_88)); }
	inline OpCode_t2368491978  get_Sub_88() const { return ___Sub_88; }
	inline OpCode_t2368491978 * get_address_of_Sub_88() { return &___Sub_88; }
	inline void set_Sub_88(OpCode_t2368491978  value)
	{
		___Sub_88 = value;
	}

	inline static int32_t get_offset_of_Mul_89() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Mul_89)); }
	inline OpCode_t2368491978  get_Mul_89() const { return ___Mul_89; }
	inline OpCode_t2368491978 * get_address_of_Mul_89() { return &___Mul_89; }
	inline void set_Mul_89(OpCode_t2368491978  value)
	{
		___Mul_89 = value;
	}

	inline static int32_t get_offset_of_Div_90() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Div_90)); }
	inline OpCode_t2368491978  get_Div_90() const { return ___Div_90; }
	inline OpCode_t2368491978 * get_address_of_Div_90() { return &___Div_90; }
	inline void set_Div_90(OpCode_t2368491978  value)
	{
		___Div_90 = value;
	}

	inline static int32_t get_offset_of_Div_Un_91() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Div_Un_91)); }
	inline OpCode_t2368491978  get_Div_Un_91() const { return ___Div_Un_91; }
	inline OpCode_t2368491978 * get_address_of_Div_Un_91() { return &___Div_Un_91; }
	inline void set_Div_Un_91(OpCode_t2368491978  value)
	{
		___Div_Un_91 = value;
	}

	inline static int32_t get_offset_of_Rem_92() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Rem_92)); }
	inline OpCode_t2368491978  get_Rem_92() const { return ___Rem_92; }
	inline OpCode_t2368491978 * get_address_of_Rem_92() { return &___Rem_92; }
	inline void set_Rem_92(OpCode_t2368491978  value)
	{
		___Rem_92 = value;
	}

	inline static int32_t get_offset_of_Rem_Un_93() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Rem_Un_93)); }
	inline OpCode_t2368491978  get_Rem_Un_93() const { return ___Rem_Un_93; }
	inline OpCode_t2368491978 * get_address_of_Rem_Un_93() { return &___Rem_Un_93; }
	inline void set_Rem_Un_93(OpCode_t2368491978  value)
	{
		___Rem_Un_93 = value;
	}

	inline static int32_t get_offset_of_And_94() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___And_94)); }
	inline OpCode_t2368491978  get_And_94() const { return ___And_94; }
	inline OpCode_t2368491978 * get_address_of_And_94() { return &___And_94; }
	inline void set_And_94(OpCode_t2368491978  value)
	{
		___And_94 = value;
	}

	inline static int32_t get_offset_of_Or_95() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Or_95)); }
	inline OpCode_t2368491978  get_Or_95() const { return ___Or_95; }
	inline OpCode_t2368491978 * get_address_of_Or_95() { return &___Or_95; }
	inline void set_Or_95(OpCode_t2368491978  value)
	{
		___Or_95 = value;
	}

	inline static int32_t get_offset_of_Xor_96() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Xor_96)); }
	inline OpCode_t2368491978  get_Xor_96() const { return ___Xor_96; }
	inline OpCode_t2368491978 * get_address_of_Xor_96() { return &___Xor_96; }
	inline void set_Xor_96(OpCode_t2368491978  value)
	{
		___Xor_96 = value;
	}

	inline static int32_t get_offset_of_Shl_97() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Shl_97)); }
	inline OpCode_t2368491978  get_Shl_97() const { return ___Shl_97; }
	inline OpCode_t2368491978 * get_address_of_Shl_97() { return &___Shl_97; }
	inline void set_Shl_97(OpCode_t2368491978  value)
	{
		___Shl_97 = value;
	}

	inline static int32_t get_offset_of_Shr_98() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Shr_98)); }
	inline OpCode_t2368491978  get_Shr_98() const { return ___Shr_98; }
	inline OpCode_t2368491978 * get_address_of_Shr_98() { return &___Shr_98; }
	inline void set_Shr_98(OpCode_t2368491978  value)
	{
		___Shr_98 = value;
	}

	inline static int32_t get_offset_of_Shr_Un_99() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Shr_Un_99)); }
	inline OpCode_t2368491978  get_Shr_Un_99() const { return ___Shr_Un_99; }
	inline OpCode_t2368491978 * get_address_of_Shr_Un_99() { return &___Shr_Un_99; }
	inline void set_Shr_Un_99(OpCode_t2368491978  value)
	{
		___Shr_Un_99 = value;
	}

	inline static int32_t get_offset_of_Neg_100() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Neg_100)); }
	inline OpCode_t2368491978  get_Neg_100() const { return ___Neg_100; }
	inline OpCode_t2368491978 * get_address_of_Neg_100() { return &___Neg_100; }
	inline void set_Neg_100(OpCode_t2368491978  value)
	{
		___Neg_100 = value;
	}

	inline static int32_t get_offset_of_Not_101() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Not_101)); }
	inline OpCode_t2368491978  get_Not_101() const { return ___Not_101; }
	inline OpCode_t2368491978 * get_address_of_Not_101() { return &___Not_101; }
	inline void set_Not_101(OpCode_t2368491978  value)
	{
		___Not_101 = value;
	}

	inline static int32_t get_offset_of_Conv_I1_102() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_I1_102)); }
	inline OpCode_t2368491978  get_Conv_I1_102() const { return ___Conv_I1_102; }
	inline OpCode_t2368491978 * get_address_of_Conv_I1_102() { return &___Conv_I1_102; }
	inline void set_Conv_I1_102(OpCode_t2368491978  value)
	{
		___Conv_I1_102 = value;
	}

	inline static int32_t get_offset_of_Conv_I2_103() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_I2_103)); }
	inline OpCode_t2368491978  get_Conv_I2_103() const { return ___Conv_I2_103; }
	inline OpCode_t2368491978 * get_address_of_Conv_I2_103() { return &___Conv_I2_103; }
	inline void set_Conv_I2_103(OpCode_t2368491978  value)
	{
		___Conv_I2_103 = value;
	}

	inline static int32_t get_offset_of_Conv_I4_104() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_I4_104)); }
	inline OpCode_t2368491978  get_Conv_I4_104() const { return ___Conv_I4_104; }
	inline OpCode_t2368491978 * get_address_of_Conv_I4_104() { return &___Conv_I4_104; }
	inline void set_Conv_I4_104(OpCode_t2368491978  value)
	{
		___Conv_I4_104 = value;
	}

	inline static int32_t get_offset_of_Conv_I8_105() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_I8_105)); }
	inline OpCode_t2368491978  get_Conv_I8_105() const { return ___Conv_I8_105; }
	inline OpCode_t2368491978 * get_address_of_Conv_I8_105() { return &___Conv_I8_105; }
	inline void set_Conv_I8_105(OpCode_t2368491978  value)
	{
		___Conv_I8_105 = value;
	}

	inline static int32_t get_offset_of_Conv_R4_106() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_R4_106)); }
	inline OpCode_t2368491978  get_Conv_R4_106() const { return ___Conv_R4_106; }
	inline OpCode_t2368491978 * get_address_of_Conv_R4_106() { return &___Conv_R4_106; }
	inline void set_Conv_R4_106(OpCode_t2368491978  value)
	{
		___Conv_R4_106 = value;
	}

	inline static int32_t get_offset_of_Conv_R8_107() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_R8_107)); }
	inline OpCode_t2368491978  get_Conv_R8_107() const { return ___Conv_R8_107; }
	inline OpCode_t2368491978 * get_address_of_Conv_R8_107() { return &___Conv_R8_107; }
	inline void set_Conv_R8_107(OpCode_t2368491978  value)
	{
		___Conv_R8_107 = value;
	}

	inline static int32_t get_offset_of_Conv_U4_108() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_U4_108)); }
	inline OpCode_t2368491978  get_Conv_U4_108() const { return ___Conv_U4_108; }
	inline OpCode_t2368491978 * get_address_of_Conv_U4_108() { return &___Conv_U4_108; }
	inline void set_Conv_U4_108(OpCode_t2368491978  value)
	{
		___Conv_U4_108 = value;
	}

	inline static int32_t get_offset_of_Conv_U8_109() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_U8_109)); }
	inline OpCode_t2368491978  get_Conv_U8_109() const { return ___Conv_U8_109; }
	inline OpCode_t2368491978 * get_address_of_Conv_U8_109() { return &___Conv_U8_109; }
	inline void set_Conv_U8_109(OpCode_t2368491978  value)
	{
		___Conv_U8_109 = value;
	}

	inline static int32_t get_offset_of_Callvirt_110() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Callvirt_110)); }
	inline OpCode_t2368491978  get_Callvirt_110() const { return ___Callvirt_110; }
	inline OpCode_t2368491978 * get_address_of_Callvirt_110() { return &___Callvirt_110; }
	inline void set_Callvirt_110(OpCode_t2368491978  value)
	{
		___Callvirt_110 = value;
	}

	inline static int32_t get_offset_of_Cpobj_111() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Cpobj_111)); }
	inline OpCode_t2368491978  get_Cpobj_111() const { return ___Cpobj_111; }
	inline OpCode_t2368491978 * get_address_of_Cpobj_111() { return &___Cpobj_111; }
	inline void set_Cpobj_111(OpCode_t2368491978  value)
	{
		___Cpobj_111 = value;
	}

	inline static int32_t get_offset_of_Ldobj_112() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldobj_112)); }
	inline OpCode_t2368491978  get_Ldobj_112() const { return ___Ldobj_112; }
	inline OpCode_t2368491978 * get_address_of_Ldobj_112() { return &___Ldobj_112; }
	inline void set_Ldobj_112(OpCode_t2368491978  value)
	{
		___Ldobj_112 = value;
	}

	inline static int32_t get_offset_of_Ldstr_113() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldstr_113)); }
	inline OpCode_t2368491978  get_Ldstr_113() const { return ___Ldstr_113; }
	inline OpCode_t2368491978 * get_address_of_Ldstr_113() { return &___Ldstr_113; }
	inline void set_Ldstr_113(OpCode_t2368491978  value)
	{
		___Ldstr_113 = value;
	}

	inline static int32_t get_offset_of_Newobj_114() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Newobj_114)); }
	inline OpCode_t2368491978  get_Newobj_114() const { return ___Newobj_114; }
	inline OpCode_t2368491978 * get_address_of_Newobj_114() { return &___Newobj_114; }
	inline void set_Newobj_114(OpCode_t2368491978  value)
	{
		___Newobj_114 = value;
	}

	inline static int32_t get_offset_of_Castclass_115() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Castclass_115)); }
	inline OpCode_t2368491978  get_Castclass_115() const { return ___Castclass_115; }
	inline OpCode_t2368491978 * get_address_of_Castclass_115() { return &___Castclass_115; }
	inline void set_Castclass_115(OpCode_t2368491978  value)
	{
		___Castclass_115 = value;
	}

	inline static int32_t get_offset_of_Isinst_116() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Isinst_116)); }
	inline OpCode_t2368491978  get_Isinst_116() const { return ___Isinst_116; }
	inline OpCode_t2368491978 * get_address_of_Isinst_116() { return &___Isinst_116; }
	inline void set_Isinst_116(OpCode_t2368491978  value)
	{
		___Isinst_116 = value;
	}

	inline static int32_t get_offset_of_Conv_R_Un_117() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_R_Un_117)); }
	inline OpCode_t2368491978  get_Conv_R_Un_117() const { return ___Conv_R_Un_117; }
	inline OpCode_t2368491978 * get_address_of_Conv_R_Un_117() { return &___Conv_R_Un_117; }
	inline void set_Conv_R_Un_117(OpCode_t2368491978  value)
	{
		___Conv_R_Un_117 = value;
	}

	inline static int32_t get_offset_of_Unbox_118() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Unbox_118)); }
	inline OpCode_t2368491978  get_Unbox_118() const { return ___Unbox_118; }
	inline OpCode_t2368491978 * get_address_of_Unbox_118() { return &___Unbox_118; }
	inline void set_Unbox_118(OpCode_t2368491978  value)
	{
		___Unbox_118 = value;
	}

	inline static int32_t get_offset_of_Throw_119() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Throw_119)); }
	inline OpCode_t2368491978  get_Throw_119() const { return ___Throw_119; }
	inline OpCode_t2368491978 * get_address_of_Throw_119() { return &___Throw_119; }
	inline void set_Throw_119(OpCode_t2368491978  value)
	{
		___Throw_119 = value;
	}

	inline static int32_t get_offset_of_Ldfld_120() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldfld_120)); }
	inline OpCode_t2368491978  get_Ldfld_120() const { return ___Ldfld_120; }
	inline OpCode_t2368491978 * get_address_of_Ldfld_120() { return &___Ldfld_120; }
	inline void set_Ldfld_120(OpCode_t2368491978  value)
	{
		___Ldfld_120 = value;
	}

	inline static int32_t get_offset_of_Ldflda_121() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldflda_121)); }
	inline OpCode_t2368491978  get_Ldflda_121() const { return ___Ldflda_121; }
	inline OpCode_t2368491978 * get_address_of_Ldflda_121() { return &___Ldflda_121; }
	inline void set_Ldflda_121(OpCode_t2368491978  value)
	{
		___Ldflda_121 = value;
	}

	inline static int32_t get_offset_of_Stfld_122() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Stfld_122)); }
	inline OpCode_t2368491978  get_Stfld_122() const { return ___Stfld_122; }
	inline OpCode_t2368491978 * get_address_of_Stfld_122() { return &___Stfld_122; }
	inline void set_Stfld_122(OpCode_t2368491978  value)
	{
		___Stfld_122 = value;
	}

	inline static int32_t get_offset_of_Ldsfld_123() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldsfld_123)); }
	inline OpCode_t2368491978  get_Ldsfld_123() const { return ___Ldsfld_123; }
	inline OpCode_t2368491978 * get_address_of_Ldsfld_123() { return &___Ldsfld_123; }
	inline void set_Ldsfld_123(OpCode_t2368491978  value)
	{
		___Ldsfld_123 = value;
	}

	inline static int32_t get_offset_of_Ldsflda_124() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldsflda_124)); }
	inline OpCode_t2368491978  get_Ldsflda_124() const { return ___Ldsflda_124; }
	inline OpCode_t2368491978 * get_address_of_Ldsflda_124() { return &___Ldsflda_124; }
	inline void set_Ldsflda_124(OpCode_t2368491978  value)
	{
		___Ldsflda_124 = value;
	}

	inline static int32_t get_offset_of_Stsfld_125() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Stsfld_125)); }
	inline OpCode_t2368491978  get_Stsfld_125() const { return ___Stsfld_125; }
	inline OpCode_t2368491978 * get_address_of_Stsfld_125() { return &___Stsfld_125; }
	inline void set_Stsfld_125(OpCode_t2368491978  value)
	{
		___Stsfld_125 = value;
	}

	inline static int32_t get_offset_of_Stobj_126() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Stobj_126)); }
	inline OpCode_t2368491978  get_Stobj_126() const { return ___Stobj_126; }
	inline OpCode_t2368491978 * get_address_of_Stobj_126() { return &___Stobj_126; }
	inline void set_Stobj_126(OpCode_t2368491978  value)
	{
		___Stobj_126 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I1_Un_127() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_Ovf_I1_Un_127)); }
	inline OpCode_t2368491978  get_Conv_Ovf_I1_Un_127() const { return ___Conv_Ovf_I1_Un_127; }
	inline OpCode_t2368491978 * get_address_of_Conv_Ovf_I1_Un_127() { return &___Conv_Ovf_I1_Un_127; }
	inline void set_Conv_Ovf_I1_Un_127(OpCode_t2368491978  value)
	{
		___Conv_Ovf_I1_Un_127 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I2_Un_128() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_Ovf_I2_Un_128)); }
	inline OpCode_t2368491978  get_Conv_Ovf_I2_Un_128() const { return ___Conv_Ovf_I2_Un_128; }
	inline OpCode_t2368491978 * get_address_of_Conv_Ovf_I2_Un_128() { return &___Conv_Ovf_I2_Un_128; }
	inline void set_Conv_Ovf_I2_Un_128(OpCode_t2368491978  value)
	{
		___Conv_Ovf_I2_Un_128 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I4_Un_129() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_Ovf_I4_Un_129)); }
	inline OpCode_t2368491978  get_Conv_Ovf_I4_Un_129() const { return ___Conv_Ovf_I4_Un_129; }
	inline OpCode_t2368491978 * get_address_of_Conv_Ovf_I4_Un_129() { return &___Conv_Ovf_I4_Un_129; }
	inline void set_Conv_Ovf_I4_Un_129(OpCode_t2368491978  value)
	{
		___Conv_Ovf_I4_Un_129 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I8_Un_130() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_Ovf_I8_Un_130)); }
	inline OpCode_t2368491978  get_Conv_Ovf_I8_Un_130() const { return ___Conv_Ovf_I8_Un_130; }
	inline OpCode_t2368491978 * get_address_of_Conv_Ovf_I8_Un_130() { return &___Conv_Ovf_I8_Un_130; }
	inline void set_Conv_Ovf_I8_Un_130(OpCode_t2368491978  value)
	{
		___Conv_Ovf_I8_Un_130 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U1_Un_131() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_Ovf_U1_Un_131)); }
	inline OpCode_t2368491978  get_Conv_Ovf_U1_Un_131() const { return ___Conv_Ovf_U1_Un_131; }
	inline OpCode_t2368491978 * get_address_of_Conv_Ovf_U1_Un_131() { return &___Conv_Ovf_U1_Un_131; }
	inline void set_Conv_Ovf_U1_Un_131(OpCode_t2368491978  value)
	{
		___Conv_Ovf_U1_Un_131 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U2_Un_132() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_Ovf_U2_Un_132)); }
	inline OpCode_t2368491978  get_Conv_Ovf_U2_Un_132() const { return ___Conv_Ovf_U2_Un_132; }
	inline OpCode_t2368491978 * get_address_of_Conv_Ovf_U2_Un_132() { return &___Conv_Ovf_U2_Un_132; }
	inline void set_Conv_Ovf_U2_Un_132(OpCode_t2368491978  value)
	{
		___Conv_Ovf_U2_Un_132 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U4_Un_133() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_Ovf_U4_Un_133)); }
	inline OpCode_t2368491978  get_Conv_Ovf_U4_Un_133() const { return ___Conv_Ovf_U4_Un_133; }
	inline OpCode_t2368491978 * get_address_of_Conv_Ovf_U4_Un_133() { return &___Conv_Ovf_U4_Un_133; }
	inline void set_Conv_Ovf_U4_Un_133(OpCode_t2368491978  value)
	{
		___Conv_Ovf_U4_Un_133 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U8_Un_134() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_Ovf_U8_Un_134)); }
	inline OpCode_t2368491978  get_Conv_Ovf_U8_Un_134() const { return ___Conv_Ovf_U8_Un_134; }
	inline OpCode_t2368491978 * get_address_of_Conv_Ovf_U8_Un_134() { return &___Conv_Ovf_U8_Un_134; }
	inline void set_Conv_Ovf_U8_Un_134(OpCode_t2368491978  value)
	{
		___Conv_Ovf_U8_Un_134 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I_Un_135() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_Ovf_I_Un_135)); }
	inline OpCode_t2368491978  get_Conv_Ovf_I_Un_135() const { return ___Conv_Ovf_I_Un_135; }
	inline OpCode_t2368491978 * get_address_of_Conv_Ovf_I_Un_135() { return &___Conv_Ovf_I_Un_135; }
	inline void set_Conv_Ovf_I_Un_135(OpCode_t2368491978  value)
	{
		___Conv_Ovf_I_Un_135 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U_Un_136() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_Ovf_U_Un_136)); }
	inline OpCode_t2368491978  get_Conv_Ovf_U_Un_136() const { return ___Conv_Ovf_U_Un_136; }
	inline OpCode_t2368491978 * get_address_of_Conv_Ovf_U_Un_136() { return &___Conv_Ovf_U_Un_136; }
	inline void set_Conv_Ovf_U_Un_136(OpCode_t2368491978  value)
	{
		___Conv_Ovf_U_Un_136 = value;
	}

	inline static int32_t get_offset_of_Box_137() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Box_137)); }
	inline OpCode_t2368491978  get_Box_137() const { return ___Box_137; }
	inline OpCode_t2368491978 * get_address_of_Box_137() { return &___Box_137; }
	inline void set_Box_137(OpCode_t2368491978  value)
	{
		___Box_137 = value;
	}

	inline static int32_t get_offset_of_Newarr_138() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Newarr_138)); }
	inline OpCode_t2368491978  get_Newarr_138() const { return ___Newarr_138; }
	inline OpCode_t2368491978 * get_address_of_Newarr_138() { return &___Newarr_138; }
	inline void set_Newarr_138(OpCode_t2368491978  value)
	{
		___Newarr_138 = value;
	}

	inline static int32_t get_offset_of_Ldlen_139() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldlen_139)); }
	inline OpCode_t2368491978  get_Ldlen_139() const { return ___Ldlen_139; }
	inline OpCode_t2368491978 * get_address_of_Ldlen_139() { return &___Ldlen_139; }
	inline void set_Ldlen_139(OpCode_t2368491978  value)
	{
		___Ldlen_139 = value;
	}

	inline static int32_t get_offset_of_Ldelema_140() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldelema_140)); }
	inline OpCode_t2368491978  get_Ldelema_140() const { return ___Ldelema_140; }
	inline OpCode_t2368491978 * get_address_of_Ldelema_140() { return &___Ldelema_140; }
	inline void set_Ldelema_140(OpCode_t2368491978  value)
	{
		___Ldelema_140 = value;
	}

	inline static int32_t get_offset_of_Ldelem_I1_141() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldelem_I1_141)); }
	inline OpCode_t2368491978  get_Ldelem_I1_141() const { return ___Ldelem_I1_141; }
	inline OpCode_t2368491978 * get_address_of_Ldelem_I1_141() { return &___Ldelem_I1_141; }
	inline void set_Ldelem_I1_141(OpCode_t2368491978  value)
	{
		___Ldelem_I1_141 = value;
	}

	inline static int32_t get_offset_of_Ldelem_U1_142() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldelem_U1_142)); }
	inline OpCode_t2368491978  get_Ldelem_U1_142() const { return ___Ldelem_U1_142; }
	inline OpCode_t2368491978 * get_address_of_Ldelem_U1_142() { return &___Ldelem_U1_142; }
	inline void set_Ldelem_U1_142(OpCode_t2368491978  value)
	{
		___Ldelem_U1_142 = value;
	}

	inline static int32_t get_offset_of_Ldelem_I2_143() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldelem_I2_143)); }
	inline OpCode_t2368491978  get_Ldelem_I2_143() const { return ___Ldelem_I2_143; }
	inline OpCode_t2368491978 * get_address_of_Ldelem_I2_143() { return &___Ldelem_I2_143; }
	inline void set_Ldelem_I2_143(OpCode_t2368491978  value)
	{
		___Ldelem_I2_143 = value;
	}

	inline static int32_t get_offset_of_Ldelem_U2_144() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldelem_U2_144)); }
	inline OpCode_t2368491978  get_Ldelem_U2_144() const { return ___Ldelem_U2_144; }
	inline OpCode_t2368491978 * get_address_of_Ldelem_U2_144() { return &___Ldelem_U2_144; }
	inline void set_Ldelem_U2_144(OpCode_t2368491978  value)
	{
		___Ldelem_U2_144 = value;
	}

	inline static int32_t get_offset_of_Ldelem_I4_145() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldelem_I4_145)); }
	inline OpCode_t2368491978  get_Ldelem_I4_145() const { return ___Ldelem_I4_145; }
	inline OpCode_t2368491978 * get_address_of_Ldelem_I4_145() { return &___Ldelem_I4_145; }
	inline void set_Ldelem_I4_145(OpCode_t2368491978  value)
	{
		___Ldelem_I4_145 = value;
	}

	inline static int32_t get_offset_of_Ldelem_U4_146() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldelem_U4_146)); }
	inline OpCode_t2368491978  get_Ldelem_U4_146() const { return ___Ldelem_U4_146; }
	inline OpCode_t2368491978 * get_address_of_Ldelem_U4_146() { return &___Ldelem_U4_146; }
	inline void set_Ldelem_U4_146(OpCode_t2368491978  value)
	{
		___Ldelem_U4_146 = value;
	}

	inline static int32_t get_offset_of_Ldelem_I8_147() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldelem_I8_147)); }
	inline OpCode_t2368491978  get_Ldelem_I8_147() const { return ___Ldelem_I8_147; }
	inline OpCode_t2368491978 * get_address_of_Ldelem_I8_147() { return &___Ldelem_I8_147; }
	inline void set_Ldelem_I8_147(OpCode_t2368491978  value)
	{
		___Ldelem_I8_147 = value;
	}

	inline static int32_t get_offset_of_Ldelem_I_148() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldelem_I_148)); }
	inline OpCode_t2368491978  get_Ldelem_I_148() const { return ___Ldelem_I_148; }
	inline OpCode_t2368491978 * get_address_of_Ldelem_I_148() { return &___Ldelem_I_148; }
	inline void set_Ldelem_I_148(OpCode_t2368491978  value)
	{
		___Ldelem_I_148 = value;
	}

	inline static int32_t get_offset_of_Ldelem_R4_149() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldelem_R4_149)); }
	inline OpCode_t2368491978  get_Ldelem_R4_149() const { return ___Ldelem_R4_149; }
	inline OpCode_t2368491978 * get_address_of_Ldelem_R4_149() { return &___Ldelem_R4_149; }
	inline void set_Ldelem_R4_149(OpCode_t2368491978  value)
	{
		___Ldelem_R4_149 = value;
	}

	inline static int32_t get_offset_of_Ldelem_R8_150() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldelem_R8_150)); }
	inline OpCode_t2368491978  get_Ldelem_R8_150() const { return ___Ldelem_R8_150; }
	inline OpCode_t2368491978 * get_address_of_Ldelem_R8_150() { return &___Ldelem_R8_150; }
	inline void set_Ldelem_R8_150(OpCode_t2368491978  value)
	{
		___Ldelem_R8_150 = value;
	}

	inline static int32_t get_offset_of_Ldelem_Ref_151() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldelem_Ref_151)); }
	inline OpCode_t2368491978  get_Ldelem_Ref_151() const { return ___Ldelem_Ref_151; }
	inline OpCode_t2368491978 * get_address_of_Ldelem_Ref_151() { return &___Ldelem_Ref_151; }
	inline void set_Ldelem_Ref_151(OpCode_t2368491978  value)
	{
		___Ldelem_Ref_151 = value;
	}

	inline static int32_t get_offset_of_Stelem_I_152() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Stelem_I_152)); }
	inline OpCode_t2368491978  get_Stelem_I_152() const { return ___Stelem_I_152; }
	inline OpCode_t2368491978 * get_address_of_Stelem_I_152() { return &___Stelem_I_152; }
	inline void set_Stelem_I_152(OpCode_t2368491978  value)
	{
		___Stelem_I_152 = value;
	}

	inline static int32_t get_offset_of_Stelem_I1_153() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Stelem_I1_153)); }
	inline OpCode_t2368491978  get_Stelem_I1_153() const { return ___Stelem_I1_153; }
	inline OpCode_t2368491978 * get_address_of_Stelem_I1_153() { return &___Stelem_I1_153; }
	inline void set_Stelem_I1_153(OpCode_t2368491978  value)
	{
		___Stelem_I1_153 = value;
	}

	inline static int32_t get_offset_of_Stelem_I2_154() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Stelem_I2_154)); }
	inline OpCode_t2368491978  get_Stelem_I2_154() const { return ___Stelem_I2_154; }
	inline OpCode_t2368491978 * get_address_of_Stelem_I2_154() { return &___Stelem_I2_154; }
	inline void set_Stelem_I2_154(OpCode_t2368491978  value)
	{
		___Stelem_I2_154 = value;
	}

	inline static int32_t get_offset_of_Stelem_I4_155() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Stelem_I4_155)); }
	inline OpCode_t2368491978  get_Stelem_I4_155() const { return ___Stelem_I4_155; }
	inline OpCode_t2368491978 * get_address_of_Stelem_I4_155() { return &___Stelem_I4_155; }
	inline void set_Stelem_I4_155(OpCode_t2368491978  value)
	{
		___Stelem_I4_155 = value;
	}

	inline static int32_t get_offset_of_Stelem_I8_156() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Stelem_I8_156)); }
	inline OpCode_t2368491978  get_Stelem_I8_156() const { return ___Stelem_I8_156; }
	inline OpCode_t2368491978 * get_address_of_Stelem_I8_156() { return &___Stelem_I8_156; }
	inline void set_Stelem_I8_156(OpCode_t2368491978  value)
	{
		___Stelem_I8_156 = value;
	}

	inline static int32_t get_offset_of_Stelem_R4_157() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Stelem_R4_157)); }
	inline OpCode_t2368491978  get_Stelem_R4_157() const { return ___Stelem_R4_157; }
	inline OpCode_t2368491978 * get_address_of_Stelem_R4_157() { return &___Stelem_R4_157; }
	inline void set_Stelem_R4_157(OpCode_t2368491978  value)
	{
		___Stelem_R4_157 = value;
	}

	inline static int32_t get_offset_of_Stelem_R8_158() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Stelem_R8_158)); }
	inline OpCode_t2368491978  get_Stelem_R8_158() const { return ___Stelem_R8_158; }
	inline OpCode_t2368491978 * get_address_of_Stelem_R8_158() { return &___Stelem_R8_158; }
	inline void set_Stelem_R8_158(OpCode_t2368491978  value)
	{
		___Stelem_R8_158 = value;
	}

	inline static int32_t get_offset_of_Stelem_Ref_159() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Stelem_Ref_159)); }
	inline OpCode_t2368491978  get_Stelem_Ref_159() const { return ___Stelem_Ref_159; }
	inline OpCode_t2368491978 * get_address_of_Stelem_Ref_159() { return &___Stelem_Ref_159; }
	inline void set_Stelem_Ref_159(OpCode_t2368491978  value)
	{
		___Stelem_Ref_159 = value;
	}

	inline static int32_t get_offset_of_Ldelem_160() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldelem_160)); }
	inline OpCode_t2368491978  get_Ldelem_160() const { return ___Ldelem_160; }
	inline OpCode_t2368491978 * get_address_of_Ldelem_160() { return &___Ldelem_160; }
	inline void set_Ldelem_160(OpCode_t2368491978  value)
	{
		___Ldelem_160 = value;
	}

	inline static int32_t get_offset_of_Stelem_161() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Stelem_161)); }
	inline OpCode_t2368491978  get_Stelem_161() const { return ___Stelem_161; }
	inline OpCode_t2368491978 * get_address_of_Stelem_161() { return &___Stelem_161; }
	inline void set_Stelem_161(OpCode_t2368491978  value)
	{
		___Stelem_161 = value;
	}

	inline static int32_t get_offset_of_Unbox_Any_162() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Unbox_Any_162)); }
	inline OpCode_t2368491978  get_Unbox_Any_162() const { return ___Unbox_Any_162; }
	inline OpCode_t2368491978 * get_address_of_Unbox_Any_162() { return &___Unbox_Any_162; }
	inline void set_Unbox_Any_162(OpCode_t2368491978  value)
	{
		___Unbox_Any_162 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I1_163() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_Ovf_I1_163)); }
	inline OpCode_t2368491978  get_Conv_Ovf_I1_163() const { return ___Conv_Ovf_I1_163; }
	inline OpCode_t2368491978 * get_address_of_Conv_Ovf_I1_163() { return &___Conv_Ovf_I1_163; }
	inline void set_Conv_Ovf_I1_163(OpCode_t2368491978  value)
	{
		___Conv_Ovf_I1_163 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U1_164() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_Ovf_U1_164)); }
	inline OpCode_t2368491978  get_Conv_Ovf_U1_164() const { return ___Conv_Ovf_U1_164; }
	inline OpCode_t2368491978 * get_address_of_Conv_Ovf_U1_164() { return &___Conv_Ovf_U1_164; }
	inline void set_Conv_Ovf_U1_164(OpCode_t2368491978  value)
	{
		___Conv_Ovf_U1_164 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I2_165() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_Ovf_I2_165)); }
	inline OpCode_t2368491978  get_Conv_Ovf_I2_165() const { return ___Conv_Ovf_I2_165; }
	inline OpCode_t2368491978 * get_address_of_Conv_Ovf_I2_165() { return &___Conv_Ovf_I2_165; }
	inline void set_Conv_Ovf_I2_165(OpCode_t2368491978  value)
	{
		___Conv_Ovf_I2_165 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U2_166() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_Ovf_U2_166)); }
	inline OpCode_t2368491978  get_Conv_Ovf_U2_166() const { return ___Conv_Ovf_U2_166; }
	inline OpCode_t2368491978 * get_address_of_Conv_Ovf_U2_166() { return &___Conv_Ovf_U2_166; }
	inline void set_Conv_Ovf_U2_166(OpCode_t2368491978  value)
	{
		___Conv_Ovf_U2_166 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I4_167() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_Ovf_I4_167)); }
	inline OpCode_t2368491978  get_Conv_Ovf_I4_167() const { return ___Conv_Ovf_I4_167; }
	inline OpCode_t2368491978 * get_address_of_Conv_Ovf_I4_167() { return &___Conv_Ovf_I4_167; }
	inline void set_Conv_Ovf_I4_167(OpCode_t2368491978  value)
	{
		___Conv_Ovf_I4_167 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U4_168() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_Ovf_U4_168)); }
	inline OpCode_t2368491978  get_Conv_Ovf_U4_168() const { return ___Conv_Ovf_U4_168; }
	inline OpCode_t2368491978 * get_address_of_Conv_Ovf_U4_168() { return &___Conv_Ovf_U4_168; }
	inline void set_Conv_Ovf_U4_168(OpCode_t2368491978  value)
	{
		___Conv_Ovf_U4_168 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I8_169() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_Ovf_I8_169)); }
	inline OpCode_t2368491978  get_Conv_Ovf_I8_169() const { return ___Conv_Ovf_I8_169; }
	inline OpCode_t2368491978 * get_address_of_Conv_Ovf_I8_169() { return &___Conv_Ovf_I8_169; }
	inline void set_Conv_Ovf_I8_169(OpCode_t2368491978  value)
	{
		___Conv_Ovf_I8_169 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U8_170() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_Ovf_U8_170)); }
	inline OpCode_t2368491978  get_Conv_Ovf_U8_170() const { return ___Conv_Ovf_U8_170; }
	inline OpCode_t2368491978 * get_address_of_Conv_Ovf_U8_170() { return &___Conv_Ovf_U8_170; }
	inline void set_Conv_Ovf_U8_170(OpCode_t2368491978  value)
	{
		___Conv_Ovf_U8_170 = value;
	}

	inline static int32_t get_offset_of_Refanyval_171() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Refanyval_171)); }
	inline OpCode_t2368491978  get_Refanyval_171() const { return ___Refanyval_171; }
	inline OpCode_t2368491978 * get_address_of_Refanyval_171() { return &___Refanyval_171; }
	inline void set_Refanyval_171(OpCode_t2368491978  value)
	{
		___Refanyval_171 = value;
	}

	inline static int32_t get_offset_of_Ckfinite_172() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ckfinite_172)); }
	inline OpCode_t2368491978  get_Ckfinite_172() const { return ___Ckfinite_172; }
	inline OpCode_t2368491978 * get_address_of_Ckfinite_172() { return &___Ckfinite_172; }
	inline void set_Ckfinite_172(OpCode_t2368491978  value)
	{
		___Ckfinite_172 = value;
	}

	inline static int32_t get_offset_of_Mkrefany_173() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Mkrefany_173)); }
	inline OpCode_t2368491978  get_Mkrefany_173() const { return ___Mkrefany_173; }
	inline OpCode_t2368491978 * get_address_of_Mkrefany_173() { return &___Mkrefany_173; }
	inline void set_Mkrefany_173(OpCode_t2368491978  value)
	{
		___Mkrefany_173 = value;
	}

	inline static int32_t get_offset_of_Ldtoken_174() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldtoken_174)); }
	inline OpCode_t2368491978  get_Ldtoken_174() const { return ___Ldtoken_174; }
	inline OpCode_t2368491978 * get_address_of_Ldtoken_174() { return &___Ldtoken_174; }
	inline void set_Ldtoken_174(OpCode_t2368491978  value)
	{
		___Ldtoken_174 = value;
	}

	inline static int32_t get_offset_of_Conv_U2_175() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_U2_175)); }
	inline OpCode_t2368491978  get_Conv_U2_175() const { return ___Conv_U2_175; }
	inline OpCode_t2368491978 * get_address_of_Conv_U2_175() { return &___Conv_U2_175; }
	inline void set_Conv_U2_175(OpCode_t2368491978  value)
	{
		___Conv_U2_175 = value;
	}

	inline static int32_t get_offset_of_Conv_U1_176() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_U1_176)); }
	inline OpCode_t2368491978  get_Conv_U1_176() const { return ___Conv_U1_176; }
	inline OpCode_t2368491978 * get_address_of_Conv_U1_176() { return &___Conv_U1_176; }
	inline void set_Conv_U1_176(OpCode_t2368491978  value)
	{
		___Conv_U1_176 = value;
	}

	inline static int32_t get_offset_of_Conv_I_177() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_I_177)); }
	inline OpCode_t2368491978  get_Conv_I_177() const { return ___Conv_I_177; }
	inline OpCode_t2368491978 * get_address_of_Conv_I_177() { return &___Conv_I_177; }
	inline void set_Conv_I_177(OpCode_t2368491978  value)
	{
		___Conv_I_177 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I_178() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_Ovf_I_178)); }
	inline OpCode_t2368491978  get_Conv_Ovf_I_178() const { return ___Conv_Ovf_I_178; }
	inline OpCode_t2368491978 * get_address_of_Conv_Ovf_I_178() { return &___Conv_Ovf_I_178; }
	inline void set_Conv_Ovf_I_178(OpCode_t2368491978  value)
	{
		___Conv_Ovf_I_178 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U_179() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_Ovf_U_179)); }
	inline OpCode_t2368491978  get_Conv_Ovf_U_179() const { return ___Conv_Ovf_U_179; }
	inline OpCode_t2368491978 * get_address_of_Conv_Ovf_U_179() { return &___Conv_Ovf_U_179; }
	inline void set_Conv_Ovf_U_179(OpCode_t2368491978  value)
	{
		___Conv_Ovf_U_179 = value;
	}

	inline static int32_t get_offset_of_Add_Ovf_180() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Add_Ovf_180)); }
	inline OpCode_t2368491978  get_Add_Ovf_180() const { return ___Add_Ovf_180; }
	inline OpCode_t2368491978 * get_address_of_Add_Ovf_180() { return &___Add_Ovf_180; }
	inline void set_Add_Ovf_180(OpCode_t2368491978  value)
	{
		___Add_Ovf_180 = value;
	}

	inline static int32_t get_offset_of_Add_Ovf_Un_181() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Add_Ovf_Un_181)); }
	inline OpCode_t2368491978  get_Add_Ovf_Un_181() const { return ___Add_Ovf_Un_181; }
	inline OpCode_t2368491978 * get_address_of_Add_Ovf_Un_181() { return &___Add_Ovf_Un_181; }
	inline void set_Add_Ovf_Un_181(OpCode_t2368491978  value)
	{
		___Add_Ovf_Un_181 = value;
	}

	inline static int32_t get_offset_of_Mul_Ovf_182() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Mul_Ovf_182)); }
	inline OpCode_t2368491978  get_Mul_Ovf_182() const { return ___Mul_Ovf_182; }
	inline OpCode_t2368491978 * get_address_of_Mul_Ovf_182() { return &___Mul_Ovf_182; }
	inline void set_Mul_Ovf_182(OpCode_t2368491978  value)
	{
		___Mul_Ovf_182 = value;
	}

	inline static int32_t get_offset_of_Mul_Ovf_Un_183() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Mul_Ovf_Un_183)); }
	inline OpCode_t2368491978  get_Mul_Ovf_Un_183() const { return ___Mul_Ovf_Un_183; }
	inline OpCode_t2368491978 * get_address_of_Mul_Ovf_Un_183() { return &___Mul_Ovf_Un_183; }
	inline void set_Mul_Ovf_Un_183(OpCode_t2368491978  value)
	{
		___Mul_Ovf_Un_183 = value;
	}

	inline static int32_t get_offset_of_Sub_Ovf_184() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Sub_Ovf_184)); }
	inline OpCode_t2368491978  get_Sub_Ovf_184() const { return ___Sub_Ovf_184; }
	inline OpCode_t2368491978 * get_address_of_Sub_Ovf_184() { return &___Sub_Ovf_184; }
	inline void set_Sub_Ovf_184(OpCode_t2368491978  value)
	{
		___Sub_Ovf_184 = value;
	}

	inline static int32_t get_offset_of_Sub_Ovf_Un_185() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Sub_Ovf_Un_185)); }
	inline OpCode_t2368491978  get_Sub_Ovf_Un_185() const { return ___Sub_Ovf_Un_185; }
	inline OpCode_t2368491978 * get_address_of_Sub_Ovf_Un_185() { return &___Sub_Ovf_Un_185; }
	inline void set_Sub_Ovf_Un_185(OpCode_t2368491978  value)
	{
		___Sub_Ovf_Un_185 = value;
	}

	inline static int32_t get_offset_of_Endfinally_186() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Endfinally_186)); }
	inline OpCode_t2368491978  get_Endfinally_186() const { return ___Endfinally_186; }
	inline OpCode_t2368491978 * get_address_of_Endfinally_186() { return &___Endfinally_186; }
	inline void set_Endfinally_186(OpCode_t2368491978  value)
	{
		___Endfinally_186 = value;
	}

	inline static int32_t get_offset_of_Leave_187() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Leave_187)); }
	inline OpCode_t2368491978  get_Leave_187() const { return ___Leave_187; }
	inline OpCode_t2368491978 * get_address_of_Leave_187() { return &___Leave_187; }
	inline void set_Leave_187(OpCode_t2368491978  value)
	{
		___Leave_187 = value;
	}

	inline static int32_t get_offset_of_Leave_S_188() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Leave_S_188)); }
	inline OpCode_t2368491978  get_Leave_S_188() const { return ___Leave_S_188; }
	inline OpCode_t2368491978 * get_address_of_Leave_S_188() { return &___Leave_S_188; }
	inline void set_Leave_S_188(OpCode_t2368491978  value)
	{
		___Leave_S_188 = value;
	}

	inline static int32_t get_offset_of_Stind_I_189() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Stind_I_189)); }
	inline OpCode_t2368491978  get_Stind_I_189() const { return ___Stind_I_189; }
	inline OpCode_t2368491978 * get_address_of_Stind_I_189() { return &___Stind_I_189; }
	inline void set_Stind_I_189(OpCode_t2368491978  value)
	{
		___Stind_I_189 = value;
	}

	inline static int32_t get_offset_of_Conv_U_190() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Conv_U_190)); }
	inline OpCode_t2368491978  get_Conv_U_190() const { return ___Conv_U_190; }
	inline OpCode_t2368491978 * get_address_of_Conv_U_190() { return &___Conv_U_190; }
	inline void set_Conv_U_190(OpCode_t2368491978  value)
	{
		___Conv_U_190 = value;
	}

	inline static int32_t get_offset_of_Prefix7_191() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Prefix7_191)); }
	inline OpCode_t2368491978  get_Prefix7_191() const { return ___Prefix7_191; }
	inline OpCode_t2368491978 * get_address_of_Prefix7_191() { return &___Prefix7_191; }
	inline void set_Prefix7_191(OpCode_t2368491978  value)
	{
		___Prefix7_191 = value;
	}

	inline static int32_t get_offset_of_Prefix6_192() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Prefix6_192)); }
	inline OpCode_t2368491978  get_Prefix6_192() const { return ___Prefix6_192; }
	inline OpCode_t2368491978 * get_address_of_Prefix6_192() { return &___Prefix6_192; }
	inline void set_Prefix6_192(OpCode_t2368491978  value)
	{
		___Prefix6_192 = value;
	}

	inline static int32_t get_offset_of_Prefix5_193() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Prefix5_193)); }
	inline OpCode_t2368491978  get_Prefix5_193() const { return ___Prefix5_193; }
	inline OpCode_t2368491978 * get_address_of_Prefix5_193() { return &___Prefix5_193; }
	inline void set_Prefix5_193(OpCode_t2368491978  value)
	{
		___Prefix5_193 = value;
	}

	inline static int32_t get_offset_of_Prefix4_194() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Prefix4_194)); }
	inline OpCode_t2368491978  get_Prefix4_194() const { return ___Prefix4_194; }
	inline OpCode_t2368491978 * get_address_of_Prefix4_194() { return &___Prefix4_194; }
	inline void set_Prefix4_194(OpCode_t2368491978  value)
	{
		___Prefix4_194 = value;
	}

	inline static int32_t get_offset_of_Prefix3_195() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Prefix3_195)); }
	inline OpCode_t2368491978  get_Prefix3_195() const { return ___Prefix3_195; }
	inline OpCode_t2368491978 * get_address_of_Prefix3_195() { return &___Prefix3_195; }
	inline void set_Prefix3_195(OpCode_t2368491978  value)
	{
		___Prefix3_195 = value;
	}

	inline static int32_t get_offset_of_Prefix2_196() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Prefix2_196)); }
	inline OpCode_t2368491978  get_Prefix2_196() const { return ___Prefix2_196; }
	inline OpCode_t2368491978 * get_address_of_Prefix2_196() { return &___Prefix2_196; }
	inline void set_Prefix2_196(OpCode_t2368491978  value)
	{
		___Prefix2_196 = value;
	}

	inline static int32_t get_offset_of_Prefix1_197() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Prefix1_197)); }
	inline OpCode_t2368491978  get_Prefix1_197() const { return ___Prefix1_197; }
	inline OpCode_t2368491978 * get_address_of_Prefix1_197() { return &___Prefix1_197; }
	inline void set_Prefix1_197(OpCode_t2368491978  value)
	{
		___Prefix1_197 = value;
	}

	inline static int32_t get_offset_of_Prefixref_198() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Prefixref_198)); }
	inline OpCode_t2368491978  get_Prefixref_198() const { return ___Prefixref_198; }
	inline OpCode_t2368491978 * get_address_of_Prefixref_198() { return &___Prefixref_198; }
	inline void set_Prefixref_198(OpCode_t2368491978  value)
	{
		___Prefixref_198 = value;
	}

	inline static int32_t get_offset_of_Arglist_199() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Arglist_199)); }
	inline OpCode_t2368491978  get_Arglist_199() const { return ___Arglist_199; }
	inline OpCode_t2368491978 * get_address_of_Arglist_199() { return &___Arglist_199; }
	inline void set_Arglist_199(OpCode_t2368491978  value)
	{
		___Arglist_199 = value;
	}

	inline static int32_t get_offset_of_Ceq_200() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ceq_200)); }
	inline OpCode_t2368491978  get_Ceq_200() const { return ___Ceq_200; }
	inline OpCode_t2368491978 * get_address_of_Ceq_200() { return &___Ceq_200; }
	inline void set_Ceq_200(OpCode_t2368491978  value)
	{
		___Ceq_200 = value;
	}

	inline static int32_t get_offset_of_Cgt_201() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Cgt_201)); }
	inline OpCode_t2368491978  get_Cgt_201() const { return ___Cgt_201; }
	inline OpCode_t2368491978 * get_address_of_Cgt_201() { return &___Cgt_201; }
	inline void set_Cgt_201(OpCode_t2368491978  value)
	{
		___Cgt_201 = value;
	}

	inline static int32_t get_offset_of_Cgt_Un_202() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Cgt_Un_202)); }
	inline OpCode_t2368491978  get_Cgt_Un_202() const { return ___Cgt_Un_202; }
	inline OpCode_t2368491978 * get_address_of_Cgt_Un_202() { return &___Cgt_Un_202; }
	inline void set_Cgt_Un_202(OpCode_t2368491978  value)
	{
		___Cgt_Un_202 = value;
	}

	inline static int32_t get_offset_of_Clt_203() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Clt_203)); }
	inline OpCode_t2368491978  get_Clt_203() const { return ___Clt_203; }
	inline OpCode_t2368491978 * get_address_of_Clt_203() { return &___Clt_203; }
	inline void set_Clt_203(OpCode_t2368491978  value)
	{
		___Clt_203 = value;
	}

	inline static int32_t get_offset_of_Clt_Un_204() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Clt_Un_204)); }
	inline OpCode_t2368491978  get_Clt_Un_204() const { return ___Clt_Un_204; }
	inline OpCode_t2368491978 * get_address_of_Clt_Un_204() { return &___Clt_Un_204; }
	inline void set_Clt_Un_204(OpCode_t2368491978  value)
	{
		___Clt_Un_204 = value;
	}

	inline static int32_t get_offset_of_Ldftn_205() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldftn_205)); }
	inline OpCode_t2368491978  get_Ldftn_205() const { return ___Ldftn_205; }
	inline OpCode_t2368491978 * get_address_of_Ldftn_205() { return &___Ldftn_205; }
	inline void set_Ldftn_205(OpCode_t2368491978  value)
	{
		___Ldftn_205 = value;
	}

	inline static int32_t get_offset_of_Ldvirtftn_206() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldvirtftn_206)); }
	inline OpCode_t2368491978  get_Ldvirtftn_206() const { return ___Ldvirtftn_206; }
	inline OpCode_t2368491978 * get_address_of_Ldvirtftn_206() { return &___Ldvirtftn_206; }
	inline void set_Ldvirtftn_206(OpCode_t2368491978  value)
	{
		___Ldvirtftn_206 = value;
	}

	inline static int32_t get_offset_of_Ldarg_207() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldarg_207)); }
	inline OpCode_t2368491978  get_Ldarg_207() const { return ___Ldarg_207; }
	inline OpCode_t2368491978 * get_address_of_Ldarg_207() { return &___Ldarg_207; }
	inline void set_Ldarg_207(OpCode_t2368491978  value)
	{
		___Ldarg_207 = value;
	}

	inline static int32_t get_offset_of_Ldarga_208() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldarga_208)); }
	inline OpCode_t2368491978  get_Ldarga_208() const { return ___Ldarga_208; }
	inline OpCode_t2368491978 * get_address_of_Ldarga_208() { return &___Ldarga_208; }
	inline void set_Ldarga_208(OpCode_t2368491978  value)
	{
		___Ldarga_208 = value;
	}

	inline static int32_t get_offset_of_Starg_209() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Starg_209)); }
	inline OpCode_t2368491978  get_Starg_209() const { return ___Starg_209; }
	inline OpCode_t2368491978 * get_address_of_Starg_209() { return &___Starg_209; }
	inline void set_Starg_209(OpCode_t2368491978  value)
	{
		___Starg_209 = value;
	}

	inline static int32_t get_offset_of_Ldloc_210() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldloc_210)); }
	inline OpCode_t2368491978  get_Ldloc_210() const { return ___Ldloc_210; }
	inline OpCode_t2368491978 * get_address_of_Ldloc_210() { return &___Ldloc_210; }
	inline void set_Ldloc_210(OpCode_t2368491978  value)
	{
		___Ldloc_210 = value;
	}

	inline static int32_t get_offset_of_Ldloca_211() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Ldloca_211)); }
	inline OpCode_t2368491978  get_Ldloca_211() const { return ___Ldloca_211; }
	inline OpCode_t2368491978 * get_address_of_Ldloca_211() { return &___Ldloca_211; }
	inline void set_Ldloca_211(OpCode_t2368491978  value)
	{
		___Ldloca_211 = value;
	}

	inline static int32_t get_offset_of_Stloc_212() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Stloc_212)); }
	inline OpCode_t2368491978  get_Stloc_212() const { return ___Stloc_212; }
	inline OpCode_t2368491978 * get_address_of_Stloc_212() { return &___Stloc_212; }
	inline void set_Stloc_212(OpCode_t2368491978  value)
	{
		___Stloc_212 = value;
	}

	inline static int32_t get_offset_of_Localloc_213() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Localloc_213)); }
	inline OpCode_t2368491978  get_Localloc_213() const { return ___Localloc_213; }
	inline OpCode_t2368491978 * get_address_of_Localloc_213() { return &___Localloc_213; }
	inline void set_Localloc_213(OpCode_t2368491978  value)
	{
		___Localloc_213 = value;
	}

	inline static int32_t get_offset_of_Endfilter_214() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Endfilter_214)); }
	inline OpCode_t2368491978  get_Endfilter_214() const { return ___Endfilter_214; }
	inline OpCode_t2368491978 * get_address_of_Endfilter_214() { return &___Endfilter_214; }
	inline void set_Endfilter_214(OpCode_t2368491978  value)
	{
		___Endfilter_214 = value;
	}

	inline static int32_t get_offset_of_Unaligned_215() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Unaligned_215)); }
	inline OpCode_t2368491978  get_Unaligned_215() const { return ___Unaligned_215; }
	inline OpCode_t2368491978 * get_address_of_Unaligned_215() { return &___Unaligned_215; }
	inline void set_Unaligned_215(OpCode_t2368491978  value)
	{
		___Unaligned_215 = value;
	}

	inline static int32_t get_offset_of_Volatile_216() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Volatile_216)); }
	inline OpCode_t2368491978  get_Volatile_216() const { return ___Volatile_216; }
	inline OpCode_t2368491978 * get_address_of_Volatile_216() { return &___Volatile_216; }
	inline void set_Volatile_216(OpCode_t2368491978  value)
	{
		___Volatile_216 = value;
	}

	inline static int32_t get_offset_of_Tailcall_217() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Tailcall_217)); }
	inline OpCode_t2368491978  get_Tailcall_217() const { return ___Tailcall_217; }
	inline OpCode_t2368491978 * get_address_of_Tailcall_217() { return &___Tailcall_217; }
	inline void set_Tailcall_217(OpCode_t2368491978  value)
	{
		___Tailcall_217 = value;
	}

	inline static int32_t get_offset_of_Initobj_218() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Initobj_218)); }
	inline OpCode_t2368491978  get_Initobj_218() const { return ___Initobj_218; }
	inline OpCode_t2368491978 * get_address_of_Initobj_218() { return &___Initobj_218; }
	inline void set_Initobj_218(OpCode_t2368491978  value)
	{
		___Initobj_218 = value;
	}

	inline static int32_t get_offset_of_Constrained_219() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Constrained_219)); }
	inline OpCode_t2368491978  get_Constrained_219() const { return ___Constrained_219; }
	inline OpCode_t2368491978 * get_address_of_Constrained_219() { return &___Constrained_219; }
	inline void set_Constrained_219(OpCode_t2368491978  value)
	{
		___Constrained_219 = value;
	}

	inline static int32_t get_offset_of_Cpblk_220() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Cpblk_220)); }
	inline OpCode_t2368491978  get_Cpblk_220() const { return ___Cpblk_220; }
	inline OpCode_t2368491978 * get_address_of_Cpblk_220() { return &___Cpblk_220; }
	inline void set_Cpblk_220(OpCode_t2368491978  value)
	{
		___Cpblk_220 = value;
	}

	inline static int32_t get_offset_of_Initblk_221() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Initblk_221)); }
	inline OpCode_t2368491978  get_Initblk_221() const { return ___Initblk_221; }
	inline OpCode_t2368491978 * get_address_of_Initblk_221() { return &___Initblk_221; }
	inline void set_Initblk_221(OpCode_t2368491978  value)
	{
		___Initblk_221 = value;
	}

	inline static int32_t get_offset_of_Rethrow_222() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Rethrow_222)); }
	inline OpCode_t2368491978  get_Rethrow_222() const { return ___Rethrow_222; }
	inline OpCode_t2368491978 * get_address_of_Rethrow_222() { return &___Rethrow_222; }
	inline void set_Rethrow_222(OpCode_t2368491978  value)
	{
		___Rethrow_222 = value;
	}

	inline static int32_t get_offset_of_Sizeof_223() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Sizeof_223)); }
	inline OpCode_t2368491978  get_Sizeof_223() const { return ___Sizeof_223; }
	inline OpCode_t2368491978 * get_address_of_Sizeof_223() { return &___Sizeof_223; }
	inline void set_Sizeof_223(OpCode_t2368491978  value)
	{
		___Sizeof_223 = value;
	}

	inline static int32_t get_offset_of_Refanytype_224() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Refanytype_224)); }
	inline OpCode_t2368491978  get_Refanytype_224() const { return ___Refanytype_224; }
	inline OpCode_t2368491978 * get_address_of_Refanytype_224() { return &___Refanytype_224; }
	inline void set_Refanytype_224(OpCode_t2368491978  value)
	{
		___Refanytype_224 = value;
	}

	inline static int32_t get_offset_of_Readonly_225() { return static_cast<int32_t>(offsetof(OpCodes_t670429032_StaticFields, ___Readonly_225)); }
	inline OpCode_t2368491978  get_Readonly_225() const { return ___Readonly_225; }
	inline OpCode_t2368491978 * get_address_of_Readonly_225() { return &___Readonly_225; }
	inline void set_Readonly_225(OpCode_t2368491978  value)
	{
		___Readonly_225 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPCODES_T670429032_H
#ifndef OPERANDTYPE_T173989003_H
#define OPERANDTYPE_T173989003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.OperandType
struct  OperandType_t173989003 
{
public:
	// System.Int32 System.Reflection.Emit.OperandType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OperandType_t173989003, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERANDTYPE_T173989003_H
#ifndef PEFILEKINDS_T471872902_H
#define PEFILEKINDS_T471872902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.PEFileKinds
struct  PEFileKinds_t471872902 
{
public:
	// System.Int32 System.Reflection.Emit.PEFileKinds::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PEFileKinds_t471872902, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PEFILEKINDS_T471872902_H
#ifndef PACKINGSIZE_T727503973_H
#define PACKINGSIZE_T727503973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.PackingSize
struct  PackingSize_t727503973 
{
public:
	// System.Int32 System.Reflection.Emit.PackingSize::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PackingSize_t727503973, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PACKINGSIZE_T727503973_H
#ifndef STACKBEHAVIOUR_T98457156_H
#define STACKBEHAVIOUR_T98457156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.StackBehaviour
struct  StackBehaviour_t98457156 
{
public:
	// System.Int32 System.Reflection.Emit.StackBehaviour::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StackBehaviour_t98457156, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKBEHAVIOUR_T98457156_H
#ifndef AMBIGUOUSMATCHEXCEPTION_T957469615_H
#define AMBIGUOUSMATCHEXCEPTION_T957469615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AmbiguousMatchException
struct  AmbiguousMatchException_t957469615  : public SystemException_t972320735
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AMBIGUOUSMATCHEXCEPTION_T957469615_H
#ifndef ASSEMBLY_T2995492547_H
#define ASSEMBLY_T2995492547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly
struct  Assembly_t2995492547  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	IntPtr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t2438381431 * ___resolve_event_holder_1;
	// System.Security.Policy.Evidence System.Reflection.Assembly::_evidence
	Evidence_t620674145 * ____evidence_2;
	// System.Security.PermissionSet System.Reflection.Assembly::_minimum
	PermissionSet_t3784804660 * ____minimum_3;
	// System.Security.PermissionSet System.Reflection.Assembly::_optional
	PermissionSet_t3784804660 * ____optional_4;
	// System.Security.PermissionSet System.Reflection.Assembly::_refuse
	PermissionSet_t3784804660 * ____refuse_5;
	// System.Security.PermissionSet System.Reflection.Assembly::_granted
	PermissionSet_t3784804660 * ____granted_6;
	// System.Security.PermissionSet System.Reflection.Assembly::_denied
	PermissionSet_t3784804660 * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t2995492547, ____mono_assembly_0)); }
	inline IntPtr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline IntPtr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(IntPtr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t2995492547, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t2438381431 * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t2438381431 ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t2438381431 * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((&___resolve_event_holder_1), value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t2995492547, ____evidence_2)); }
	inline Evidence_t620674145 * get__evidence_2() const { return ____evidence_2; }
	inline Evidence_t620674145 ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(Evidence_t620674145 * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_2), value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t2995492547, ____minimum_3)); }
	inline PermissionSet_t3784804660 * get__minimum_3() const { return ____minimum_3; }
	inline PermissionSet_t3784804660 ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(PermissionSet_t3784804660 * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((&____minimum_3), value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t2995492547, ____optional_4)); }
	inline PermissionSet_t3784804660 * get__optional_4() const { return ____optional_4; }
	inline PermissionSet_t3784804660 ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(PermissionSet_t3784804660 * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((&____optional_4), value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t2995492547, ____refuse_5)); }
	inline PermissionSet_t3784804660 * get__refuse_5() const { return ____refuse_5; }
	inline PermissionSet_t3784804660 ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(PermissionSet_t3784804660 * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((&____refuse_5), value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t2995492547, ____granted_6)); }
	inline PermissionSet_t3784804660 * get__granted_6() const { return ____granted_6; }
	inline PermissionSet_t3784804660 ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(PermissionSet_t3784804660 * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((&____granted_6), value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t2995492547, ____denied_7)); }
	inline PermissionSet_t3784804660 * get__denied_7() const { return ____denied_7; }
	inline PermissionSet_t3784804660 ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(PermissionSet_t3784804660 * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((&____denied_7), value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t2995492547, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t2995492547, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLY_T2995492547_H
#ifndef METHODIMPLATTRIBUTES_T1209068121_H
#define METHODIMPLATTRIBUTES_T1209068121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodImplAttributes
struct  MethodImplAttributes_t1209068121 
{
public:
	// System.Int32 System.Reflection.MethodImplAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodImplAttributes_t1209068121, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODIMPLATTRIBUTES_T1209068121_H
#ifndef BINDINGFLAGS_T994831895_H
#define BINDINGFLAGS_T994831895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t994831895 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t994831895, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T994831895_H
#ifndef CALLINGCONVENTIONS_T1745627980_H
#define CALLINGCONVENTIONS_T1745627980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CallingConventions
struct  CallingConventions_t1745627980 
{
public:
	// System.Int32 System.Reflection.CallingConventions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConventions_t1745627980, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLINGCONVENTIONS_T1745627980_H
#ifndef CONSTRUCTORINFO_T712711328_H
#define CONSTRUCTORINFO_T712711328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t712711328  : public MethodBase_t3729707973
{
public:

public:
};

struct ConstructorInfo_t712711328_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t712711328_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConstructorName_0), value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t712711328_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((&___TypeConstructorName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTORINFO_T712711328_H
#ifndef CUSTOMATTRIBUTENAMEDARGUMENT_T4044901038_H
#define CUSTOMATTRIBUTENAMEDARGUMENT_T4044901038_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t4044901038 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t215531209  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t4044901038, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t215531209  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t215531209 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t215531209  value)
	{
		___typedArgument_0 = value;
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t4044901038, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___memberInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t4044901038_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t215531209_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t4044901038_marshaled_com
{
	CustomAttributeTypedArgument_t215531209_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
#endif // CUSTOMATTRIBUTENAMEDARGUMENT_T4044901038_H
#ifndef EVENTATTRIBUTES_T3409445861_H
#define EVENTATTRIBUTES_T3409445861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventAttributes
struct  EventAttributes_t3409445861 
{
public:
	// System.Int32 System.Reflection.EventAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventAttributes_t3409445861, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTATTRIBUTES_T3409445861_H
#ifndef RUNTIMETYPEHANDLE_T915944704_H
#define RUNTIMETYPEHANDLE_T915944704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t915944704 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t915944704, ___value_0)); }
	inline IntPtr_t get_value_0() const { return ___value_0; }
	inline IntPtr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(IntPtr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T915944704_H
#ifndef ASSEMBLYNAMEFLAGS_T3742504792_H
#define ASSEMBLYNAMEFLAGS_T3742504792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyNameFlags
struct  AssemblyNameFlags_t3742504792 
{
public:
	// System.Int32 System.Reflection.AssemblyNameFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyNameFlags_t3742504792, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYNAMEFLAGS_T3742504792_H
#ifndef MEMBERTYPES_T892647767_H
#define MEMBERTYPES_T892647767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberTypes
struct  MemberTypes_t892647767 
{
public:
	// System.Int32 System.Reflection.MemberTypes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MemberTypes_t892647767, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERTYPES_T892647767_H
#ifndef MANIFESTRESOURCEINFO_T3787619463_H
#define MANIFESTRESOURCEINFO_T3787619463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ManifestResourceInfo
struct  ManifestResourceInfo_t3787619463  : public RuntimeObject
{
public:
	// System.Reflection.Assembly System.Reflection.ManifestResourceInfo::_assembly
	Assembly_t2995492547 * ____assembly_0;
	// System.String System.Reflection.ManifestResourceInfo::_filename
	String_t* ____filename_1;
	// System.Reflection.ResourceLocation System.Reflection.ManifestResourceInfo::_location
	int32_t ____location_2;

public:
	inline static int32_t get_offset_of__assembly_0() { return static_cast<int32_t>(offsetof(ManifestResourceInfo_t3787619463, ____assembly_0)); }
	inline Assembly_t2995492547 * get__assembly_0() const { return ____assembly_0; }
	inline Assembly_t2995492547 ** get_address_of__assembly_0() { return &____assembly_0; }
	inline void set__assembly_0(Assembly_t2995492547 * value)
	{
		____assembly_0 = value;
		Il2CppCodeGenWriteBarrier((&____assembly_0), value);
	}

	inline static int32_t get_offset_of__filename_1() { return static_cast<int32_t>(offsetof(ManifestResourceInfo_t3787619463, ____filename_1)); }
	inline String_t* get__filename_1() const { return ____filename_1; }
	inline String_t** get_address_of__filename_1() { return &____filename_1; }
	inline void set__filename_1(String_t* value)
	{
		____filename_1 = value;
		Il2CppCodeGenWriteBarrier((&____filename_1), value);
	}

	inline static int32_t get_offset_of__location_2() { return static_cast<int32_t>(offsetof(ManifestResourceInfo_t3787619463, ____location_2)); }
	inline int32_t get__location_2() const { return ____location_2; }
	inline int32_t* get_address_of__location_2() { return &____location_2; }
	inline void set__location_2(int32_t value)
	{
		____location_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANIFESTRESOURCEINFO_T3787619463_H
#ifndef MONOFIELD_T_H
#define MONOFIELD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoField
struct  MonoField_t  : public FieldInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoField::klass
	IntPtr_t ___klass_0;
	// System.RuntimeFieldHandle System.Reflection.MonoField::fhandle
	RuntimeFieldHandle_t2468717698  ___fhandle_1;
	// System.String System.Reflection.MonoField::name
	String_t* ___name_2;
	// System.Type System.Reflection.MonoField::type
	Type_t * ___type_3;
	// System.Reflection.FieldAttributes System.Reflection.MonoField::attrs
	int32_t ___attrs_4;

public:
	inline static int32_t get_offset_of_klass_0() { return static_cast<int32_t>(offsetof(MonoField_t, ___klass_0)); }
	inline IntPtr_t get_klass_0() const { return ___klass_0; }
	inline IntPtr_t* get_address_of_klass_0() { return &___klass_0; }
	inline void set_klass_0(IntPtr_t value)
	{
		___klass_0 = value;
	}

	inline static int32_t get_offset_of_fhandle_1() { return static_cast<int32_t>(offsetof(MonoField_t, ___fhandle_1)); }
	inline RuntimeFieldHandle_t2468717698  get_fhandle_1() const { return ___fhandle_1; }
	inline RuntimeFieldHandle_t2468717698 * get_address_of_fhandle_1() { return &___fhandle_1; }
	inline void set_fhandle_1(RuntimeFieldHandle_t2468717698  value)
	{
		___fhandle_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoField_t, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(MonoField_t, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_3), value);
	}

	inline static int32_t get_offset_of_attrs_4() { return static_cast<int32_t>(offsetof(MonoField_t, ___attrs_4)); }
	inline int32_t get_attrs_4() const { return ___attrs_4; }
	inline int32_t* get_address_of_attrs_4() { return &___attrs_4; }
	inline void set_attrs_4(int32_t value)
	{
		___attrs_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOFIELD_T_H
#ifndef PARAMETERBUILDER_T4194791527_H
#define PARAMETERBUILDER_T4194791527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ParameterBuilder
struct  ParameterBuilder_t4194791527  : public RuntimeObject
{
public:
	// System.String System.Reflection.Emit.ParameterBuilder::name
	String_t* ___name_0;
	// System.Reflection.ParameterAttributes System.Reflection.Emit.ParameterBuilder::attrs
	int32_t ___attrs_1;
	// System.Int32 System.Reflection.Emit.ParameterBuilder::position
	int32_t ___position_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(ParameterBuilder_t4194791527, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(ParameterBuilder_t4194791527, ___attrs_1)); }
	inline int32_t get_attrs_1() const { return ___attrs_1; }
	inline int32_t* get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(int32_t value)
	{
		___attrs_1 = value;
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(ParameterBuilder_t4194791527, ___position_2)); }
	inline int32_t get_position_2() const { return ___position_2; }
	inline int32_t* get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(int32_t value)
	{
		___position_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERBUILDER_T4194791527_H
#ifndef PROPERTYBUILDER_T2221574524_H
#define PROPERTYBUILDER_T2221574524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.PropertyBuilder
struct  PropertyBuilder_t2221574524  : public PropertyInfo_t
{
public:
	// System.Reflection.PropertyAttributes System.Reflection.Emit.PropertyBuilder::attrs
	int32_t ___attrs_0;
	// System.String System.Reflection.Emit.PropertyBuilder::name
	String_t* ___name_1;
	// System.Type System.Reflection.Emit.PropertyBuilder::type
	Type_t * ___type_2;
	// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.PropertyBuilder::set_method
	MethodBuilder_t3589075774 * ___set_method_3;
	// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.PropertyBuilder::get_method
	MethodBuilder_t3589075774 * ___get_method_4;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.PropertyBuilder::typeb
	TypeBuilder_t1835837594 * ___typeb_5;

public:
	inline static int32_t get_offset_of_attrs_0() { return static_cast<int32_t>(offsetof(PropertyBuilder_t2221574524, ___attrs_0)); }
	inline int32_t get_attrs_0() const { return ___attrs_0; }
	inline int32_t* get_address_of_attrs_0() { return &___attrs_0; }
	inline void set_attrs_0(int32_t value)
	{
		___attrs_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(PropertyBuilder_t2221574524, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(PropertyBuilder_t2221574524, ___type_2)); }
	inline Type_t * get_type_2() const { return ___type_2; }
	inline Type_t ** get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(Type_t * value)
	{
		___type_2 = value;
		Il2CppCodeGenWriteBarrier((&___type_2), value);
	}

	inline static int32_t get_offset_of_set_method_3() { return static_cast<int32_t>(offsetof(PropertyBuilder_t2221574524, ___set_method_3)); }
	inline MethodBuilder_t3589075774 * get_set_method_3() const { return ___set_method_3; }
	inline MethodBuilder_t3589075774 ** get_address_of_set_method_3() { return &___set_method_3; }
	inline void set_set_method_3(MethodBuilder_t3589075774 * value)
	{
		___set_method_3 = value;
		Il2CppCodeGenWriteBarrier((&___set_method_3), value);
	}

	inline static int32_t get_offset_of_get_method_4() { return static_cast<int32_t>(offsetof(PropertyBuilder_t2221574524, ___get_method_4)); }
	inline MethodBuilder_t3589075774 * get_get_method_4() const { return ___get_method_4; }
	inline MethodBuilder_t3589075774 ** get_address_of_get_method_4() { return &___get_method_4; }
	inline void set_get_method_4(MethodBuilder_t3589075774 * value)
	{
		___get_method_4 = value;
		Il2CppCodeGenWriteBarrier((&___get_method_4), value);
	}

	inline static int32_t get_offset_of_typeb_5() { return static_cast<int32_t>(offsetof(PropertyBuilder_t2221574524, ___typeb_5)); }
	inline TypeBuilder_t1835837594 * get_typeb_5() const { return ___typeb_5; }
	inline TypeBuilder_t1835837594 ** get_address_of_typeb_5() { return &___typeb_5; }
	inline void set_typeb_5(TypeBuilder_t1835837594 * value)
	{
		___typeb_5 = value;
		Il2CppCodeGenWriteBarrier((&___typeb_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYBUILDER_T2221574524_H
#ifndef PARAMETERINFO_T2666477209_H
#define PARAMETERINFO_T2666477209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterInfo
struct  ParameterInfo_t2666477209  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.ParameterInfo::marshalAs
	UnmanagedMarshal_t1541049976 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t2666477209, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((&___ClassImpl_0), value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t2666477209, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValueImpl_1), value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t2666477209, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberImpl_2), value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t2666477209, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((&___NameImpl_3), value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t2666477209, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t2666477209, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t2666477209, ___marshalAs_6)); }
	inline UnmanagedMarshal_t1541049976 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline UnmanagedMarshal_t1541049976 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(UnmanagedMarshal_t1541049976 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshalAs_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERINFO_T2666477209_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t915944704  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t915944704  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t915944704 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t915944704  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t2527952568* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t917391402 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t917391402 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t917391402 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t2527952568* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t2527952568** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t2527952568* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t917391402 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t917391402 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t917391402 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t917391402 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t917391402 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t917391402 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t917391402 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t917391402 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t917391402 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef METHODBUILDER_T3589075774_H
#define METHODBUILDER_T3589075774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.MethodBuilder
struct  MethodBuilder_t3589075774  : public MethodInfo_t
{
public:
	// System.Type System.Reflection.Emit.MethodBuilder::rtype
	Type_t * ___rtype_0;
	// System.Type[] System.Reflection.Emit.MethodBuilder::parameters
	TypeU5BU5D_t2527952568* ___parameters_1;
	// System.Reflection.MethodAttributes System.Reflection.Emit.MethodBuilder::attrs
	int32_t ___attrs_2;
	// System.Reflection.MethodImplAttributes System.Reflection.Emit.MethodBuilder::iattrs
	int32_t ___iattrs_3;
	// System.String System.Reflection.Emit.MethodBuilder::name
	String_t* ___name_4;
	// System.Int32 System.Reflection.Emit.MethodBuilder::table_idx
	int32_t ___table_idx_5;
	// System.Byte[] System.Reflection.Emit.MethodBuilder::code
	ByteU5BU5D_t790048969* ___code_6;
	// System.Reflection.Emit.ILGenerator System.Reflection.Emit.MethodBuilder::ilgen
	ILGenerator_t365221040 * ___ilgen_7;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.MethodBuilder::type
	TypeBuilder_t1835837594 * ___type_8;
	// System.Reflection.Emit.ParameterBuilder[] System.Reflection.Emit.MethodBuilder::pinfo
	ParameterBuilderU5BU5D_t2719241758* ___pinfo_9;
	// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::override_method
	MethodInfo_t * ___override_method_10;
	// System.Reflection.CallingConventions System.Reflection.Emit.MethodBuilder::call_conv
	int32_t ___call_conv_11;
	// System.Boolean System.Reflection.Emit.MethodBuilder::init_locals
	bool ___init_locals_12;
	// System.Reflection.Emit.GenericTypeParameterBuilder[] System.Reflection.Emit.MethodBuilder::generic_params
	GenericTypeParameterBuilderU5BU5D_t3959944817* ___generic_params_13;
	// System.Type[] System.Reflection.Emit.MethodBuilder::returnModReq
	TypeU5BU5D_t2527952568* ___returnModReq_14;
	// System.Type[] System.Reflection.Emit.MethodBuilder::returnModOpt
	TypeU5BU5D_t2527952568* ___returnModOpt_15;
	// System.Type[][] System.Reflection.Emit.MethodBuilder::paramModReq
	TypeU5BU5DU5BU5D_t2420889449* ___paramModReq_16;
	// System.Type[][] System.Reflection.Emit.MethodBuilder::paramModOpt
	TypeU5BU5DU5BU5D_t2420889449* ___paramModOpt_17;

public:
	inline static int32_t get_offset_of_rtype_0() { return static_cast<int32_t>(offsetof(MethodBuilder_t3589075774, ___rtype_0)); }
	inline Type_t * get_rtype_0() const { return ___rtype_0; }
	inline Type_t ** get_address_of_rtype_0() { return &___rtype_0; }
	inline void set_rtype_0(Type_t * value)
	{
		___rtype_0 = value;
		Il2CppCodeGenWriteBarrier((&___rtype_0), value);
	}

	inline static int32_t get_offset_of_parameters_1() { return static_cast<int32_t>(offsetof(MethodBuilder_t3589075774, ___parameters_1)); }
	inline TypeU5BU5D_t2527952568* get_parameters_1() const { return ___parameters_1; }
	inline TypeU5BU5D_t2527952568** get_address_of_parameters_1() { return &___parameters_1; }
	inline void set_parameters_1(TypeU5BU5D_t2527952568* value)
	{
		___parameters_1 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_1), value);
	}

	inline static int32_t get_offset_of_attrs_2() { return static_cast<int32_t>(offsetof(MethodBuilder_t3589075774, ___attrs_2)); }
	inline int32_t get_attrs_2() const { return ___attrs_2; }
	inline int32_t* get_address_of_attrs_2() { return &___attrs_2; }
	inline void set_attrs_2(int32_t value)
	{
		___attrs_2 = value;
	}

	inline static int32_t get_offset_of_iattrs_3() { return static_cast<int32_t>(offsetof(MethodBuilder_t3589075774, ___iattrs_3)); }
	inline int32_t get_iattrs_3() const { return ___iattrs_3; }
	inline int32_t* get_address_of_iattrs_3() { return &___iattrs_3; }
	inline void set_iattrs_3(int32_t value)
	{
		___iattrs_3 = value;
	}

	inline static int32_t get_offset_of_name_4() { return static_cast<int32_t>(offsetof(MethodBuilder_t3589075774, ___name_4)); }
	inline String_t* get_name_4() const { return ___name_4; }
	inline String_t** get_address_of_name_4() { return &___name_4; }
	inline void set_name_4(String_t* value)
	{
		___name_4 = value;
		Il2CppCodeGenWriteBarrier((&___name_4), value);
	}

	inline static int32_t get_offset_of_table_idx_5() { return static_cast<int32_t>(offsetof(MethodBuilder_t3589075774, ___table_idx_5)); }
	inline int32_t get_table_idx_5() const { return ___table_idx_5; }
	inline int32_t* get_address_of_table_idx_5() { return &___table_idx_5; }
	inline void set_table_idx_5(int32_t value)
	{
		___table_idx_5 = value;
	}

	inline static int32_t get_offset_of_code_6() { return static_cast<int32_t>(offsetof(MethodBuilder_t3589075774, ___code_6)); }
	inline ByteU5BU5D_t790048969* get_code_6() const { return ___code_6; }
	inline ByteU5BU5D_t790048969** get_address_of_code_6() { return &___code_6; }
	inline void set_code_6(ByteU5BU5D_t790048969* value)
	{
		___code_6 = value;
		Il2CppCodeGenWriteBarrier((&___code_6), value);
	}

	inline static int32_t get_offset_of_ilgen_7() { return static_cast<int32_t>(offsetof(MethodBuilder_t3589075774, ___ilgen_7)); }
	inline ILGenerator_t365221040 * get_ilgen_7() const { return ___ilgen_7; }
	inline ILGenerator_t365221040 ** get_address_of_ilgen_7() { return &___ilgen_7; }
	inline void set_ilgen_7(ILGenerator_t365221040 * value)
	{
		___ilgen_7 = value;
		Il2CppCodeGenWriteBarrier((&___ilgen_7), value);
	}

	inline static int32_t get_offset_of_type_8() { return static_cast<int32_t>(offsetof(MethodBuilder_t3589075774, ___type_8)); }
	inline TypeBuilder_t1835837594 * get_type_8() const { return ___type_8; }
	inline TypeBuilder_t1835837594 ** get_address_of_type_8() { return &___type_8; }
	inline void set_type_8(TypeBuilder_t1835837594 * value)
	{
		___type_8 = value;
		Il2CppCodeGenWriteBarrier((&___type_8), value);
	}

	inline static int32_t get_offset_of_pinfo_9() { return static_cast<int32_t>(offsetof(MethodBuilder_t3589075774, ___pinfo_9)); }
	inline ParameterBuilderU5BU5D_t2719241758* get_pinfo_9() const { return ___pinfo_9; }
	inline ParameterBuilderU5BU5D_t2719241758** get_address_of_pinfo_9() { return &___pinfo_9; }
	inline void set_pinfo_9(ParameterBuilderU5BU5D_t2719241758* value)
	{
		___pinfo_9 = value;
		Il2CppCodeGenWriteBarrier((&___pinfo_9), value);
	}

	inline static int32_t get_offset_of_override_method_10() { return static_cast<int32_t>(offsetof(MethodBuilder_t3589075774, ___override_method_10)); }
	inline MethodInfo_t * get_override_method_10() const { return ___override_method_10; }
	inline MethodInfo_t ** get_address_of_override_method_10() { return &___override_method_10; }
	inline void set_override_method_10(MethodInfo_t * value)
	{
		___override_method_10 = value;
		Il2CppCodeGenWriteBarrier((&___override_method_10), value);
	}

	inline static int32_t get_offset_of_call_conv_11() { return static_cast<int32_t>(offsetof(MethodBuilder_t3589075774, ___call_conv_11)); }
	inline int32_t get_call_conv_11() const { return ___call_conv_11; }
	inline int32_t* get_address_of_call_conv_11() { return &___call_conv_11; }
	inline void set_call_conv_11(int32_t value)
	{
		___call_conv_11 = value;
	}

	inline static int32_t get_offset_of_init_locals_12() { return static_cast<int32_t>(offsetof(MethodBuilder_t3589075774, ___init_locals_12)); }
	inline bool get_init_locals_12() const { return ___init_locals_12; }
	inline bool* get_address_of_init_locals_12() { return &___init_locals_12; }
	inline void set_init_locals_12(bool value)
	{
		___init_locals_12 = value;
	}

	inline static int32_t get_offset_of_generic_params_13() { return static_cast<int32_t>(offsetof(MethodBuilder_t3589075774, ___generic_params_13)); }
	inline GenericTypeParameterBuilderU5BU5D_t3959944817* get_generic_params_13() const { return ___generic_params_13; }
	inline GenericTypeParameterBuilderU5BU5D_t3959944817** get_address_of_generic_params_13() { return &___generic_params_13; }
	inline void set_generic_params_13(GenericTypeParameterBuilderU5BU5D_t3959944817* value)
	{
		___generic_params_13 = value;
		Il2CppCodeGenWriteBarrier((&___generic_params_13), value);
	}

	inline static int32_t get_offset_of_returnModReq_14() { return static_cast<int32_t>(offsetof(MethodBuilder_t3589075774, ___returnModReq_14)); }
	inline TypeU5BU5D_t2527952568* get_returnModReq_14() const { return ___returnModReq_14; }
	inline TypeU5BU5D_t2527952568** get_address_of_returnModReq_14() { return &___returnModReq_14; }
	inline void set_returnModReq_14(TypeU5BU5D_t2527952568* value)
	{
		___returnModReq_14 = value;
		Il2CppCodeGenWriteBarrier((&___returnModReq_14), value);
	}

	inline static int32_t get_offset_of_returnModOpt_15() { return static_cast<int32_t>(offsetof(MethodBuilder_t3589075774, ___returnModOpt_15)); }
	inline TypeU5BU5D_t2527952568* get_returnModOpt_15() const { return ___returnModOpt_15; }
	inline TypeU5BU5D_t2527952568** get_address_of_returnModOpt_15() { return &___returnModOpt_15; }
	inline void set_returnModOpt_15(TypeU5BU5D_t2527952568* value)
	{
		___returnModOpt_15 = value;
		Il2CppCodeGenWriteBarrier((&___returnModOpt_15), value);
	}

	inline static int32_t get_offset_of_paramModReq_16() { return static_cast<int32_t>(offsetof(MethodBuilder_t3589075774, ___paramModReq_16)); }
	inline TypeU5BU5DU5BU5D_t2420889449* get_paramModReq_16() const { return ___paramModReq_16; }
	inline TypeU5BU5DU5BU5D_t2420889449** get_address_of_paramModReq_16() { return &___paramModReq_16; }
	inline void set_paramModReq_16(TypeU5BU5DU5BU5D_t2420889449* value)
	{
		___paramModReq_16 = value;
		Il2CppCodeGenWriteBarrier((&___paramModReq_16), value);
	}

	inline static int32_t get_offset_of_paramModOpt_17() { return static_cast<int32_t>(offsetof(MethodBuilder_t3589075774, ___paramModOpt_17)); }
	inline TypeU5BU5DU5BU5D_t2420889449* get_paramModOpt_17() const { return ___paramModOpt_17; }
	inline TypeU5BU5DU5BU5D_t2420889449** get_address_of_paramModOpt_17() { return &___paramModOpt_17; }
	inline void set_paramModOpt_17(TypeU5BU5DU5BU5D_t2420889449* value)
	{
		___paramModOpt_17 = value;
		Il2CppCodeGenWriteBarrier((&___paramModOpt_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBUILDER_T3589075774_H
#ifndef UNMANAGEDMARSHAL_T1541049976_H
#define UNMANAGEDMARSHAL_T1541049976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.UnmanagedMarshal
struct  UnmanagedMarshal_t1541049976  : public RuntimeObject
{
public:
	// System.Int32 System.Reflection.Emit.UnmanagedMarshal::count
	int32_t ___count_0;
	// System.Runtime.InteropServices.UnmanagedType System.Reflection.Emit.UnmanagedMarshal::t
	int32_t ___t_1;
	// System.Runtime.InteropServices.UnmanagedType System.Reflection.Emit.UnmanagedMarshal::tbase
	int32_t ___tbase_2;
	// System.String System.Reflection.Emit.UnmanagedMarshal::guid
	String_t* ___guid_3;
	// System.String System.Reflection.Emit.UnmanagedMarshal::mcookie
	String_t* ___mcookie_4;
	// System.String System.Reflection.Emit.UnmanagedMarshal::marshaltype
	String_t* ___marshaltype_5;
	// System.Type System.Reflection.Emit.UnmanagedMarshal::marshaltyperef
	Type_t * ___marshaltyperef_6;
	// System.Int32 System.Reflection.Emit.UnmanagedMarshal::param_num
	int32_t ___param_num_7;
	// System.Boolean System.Reflection.Emit.UnmanagedMarshal::has_size
	bool ___has_size_8;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t1541049976, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_t_1() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t1541049976, ___t_1)); }
	inline int32_t get_t_1() const { return ___t_1; }
	inline int32_t* get_address_of_t_1() { return &___t_1; }
	inline void set_t_1(int32_t value)
	{
		___t_1 = value;
	}

	inline static int32_t get_offset_of_tbase_2() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t1541049976, ___tbase_2)); }
	inline int32_t get_tbase_2() const { return ___tbase_2; }
	inline int32_t* get_address_of_tbase_2() { return &___tbase_2; }
	inline void set_tbase_2(int32_t value)
	{
		___tbase_2 = value;
	}

	inline static int32_t get_offset_of_guid_3() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t1541049976, ___guid_3)); }
	inline String_t* get_guid_3() const { return ___guid_3; }
	inline String_t** get_address_of_guid_3() { return &___guid_3; }
	inline void set_guid_3(String_t* value)
	{
		___guid_3 = value;
		Il2CppCodeGenWriteBarrier((&___guid_3), value);
	}

	inline static int32_t get_offset_of_mcookie_4() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t1541049976, ___mcookie_4)); }
	inline String_t* get_mcookie_4() const { return ___mcookie_4; }
	inline String_t** get_address_of_mcookie_4() { return &___mcookie_4; }
	inline void set_mcookie_4(String_t* value)
	{
		___mcookie_4 = value;
		Il2CppCodeGenWriteBarrier((&___mcookie_4), value);
	}

	inline static int32_t get_offset_of_marshaltype_5() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t1541049976, ___marshaltype_5)); }
	inline String_t* get_marshaltype_5() const { return ___marshaltype_5; }
	inline String_t** get_address_of_marshaltype_5() { return &___marshaltype_5; }
	inline void set_marshaltype_5(String_t* value)
	{
		___marshaltype_5 = value;
		Il2CppCodeGenWriteBarrier((&___marshaltype_5), value);
	}

	inline static int32_t get_offset_of_marshaltyperef_6() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t1541049976, ___marshaltyperef_6)); }
	inline Type_t * get_marshaltyperef_6() const { return ___marshaltyperef_6; }
	inline Type_t ** get_address_of_marshaltyperef_6() { return &___marshaltyperef_6; }
	inline void set_marshaltyperef_6(Type_t * value)
	{
		___marshaltyperef_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshaltyperef_6), value);
	}

	inline static int32_t get_offset_of_param_num_7() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t1541049976, ___param_num_7)); }
	inline int32_t get_param_num_7() const { return ___param_num_7; }
	inline int32_t* get_address_of_param_num_7() { return &___param_num_7; }
	inline void set_param_num_7(int32_t value)
	{
		___param_num_7 = value;
	}

	inline static int32_t get_offset_of_has_size_8() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t1541049976, ___has_size_8)); }
	inline bool get_has_size_8() const { return ___has_size_8; }
	inline bool* get_address_of_has_size_8() { return &___has_size_8; }
	inline void set_has_size_8(bool value)
	{
		___has_size_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDMARSHAL_T1541049976_H
#ifndef MONOEVENTINFO_T4133987171_H
#define MONOEVENTINFO_T4133987171_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoEventInfo
struct  MonoEventInfo_t4133987171 
{
public:
	// System.Type System.Reflection.MonoEventInfo::declaring_type
	Type_t * ___declaring_type_0;
	// System.Type System.Reflection.MonoEventInfo::reflected_type
	Type_t * ___reflected_type_1;
	// System.String System.Reflection.MonoEventInfo::name
	String_t* ___name_2;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::add_method
	MethodInfo_t * ___add_method_3;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::remove_method
	MethodInfo_t * ___remove_method_4;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::raise_method
	MethodInfo_t * ___raise_method_5;
	// System.Reflection.EventAttributes System.Reflection.MonoEventInfo::attrs
	int32_t ___attrs_6;
	// System.Reflection.MethodInfo[] System.Reflection.MonoEventInfo::other_methods
	MethodInfoU5BU5D_t2133752174* ___other_methods_7;

public:
	inline static int32_t get_offset_of_declaring_type_0() { return static_cast<int32_t>(offsetof(MonoEventInfo_t4133987171, ___declaring_type_0)); }
	inline Type_t * get_declaring_type_0() const { return ___declaring_type_0; }
	inline Type_t ** get_address_of_declaring_type_0() { return &___declaring_type_0; }
	inline void set_declaring_type_0(Type_t * value)
	{
		___declaring_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___declaring_type_0), value);
	}

	inline static int32_t get_offset_of_reflected_type_1() { return static_cast<int32_t>(offsetof(MonoEventInfo_t4133987171, ___reflected_type_1)); }
	inline Type_t * get_reflected_type_1() const { return ___reflected_type_1; }
	inline Type_t ** get_address_of_reflected_type_1() { return &___reflected_type_1; }
	inline void set_reflected_type_1(Type_t * value)
	{
		___reflected_type_1 = value;
		Il2CppCodeGenWriteBarrier((&___reflected_type_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoEventInfo_t4133987171, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_add_method_3() { return static_cast<int32_t>(offsetof(MonoEventInfo_t4133987171, ___add_method_3)); }
	inline MethodInfo_t * get_add_method_3() const { return ___add_method_3; }
	inline MethodInfo_t ** get_address_of_add_method_3() { return &___add_method_3; }
	inline void set_add_method_3(MethodInfo_t * value)
	{
		___add_method_3 = value;
		Il2CppCodeGenWriteBarrier((&___add_method_3), value);
	}

	inline static int32_t get_offset_of_remove_method_4() { return static_cast<int32_t>(offsetof(MonoEventInfo_t4133987171, ___remove_method_4)); }
	inline MethodInfo_t * get_remove_method_4() const { return ___remove_method_4; }
	inline MethodInfo_t ** get_address_of_remove_method_4() { return &___remove_method_4; }
	inline void set_remove_method_4(MethodInfo_t * value)
	{
		___remove_method_4 = value;
		Il2CppCodeGenWriteBarrier((&___remove_method_4), value);
	}

	inline static int32_t get_offset_of_raise_method_5() { return static_cast<int32_t>(offsetof(MonoEventInfo_t4133987171, ___raise_method_5)); }
	inline MethodInfo_t * get_raise_method_5() const { return ___raise_method_5; }
	inline MethodInfo_t ** get_address_of_raise_method_5() { return &___raise_method_5; }
	inline void set_raise_method_5(MethodInfo_t * value)
	{
		___raise_method_5 = value;
		Il2CppCodeGenWriteBarrier((&___raise_method_5), value);
	}

	inline static int32_t get_offset_of_attrs_6() { return static_cast<int32_t>(offsetof(MonoEventInfo_t4133987171, ___attrs_6)); }
	inline int32_t get_attrs_6() const { return ___attrs_6; }
	inline int32_t* get_address_of_attrs_6() { return &___attrs_6; }
	inline void set_attrs_6(int32_t value)
	{
		___attrs_6 = value;
	}

	inline static int32_t get_offset_of_other_methods_7() { return static_cast<int32_t>(offsetof(MonoEventInfo_t4133987171, ___other_methods_7)); }
	inline MethodInfoU5BU5D_t2133752174* get_other_methods_7() const { return ___other_methods_7; }
	inline MethodInfoU5BU5D_t2133752174** get_address_of_other_methods_7() { return &___other_methods_7; }
	inline void set_other_methods_7(MethodInfoU5BU5D_t2133752174* value)
	{
		___other_methods_7 = value;
		Il2CppCodeGenWriteBarrier((&___other_methods_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoEventInfo
struct MonoEventInfo_t4133987171_marshaled_pinvoke
{
	Type_t * ___declaring_type_0;
	Type_t * ___reflected_type_1;
	char* ___name_2;
	MethodInfo_t * ___add_method_3;
	MethodInfo_t * ___remove_method_4;
	MethodInfo_t * ___raise_method_5;
	int32_t ___attrs_6;
	MethodInfoU5BU5D_t2133752174* ___other_methods_7;
};
// Native definition for COM marshalling of System.Reflection.MonoEventInfo
struct MonoEventInfo_t4133987171_marshaled_com
{
	Type_t * ___declaring_type_0;
	Type_t * ___reflected_type_1;
	Il2CppChar* ___name_2;
	MethodInfo_t * ___add_method_3;
	MethodInfo_t * ___remove_method_4;
	MethodInfo_t * ___raise_method_5;
	int32_t ___attrs_6;
	MethodInfoU5BU5D_t2133752174* ___other_methods_7;
};
#endif // MONOEVENTINFO_T4133987171_H
#ifndef FIELDBUILDER_T1013222584_H
#define FIELDBUILDER_T1013222584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.FieldBuilder
struct  FieldBuilder_t1013222584  : public FieldInfo_t
{
public:
	// System.Reflection.FieldAttributes System.Reflection.Emit.FieldBuilder::attrs
	int32_t ___attrs_0;
	// System.Type System.Reflection.Emit.FieldBuilder::type
	Type_t * ___type_1;
	// System.String System.Reflection.Emit.FieldBuilder::name
	String_t* ___name_2;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.FieldBuilder::typeb
	TypeBuilder_t1835837594 * ___typeb_3;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.FieldBuilder::marshal_info
	UnmanagedMarshal_t1541049976 * ___marshal_info_4;

public:
	inline static int32_t get_offset_of_attrs_0() { return static_cast<int32_t>(offsetof(FieldBuilder_t1013222584, ___attrs_0)); }
	inline int32_t get_attrs_0() const { return ___attrs_0; }
	inline int32_t* get_address_of_attrs_0() { return &___attrs_0; }
	inline void set_attrs_0(int32_t value)
	{
		___attrs_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(FieldBuilder_t1013222584, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(FieldBuilder_t1013222584, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_typeb_3() { return static_cast<int32_t>(offsetof(FieldBuilder_t1013222584, ___typeb_3)); }
	inline TypeBuilder_t1835837594 * get_typeb_3() const { return ___typeb_3; }
	inline TypeBuilder_t1835837594 ** get_address_of_typeb_3() { return &___typeb_3; }
	inline void set_typeb_3(TypeBuilder_t1835837594 * value)
	{
		___typeb_3 = value;
		Il2CppCodeGenWriteBarrier((&___typeb_3), value);
	}

	inline static int32_t get_offset_of_marshal_info_4() { return static_cast<int32_t>(offsetof(FieldBuilder_t1013222584, ___marshal_info_4)); }
	inline UnmanagedMarshal_t1541049976 * get_marshal_info_4() const { return ___marshal_info_4; }
	inline UnmanagedMarshal_t1541049976 ** get_address_of_marshal_info_4() { return &___marshal_info_4; }
	inline void set_marshal_info_4(UnmanagedMarshal_t1541049976 * value)
	{
		___marshal_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___marshal_info_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDBUILDER_T1013222584_H
#ifndef ASSEMBLYNAME_T3066617354_H
#define ASSEMBLYNAME_T3066617354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyName
struct  AssemblyName_t3066617354  : public RuntimeObject
{
public:
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t1134286991 * ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_t3023086057 * ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_t790048969* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_t790048969* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_t1834903876 * ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyName_t3066617354, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_codebase_1() { return static_cast<int32_t>(offsetof(AssemblyName_t3066617354, ___codebase_1)); }
	inline String_t* get_codebase_1() const { return ___codebase_1; }
	inline String_t** get_address_of_codebase_1() { return &___codebase_1; }
	inline void set_codebase_1(String_t* value)
	{
		___codebase_1 = value;
		Il2CppCodeGenWriteBarrier((&___codebase_1), value);
	}

	inline static int32_t get_offset_of_major_2() { return static_cast<int32_t>(offsetof(AssemblyName_t3066617354, ___major_2)); }
	inline int32_t get_major_2() const { return ___major_2; }
	inline int32_t* get_address_of_major_2() { return &___major_2; }
	inline void set_major_2(int32_t value)
	{
		___major_2 = value;
	}

	inline static int32_t get_offset_of_minor_3() { return static_cast<int32_t>(offsetof(AssemblyName_t3066617354, ___minor_3)); }
	inline int32_t get_minor_3() const { return ___minor_3; }
	inline int32_t* get_address_of_minor_3() { return &___minor_3; }
	inline void set_minor_3(int32_t value)
	{
		___minor_3 = value;
	}

	inline static int32_t get_offset_of_build_4() { return static_cast<int32_t>(offsetof(AssemblyName_t3066617354, ___build_4)); }
	inline int32_t get_build_4() const { return ___build_4; }
	inline int32_t* get_address_of_build_4() { return &___build_4; }
	inline void set_build_4(int32_t value)
	{
		___build_4 = value;
	}

	inline static int32_t get_offset_of_revision_5() { return static_cast<int32_t>(offsetof(AssemblyName_t3066617354, ___revision_5)); }
	inline int32_t get_revision_5() const { return ___revision_5; }
	inline int32_t* get_address_of_revision_5() { return &___revision_5; }
	inline void set_revision_5(int32_t value)
	{
		___revision_5 = value;
	}

	inline static int32_t get_offset_of_cultureinfo_6() { return static_cast<int32_t>(offsetof(AssemblyName_t3066617354, ___cultureinfo_6)); }
	inline CultureInfo_t1134286991 * get_cultureinfo_6() const { return ___cultureinfo_6; }
	inline CultureInfo_t1134286991 ** get_address_of_cultureinfo_6() { return &___cultureinfo_6; }
	inline void set_cultureinfo_6(CultureInfo_t1134286991 * value)
	{
		___cultureinfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___cultureinfo_6), value);
	}

	inline static int32_t get_offset_of_flags_7() { return static_cast<int32_t>(offsetof(AssemblyName_t3066617354, ___flags_7)); }
	inline int32_t get_flags_7() const { return ___flags_7; }
	inline int32_t* get_address_of_flags_7() { return &___flags_7; }
	inline void set_flags_7(int32_t value)
	{
		___flags_7 = value;
	}

	inline static int32_t get_offset_of_hashalg_8() { return static_cast<int32_t>(offsetof(AssemblyName_t3066617354, ___hashalg_8)); }
	inline int32_t get_hashalg_8() const { return ___hashalg_8; }
	inline int32_t* get_address_of_hashalg_8() { return &___hashalg_8; }
	inline void set_hashalg_8(int32_t value)
	{
		___hashalg_8 = value;
	}

	inline static int32_t get_offset_of_keypair_9() { return static_cast<int32_t>(offsetof(AssemblyName_t3066617354, ___keypair_9)); }
	inline StrongNameKeyPair_t3023086057 * get_keypair_9() const { return ___keypair_9; }
	inline StrongNameKeyPair_t3023086057 ** get_address_of_keypair_9() { return &___keypair_9; }
	inline void set_keypair_9(StrongNameKeyPair_t3023086057 * value)
	{
		___keypair_9 = value;
		Il2CppCodeGenWriteBarrier((&___keypair_9), value);
	}

	inline static int32_t get_offset_of_publicKey_10() { return static_cast<int32_t>(offsetof(AssemblyName_t3066617354, ___publicKey_10)); }
	inline ByteU5BU5D_t790048969* get_publicKey_10() const { return ___publicKey_10; }
	inline ByteU5BU5D_t790048969** get_address_of_publicKey_10() { return &___publicKey_10; }
	inline void set_publicKey_10(ByteU5BU5D_t790048969* value)
	{
		___publicKey_10 = value;
		Il2CppCodeGenWriteBarrier((&___publicKey_10), value);
	}

	inline static int32_t get_offset_of_keyToken_11() { return static_cast<int32_t>(offsetof(AssemblyName_t3066617354, ___keyToken_11)); }
	inline ByteU5BU5D_t790048969* get_keyToken_11() const { return ___keyToken_11; }
	inline ByteU5BU5D_t790048969** get_address_of_keyToken_11() { return &___keyToken_11; }
	inline void set_keyToken_11(ByteU5BU5D_t790048969* value)
	{
		___keyToken_11 = value;
		Il2CppCodeGenWriteBarrier((&___keyToken_11), value);
	}

	inline static int32_t get_offset_of_versioncompat_12() { return static_cast<int32_t>(offsetof(AssemblyName_t3066617354, ___versioncompat_12)); }
	inline int32_t get_versioncompat_12() const { return ___versioncompat_12; }
	inline int32_t* get_address_of_versioncompat_12() { return &___versioncompat_12; }
	inline void set_versioncompat_12(int32_t value)
	{
		___versioncompat_12 = value;
	}

	inline static int32_t get_offset_of_version_13() { return static_cast<int32_t>(offsetof(AssemblyName_t3066617354, ___version_13)); }
	inline Version_t1834903876 * get_version_13() const { return ___version_13; }
	inline Version_t1834903876 ** get_address_of_version_13() { return &___version_13; }
	inline void set_version_13(Version_t1834903876 * value)
	{
		___version_13 = value;
		Il2CppCodeGenWriteBarrier((&___version_13), value);
	}

	inline static int32_t get_offset_of_processor_architecture_14() { return static_cast<int32_t>(offsetof(AssemblyName_t3066617354, ___processor_architecture_14)); }
	inline int32_t get_processor_architecture_14() const { return ___processor_architecture_14; }
	inline int32_t* get_address_of_processor_architecture_14() { return &___processor_architecture_14; }
	inline void set_processor_architecture_14(int32_t value)
	{
		___processor_architecture_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYNAME_T3066617354_H
#ifndef MONOMETHOD_T_H
#define MONOMETHOD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoMethod
struct  MonoMethod_t  : public MethodInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoMethod::mhandle
	IntPtr_t ___mhandle_0;
	// System.String System.Reflection.MonoMethod::name
	String_t* ___name_1;
	// System.Type System.Reflection.MonoMethod::reftype
	Type_t * ___reftype_2;

public:
	inline static int32_t get_offset_of_mhandle_0() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___mhandle_0)); }
	inline IntPtr_t get_mhandle_0() const { return ___mhandle_0; }
	inline IntPtr_t* get_address_of_mhandle_0() { return &___mhandle_0; }
	inline void set_mhandle_0(IntPtr_t value)
	{
		___mhandle_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_reftype_2() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___reftype_2)); }
	inline Type_t * get_reftype_2() const { return ___reftype_2; }
	inline Type_t ** get_address_of_reftype_2() { return &___reftype_2; }
	inline void set_reftype_2(Type_t * value)
	{
		___reftype_2 = value;
		Il2CppCodeGenWriteBarrier((&___reftype_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOMETHOD_T_H
#ifndef MONOCMETHOD_T1394167787_H
#define MONOCMETHOD_T1394167787_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoCMethod
struct  MonoCMethod_t1394167787  : public ConstructorInfo_t712711328
{
public:
	// System.IntPtr System.Reflection.MonoCMethod::mhandle
	IntPtr_t ___mhandle_2;
	// System.String System.Reflection.MonoCMethod::name
	String_t* ___name_3;
	// System.Type System.Reflection.MonoCMethod::reftype
	Type_t * ___reftype_4;

public:
	inline static int32_t get_offset_of_mhandle_2() { return static_cast<int32_t>(offsetof(MonoCMethod_t1394167787, ___mhandle_2)); }
	inline IntPtr_t get_mhandle_2() const { return ___mhandle_2; }
	inline IntPtr_t* get_address_of_mhandle_2() { return &___mhandle_2; }
	inline void set_mhandle_2(IntPtr_t value)
	{
		___mhandle_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(MonoCMethod_t1394167787, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_3), value);
	}

	inline static int32_t get_offset_of_reftype_4() { return static_cast<int32_t>(offsetof(MonoCMethod_t1394167787, ___reftype_4)); }
	inline Type_t * get_reftype_4() const { return ___reftype_4; }
	inline Type_t ** get_address_of_reftype_4() { return &___reftype_4; }
	inline void set_reftype_4(Type_t * value)
	{
		___reftype_4 = value;
		Il2CppCodeGenWriteBarrier((&___reftype_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOCMETHOD_T1394167787_H
#ifndef MONOPROPERTYINFO_T3721666835_H
#define MONOPROPERTYINFO_T3721666835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoPropertyInfo
struct  MonoPropertyInfo_t3721666835 
{
public:
	// System.Type System.Reflection.MonoPropertyInfo::parent
	Type_t * ___parent_0;
	// System.String System.Reflection.MonoPropertyInfo::name
	String_t* ___name_1;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::get_method
	MethodInfo_t * ___get_method_2;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::set_method
	MethodInfo_t * ___set_method_3;
	// System.Reflection.PropertyAttributes System.Reflection.MonoPropertyInfo::attrs
	int32_t ___attrs_4;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3721666835, ___parent_0)); }
	inline Type_t * get_parent_0() const { return ___parent_0; }
	inline Type_t ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Type_t * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3721666835, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_get_method_2() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3721666835, ___get_method_2)); }
	inline MethodInfo_t * get_get_method_2() const { return ___get_method_2; }
	inline MethodInfo_t ** get_address_of_get_method_2() { return &___get_method_2; }
	inline void set_get_method_2(MethodInfo_t * value)
	{
		___get_method_2 = value;
		Il2CppCodeGenWriteBarrier((&___get_method_2), value);
	}

	inline static int32_t get_offset_of_set_method_3() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3721666835, ___set_method_3)); }
	inline MethodInfo_t * get_set_method_3() const { return ___set_method_3; }
	inline MethodInfo_t ** get_address_of_set_method_3() { return &___set_method_3; }
	inline void set_set_method_3(MethodInfo_t * value)
	{
		___set_method_3 = value;
		Il2CppCodeGenWriteBarrier((&___set_method_3), value);
	}

	inline static int32_t get_offset_of_attrs_4() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3721666835, ___attrs_4)); }
	inline int32_t get_attrs_4() const { return ___attrs_4; }
	inline int32_t* get_address_of_attrs_4() { return &___attrs_4; }
	inline void set_attrs_4(int32_t value)
	{
		___attrs_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t3721666835_marshaled_pinvoke
{
	Type_t * ___parent_0;
	char* ___name_1;
	MethodInfo_t * ___get_method_2;
	MethodInfo_t * ___set_method_3;
	int32_t ___attrs_4;
};
// Native definition for COM marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t3721666835_marshaled_com
{
	Type_t * ___parent_0;
	Il2CppChar* ___name_1;
	MethodInfo_t * ___get_method_2;
	MethodInfo_t * ___set_method_3;
	int32_t ___attrs_4;
};
#endif // MONOPROPERTYINFO_T3721666835_H
#ifndef MEMBERINFOSERIALIZATIONHOLDER_T2674039268_H
#define MEMBERINFOSERIALIZATIONHOLDER_T2674039268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfoSerializationHolder
struct  MemberInfoSerializationHolder_t2674039268  : public RuntimeObject
{
public:
	// System.String System.Reflection.MemberInfoSerializationHolder::_memberName
	String_t* ____memberName_0;
	// System.String System.Reflection.MemberInfoSerializationHolder::_memberSignature
	String_t* ____memberSignature_1;
	// System.Reflection.MemberTypes System.Reflection.MemberInfoSerializationHolder::_memberType
	int32_t ____memberType_2;
	// System.Type System.Reflection.MemberInfoSerializationHolder::_reflectedType
	Type_t * ____reflectedType_3;
	// System.Type[] System.Reflection.MemberInfoSerializationHolder::_genericArguments
	TypeU5BU5D_t2527952568* ____genericArguments_4;

public:
	inline static int32_t get_offset_of__memberName_0() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t2674039268, ____memberName_0)); }
	inline String_t* get__memberName_0() const { return ____memberName_0; }
	inline String_t** get_address_of__memberName_0() { return &____memberName_0; }
	inline void set__memberName_0(String_t* value)
	{
		____memberName_0 = value;
		Il2CppCodeGenWriteBarrier((&____memberName_0), value);
	}

	inline static int32_t get_offset_of__memberSignature_1() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t2674039268, ____memberSignature_1)); }
	inline String_t* get__memberSignature_1() const { return ____memberSignature_1; }
	inline String_t** get_address_of__memberSignature_1() { return &____memberSignature_1; }
	inline void set__memberSignature_1(String_t* value)
	{
		____memberSignature_1 = value;
		Il2CppCodeGenWriteBarrier((&____memberSignature_1), value);
	}

	inline static int32_t get_offset_of__memberType_2() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t2674039268, ____memberType_2)); }
	inline int32_t get__memberType_2() const { return ____memberType_2; }
	inline int32_t* get_address_of__memberType_2() { return &____memberType_2; }
	inline void set__memberType_2(int32_t value)
	{
		____memberType_2 = value;
	}

	inline static int32_t get_offset_of__reflectedType_3() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t2674039268, ____reflectedType_3)); }
	inline Type_t * get__reflectedType_3() const { return ____reflectedType_3; }
	inline Type_t ** get_address_of__reflectedType_3() { return &____reflectedType_3; }
	inline void set__reflectedType_3(Type_t * value)
	{
		____reflectedType_3 = value;
		Il2CppCodeGenWriteBarrier((&____reflectedType_3), value);
	}

	inline static int32_t get_offset_of__genericArguments_4() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t2674039268, ____genericArguments_4)); }
	inline TypeU5BU5D_t2527952568* get__genericArguments_4() const { return ____genericArguments_4; }
	inline TypeU5BU5D_t2527952568** get_address_of__genericArguments_4() { return &____genericArguments_4; }
	inline void set__genericArguments_4(TypeU5BU5D_t2527952568* value)
	{
		____genericArguments_4 = value;
		Il2CppCodeGenWriteBarrier((&____genericArguments_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFOSERIALIZATIONHOLDER_T2674039268_H
#ifndef MULTICASTDELEGATE_T3323859245_H
#define MULTICASTDELEGATE_T3323859245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t3323859245  : public Delegate_t77771241
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t3323859245 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t3323859245 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3323859245, ___prev_9)); }
	inline MulticastDelegate_t3323859245 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t3323859245 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t3323859245 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3323859245, ___kpm_next_10)); }
	inline MulticastDelegate_t3323859245 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t3323859245 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t3323859245 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T3323859245_H
#ifndef DYNAMICMETHOD_T113535562_H
#define DYNAMICMETHOD_T113535562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.DynamicMethod
struct  DynamicMethod_t113535562  : public MethodInfo_t
{
public:
	// System.RuntimeMethodHandle System.Reflection.Emit.DynamicMethod::mhandle
	RuntimeMethodHandle_t2363731392  ___mhandle_0;
	// System.String System.Reflection.Emit.DynamicMethod::name
	String_t* ___name_1;
	// System.Type System.Reflection.Emit.DynamicMethod::returnType
	Type_t * ___returnType_2;
	// System.Type[] System.Reflection.Emit.DynamicMethod::parameters
	TypeU5BU5D_t2527952568* ___parameters_3;
	// System.Reflection.MethodAttributes System.Reflection.Emit.DynamicMethod::attributes
	int32_t ___attributes_4;
	// System.Reflection.CallingConventions System.Reflection.Emit.DynamicMethod::callingConvention
	int32_t ___callingConvention_5;
	// System.Reflection.Module System.Reflection.Emit.DynamicMethod::module
	Module_t3781704096 * ___module_6;
	// System.Reflection.Emit.ILGenerator System.Reflection.Emit.DynamicMethod::ilgen
	ILGenerator_t365221040 * ___ilgen_7;
	// System.Object[] System.Reflection.Emit.DynamicMethod::refs
	ObjectU5BU5D_t2640533940* ___refs_8;
	// System.Reflection.MonoMethod System.Reflection.Emit.DynamicMethod::method
	MonoMethod_t * ___method_9;
	// System.Reflection.Emit.ParameterBuilder[] System.Reflection.Emit.DynamicMethod::pinfo
	ParameterBuilderU5BU5D_t2719241758* ___pinfo_10;
	// System.Boolean System.Reflection.Emit.DynamicMethod::creating
	bool ___creating_11;

public:
	inline static int32_t get_offset_of_mhandle_0() { return static_cast<int32_t>(offsetof(DynamicMethod_t113535562, ___mhandle_0)); }
	inline RuntimeMethodHandle_t2363731392  get_mhandle_0() const { return ___mhandle_0; }
	inline RuntimeMethodHandle_t2363731392 * get_address_of_mhandle_0() { return &___mhandle_0; }
	inline void set_mhandle_0(RuntimeMethodHandle_t2363731392  value)
	{
		___mhandle_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(DynamicMethod_t113535562, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_returnType_2() { return static_cast<int32_t>(offsetof(DynamicMethod_t113535562, ___returnType_2)); }
	inline Type_t * get_returnType_2() const { return ___returnType_2; }
	inline Type_t ** get_address_of_returnType_2() { return &___returnType_2; }
	inline void set_returnType_2(Type_t * value)
	{
		___returnType_2 = value;
		Il2CppCodeGenWriteBarrier((&___returnType_2), value);
	}

	inline static int32_t get_offset_of_parameters_3() { return static_cast<int32_t>(offsetof(DynamicMethod_t113535562, ___parameters_3)); }
	inline TypeU5BU5D_t2527952568* get_parameters_3() const { return ___parameters_3; }
	inline TypeU5BU5D_t2527952568** get_address_of_parameters_3() { return &___parameters_3; }
	inline void set_parameters_3(TypeU5BU5D_t2527952568* value)
	{
		___parameters_3 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_3), value);
	}

	inline static int32_t get_offset_of_attributes_4() { return static_cast<int32_t>(offsetof(DynamicMethod_t113535562, ___attributes_4)); }
	inline int32_t get_attributes_4() const { return ___attributes_4; }
	inline int32_t* get_address_of_attributes_4() { return &___attributes_4; }
	inline void set_attributes_4(int32_t value)
	{
		___attributes_4 = value;
	}

	inline static int32_t get_offset_of_callingConvention_5() { return static_cast<int32_t>(offsetof(DynamicMethod_t113535562, ___callingConvention_5)); }
	inline int32_t get_callingConvention_5() const { return ___callingConvention_5; }
	inline int32_t* get_address_of_callingConvention_5() { return &___callingConvention_5; }
	inline void set_callingConvention_5(int32_t value)
	{
		___callingConvention_5 = value;
	}

	inline static int32_t get_offset_of_module_6() { return static_cast<int32_t>(offsetof(DynamicMethod_t113535562, ___module_6)); }
	inline Module_t3781704096 * get_module_6() const { return ___module_6; }
	inline Module_t3781704096 ** get_address_of_module_6() { return &___module_6; }
	inline void set_module_6(Module_t3781704096 * value)
	{
		___module_6 = value;
		Il2CppCodeGenWriteBarrier((&___module_6), value);
	}

	inline static int32_t get_offset_of_ilgen_7() { return static_cast<int32_t>(offsetof(DynamicMethod_t113535562, ___ilgen_7)); }
	inline ILGenerator_t365221040 * get_ilgen_7() const { return ___ilgen_7; }
	inline ILGenerator_t365221040 ** get_address_of_ilgen_7() { return &___ilgen_7; }
	inline void set_ilgen_7(ILGenerator_t365221040 * value)
	{
		___ilgen_7 = value;
		Il2CppCodeGenWriteBarrier((&___ilgen_7), value);
	}

	inline static int32_t get_offset_of_refs_8() { return static_cast<int32_t>(offsetof(DynamicMethod_t113535562, ___refs_8)); }
	inline ObjectU5BU5D_t2640533940* get_refs_8() const { return ___refs_8; }
	inline ObjectU5BU5D_t2640533940** get_address_of_refs_8() { return &___refs_8; }
	inline void set_refs_8(ObjectU5BU5D_t2640533940* value)
	{
		___refs_8 = value;
		Il2CppCodeGenWriteBarrier((&___refs_8), value);
	}

	inline static int32_t get_offset_of_method_9() { return static_cast<int32_t>(offsetof(DynamicMethod_t113535562, ___method_9)); }
	inline MonoMethod_t * get_method_9() const { return ___method_9; }
	inline MonoMethod_t ** get_address_of_method_9() { return &___method_9; }
	inline void set_method_9(MonoMethod_t * value)
	{
		___method_9 = value;
		Il2CppCodeGenWriteBarrier((&___method_9), value);
	}

	inline static int32_t get_offset_of_pinfo_10() { return static_cast<int32_t>(offsetof(DynamicMethod_t113535562, ___pinfo_10)); }
	inline ParameterBuilderU5BU5D_t2719241758* get_pinfo_10() const { return ___pinfo_10; }
	inline ParameterBuilderU5BU5D_t2719241758** get_address_of_pinfo_10() { return &___pinfo_10; }
	inline void set_pinfo_10(ParameterBuilderU5BU5D_t2719241758* value)
	{
		___pinfo_10 = value;
		Il2CppCodeGenWriteBarrier((&___pinfo_10), value);
	}

	inline static int32_t get_offset_of_creating_11() { return static_cast<int32_t>(offsetof(DynamicMethod_t113535562, ___creating_11)); }
	inline bool get_creating_11() const { return ___creating_11; }
	inline bool* get_address_of_creating_11() { return &___creating_11; }
	inline void set_creating_11(bool value)
	{
		___creating_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICMETHOD_T113535562_H
#ifndef MONOMETHODINFO_T2019761780_H
#define MONOMETHODINFO_T2019761780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoMethodInfo
struct  MonoMethodInfo_t2019761780 
{
public:
	// System.Type System.Reflection.MonoMethodInfo::parent
	Type_t * ___parent_0;
	// System.Type System.Reflection.MonoMethodInfo::ret
	Type_t * ___ret_1;
	// System.Reflection.MethodAttributes System.Reflection.MonoMethodInfo::attrs
	int32_t ___attrs_2;
	// System.Reflection.MethodImplAttributes System.Reflection.MonoMethodInfo::iattrs
	int32_t ___iattrs_3;
	// System.Reflection.CallingConventions System.Reflection.MonoMethodInfo::callconv
	int32_t ___callconv_4;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t2019761780, ___parent_0)); }
	inline Type_t * get_parent_0() const { return ___parent_0; }
	inline Type_t ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Type_t * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_ret_1() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t2019761780, ___ret_1)); }
	inline Type_t * get_ret_1() const { return ___ret_1; }
	inline Type_t ** get_address_of_ret_1() { return &___ret_1; }
	inline void set_ret_1(Type_t * value)
	{
		___ret_1 = value;
		Il2CppCodeGenWriteBarrier((&___ret_1), value);
	}

	inline static int32_t get_offset_of_attrs_2() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t2019761780, ___attrs_2)); }
	inline int32_t get_attrs_2() const { return ___attrs_2; }
	inline int32_t* get_address_of_attrs_2() { return &___attrs_2; }
	inline void set_attrs_2(int32_t value)
	{
		___attrs_2 = value;
	}

	inline static int32_t get_offset_of_iattrs_3() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t2019761780, ___iattrs_3)); }
	inline int32_t get_iattrs_3() const { return ___iattrs_3; }
	inline int32_t* get_address_of_iattrs_3() { return &___iattrs_3; }
	inline void set_iattrs_3(int32_t value)
	{
		___iattrs_3 = value;
	}

	inline static int32_t get_offset_of_callconv_4() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t2019761780, ___callconv_4)); }
	inline int32_t get_callconv_4() const { return ___callconv_4; }
	inline int32_t* get_address_of_callconv_4() { return &___callconv_4; }
	inline void set_callconv_4(int32_t value)
	{
		___callconv_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t2019761780_marshaled_pinvoke
{
	Type_t * ___parent_0;
	Type_t * ___ret_1;
	int32_t ___attrs_2;
	int32_t ___iattrs_3;
	int32_t ___callconv_4;
};
// Native definition for COM marshalling of System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t2019761780_marshaled_com
{
	Type_t * ___parent_0;
	Type_t * ___ret_1;
	int32_t ___attrs_2;
	int32_t ___iattrs_3;
	int32_t ___callconv_4;
};
#endif // MONOMETHODINFO_T2019761780_H
#ifndef MODULE_T3781704096_H
#define MODULE_T3781704096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Module
struct  Module_t3781704096  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Module::_impl
	IntPtr_t ____impl_3;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t2995492547 * ___assembly_4;
	// System.String System.Reflection.Module::fqname
	String_t* ___fqname_5;
	// System.String System.Reflection.Module::name
	String_t* ___name_6;
	// System.String System.Reflection.Module::scopename
	String_t* ___scopename_7;
	// System.Boolean System.Reflection.Module::is_resource
	bool ___is_resource_8;
	// System.Int32 System.Reflection.Module::token
	int32_t ___token_9;

public:
	inline static int32_t get_offset_of__impl_3() { return static_cast<int32_t>(offsetof(Module_t3781704096, ____impl_3)); }
	inline IntPtr_t get__impl_3() const { return ____impl_3; }
	inline IntPtr_t* get_address_of__impl_3() { return &____impl_3; }
	inline void set__impl_3(IntPtr_t value)
	{
		____impl_3 = value;
	}

	inline static int32_t get_offset_of_assembly_4() { return static_cast<int32_t>(offsetof(Module_t3781704096, ___assembly_4)); }
	inline Assembly_t2995492547 * get_assembly_4() const { return ___assembly_4; }
	inline Assembly_t2995492547 ** get_address_of_assembly_4() { return &___assembly_4; }
	inline void set_assembly_4(Assembly_t2995492547 * value)
	{
		___assembly_4 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_4), value);
	}

	inline static int32_t get_offset_of_fqname_5() { return static_cast<int32_t>(offsetof(Module_t3781704096, ___fqname_5)); }
	inline String_t* get_fqname_5() const { return ___fqname_5; }
	inline String_t** get_address_of_fqname_5() { return &___fqname_5; }
	inline void set_fqname_5(String_t* value)
	{
		___fqname_5 = value;
		Il2CppCodeGenWriteBarrier((&___fqname_5), value);
	}

	inline static int32_t get_offset_of_name_6() { return static_cast<int32_t>(offsetof(Module_t3781704096, ___name_6)); }
	inline String_t* get_name_6() const { return ___name_6; }
	inline String_t** get_address_of_name_6() { return &___name_6; }
	inline void set_name_6(String_t* value)
	{
		___name_6 = value;
		Il2CppCodeGenWriteBarrier((&___name_6), value);
	}

	inline static int32_t get_offset_of_scopename_7() { return static_cast<int32_t>(offsetof(Module_t3781704096, ___scopename_7)); }
	inline String_t* get_scopename_7() const { return ___scopename_7; }
	inline String_t** get_address_of_scopename_7() { return &___scopename_7; }
	inline void set_scopename_7(String_t* value)
	{
		___scopename_7 = value;
		Il2CppCodeGenWriteBarrier((&___scopename_7), value);
	}

	inline static int32_t get_offset_of_is_resource_8() { return static_cast<int32_t>(offsetof(Module_t3781704096, ___is_resource_8)); }
	inline bool get_is_resource_8() const { return ___is_resource_8; }
	inline bool* get_address_of_is_resource_8() { return &___is_resource_8; }
	inline void set_is_resource_8(bool value)
	{
		___is_resource_8 = value;
	}

	inline static int32_t get_offset_of_token_9() { return static_cast<int32_t>(offsetof(Module_t3781704096, ___token_9)); }
	inline int32_t get_token_9() const { return ___token_9; }
	inline int32_t* get_address_of_token_9() { return &___token_9; }
	inline void set_token_9(int32_t value)
	{
		___token_9 = value;
	}
};

struct Module_t3781704096_StaticFields
{
public:
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t3449324972 * ___FilterTypeName_1;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t3449324972 * ___FilterTypeNameIgnoreCase_2;

public:
	inline static int32_t get_offset_of_FilterTypeName_1() { return static_cast<int32_t>(offsetof(Module_t3781704096_StaticFields, ___FilterTypeName_1)); }
	inline TypeFilter_t3449324972 * get_FilterTypeName_1() const { return ___FilterTypeName_1; }
	inline TypeFilter_t3449324972 ** get_address_of_FilterTypeName_1() { return &___FilterTypeName_1; }
	inline void set_FilterTypeName_1(TypeFilter_t3449324972 * value)
	{
		___FilterTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeName_1), value);
	}

	inline static int32_t get_offset_of_FilterTypeNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Module_t3781704096_StaticFields, ___FilterTypeNameIgnoreCase_2)); }
	inline TypeFilter_t3449324972 * get_FilterTypeNameIgnoreCase_2() const { return ___FilterTypeNameIgnoreCase_2; }
	inline TypeFilter_t3449324972 ** get_address_of_FilterTypeNameIgnoreCase_2() { return &___FilterTypeNameIgnoreCase_2; }
	inline void set_FilterTypeNameIgnoreCase_2(TypeFilter_t3449324972 * value)
	{
		___FilterTypeNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeNameIgnoreCase_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULE_T3781704096_H
#ifndef GENERICTYPEPARAMETERBUILDER_T743888464_H
#define GENERICTYPEPARAMETERBUILDER_T743888464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.GenericTypeParameterBuilder
struct  GenericTypeParameterBuilder_t743888464  : public Type_t
{
public:
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.GenericTypeParameterBuilder::tbuilder
	TypeBuilder_t1835837594 * ___tbuilder_8;
	// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.GenericTypeParameterBuilder::mbuilder
	MethodBuilder_t3589075774 * ___mbuilder_9;
	// System.String System.Reflection.Emit.GenericTypeParameterBuilder::name
	String_t* ___name_10;
	// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::base_type
	Type_t * ___base_type_11;

public:
	inline static int32_t get_offset_of_tbuilder_8() { return static_cast<int32_t>(offsetof(GenericTypeParameterBuilder_t743888464, ___tbuilder_8)); }
	inline TypeBuilder_t1835837594 * get_tbuilder_8() const { return ___tbuilder_8; }
	inline TypeBuilder_t1835837594 ** get_address_of_tbuilder_8() { return &___tbuilder_8; }
	inline void set_tbuilder_8(TypeBuilder_t1835837594 * value)
	{
		___tbuilder_8 = value;
		Il2CppCodeGenWriteBarrier((&___tbuilder_8), value);
	}

	inline static int32_t get_offset_of_mbuilder_9() { return static_cast<int32_t>(offsetof(GenericTypeParameterBuilder_t743888464, ___mbuilder_9)); }
	inline MethodBuilder_t3589075774 * get_mbuilder_9() const { return ___mbuilder_9; }
	inline MethodBuilder_t3589075774 ** get_address_of_mbuilder_9() { return &___mbuilder_9; }
	inline void set_mbuilder_9(MethodBuilder_t3589075774 * value)
	{
		___mbuilder_9 = value;
		Il2CppCodeGenWriteBarrier((&___mbuilder_9), value);
	}

	inline static int32_t get_offset_of_name_10() { return static_cast<int32_t>(offsetof(GenericTypeParameterBuilder_t743888464, ___name_10)); }
	inline String_t* get_name_10() const { return ___name_10; }
	inline String_t** get_address_of_name_10() { return &___name_10; }
	inline void set_name_10(String_t* value)
	{
		___name_10 = value;
		Il2CppCodeGenWriteBarrier((&___name_10), value);
	}

	inline static int32_t get_offset_of_base_type_11() { return static_cast<int32_t>(offsetof(GenericTypeParameterBuilder_t743888464, ___base_type_11)); }
	inline Type_t * get_base_type_11() const { return ___base_type_11; }
	inline Type_t ** get_address_of_base_type_11() { return &___base_type_11; }
	inline void set_base_type_11(Type_t * value)
	{
		___base_type_11 = value;
		Il2CppCodeGenWriteBarrier((&___base_type_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICTYPEPARAMETERBUILDER_T743888464_H
#ifndef ENUMBUILDER_T1147861355_H
#define ENUMBUILDER_T1147861355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.EnumBuilder
struct  EnumBuilder_t1147861355  : public Type_t
{
public:
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.EnumBuilder::_tb
	TypeBuilder_t1835837594 * ____tb_8;
	// System.Type System.Reflection.Emit.EnumBuilder::_underlyingType
	Type_t * ____underlyingType_9;

public:
	inline static int32_t get_offset_of__tb_8() { return static_cast<int32_t>(offsetof(EnumBuilder_t1147861355, ____tb_8)); }
	inline TypeBuilder_t1835837594 * get__tb_8() const { return ____tb_8; }
	inline TypeBuilder_t1835837594 ** get_address_of__tb_8() { return &____tb_8; }
	inline void set__tb_8(TypeBuilder_t1835837594 * value)
	{
		____tb_8 = value;
		Il2CppCodeGenWriteBarrier((&____tb_8), value);
	}

	inline static int32_t get_offset_of__underlyingType_9() { return static_cast<int32_t>(offsetof(EnumBuilder_t1147861355, ____underlyingType_9)); }
	inline Type_t * get__underlyingType_9() const { return ____underlyingType_9; }
	inline Type_t ** get_address_of__underlyingType_9() { return &____underlyingType_9; }
	inline void set__underlyingType_9(Type_t * value)
	{
		____underlyingType_9 = value;
		Il2CppCodeGenWriteBarrier((&____underlyingType_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMBUILDER_T1147861355_H
#ifndef MONOGENERICMETHOD_T_H
#define MONOGENERICMETHOD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoGenericMethod
struct  MonoGenericMethod_t  : public MonoMethod_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOGENERICMETHOD_T_H
#ifndef TYPEBUILDER_T1835837594_H
#define TYPEBUILDER_T1835837594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.TypeBuilder
struct  TypeBuilder_t1835837594  : public Type_t
{
public:
	// System.String System.Reflection.Emit.TypeBuilder::tname
	String_t* ___tname_8;
	// System.String System.Reflection.Emit.TypeBuilder::nspace
	String_t* ___nspace_9;
	// System.Type System.Reflection.Emit.TypeBuilder::parent
	Type_t * ___parent_10;
	// System.Type System.Reflection.Emit.TypeBuilder::nesting_type
	Type_t * ___nesting_type_11;
	// System.Type[] System.Reflection.Emit.TypeBuilder::interfaces
	TypeU5BU5D_t2527952568* ___interfaces_12;
	// System.Int32 System.Reflection.Emit.TypeBuilder::num_methods
	int32_t ___num_methods_13;
	// System.Reflection.Emit.MethodBuilder[] System.Reflection.Emit.TypeBuilder::methods
	MethodBuilderU5BU5D_t1177375243* ___methods_14;
	// System.Reflection.Emit.ConstructorBuilder[] System.Reflection.Emit.TypeBuilder::ctors
	ConstructorBuilderU5BU5D_t3472911591* ___ctors_15;
	// System.Reflection.Emit.PropertyBuilder[] System.Reflection.Emit.TypeBuilder::properties
	PropertyBuilderU5BU5D_t2235307285* ___properties_16;
	// System.Reflection.Emit.FieldBuilder[] System.Reflection.Emit.TypeBuilder::fields
	FieldBuilderU5BU5D_t3602960745* ___fields_17;
	// System.Reflection.Emit.TypeBuilder[] System.Reflection.Emit.TypeBuilder::subtypes
	TypeBuilderU5BU5D_t3708399551* ___subtypes_18;
	// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::attrs
	int32_t ___attrs_19;
	// System.Int32 System.Reflection.Emit.TypeBuilder::table_idx
	int32_t ___table_idx_20;
	// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.TypeBuilder::pmodule
	ModuleBuilder_t993556171 * ___pmodule_21;
	// System.Int32 System.Reflection.Emit.TypeBuilder::class_size
	int32_t ___class_size_22;
	// System.Reflection.Emit.PackingSize System.Reflection.Emit.TypeBuilder::packing_size
	int32_t ___packing_size_23;
	// System.Reflection.Emit.GenericTypeParameterBuilder[] System.Reflection.Emit.TypeBuilder::generic_params
	GenericTypeParameterBuilderU5BU5D_t3959944817* ___generic_params_24;
	// System.Type System.Reflection.Emit.TypeBuilder::created
	Type_t * ___created_25;
	// System.String System.Reflection.Emit.TypeBuilder::fullname
	String_t* ___fullname_26;
	// System.Boolean System.Reflection.Emit.TypeBuilder::createTypeCalled
	bool ___createTypeCalled_27;
	// System.Type System.Reflection.Emit.TypeBuilder::underlying_type
	Type_t * ___underlying_type_28;

public:
	inline static int32_t get_offset_of_tname_8() { return static_cast<int32_t>(offsetof(TypeBuilder_t1835837594, ___tname_8)); }
	inline String_t* get_tname_8() const { return ___tname_8; }
	inline String_t** get_address_of_tname_8() { return &___tname_8; }
	inline void set_tname_8(String_t* value)
	{
		___tname_8 = value;
		Il2CppCodeGenWriteBarrier((&___tname_8), value);
	}

	inline static int32_t get_offset_of_nspace_9() { return static_cast<int32_t>(offsetof(TypeBuilder_t1835837594, ___nspace_9)); }
	inline String_t* get_nspace_9() const { return ___nspace_9; }
	inline String_t** get_address_of_nspace_9() { return &___nspace_9; }
	inline void set_nspace_9(String_t* value)
	{
		___nspace_9 = value;
		Il2CppCodeGenWriteBarrier((&___nspace_9), value);
	}

	inline static int32_t get_offset_of_parent_10() { return static_cast<int32_t>(offsetof(TypeBuilder_t1835837594, ___parent_10)); }
	inline Type_t * get_parent_10() const { return ___parent_10; }
	inline Type_t ** get_address_of_parent_10() { return &___parent_10; }
	inline void set_parent_10(Type_t * value)
	{
		___parent_10 = value;
		Il2CppCodeGenWriteBarrier((&___parent_10), value);
	}

	inline static int32_t get_offset_of_nesting_type_11() { return static_cast<int32_t>(offsetof(TypeBuilder_t1835837594, ___nesting_type_11)); }
	inline Type_t * get_nesting_type_11() const { return ___nesting_type_11; }
	inline Type_t ** get_address_of_nesting_type_11() { return &___nesting_type_11; }
	inline void set_nesting_type_11(Type_t * value)
	{
		___nesting_type_11 = value;
		Il2CppCodeGenWriteBarrier((&___nesting_type_11), value);
	}

	inline static int32_t get_offset_of_interfaces_12() { return static_cast<int32_t>(offsetof(TypeBuilder_t1835837594, ___interfaces_12)); }
	inline TypeU5BU5D_t2527952568* get_interfaces_12() const { return ___interfaces_12; }
	inline TypeU5BU5D_t2527952568** get_address_of_interfaces_12() { return &___interfaces_12; }
	inline void set_interfaces_12(TypeU5BU5D_t2527952568* value)
	{
		___interfaces_12 = value;
		Il2CppCodeGenWriteBarrier((&___interfaces_12), value);
	}

	inline static int32_t get_offset_of_num_methods_13() { return static_cast<int32_t>(offsetof(TypeBuilder_t1835837594, ___num_methods_13)); }
	inline int32_t get_num_methods_13() const { return ___num_methods_13; }
	inline int32_t* get_address_of_num_methods_13() { return &___num_methods_13; }
	inline void set_num_methods_13(int32_t value)
	{
		___num_methods_13 = value;
	}

	inline static int32_t get_offset_of_methods_14() { return static_cast<int32_t>(offsetof(TypeBuilder_t1835837594, ___methods_14)); }
	inline MethodBuilderU5BU5D_t1177375243* get_methods_14() const { return ___methods_14; }
	inline MethodBuilderU5BU5D_t1177375243** get_address_of_methods_14() { return &___methods_14; }
	inline void set_methods_14(MethodBuilderU5BU5D_t1177375243* value)
	{
		___methods_14 = value;
		Il2CppCodeGenWriteBarrier((&___methods_14), value);
	}

	inline static int32_t get_offset_of_ctors_15() { return static_cast<int32_t>(offsetof(TypeBuilder_t1835837594, ___ctors_15)); }
	inline ConstructorBuilderU5BU5D_t3472911591* get_ctors_15() const { return ___ctors_15; }
	inline ConstructorBuilderU5BU5D_t3472911591** get_address_of_ctors_15() { return &___ctors_15; }
	inline void set_ctors_15(ConstructorBuilderU5BU5D_t3472911591* value)
	{
		___ctors_15 = value;
		Il2CppCodeGenWriteBarrier((&___ctors_15), value);
	}

	inline static int32_t get_offset_of_properties_16() { return static_cast<int32_t>(offsetof(TypeBuilder_t1835837594, ___properties_16)); }
	inline PropertyBuilderU5BU5D_t2235307285* get_properties_16() const { return ___properties_16; }
	inline PropertyBuilderU5BU5D_t2235307285** get_address_of_properties_16() { return &___properties_16; }
	inline void set_properties_16(PropertyBuilderU5BU5D_t2235307285* value)
	{
		___properties_16 = value;
		Il2CppCodeGenWriteBarrier((&___properties_16), value);
	}

	inline static int32_t get_offset_of_fields_17() { return static_cast<int32_t>(offsetof(TypeBuilder_t1835837594, ___fields_17)); }
	inline FieldBuilderU5BU5D_t3602960745* get_fields_17() const { return ___fields_17; }
	inline FieldBuilderU5BU5D_t3602960745** get_address_of_fields_17() { return &___fields_17; }
	inline void set_fields_17(FieldBuilderU5BU5D_t3602960745* value)
	{
		___fields_17 = value;
		Il2CppCodeGenWriteBarrier((&___fields_17), value);
	}

	inline static int32_t get_offset_of_subtypes_18() { return static_cast<int32_t>(offsetof(TypeBuilder_t1835837594, ___subtypes_18)); }
	inline TypeBuilderU5BU5D_t3708399551* get_subtypes_18() const { return ___subtypes_18; }
	inline TypeBuilderU5BU5D_t3708399551** get_address_of_subtypes_18() { return &___subtypes_18; }
	inline void set_subtypes_18(TypeBuilderU5BU5D_t3708399551* value)
	{
		___subtypes_18 = value;
		Il2CppCodeGenWriteBarrier((&___subtypes_18), value);
	}

	inline static int32_t get_offset_of_attrs_19() { return static_cast<int32_t>(offsetof(TypeBuilder_t1835837594, ___attrs_19)); }
	inline int32_t get_attrs_19() const { return ___attrs_19; }
	inline int32_t* get_address_of_attrs_19() { return &___attrs_19; }
	inline void set_attrs_19(int32_t value)
	{
		___attrs_19 = value;
	}

	inline static int32_t get_offset_of_table_idx_20() { return static_cast<int32_t>(offsetof(TypeBuilder_t1835837594, ___table_idx_20)); }
	inline int32_t get_table_idx_20() const { return ___table_idx_20; }
	inline int32_t* get_address_of_table_idx_20() { return &___table_idx_20; }
	inline void set_table_idx_20(int32_t value)
	{
		___table_idx_20 = value;
	}

	inline static int32_t get_offset_of_pmodule_21() { return static_cast<int32_t>(offsetof(TypeBuilder_t1835837594, ___pmodule_21)); }
	inline ModuleBuilder_t993556171 * get_pmodule_21() const { return ___pmodule_21; }
	inline ModuleBuilder_t993556171 ** get_address_of_pmodule_21() { return &___pmodule_21; }
	inline void set_pmodule_21(ModuleBuilder_t993556171 * value)
	{
		___pmodule_21 = value;
		Il2CppCodeGenWriteBarrier((&___pmodule_21), value);
	}

	inline static int32_t get_offset_of_class_size_22() { return static_cast<int32_t>(offsetof(TypeBuilder_t1835837594, ___class_size_22)); }
	inline int32_t get_class_size_22() const { return ___class_size_22; }
	inline int32_t* get_address_of_class_size_22() { return &___class_size_22; }
	inline void set_class_size_22(int32_t value)
	{
		___class_size_22 = value;
	}

	inline static int32_t get_offset_of_packing_size_23() { return static_cast<int32_t>(offsetof(TypeBuilder_t1835837594, ___packing_size_23)); }
	inline int32_t get_packing_size_23() const { return ___packing_size_23; }
	inline int32_t* get_address_of_packing_size_23() { return &___packing_size_23; }
	inline void set_packing_size_23(int32_t value)
	{
		___packing_size_23 = value;
	}

	inline static int32_t get_offset_of_generic_params_24() { return static_cast<int32_t>(offsetof(TypeBuilder_t1835837594, ___generic_params_24)); }
	inline GenericTypeParameterBuilderU5BU5D_t3959944817* get_generic_params_24() const { return ___generic_params_24; }
	inline GenericTypeParameterBuilderU5BU5D_t3959944817** get_address_of_generic_params_24() { return &___generic_params_24; }
	inline void set_generic_params_24(GenericTypeParameterBuilderU5BU5D_t3959944817* value)
	{
		___generic_params_24 = value;
		Il2CppCodeGenWriteBarrier((&___generic_params_24), value);
	}

	inline static int32_t get_offset_of_created_25() { return static_cast<int32_t>(offsetof(TypeBuilder_t1835837594, ___created_25)); }
	inline Type_t * get_created_25() const { return ___created_25; }
	inline Type_t ** get_address_of_created_25() { return &___created_25; }
	inline void set_created_25(Type_t * value)
	{
		___created_25 = value;
		Il2CppCodeGenWriteBarrier((&___created_25), value);
	}

	inline static int32_t get_offset_of_fullname_26() { return static_cast<int32_t>(offsetof(TypeBuilder_t1835837594, ___fullname_26)); }
	inline String_t* get_fullname_26() const { return ___fullname_26; }
	inline String_t** get_address_of_fullname_26() { return &___fullname_26; }
	inline void set_fullname_26(String_t* value)
	{
		___fullname_26 = value;
		Il2CppCodeGenWriteBarrier((&___fullname_26), value);
	}

	inline static int32_t get_offset_of_createTypeCalled_27() { return static_cast<int32_t>(offsetof(TypeBuilder_t1835837594, ___createTypeCalled_27)); }
	inline bool get_createTypeCalled_27() const { return ___createTypeCalled_27; }
	inline bool* get_address_of_createTypeCalled_27() { return &___createTypeCalled_27; }
	inline void set_createTypeCalled_27(bool value)
	{
		___createTypeCalled_27 = value;
	}

	inline static int32_t get_offset_of_underlying_type_28() { return static_cast<int32_t>(offsetof(TypeBuilder_t1835837594, ___underlying_type_28)); }
	inline Type_t * get_underlying_type_28() const { return ___underlying_type_28; }
	inline Type_t ** get_address_of_underlying_type_28() { return &___underlying_type_28; }
	inline void set_underlying_type_28(Type_t * value)
	{
		___underlying_type_28 = value;
		Il2CppCodeGenWriteBarrier((&___underlying_type_28), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEBUILDER_T1835837594_H
#ifndef TYPEDELEGATOR_T2214650584_H
#define TYPEDELEGATOR_T2214650584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeDelegator
struct  TypeDelegator_t2214650584  : public Type_t
{
public:
	// System.Type System.Reflection.TypeDelegator::typeImpl
	Type_t * ___typeImpl_8;

public:
	inline static int32_t get_offset_of_typeImpl_8() { return static_cast<int32_t>(offsetof(TypeDelegator_t2214650584, ___typeImpl_8)); }
	inline Type_t * get_typeImpl_8() const { return ___typeImpl_8; }
	inline Type_t ** get_address_of_typeImpl_8() { return &___typeImpl_8; }
	inline void set_typeImpl_8(Type_t * value)
	{
		___typeImpl_8 = value;
		Il2CppCodeGenWriteBarrier((&___typeImpl_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDELEGATOR_T2214650584_H
#ifndef MONOGENERICCMETHOD_T650121484_H
#define MONOGENERICCMETHOD_T650121484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoGenericCMethod
struct  MonoGenericCMethod_t650121484  : public MonoCMethod_t1394167787
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOGENERICCMETHOD_T650121484_H
#ifndef MONOPROPERTY_T_H
#define MONOPROPERTY_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoProperty
struct  MonoProperty_t  : public PropertyInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoProperty::klass
	IntPtr_t ___klass_0;
	// System.IntPtr System.Reflection.MonoProperty::prop
	IntPtr_t ___prop_1;
	// System.Reflection.MonoPropertyInfo System.Reflection.MonoProperty::info
	MonoPropertyInfo_t3721666835  ___info_2;
	// System.Reflection.PInfo System.Reflection.MonoProperty::cached
	int32_t ___cached_3;
	// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::cached_getter
	GetterAdapter_t1756322985 * ___cached_getter_4;

public:
	inline static int32_t get_offset_of_klass_0() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___klass_0)); }
	inline IntPtr_t get_klass_0() const { return ___klass_0; }
	inline IntPtr_t* get_address_of_klass_0() { return &___klass_0; }
	inline void set_klass_0(IntPtr_t value)
	{
		___klass_0 = value;
	}

	inline static int32_t get_offset_of_prop_1() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___prop_1)); }
	inline IntPtr_t get_prop_1() const { return ___prop_1; }
	inline IntPtr_t* get_address_of_prop_1() { return &___prop_1; }
	inline void set_prop_1(IntPtr_t value)
	{
		___prop_1 = value;
	}

	inline static int32_t get_offset_of_info_2() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___info_2)); }
	inline MonoPropertyInfo_t3721666835  get_info_2() const { return ___info_2; }
	inline MonoPropertyInfo_t3721666835 * get_address_of_info_2() { return &___info_2; }
	inline void set_info_2(MonoPropertyInfo_t3721666835  value)
	{
		___info_2 = value;
	}

	inline static int32_t get_offset_of_cached_3() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___cached_3)); }
	inline int32_t get_cached_3() const { return ___cached_3; }
	inline int32_t* get_address_of_cached_3() { return &___cached_3; }
	inline void set_cached_3(int32_t value)
	{
		___cached_3 = value;
	}

	inline static int32_t get_offset_of_cached_getter_4() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___cached_getter_4)); }
	inline GetterAdapter_t1756322985 * get_cached_getter_4() const { return ___cached_getter_4; }
	inline GetterAdapter_t1756322985 ** get_address_of_cached_getter_4() { return &___cached_getter_4; }
	inline void set_cached_getter_4(GetterAdapter_t1756322985 * value)
	{
		___cached_getter_4 = value;
		Il2CppCodeGenWriteBarrier((&___cached_getter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOPROPERTY_T_H
#ifndef GETTERADAPTER_T1756322985_H
#define GETTERADAPTER_T1756322985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoProperty/GetterAdapter
struct  GetterAdapter_t1756322985  : public MulticastDelegate_t3323859245
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETTERADAPTER_T1756322985_H
#ifndef ADDEVENTADAPTER_T2474551623_H
#define ADDEVENTADAPTER_T2474551623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventInfo/AddEventAdapter
struct  AddEventAdapter_t2474551623  : public MulticastDelegate_t3323859245
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDEVENTADAPTER_T2474551623_H
#ifndef MODULEBUILDER_T993556171_H
#define MODULEBUILDER_T993556171_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ModuleBuilder
struct  ModuleBuilder_t993556171  : public Module_t3781704096
{
public:
	// System.Int32 System.Reflection.Emit.ModuleBuilder::num_types
	int32_t ___num_types_10;
	// System.Reflection.Emit.TypeBuilder[] System.Reflection.Emit.ModuleBuilder::types
	TypeBuilderU5BU5D_t3708399551* ___types_11;
	// System.Byte[] System.Reflection.Emit.ModuleBuilder::guid
	ByteU5BU5D_t790048969* ___guid_12;
	// System.Int32 System.Reflection.Emit.ModuleBuilder::table_idx
	int32_t ___table_idx_13;
	// System.Reflection.Emit.AssemblyBuilder System.Reflection.Emit.ModuleBuilder::assemblyb
	AssemblyBuilder_t2758415106 * ___assemblyb_14;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::global_type
	TypeBuilder_t1835837594 * ___global_type_15;
	// System.Collections.Hashtable System.Reflection.Emit.ModuleBuilder::name_cache
	Hashtable_t1881663185 * ___name_cache_16;
	// System.Collections.Hashtable System.Reflection.Emit.ModuleBuilder::us_string_cache
	Hashtable_t1881663185 * ___us_string_cache_17;
	// System.Int32[] System.Reflection.Emit.ModuleBuilder::table_indexes
	Int32U5BU5D_t977882480* ___table_indexes_18;
	// System.Boolean System.Reflection.Emit.ModuleBuilder::transient
	bool ___transient_19;
	// System.Reflection.Emit.ModuleBuilderTokenGenerator System.Reflection.Emit.ModuleBuilder::token_gen
	ModuleBuilderTokenGenerator_t59605324 * ___token_gen_20;
	// System.Diagnostics.SymbolStore.ISymbolWriter System.Reflection.Emit.ModuleBuilder::symbolWriter
	RuntimeObject* ___symbolWriter_21;

public:
	inline static int32_t get_offset_of_num_types_10() { return static_cast<int32_t>(offsetof(ModuleBuilder_t993556171, ___num_types_10)); }
	inline int32_t get_num_types_10() const { return ___num_types_10; }
	inline int32_t* get_address_of_num_types_10() { return &___num_types_10; }
	inline void set_num_types_10(int32_t value)
	{
		___num_types_10 = value;
	}

	inline static int32_t get_offset_of_types_11() { return static_cast<int32_t>(offsetof(ModuleBuilder_t993556171, ___types_11)); }
	inline TypeBuilderU5BU5D_t3708399551* get_types_11() const { return ___types_11; }
	inline TypeBuilderU5BU5D_t3708399551** get_address_of_types_11() { return &___types_11; }
	inline void set_types_11(TypeBuilderU5BU5D_t3708399551* value)
	{
		___types_11 = value;
		Il2CppCodeGenWriteBarrier((&___types_11), value);
	}

	inline static int32_t get_offset_of_guid_12() { return static_cast<int32_t>(offsetof(ModuleBuilder_t993556171, ___guid_12)); }
	inline ByteU5BU5D_t790048969* get_guid_12() const { return ___guid_12; }
	inline ByteU5BU5D_t790048969** get_address_of_guid_12() { return &___guid_12; }
	inline void set_guid_12(ByteU5BU5D_t790048969* value)
	{
		___guid_12 = value;
		Il2CppCodeGenWriteBarrier((&___guid_12), value);
	}

	inline static int32_t get_offset_of_table_idx_13() { return static_cast<int32_t>(offsetof(ModuleBuilder_t993556171, ___table_idx_13)); }
	inline int32_t get_table_idx_13() const { return ___table_idx_13; }
	inline int32_t* get_address_of_table_idx_13() { return &___table_idx_13; }
	inline void set_table_idx_13(int32_t value)
	{
		___table_idx_13 = value;
	}

	inline static int32_t get_offset_of_assemblyb_14() { return static_cast<int32_t>(offsetof(ModuleBuilder_t993556171, ___assemblyb_14)); }
	inline AssemblyBuilder_t2758415106 * get_assemblyb_14() const { return ___assemblyb_14; }
	inline AssemblyBuilder_t2758415106 ** get_address_of_assemblyb_14() { return &___assemblyb_14; }
	inline void set_assemblyb_14(AssemblyBuilder_t2758415106 * value)
	{
		___assemblyb_14 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyb_14), value);
	}

	inline static int32_t get_offset_of_global_type_15() { return static_cast<int32_t>(offsetof(ModuleBuilder_t993556171, ___global_type_15)); }
	inline TypeBuilder_t1835837594 * get_global_type_15() const { return ___global_type_15; }
	inline TypeBuilder_t1835837594 ** get_address_of_global_type_15() { return &___global_type_15; }
	inline void set_global_type_15(TypeBuilder_t1835837594 * value)
	{
		___global_type_15 = value;
		Il2CppCodeGenWriteBarrier((&___global_type_15), value);
	}

	inline static int32_t get_offset_of_name_cache_16() { return static_cast<int32_t>(offsetof(ModuleBuilder_t993556171, ___name_cache_16)); }
	inline Hashtable_t1881663185 * get_name_cache_16() const { return ___name_cache_16; }
	inline Hashtable_t1881663185 ** get_address_of_name_cache_16() { return &___name_cache_16; }
	inline void set_name_cache_16(Hashtable_t1881663185 * value)
	{
		___name_cache_16 = value;
		Il2CppCodeGenWriteBarrier((&___name_cache_16), value);
	}

	inline static int32_t get_offset_of_us_string_cache_17() { return static_cast<int32_t>(offsetof(ModuleBuilder_t993556171, ___us_string_cache_17)); }
	inline Hashtable_t1881663185 * get_us_string_cache_17() const { return ___us_string_cache_17; }
	inline Hashtable_t1881663185 ** get_address_of_us_string_cache_17() { return &___us_string_cache_17; }
	inline void set_us_string_cache_17(Hashtable_t1881663185 * value)
	{
		___us_string_cache_17 = value;
		Il2CppCodeGenWriteBarrier((&___us_string_cache_17), value);
	}

	inline static int32_t get_offset_of_table_indexes_18() { return static_cast<int32_t>(offsetof(ModuleBuilder_t993556171, ___table_indexes_18)); }
	inline Int32U5BU5D_t977882480* get_table_indexes_18() const { return ___table_indexes_18; }
	inline Int32U5BU5D_t977882480** get_address_of_table_indexes_18() { return &___table_indexes_18; }
	inline void set_table_indexes_18(Int32U5BU5D_t977882480* value)
	{
		___table_indexes_18 = value;
		Il2CppCodeGenWriteBarrier((&___table_indexes_18), value);
	}

	inline static int32_t get_offset_of_transient_19() { return static_cast<int32_t>(offsetof(ModuleBuilder_t993556171, ___transient_19)); }
	inline bool get_transient_19() const { return ___transient_19; }
	inline bool* get_address_of_transient_19() { return &___transient_19; }
	inline void set_transient_19(bool value)
	{
		___transient_19 = value;
	}

	inline static int32_t get_offset_of_token_gen_20() { return static_cast<int32_t>(offsetof(ModuleBuilder_t993556171, ___token_gen_20)); }
	inline ModuleBuilderTokenGenerator_t59605324 * get_token_gen_20() const { return ___token_gen_20; }
	inline ModuleBuilderTokenGenerator_t59605324 ** get_address_of_token_gen_20() { return &___token_gen_20; }
	inline void set_token_gen_20(ModuleBuilderTokenGenerator_t59605324 * value)
	{
		___token_gen_20 = value;
		Il2CppCodeGenWriteBarrier((&___token_gen_20), value);
	}

	inline static int32_t get_offset_of_symbolWriter_21() { return static_cast<int32_t>(offsetof(ModuleBuilder_t993556171, ___symbolWriter_21)); }
	inline RuntimeObject* get_symbolWriter_21() const { return ___symbolWriter_21; }
	inline RuntimeObject** get_address_of_symbolWriter_21() { return &___symbolWriter_21; }
	inline void set_symbolWriter_21(RuntimeObject* value)
	{
		___symbolWriter_21 = value;
		Il2CppCodeGenWriteBarrier((&___symbolWriter_21), value);
	}
};

struct ModuleBuilder_t993556171_StaticFields
{
public:
	// System.Char[] System.Reflection.Emit.ModuleBuilder::type_modifiers
	CharU5BU5D_t233192964* ___type_modifiers_22;

public:
	inline static int32_t get_offset_of_type_modifiers_22() { return static_cast<int32_t>(offsetof(ModuleBuilder_t993556171_StaticFields, ___type_modifiers_22)); }
	inline CharU5BU5D_t233192964* get_type_modifiers_22() const { return ___type_modifiers_22; }
	inline CharU5BU5D_t233192964** get_address_of_type_modifiers_22() { return &___type_modifiers_22; }
	inline void set_type_modifiers_22(CharU5BU5D_t233192964* value)
	{
		___type_modifiers_22 = value;
		Il2CppCodeGenWriteBarrier((&___type_modifiers_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULEBUILDER_T993556171_H
#ifndef DERIVEDTYPE_T1409175734_H
#define DERIVEDTYPE_T1409175734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.DerivedType
struct  DerivedType_t1409175734  : public Type_t
{
public:
	// System.Type System.Reflection.Emit.DerivedType::elementType
	Type_t * ___elementType_8;

public:
	inline static int32_t get_offset_of_elementType_8() { return static_cast<int32_t>(offsetof(DerivedType_t1409175734, ___elementType_8)); }
	inline Type_t * get_elementType_8() const { return ___elementType_8; }
	inline Type_t ** get_address_of_elementType_8() { return &___elementType_8; }
	inline void set_elementType_8(Type_t * value)
	{
		___elementType_8 = value;
		Il2CppCodeGenWriteBarrier((&___elementType_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DERIVEDTYPE_T1409175734_H
#ifndef BYREFTYPE_T632360936_H
#define BYREFTYPE_T632360936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ByRefType
struct  ByRefType_t632360936  : public DerivedType_t1409175734
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYREFTYPE_T632360936_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize300 = { sizeof (DerivedType_t1409175734), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable300[1] = 
{
	DerivedType_t1409175734::get_offset_of_elementType_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize301 = { sizeof (ByRefType_t632360936), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize302 = { sizeof (DynamicMethod_t113535562), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable302[12] = 
{
	DynamicMethod_t113535562::get_offset_of_mhandle_0(),
	DynamicMethod_t113535562::get_offset_of_name_1(),
	DynamicMethod_t113535562::get_offset_of_returnType_2(),
	DynamicMethod_t113535562::get_offset_of_parameters_3(),
	DynamicMethod_t113535562::get_offset_of_attributes_4(),
	DynamicMethod_t113535562::get_offset_of_callingConvention_5(),
	DynamicMethod_t113535562::get_offset_of_module_6(),
	DynamicMethod_t113535562::get_offset_of_ilgen_7(),
	DynamicMethod_t113535562::get_offset_of_refs_8(),
	DynamicMethod_t113535562::get_offset_of_method_9(),
	DynamicMethod_t113535562::get_offset_of_pinfo_10(),
	DynamicMethod_t113535562::get_offset_of_creating_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize303 = { sizeof (EnumBuilder_t1147861355), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable303[2] = 
{
	EnumBuilder_t1147861355::get_offset_of__tb_8(),
	EnumBuilder_t1147861355::get_offset_of__underlyingType_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize304 = { sizeof (FieldBuilder_t1013222584), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable304[5] = 
{
	FieldBuilder_t1013222584::get_offset_of_attrs_0(),
	FieldBuilder_t1013222584::get_offset_of_type_1(),
	FieldBuilder_t1013222584::get_offset_of_name_2(),
	FieldBuilder_t1013222584::get_offset_of_typeb_3(),
	FieldBuilder_t1013222584::get_offset_of_marshal_info_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize305 = { sizeof (GenericTypeParameterBuilder_t743888464), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable305[4] = 
{
	GenericTypeParameterBuilder_t743888464::get_offset_of_tbuilder_8(),
	GenericTypeParameterBuilder_t743888464::get_offset_of_mbuilder_9(),
	GenericTypeParameterBuilder_t743888464::get_offset_of_name_10(),
	GenericTypeParameterBuilder_t743888464::get_offset_of_base_type_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize306 = { sizeof (ILTokenInfo_t2703604774)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable306[2] = 
{
	ILTokenInfo_t2703604774::get_offset_of_member_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ILTokenInfo_t2703604774::get_offset_of_code_pos_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize307 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize308 = { sizeof (ILGenerator_t365221040), -1, sizeof(ILGenerator_t365221040_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable308[14] = 
{
	ILGenerator_t365221040_StaticFields::get_offset_of_void_type_0(),
	ILGenerator_t365221040::get_offset_of_code_1(),
	ILGenerator_t365221040::get_offset_of_code_len_2(),
	ILGenerator_t365221040::get_offset_of_max_stack_3(),
	ILGenerator_t365221040::get_offset_of_cur_stack_4(),
	ILGenerator_t365221040::get_offset_of_locals_5(),
	ILGenerator_t365221040::get_offset_of_num_token_fixups_6(),
	ILGenerator_t365221040::get_offset_of_token_fixups_7(),
	ILGenerator_t365221040::get_offset_of_labels_8(),
	ILGenerator_t365221040::get_offset_of_num_labels_9(),
	ILGenerator_t365221040::get_offset_of_fixups_10(),
	ILGenerator_t365221040::get_offset_of_num_fixups_11(),
	ILGenerator_t365221040::get_offset_of_module_12(),
	ILGenerator_t365221040::get_offset_of_token_gen_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize309 = { sizeof (LabelFixup_t359068939)+ sizeof (RuntimeObject), sizeof(LabelFixup_t359068939 ), 0, 0 };
extern const int32_t g_FieldOffsetTable309[3] = 
{
	LabelFixup_t359068939::get_offset_of_offset_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LabelFixup_t359068939::get_offset_of_pos_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LabelFixup_t359068939::get_offset_of_label_idx_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize310 = { sizeof (LabelData_t248639538)+ sizeof (RuntimeObject), sizeof(LabelData_t248639538 ), 0, 0 };
extern const int32_t g_FieldOffsetTable310[2] = 
{
	LabelData_t248639538::get_offset_of_addr_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LabelData_t248639538::get_offset_of_maxStack_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize311 = { sizeof (Label_t2538759339)+ sizeof (RuntimeObject), sizeof(Label_t2538759339 ), 0, 0 };
extern const int32_t g_FieldOffsetTable311[1] = 
{
	Label_t2538759339::get_offset_of_label_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize312 = { sizeof (LocalBuilder_t374478430), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable312[1] = 
{
	LocalBuilder_t374478430::get_offset_of_ilgen_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize313 = { sizeof (MethodBuilder_t3589075774), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable313[18] = 
{
	MethodBuilder_t3589075774::get_offset_of_rtype_0(),
	MethodBuilder_t3589075774::get_offset_of_parameters_1(),
	MethodBuilder_t3589075774::get_offset_of_attrs_2(),
	MethodBuilder_t3589075774::get_offset_of_iattrs_3(),
	MethodBuilder_t3589075774::get_offset_of_name_4(),
	MethodBuilder_t3589075774::get_offset_of_table_idx_5(),
	MethodBuilder_t3589075774::get_offset_of_code_6(),
	MethodBuilder_t3589075774::get_offset_of_ilgen_7(),
	MethodBuilder_t3589075774::get_offset_of_type_8(),
	MethodBuilder_t3589075774::get_offset_of_pinfo_9(),
	MethodBuilder_t3589075774::get_offset_of_override_method_10(),
	MethodBuilder_t3589075774::get_offset_of_call_conv_11(),
	MethodBuilder_t3589075774::get_offset_of_init_locals_12(),
	MethodBuilder_t3589075774::get_offset_of_generic_params_13(),
	MethodBuilder_t3589075774::get_offset_of_returnModReq_14(),
	MethodBuilder_t3589075774::get_offset_of_returnModOpt_15(),
	MethodBuilder_t3589075774::get_offset_of_paramModReq_16(),
	MethodBuilder_t3589075774::get_offset_of_paramModOpt_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize314 = { sizeof (MethodToken_t3234769345)+ sizeof (RuntimeObject), sizeof(MethodToken_t3234769345 ), sizeof(MethodToken_t3234769345_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable314[2] = 
{
	MethodToken_t3234769345::get_offset_of_tokValue_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MethodToken_t3234769345_StaticFields::get_offset_of_Empty_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize315 = { sizeof (ModuleBuilder_t993556171), -1, sizeof(ModuleBuilder_t993556171_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable315[13] = 
{
	ModuleBuilder_t993556171::get_offset_of_num_types_10(),
	ModuleBuilder_t993556171::get_offset_of_types_11(),
	ModuleBuilder_t993556171::get_offset_of_guid_12(),
	ModuleBuilder_t993556171::get_offset_of_table_idx_13(),
	ModuleBuilder_t993556171::get_offset_of_assemblyb_14(),
	ModuleBuilder_t993556171::get_offset_of_global_type_15(),
	ModuleBuilder_t993556171::get_offset_of_name_cache_16(),
	ModuleBuilder_t993556171::get_offset_of_us_string_cache_17(),
	ModuleBuilder_t993556171::get_offset_of_table_indexes_18(),
	ModuleBuilder_t993556171::get_offset_of_transient_19(),
	ModuleBuilder_t993556171::get_offset_of_token_gen_20(),
	ModuleBuilder_t993556171::get_offset_of_symbolWriter_21(),
	ModuleBuilder_t993556171_StaticFields::get_offset_of_type_modifiers_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize316 = { sizeof (ModuleBuilderTokenGenerator_t59605324), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable316[1] = 
{
	ModuleBuilderTokenGenerator_t59605324::get_offset_of_mb_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize317 = { sizeof (OpCode_t2368491978)+ sizeof (RuntimeObject), sizeof(OpCode_t2368491978 ), 0, 0 };
extern const int32_t g_FieldOffsetTable317[8] = 
{
	OpCode_t2368491978::get_offset_of_op1_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t2368491978::get_offset_of_op2_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t2368491978::get_offset_of_push_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t2368491978::get_offset_of_pop_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t2368491978::get_offset_of_size_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t2368491978::get_offset_of_type_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t2368491978::get_offset_of_args_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t2368491978::get_offset_of_flow_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize318 = { sizeof (OpCodeNames_t475096032), -1, sizeof(OpCodeNames_t475096032_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable318[1] = 
{
	OpCodeNames_t475096032_StaticFields::get_offset_of_names_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize319 = { sizeof (OpCodes_t670429032), -1, sizeof(OpCodes_t670429032_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable319[226] = 
{
	OpCodes_t670429032_StaticFields::get_offset_of_Nop_0(),
	OpCodes_t670429032_StaticFields::get_offset_of_Break_1(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldarg_0_2(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldarg_1_3(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldarg_2_4(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldarg_3_5(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldloc_0_6(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldloc_1_7(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldloc_2_8(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldloc_3_9(),
	OpCodes_t670429032_StaticFields::get_offset_of_Stloc_0_10(),
	OpCodes_t670429032_StaticFields::get_offset_of_Stloc_1_11(),
	OpCodes_t670429032_StaticFields::get_offset_of_Stloc_2_12(),
	OpCodes_t670429032_StaticFields::get_offset_of_Stloc_3_13(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldarg_S_14(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldarga_S_15(),
	OpCodes_t670429032_StaticFields::get_offset_of_Starg_S_16(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldloc_S_17(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldloca_S_18(),
	OpCodes_t670429032_StaticFields::get_offset_of_Stloc_S_19(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldnull_20(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldc_I4_M1_21(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldc_I4_0_22(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldc_I4_1_23(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldc_I4_2_24(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldc_I4_3_25(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldc_I4_4_26(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldc_I4_5_27(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldc_I4_6_28(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldc_I4_7_29(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldc_I4_8_30(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldc_I4_S_31(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldc_I4_32(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldc_I8_33(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldc_R4_34(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldc_R8_35(),
	OpCodes_t670429032_StaticFields::get_offset_of_Dup_36(),
	OpCodes_t670429032_StaticFields::get_offset_of_Pop_37(),
	OpCodes_t670429032_StaticFields::get_offset_of_Jmp_38(),
	OpCodes_t670429032_StaticFields::get_offset_of_Call_39(),
	OpCodes_t670429032_StaticFields::get_offset_of_Calli_40(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ret_41(),
	OpCodes_t670429032_StaticFields::get_offset_of_Br_S_42(),
	OpCodes_t670429032_StaticFields::get_offset_of_Brfalse_S_43(),
	OpCodes_t670429032_StaticFields::get_offset_of_Brtrue_S_44(),
	OpCodes_t670429032_StaticFields::get_offset_of_Beq_S_45(),
	OpCodes_t670429032_StaticFields::get_offset_of_Bge_S_46(),
	OpCodes_t670429032_StaticFields::get_offset_of_Bgt_S_47(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ble_S_48(),
	OpCodes_t670429032_StaticFields::get_offset_of_Blt_S_49(),
	OpCodes_t670429032_StaticFields::get_offset_of_Bne_Un_S_50(),
	OpCodes_t670429032_StaticFields::get_offset_of_Bge_Un_S_51(),
	OpCodes_t670429032_StaticFields::get_offset_of_Bgt_Un_S_52(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ble_Un_S_53(),
	OpCodes_t670429032_StaticFields::get_offset_of_Blt_Un_S_54(),
	OpCodes_t670429032_StaticFields::get_offset_of_Br_55(),
	OpCodes_t670429032_StaticFields::get_offset_of_Brfalse_56(),
	OpCodes_t670429032_StaticFields::get_offset_of_Brtrue_57(),
	OpCodes_t670429032_StaticFields::get_offset_of_Beq_58(),
	OpCodes_t670429032_StaticFields::get_offset_of_Bge_59(),
	OpCodes_t670429032_StaticFields::get_offset_of_Bgt_60(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ble_61(),
	OpCodes_t670429032_StaticFields::get_offset_of_Blt_62(),
	OpCodes_t670429032_StaticFields::get_offset_of_Bne_Un_63(),
	OpCodes_t670429032_StaticFields::get_offset_of_Bge_Un_64(),
	OpCodes_t670429032_StaticFields::get_offset_of_Bgt_Un_65(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ble_Un_66(),
	OpCodes_t670429032_StaticFields::get_offset_of_Blt_Un_67(),
	OpCodes_t670429032_StaticFields::get_offset_of_Switch_68(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldind_I1_69(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldind_U1_70(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldind_I2_71(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldind_U2_72(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldind_I4_73(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldind_U4_74(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldind_I8_75(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldind_I_76(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldind_R4_77(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldind_R8_78(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldind_Ref_79(),
	OpCodes_t670429032_StaticFields::get_offset_of_Stind_Ref_80(),
	OpCodes_t670429032_StaticFields::get_offset_of_Stind_I1_81(),
	OpCodes_t670429032_StaticFields::get_offset_of_Stind_I2_82(),
	OpCodes_t670429032_StaticFields::get_offset_of_Stind_I4_83(),
	OpCodes_t670429032_StaticFields::get_offset_of_Stind_I8_84(),
	OpCodes_t670429032_StaticFields::get_offset_of_Stind_R4_85(),
	OpCodes_t670429032_StaticFields::get_offset_of_Stind_R8_86(),
	OpCodes_t670429032_StaticFields::get_offset_of_Add_87(),
	OpCodes_t670429032_StaticFields::get_offset_of_Sub_88(),
	OpCodes_t670429032_StaticFields::get_offset_of_Mul_89(),
	OpCodes_t670429032_StaticFields::get_offset_of_Div_90(),
	OpCodes_t670429032_StaticFields::get_offset_of_Div_Un_91(),
	OpCodes_t670429032_StaticFields::get_offset_of_Rem_92(),
	OpCodes_t670429032_StaticFields::get_offset_of_Rem_Un_93(),
	OpCodes_t670429032_StaticFields::get_offset_of_And_94(),
	OpCodes_t670429032_StaticFields::get_offset_of_Or_95(),
	OpCodes_t670429032_StaticFields::get_offset_of_Xor_96(),
	OpCodes_t670429032_StaticFields::get_offset_of_Shl_97(),
	OpCodes_t670429032_StaticFields::get_offset_of_Shr_98(),
	OpCodes_t670429032_StaticFields::get_offset_of_Shr_Un_99(),
	OpCodes_t670429032_StaticFields::get_offset_of_Neg_100(),
	OpCodes_t670429032_StaticFields::get_offset_of_Not_101(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_I1_102(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_I2_103(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_I4_104(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_I8_105(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_R4_106(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_R8_107(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_U4_108(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_U8_109(),
	OpCodes_t670429032_StaticFields::get_offset_of_Callvirt_110(),
	OpCodes_t670429032_StaticFields::get_offset_of_Cpobj_111(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldobj_112(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldstr_113(),
	OpCodes_t670429032_StaticFields::get_offset_of_Newobj_114(),
	OpCodes_t670429032_StaticFields::get_offset_of_Castclass_115(),
	OpCodes_t670429032_StaticFields::get_offset_of_Isinst_116(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_R_Un_117(),
	OpCodes_t670429032_StaticFields::get_offset_of_Unbox_118(),
	OpCodes_t670429032_StaticFields::get_offset_of_Throw_119(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldfld_120(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldflda_121(),
	OpCodes_t670429032_StaticFields::get_offset_of_Stfld_122(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldsfld_123(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldsflda_124(),
	OpCodes_t670429032_StaticFields::get_offset_of_Stsfld_125(),
	OpCodes_t670429032_StaticFields::get_offset_of_Stobj_126(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_Ovf_I1_Un_127(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_Ovf_I2_Un_128(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_Ovf_I4_Un_129(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_Ovf_I8_Un_130(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_Ovf_U1_Un_131(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_Ovf_U2_Un_132(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_Ovf_U4_Un_133(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_Ovf_U8_Un_134(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_Ovf_I_Un_135(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_Ovf_U_Un_136(),
	OpCodes_t670429032_StaticFields::get_offset_of_Box_137(),
	OpCodes_t670429032_StaticFields::get_offset_of_Newarr_138(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldlen_139(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldelema_140(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldelem_I1_141(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldelem_U1_142(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldelem_I2_143(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldelem_U2_144(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldelem_I4_145(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldelem_U4_146(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldelem_I8_147(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldelem_I_148(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldelem_R4_149(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldelem_R8_150(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldelem_Ref_151(),
	OpCodes_t670429032_StaticFields::get_offset_of_Stelem_I_152(),
	OpCodes_t670429032_StaticFields::get_offset_of_Stelem_I1_153(),
	OpCodes_t670429032_StaticFields::get_offset_of_Stelem_I2_154(),
	OpCodes_t670429032_StaticFields::get_offset_of_Stelem_I4_155(),
	OpCodes_t670429032_StaticFields::get_offset_of_Stelem_I8_156(),
	OpCodes_t670429032_StaticFields::get_offset_of_Stelem_R4_157(),
	OpCodes_t670429032_StaticFields::get_offset_of_Stelem_R8_158(),
	OpCodes_t670429032_StaticFields::get_offset_of_Stelem_Ref_159(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldelem_160(),
	OpCodes_t670429032_StaticFields::get_offset_of_Stelem_161(),
	OpCodes_t670429032_StaticFields::get_offset_of_Unbox_Any_162(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_Ovf_I1_163(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_Ovf_U1_164(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_Ovf_I2_165(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_Ovf_U2_166(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_Ovf_I4_167(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_Ovf_U4_168(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_Ovf_I8_169(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_Ovf_U8_170(),
	OpCodes_t670429032_StaticFields::get_offset_of_Refanyval_171(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ckfinite_172(),
	OpCodes_t670429032_StaticFields::get_offset_of_Mkrefany_173(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldtoken_174(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_U2_175(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_U1_176(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_I_177(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_Ovf_I_178(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_Ovf_U_179(),
	OpCodes_t670429032_StaticFields::get_offset_of_Add_Ovf_180(),
	OpCodes_t670429032_StaticFields::get_offset_of_Add_Ovf_Un_181(),
	OpCodes_t670429032_StaticFields::get_offset_of_Mul_Ovf_182(),
	OpCodes_t670429032_StaticFields::get_offset_of_Mul_Ovf_Un_183(),
	OpCodes_t670429032_StaticFields::get_offset_of_Sub_Ovf_184(),
	OpCodes_t670429032_StaticFields::get_offset_of_Sub_Ovf_Un_185(),
	OpCodes_t670429032_StaticFields::get_offset_of_Endfinally_186(),
	OpCodes_t670429032_StaticFields::get_offset_of_Leave_187(),
	OpCodes_t670429032_StaticFields::get_offset_of_Leave_S_188(),
	OpCodes_t670429032_StaticFields::get_offset_of_Stind_I_189(),
	OpCodes_t670429032_StaticFields::get_offset_of_Conv_U_190(),
	OpCodes_t670429032_StaticFields::get_offset_of_Prefix7_191(),
	OpCodes_t670429032_StaticFields::get_offset_of_Prefix6_192(),
	OpCodes_t670429032_StaticFields::get_offset_of_Prefix5_193(),
	OpCodes_t670429032_StaticFields::get_offset_of_Prefix4_194(),
	OpCodes_t670429032_StaticFields::get_offset_of_Prefix3_195(),
	OpCodes_t670429032_StaticFields::get_offset_of_Prefix2_196(),
	OpCodes_t670429032_StaticFields::get_offset_of_Prefix1_197(),
	OpCodes_t670429032_StaticFields::get_offset_of_Prefixref_198(),
	OpCodes_t670429032_StaticFields::get_offset_of_Arglist_199(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ceq_200(),
	OpCodes_t670429032_StaticFields::get_offset_of_Cgt_201(),
	OpCodes_t670429032_StaticFields::get_offset_of_Cgt_Un_202(),
	OpCodes_t670429032_StaticFields::get_offset_of_Clt_203(),
	OpCodes_t670429032_StaticFields::get_offset_of_Clt_Un_204(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldftn_205(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldvirtftn_206(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldarg_207(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldarga_208(),
	OpCodes_t670429032_StaticFields::get_offset_of_Starg_209(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldloc_210(),
	OpCodes_t670429032_StaticFields::get_offset_of_Ldloca_211(),
	OpCodes_t670429032_StaticFields::get_offset_of_Stloc_212(),
	OpCodes_t670429032_StaticFields::get_offset_of_Localloc_213(),
	OpCodes_t670429032_StaticFields::get_offset_of_Endfilter_214(),
	OpCodes_t670429032_StaticFields::get_offset_of_Unaligned_215(),
	OpCodes_t670429032_StaticFields::get_offset_of_Volatile_216(),
	OpCodes_t670429032_StaticFields::get_offset_of_Tailcall_217(),
	OpCodes_t670429032_StaticFields::get_offset_of_Initobj_218(),
	OpCodes_t670429032_StaticFields::get_offset_of_Constrained_219(),
	OpCodes_t670429032_StaticFields::get_offset_of_Cpblk_220(),
	OpCodes_t670429032_StaticFields::get_offset_of_Initblk_221(),
	OpCodes_t670429032_StaticFields::get_offset_of_Rethrow_222(),
	OpCodes_t670429032_StaticFields::get_offset_of_Sizeof_223(),
	OpCodes_t670429032_StaticFields::get_offset_of_Refanytype_224(),
	OpCodes_t670429032_StaticFields::get_offset_of_Readonly_225(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize320 = { sizeof (OperandType_t173989003)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable320[19] = 
{
	OperandType_t173989003::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize321 = { sizeof (PEFileKinds_t471872902)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable321[4] = 
{
	PEFileKinds_t471872902::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize322 = { sizeof (PackingSize_t727503973)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable322[10] = 
{
	PackingSize_t727503973::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize323 = { sizeof (ParameterBuilder_t4194791527), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable323[3] = 
{
	ParameterBuilder_t4194791527::get_offset_of_name_0(),
	ParameterBuilder_t4194791527::get_offset_of_attrs_1(),
	ParameterBuilder_t4194791527::get_offset_of_position_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize324 = { sizeof (PropertyBuilder_t2221574524), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable324[6] = 
{
	PropertyBuilder_t2221574524::get_offset_of_attrs_0(),
	PropertyBuilder_t2221574524::get_offset_of_name_1(),
	PropertyBuilder_t2221574524::get_offset_of_type_2(),
	PropertyBuilder_t2221574524::get_offset_of_set_method_3(),
	PropertyBuilder_t2221574524::get_offset_of_get_method_4(),
	PropertyBuilder_t2221574524::get_offset_of_typeb_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize325 = { sizeof (StackBehaviour_t98457156)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable325[30] = 
{
	StackBehaviour_t98457156::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize326 = { sizeof (TypeBuilder_t1835837594), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable326[21] = 
{
	TypeBuilder_t1835837594::get_offset_of_tname_8(),
	TypeBuilder_t1835837594::get_offset_of_nspace_9(),
	TypeBuilder_t1835837594::get_offset_of_parent_10(),
	TypeBuilder_t1835837594::get_offset_of_nesting_type_11(),
	TypeBuilder_t1835837594::get_offset_of_interfaces_12(),
	TypeBuilder_t1835837594::get_offset_of_num_methods_13(),
	TypeBuilder_t1835837594::get_offset_of_methods_14(),
	TypeBuilder_t1835837594::get_offset_of_ctors_15(),
	TypeBuilder_t1835837594::get_offset_of_properties_16(),
	TypeBuilder_t1835837594::get_offset_of_fields_17(),
	TypeBuilder_t1835837594::get_offset_of_subtypes_18(),
	TypeBuilder_t1835837594::get_offset_of_attrs_19(),
	TypeBuilder_t1835837594::get_offset_of_table_idx_20(),
	TypeBuilder_t1835837594::get_offset_of_pmodule_21(),
	TypeBuilder_t1835837594::get_offset_of_class_size_22(),
	TypeBuilder_t1835837594::get_offset_of_packing_size_23(),
	TypeBuilder_t1835837594::get_offset_of_generic_params_24(),
	TypeBuilder_t1835837594::get_offset_of_created_25(),
	TypeBuilder_t1835837594::get_offset_of_fullname_26(),
	TypeBuilder_t1835837594::get_offset_of_createTypeCalled_27(),
	TypeBuilder_t1835837594::get_offset_of_underlying_type_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize327 = { sizeof (UnmanagedMarshal_t1541049976), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable327[9] = 
{
	UnmanagedMarshal_t1541049976::get_offset_of_count_0(),
	UnmanagedMarshal_t1541049976::get_offset_of_t_1(),
	UnmanagedMarshal_t1541049976::get_offset_of_tbase_2(),
	UnmanagedMarshal_t1541049976::get_offset_of_guid_3(),
	UnmanagedMarshal_t1541049976::get_offset_of_mcookie_4(),
	UnmanagedMarshal_t1541049976::get_offset_of_marshaltype_5(),
	UnmanagedMarshal_t1541049976::get_offset_of_marshaltyperef_6(),
	UnmanagedMarshal_t1541049976::get_offset_of_param_num_7(),
	UnmanagedMarshal_t1541049976::get_offset_of_has_size_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize328 = { sizeof (AmbiguousMatchException_t957469615), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize329 = { sizeof (Assembly_t2995492547), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable329[10] = 
{
	Assembly_t2995492547::get_offset_of__mono_assembly_0(),
	Assembly_t2995492547::get_offset_of_resolve_event_holder_1(),
	Assembly_t2995492547::get_offset_of__evidence_2(),
	Assembly_t2995492547::get_offset_of__minimum_3(),
	Assembly_t2995492547::get_offset_of__optional_4(),
	Assembly_t2995492547::get_offset_of__refuse_5(),
	Assembly_t2995492547::get_offset_of__granted_6(),
	Assembly_t2995492547::get_offset_of__denied_7(),
	Assembly_t2995492547::get_offset_of_fromByteArray_8(),
	Assembly_t2995492547::get_offset_of_assemblyName_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize330 = { sizeof (ResolveEventHolder_t2438381431), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable330[1] = 
{
	ResolveEventHolder_t2438381431::get_offset_of_ModuleResolve_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize331 = { sizeof (ResourceCloseHandler_t68436358), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable331[1] = 
{
	ResourceCloseHandler_t68436358::get_offset_of_module_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize332 = { sizeof (AssemblyCompanyAttribute_t326698811), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable332[1] = 
{
	AssemblyCompanyAttribute_t326698811::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize333 = { sizeof (AssemblyConfigurationAttribute_t2715114950), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable333[1] = 
{
	AssemblyConfigurationAttribute_t2715114950::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize334 = { sizeof (AssemblyCopyrightAttribute_t2197104535), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable334[1] = 
{
	AssemblyCopyrightAttribute_t2197104535::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize335 = { sizeof (AssemblyDefaultAliasAttribute_t3972386645), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable335[1] = 
{
	AssemblyDefaultAliasAttribute_t3972386645::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize336 = { sizeof (AssemblyDelaySignAttribute_t3173294642), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable336[1] = 
{
	AssemblyDelaySignAttribute_t3173294642::get_offset_of_delay_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize337 = { sizeof (AssemblyDescriptionAttribute_t1300596732), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable337[1] = 
{
	AssemblyDescriptionAttribute_t1300596732::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize338 = { sizeof (AssemblyFileVersionAttribute_t2452209626), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable338[1] = 
{
	AssemblyFileVersionAttribute_t2452209626::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize339 = { sizeof (AssemblyInformationalVersionAttribute_t540950129), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable339[1] = 
{
	AssemblyInformationalVersionAttribute_t540950129::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize340 = { sizeof (AssemblyKeyFileAttribute_t3472747318), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable340[1] = 
{
	AssemblyKeyFileAttribute_t3472747318::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize341 = { sizeof (AssemblyName_t3066617354), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable341[15] = 
{
	AssemblyName_t3066617354::get_offset_of_name_0(),
	AssemblyName_t3066617354::get_offset_of_codebase_1(),
	AssemblyName_t3066617354::get_offset_of_major_2(),
	AssemblyName_t3066617354::get_offset_of_minor_3(),
	AssemblyName_t3066617354::get_offset_of_build_4(),
	AssemblyName_t3066617354::get_offset_of_revision_5(),
	AssemblyName_t3066617354::get_offset_of_cultureinfo_6(),
	AssemblyName_t3066617354::get_offset_of_flags_7(),
	AssemblyName_t3066617354::get_offset_of_hashalg_8(),
	AssemblyName_t3066617354::get_offset_of_keypair_9(),
	AssemblyName_t3066617354::get_offset_of_publicKey_10(),
	AssemblyName_t3066617354::get_offset_of_keyToken_11(),
	AssemblyName_t3066617354::get_offset_of_versioncompat_12(),
	AssemblyName_t3066617354::get_offset_of_version_13(),
	AssemblyName_t3066617354::get_offset_of_processor_architecture_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize342 = { sizeof (AssemblyNameFlags_t3742504792)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable342[6] = 
{
	AssemblyNameFlags_t3742504792::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize343 = { sizeof (AssemblyProductAttribute_t4029260766), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable343[1] = 
{
	AssemblyProductAttribute_t4029260766::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize344 = { sizeof (AssemblyTitleAttribute_t2177772039), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable344[1] = 
{
	AssemblyTitleAttribute_t2177772039::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize345 = { sizeof (AssemblyTrademarkAttribute_t2384749210), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable345[1] = 
{
	AssemblyTrademarkAttribute_t2384749210::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize346 = { sizeof (Binder_t3835233561), -1, sizeof(Binder_t3835233561_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable346[1] = 
{
	Binder_t3835233561_StaticFields::get_offset_of_default_binder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize347 = { sizeof (Default_t803115049), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize348 = { sizeof (BindingFlags_t994831895)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable348[21] = 
{
	BindingFlags_t994831895::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize349 = { sizeof (CallingConventions_t1745627980)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable349[6] = 
{
	CallingConventions_t1745627980::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize350 = { sizeof (ConstructorInfo_t712711328), -1, sizeof(ConstructorInfo_t712711328_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable350[2] = 
{
	ConstructorInfo_t712711328_StaticFields::get_offset_of_ConstructorName_0(),
	ConstructorInfo_t712711328_StaticFields::get_offset_of_TypeConstructorName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize351 = { sizeof (CustomAttributeData_t3646440611), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable351[3] = 
{
	CustomAttributeData_t3646440611::get_offset_of_ctorInfo_0(),
	CustomAttributeData_t3646440611::get_offset_of_ctorArgs_1(),
	CustomAttributeData_t3646440611::get_offset_of_namedArgs_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize352 = { sizeof (CustomAttributeNamedArgument_t4044901038)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable352[2] = 
{
	CustomAttributeNamedArgument_t4044901038::get_offset_of_typedArgument_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CustomAttributeNamedArgument_t4044901038::get_offset_of_memberInfo_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize353 = { sizeof (CustomAttributeTypedArgument_t215531209)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable353[2] = 
{
	CustomAttributeTypedArgument_t215531209::get_offset_of_argumentType_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CustomAttributeTypedArgument_t215531209::get_offset_of_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize354 = { sizeof (EventAttributes_t3409445861)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable354[5] = 
{
	EventAttributes_t3409445861::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize355 = { sizeof (EventInfo_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable355[1] = 
{
	EventInfo_t::get_offset_of_cached_add_event_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize356 = { sizeof (AddEventAdapter_t2474551623), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize357 = { sizeof (FieldAttributes_t3288297181)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable357[20] = 
{
	FieldAttributes_t3288297181::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize358 = { sizeof (FieldInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize359 = { sizeof (LocalVariableInfo_t834394254), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable359[3] = 
{
	LocalVariableInfo_t834394254::get_offset_of_type_0(),
	LocalVariableInfo_t834394254::get_offset_of_is_pinned_1(),
	LocalVariableInfo_t834394254::get_offset_of_position_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize360 = { sizeof (ManifestResourceInfo_t3787619463), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable360[3] = 
{
	ManifestResourceInfo_t3787619463::get_offset_of__assembly_0(),
	ManifestResourceInfo_t3787619463::get_offset_of__filename_1(),
	ManifestResourceInfo_t3787619463::get_offset_of__location_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize361 = { sizeof (MemberInfoSerializationHolder_t2674039268), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable361[5] = 
{
	MemberInfoSerializationHolder_t2674039268::get_offset_of__memberName_0(),
	MemberInfoSerializationHolder_t2674039268::get_offset_of__memberSignature_1(),
	MemberInfoSerializationHolder_t2674039268::get_offset_of__memberType_2(),
	MemberInfoSerializationHolder_t2674039268::get_offset_of__reflectedType_3(),
	MemberInfoSerializationHolder_t2674039268::get_offset_of__genericArguments_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize362 = { sizeof (MemberTypes_t892647767)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable362[10] = 
{
	MemberTypes_t892647767::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize363 = { sizeof (MethodAttributes_t2795530895)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable363[25] = 
{
	MethodAttributes_t2795530895::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize364 = { sizeof (MethodBase_t3729707973), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize365 = { sizeof (MethodImplAttributes_t1209068121)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable365[15] = 
{
	MethodImplAttributes_t1209068121::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize366 = { sizeof (MethodInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize367 = { sizeof (Missing_t2084968886), -1, sizeof(Missing_t2084968886_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable367[1] = 
{
	Missing_t2084968886_StaticFields::get_offset_of_Value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize368 = { sizeof (Module_t3781704096), -1, sizeof(Module_t3781704096_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable368[10] = 
{
	0,
	Module_t3781704096_StaticFields::get_offset_of_FilterTypeName_1(),
	Module_t3781704096_StaticFields::get_offset_of_FilterTypeNameIgnoreCase_2(),
	Module_t3781704096::get_offset_of__impl_3(),
	Module_t3781704096::get_offset_of_assembly_4(),
	Module_t3781704096::get_offset_of_fqname_5(),
	Module_t3781704096::get_offset_of_name_6(),
	Module_t3781704096::get_offset_of_scopename_7(),
	Module_t3781704096::get_offset_of_is_resource_8(),
	Module_t3781704096::get_offset_of_token_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize369 = { sizeof (MonoEventInfo_t4133987171)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable369[8] = 
{
	MonoEventInfo_t4133987171::get_offset_of_declaring_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t4133987171::get_offset_of_reflected_type_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t4133987171::get_offset_of_name_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t4133987171::get_offset_of_add_method_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t4133987171::get_offset_of_remove_method_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t4133987171::get_offset_of_raise_method_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t4133987171::get_offset_of_attrs_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t4133987171::get_offset_of_other_methods_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize370 = { sizeof (MonoEvent_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable370[2] = 
{
	MonoEvent_t::get_offset_of_klass_1(),
	MonoEvent_t::get_offset_of_handle_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize371 = { sizeof (MonoField_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable371[5] = 
{
	MonoField_t::get_offset_of_klass_0(),
	MonoField_t::get_offset_of_fhandle_1(),
	MonoField_t::get_offset_of_name_2(),
	MonoField_t::get_offset_of_type_3(),
	MonoField_t::get_offset_of_attrs_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize372 = { sizeof (MonoGenericMethod_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize373 = { sizeof (MonoGenericCMethod_t650121484), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize374 = { sizeof (MonoMethodInfo_t2019761780)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable374[5] = 
{
	MonoMethodInfo_t2019761780::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t2019761780::get_offset_of_ret_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t2019761780::get_offset_of_attrs_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t2019761780::get_offset_of_iattrs_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t2019761780::get_offset_of_callconv_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize375 = { sizeof (MonoMethod_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable375[3] = 
{
	MonoMethod_t::get_offset_of_mhandle_0(),
	MonoMethod_t::get_offset_of_name_1(),
	MonoMethod_t::get_offset_of_reftype_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize376 = { sizeof (MonoCMethod_t1394167787), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable376[3] = 
{
	MonoCMethod_t1394167787::get_offset_of_mhandle_2(),
	MonoCMethod_t1394167787::get_offset_of_name_3(),
	MonoCMethod_t1394167787::get_offset_of_reftype_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize377 = { sizeof (MonoPropertyInfo_t3721666835)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable377[5] = 
{
	MonoPropertyInfo_t3721666835::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t3721666835::get_offset_of_name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t3721666835::get_offset_of_get_method_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t3721666835::get_offset_of_set_method_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t3721666835::get_offset_of_attrs_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize378 = { sizeof (PInfo_t1848253222)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable378[7] = 
{
	PInfo_t1848253222::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize379 = { sizeof (MonoProperty_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable379[5] = 
{
	MonoProperty_t::get_offset_of_klass_0(),
	MonoProperty_t::get_offset_of_prop_1(),
	MonoProperty_t::get_offset_of_info_2(),
	MonoProperty_t::get_offset_of_cached_3(),
	MonoProperty_t::get_offset_of_cached_getter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize380 = { sizeof (GetterAdapter_t1756322985), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize381 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize382 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize383 = { sizeof (ParameterAttributes_t2401836334)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable383[12] = 
{
	ParameterAttributes_t2401836334::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize384 = { sizeof (ParameterInfo_t2666477209), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable384[7] = 
{
	ParameterInfo_t2666477209::get_offset_of_ClassImpl_0(),
	ParameterInfo_t2666477209::get_offset_of_DefaultValueImpl_1(),
	ParameterInfo_t2666477209::get_offset_of_MemberImpl_2(),
	ParameterInfo_t2666477209::get_offset_of_NameImpl_3(),
	ParameterInfo_t2666477209::get_offset_of_PositionImpl_4(),
	ParameterInfo_t2666477209::get_offset_of_AttrsImpl_5(),
	ParameterInfo_t2666477209::get_offset_of_marshalAs_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize385 = { sizeof (ParameterModifier_t2618048512)+ sizeof (RuntimeObject), sizeof(ParameterModifier_t2618048512_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable385[1] = 
{
	ParameterModifier_t2618048512::get_offset_of__byref_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize386 = { sizeof (Pointer_t3446410285), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable386[2] = 
{
	Pointer_t3446410285::get_offset_of_data_0(),
	Pointer_t3446410285::get_offset_of_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize387 = { sizeof (ProcessorArchitecture_t2011319080)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable387[6] = 
{
	ProcessorArchitecture_t2011319080::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize388 = { sizeof (PropertyAttributes_t3131603416)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable388[9] = 
{
	PropertyAttributes_t3131603416::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize389 = { sizeof (PropertyInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize390 = { sizeof (ResourceAttributes_t4084341001)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable390[3] = 
{
	ResourceAttributes_t4084341001::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize391 = { sizeof (ResourceLocation_t3276512613)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable391[4] = 
{
	ResourceLocation_t3276512613::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize392 = { sizeof (StrongNameKeyPair_t3023086057), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable392[5] = 
{
	StrongNameKeyPair_t3023086057::get_offset_of__publicKey_0(),
	StrongNameKeyPair_t3023086057::get_offset_of__keyPairContainer_1(),
	StrongNameKeyPair_t3023086057::get_offset_of__keyPairExported_2(),
	StrongNameKeyPair_t3023086057::get_offset_of__keyPairArray_3(),
	StrongNameKeyPair_t3023086057::get_offset_of__rsa_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize393 = { sizeof (TargetException_t2125425491), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize394 = { sizeof (TargetInvocationException_t3639793784), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize395 = { sizeof (TargetParameterCountException_t2717343117), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize396 = { sizeof (TypeAttributes_t965884859)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable396[32] = 
{
	TypeAttributes_t965884859::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize397 = { sizeof (TypeDelegator_t2214650584), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable397[1] = 
{
	TypeDelegator_t2214650584::get_offset_of_typeImpl_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize398 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize399 = { sizeof (NeutralResourcesLanguageAttribute_t1795916304), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable399[1] = 
{
	NeutralResourcesLanguageAttribute_t1795916304::get_offset_of_culture_0(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
