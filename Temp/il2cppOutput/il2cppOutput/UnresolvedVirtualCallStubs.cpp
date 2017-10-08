#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// UnityEngine.Sprite
struct Sprite_t3088447710;
// UnityEngine.GameObject
struct GameObject_t1142533372;
// VRTK.VRTK_ControllerReference
struct VRTK_ControllerReference_t4139909849;
// UnityEngine.Collider
struct Collider_t335618434;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t1499854824;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t1230267724;
// System.Byte[]
struct ByteU5BU5D_t790048969;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t3785979506;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo>
struct List_1_t271397926;
// VRTK.VRTK_InteractTouch
struct VRTK_InteractTouch_t2596552983;
// System.Char[]
struct CharU5BU5D_t233192964;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3048023816;
// System.Type
struct Type_t;
// System.Void
struct Void_t3911667008;
// UnityEngine.Collision
struct Collision_t574347704;
// PhotonPlayer
struct PhotonPlayer_t3292821370;
// PhotonView
struct PhotonView_t4029667435;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t1720792500;
// System.String[]
struct StringU5BU5D_t2563340356;
// System.Int32[]
struct Int32U5BU5D_t977882480;
// UnityEngine.UI.Selectable
struct Selectable_t3364017548;

struct RaycastHit_t3842505297_marshaled_pinvoke;
struct RaycastHit_t3842505297_marshaled_com;
struct Collision_t574347704_marshaled_pinvoke;
struct Collision_t574347704_marshaled_com;



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
#ifndef ANIMATORCLIPINFO_T3624719347_H
#define ANIMATORCLIPINFO_T3624719347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorClipInfo
struct  AnimatorClipInfo_t3624719347 
{
public:
	// System.Int32 UnityEngine.AnimatorClipInfo::m_ClipInstanceID
	int32_t ___m_ClipInstanceID_0;
	// System.Single UnityEngine.AnimatorClipInfo::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_ClipInstanceID_0() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t3624719347, ___m_ClipInstanceID_0)); }
	inline int32_t get_m_ClipInstanceID_0() const { return ___m_ClipInstanceID_0; }
	inline int32_t* get_address_of_m_ClipInstanceID_0() { return &___m_ClipInstanceID_0; }
	inline void set_m_ClipInstanceID_0(int32_t value)
	{
		___m_ClipInstanceID_0 = value;
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t3624719347, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCLIPINFO_T3624719347_H
#ifndef SPRITESTATE_T3054955245_H
#define SPRITESTATE_T3054955245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t3054955245 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t3088447710 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t3088447710 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t3088447710 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t3054955245, ___m_HighlightedSprite_0)); }
	inline Sprite_t3088447710 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t3088447710 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t3088447710 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t3054955245, ___m_PressedSprite_1)); }
	inline Sprite_t3088447710 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t3088447710 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t3088447710 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t3054955245, ___m_DisabledSprite_2)); }
	inline Sprite_t3088447710 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t3088447710 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t3088447710 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t3054955245_marshaled_pinvoke
{
	Sprite_t3088447710 * ___m_HighlightedSprite_0;
	Sprite_t3088447710 * ___m_PressedSprite_1;
	Sprite_t3088447710 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t3054955245_marshaled_com
{
	Sprite_t3088447710 * ___m_HighlightedSprite_0;
	Sprite_t3088447710 * ___m_PressedSprite_1;
	Sprite_t3088447710 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T3054955245_H
#ifndef UIDRAGGABLEITEMEVENTARGS_T2743003549_H
#define UIDRAGGABLEITEMEVENTARGS_T2743003549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.UIDraggableItemEventArgs
struct  UIDraggableItemEventArgs_t2743003549 
{
public:
	// UnityEngine.GameObject VRTK.UIDraggableItemEventArgs::target
	GameObject_t1142533372 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(UIDraggableItemEventArgs_t2743003549, ___target_0)); }
	inline GameObject_t1142533372 * get_target_0() const { return ___target_0; }
	inline GameObject_t1142533372 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t1142533372 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.UIDraggableItemEventArgs
struct UIDraggableItemEventArgs_t2743003549_marshaled_pinvoke
{
	GameObject_t1142533372 * ___target_0;
};
// Native definition for COM marshalling of VRTK.UIDraggableItemEventArgs
struct UIDraggableItemEventArgs_t2743003549_marshaled_com
{
	GameObject_t1142533372 * ___target_0;
};
#endif // UIDRAGGABLEITEMEVENTARGS_T2743003549_H
#ifndef VRTKTRACKEDCONTROLLEREVENTARGS_T2668893150_H
#define VRTKTRACKEDCONTROLLEREVENTARGS_T2668893150_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.VRTKTrackedControllerEventArgs
struct  VRTKTrackedControllerEventArgs_t2668893150 
{
public:
	// System.UInt32 VRTK.VRTKTrackedControllerEventArgs::currentIndex
	uint32_t ___currentIndex_0;
	// System.UInt32 VRTK.VRTKTrackedControllerEventArgs::previousIndex
	uint32_t ___previousIndex_1;

public:
	inline static int32_t get_offset_of_currentIndex_0() { return static_cast<int32_t>(offsetof(VRTKTrackedControllerEventArgs_t2668893150, ___currentIndex_0)); }
	inline uint32_t get_currentIndex_0() const { return ___currentIndex_0; }
	inline uint32_t* get_address_of_currentIndex_0() { return &___currentIndex_0; }
	inline void set_currentIndex_0(uint32_t value)
	{
		___currentIndex_0 = value;
	}

	inline static int32_t get_offset_of_previousIndex_1() { return static_cast<int32_t>(offsetof(VRTKTrackedControllerEventArgs_t2668893150, ___previousIndex_1)); }
	inline uint32_t get_previousIndex_1() const { return ___previousIndex_1; }
	inline uint32_t* get_address_of_previousIndex_1() { return &___previousIndex_1; }
	inline void set_previousIndex_1(uint32_t value)
	{
		___previousIndex_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VRTKTRACKEDCONTROLLEREVENTARGS_T2668893150_H
#ifndef PLAYERCLIMBEVENTARGS_T3801355594_H
#define PLAYERCLIMBEVENTARGS_T3801355594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.PlayerClimbEventArgs
struct  PlayerClimbEventArgs_t3801355594 
{
public:
	// System.UInt32 VRTK.PlayerClimbEventArgs::controllerIndex
	uint32_t ___controllerIndex_0;
	// VRTK.VRTK_ControllerReference VRTK.PlayerClimbEventArgs::controllerReference
	VRTK_ControllerReference_t4139909849 * ___controllerReference_1;
	// UnityEngine.GameObject VRTK.PlayerClimbEventArgs::target
	GameObject_t1142533372 * ___target_2;

public:
	inline static int32_t get_offset_of_controllerIndex_0() { return static_cast<int32_t>(offsetof(PlayerClimbEventArgs_t3801355594, ___controllerIndex_0)); }
	inline uint32_t get_controllerIndex_0() const { return ___controllerIndex_0; }
	inline uint32_t* get_address_of_controllerIndex_0() { return &___controllerIndex_0; }
	inline void set_controllerIndex_0(uint32_t value)
	{
		___controllerIndex_0 = value;
	}

	inline static int32_t get_offset_of_controllerReference_1() { return static_cast<int32_t>(offsetof(PlayerClimbEventArgs_t3801355594, ___controllerReference_1)); }
	inline VRTK_ControllerReference_t4139909849 * get_controllerReference_1() const { return ___controllerReference_1; }
	inline VRTK_ControllerReference_t4139909849 ** get_address_of_controllerReference_1() { return &___controllerReference_1; }
	inline void set_controllerReference_1(VRTK_ControllerReference_t4139909849 * value)
	{
		___controllerReference_1 = value;
		Il2CppCodeGenWriteBarrier((&___controllerReference_1), value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(PlayerClimbEventArgs_t3801355594, ___target_2)); }
	inline GameObject_t1142533372 * get_target_2() const { return ___target_2; }
	inline GameObject_t1142533372 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(GameObject_t1142533372 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((&___target_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.PlayerClimbEventArgs
struct PlayerClimbEventArgs_t3801355594_marshaled_pinvoke
{
	uint32_t ___controllerIndex_0;
	VRTK_ControllerReference_t4139909849 * ___controllerReference_1;
	GameObject_t1142533372 * ___target_2;
};
// Native definition for COM marshalling of VRTK.PlayerClimbEventArgs
struct PlayerClimbEventArgs_t3801355594_marshaled_com
{
	uint32_t ___controllerIndex_0;
	VRTK_ControllerReference_t4139909849 * ___controllerReference_1;
	GameObject_t1142533372 * ___target_2;
};
#endif // PLAYERCLIMBEVENTARGS_T3801355594_H
#ifndef PLAYAREACURSOREVENTARGS_T87185873_H
#define PLAYAREACURSOREVENTARGS_T87185873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.PlayAreaCursorEventArgs
struct  PlayAreaCursorEventArgs_t87185873 
{
public:
	// UnityEngine.Collider VRTK.PlayAreaCursorEventArgs::collider
	Collider_t335618434 * ___collider_0;

public:
	inline static int32_t get_offset_of_collider_0() { return static_cast<int32_t>(offsetof(PlayAreaCursorEventArgs_t87185873, ___collider_0)); }
	inline Collider_t335618434 * get_collider_0() const { return ___collider_0; }
	inline Collider_t335618434 ** get_address_of_collider_0() { return &___collider_0; }
	inline void set_collider_0(Collider_t335618434 * value)
	{
		___collider_0 = value;
		Il2CppCodeGenWriteBarrier((&___collider_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.PlayAreaCursorEventArgs
struct PlayAreaCursorEventArgs_t87185873_marshaled_pinvoke
{
	Collider_t335618434 * ___collider_0;
};
// Native definition for COM marshalling of VRTK.PlayAreaCursorEventArgs
struct PlayAreaCursorEventArgs_t87185873_marshaled_com
{
	Collider_t335618434 * ___collider_0;
};
#endif // PLAYAREACURSOREVENTARGS_T87185873_H
#ifndef PANELMENUITEMCONTROLLEREVENTARGS_T1113369656_H
#define PANELMENUITEMCONTROLLEREVENTARGS_T1113369656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.PanelMenuItemControllerEventArgs
struct  PanelMenuItemControllerEventArgs_t1113369656 
{
public:
	// UnityEngine.GameObject VRTK.PanelMenuItemControllerEventArgs::interactableObject
	GameObject_t1142533372 * ___interactableObject_0;

public:
	inline static int32_t get_offset_of_interactableObject_0() { return static_cast<int32_t>(offsetof(PanelMenuItemControllerEventArgs_t1113369656, ___interactableObject_0)); }
	inline GameObject_t1142533372 * get_interactableObject_0() const { return ___interactableObject_0; }
	inline GameObject_t1142533372 ** get_address_of_interactableObject_0() { return &___interactableObject_0; }
	inline void set_interactableObject_0(GameObject_t1142533372 * value)
	{
		___interactableObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___interactableObject_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.PanelMenuItemControllerEventArgs
struct PanelMenuItemControllerEventArgs_t1113369656_marshaled_pinvoke
{
	GameObject_t1142533372 * ___interactableObject_0;
};
// Native definition for COM marshalling of VRTK.PanelMenuItemControllerEventArgs
struct PanelMenuItemControllerEventArgs_t1113369656_marshaled_com
{
	GameObject_t1142533372 * ___interactableObject_0;
};
#endif // PANELMENUITEMCONTROLLEREVENTARGS_T1113369656_H
#ifndef OBJECTTOOLTIPEVENTARGS_T1056724890_H
#define OBJECTTOOLTIPEVENTARGS_T1056724890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.ObjectTooltipEventArgs
struct  ObjectTooltipEventArgs_t1056724890 
{
public:
	// System.String VRTK.ObjectTooltipEventArgs::newText
	String_t* ___newText_0;

public:
	inline static int32_t get_offset_of_newText_0() { return static_cast<int32_t>(offsetof(ObjectTooltipEventArgs_t1056724890, ___newText_0)); }
	inline String_t* get_newText_0() const { return ___newText_0; }
	inline String_t** get_address_of_newText_0() { return &___newText_0; }
	inline void set_newText_0(String_t* value)
	{
		___newText_0 = value;
		Il2CppCodeGenWriteBarrier((&___newText_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.ObjectTooltipEventArgs
struct ObjectTooltipEventArgs_t1056724890_marshaled_pinvoke
{
	char* ___newText_0;
};
// Native definition for COM marshalling of VRTK.ObjectTooltipEventArgs
struct ObjectTooltipEventArgs_t1056724890_marshaled_com
{
	Il2CppChar* ___newText_0;
};
#endif // OBJECTTOOLTIPEVENTARGS_T1056724890_H
#ifndef INTERACTHAPTICSEVENTARGS_T3649463061_H
#define INTERACTHAPTICSEVENTARGS_T3649463061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.InteractHapticsEventArgs
struct  InteractHapticsEventArgs_t3649463061 
{
public:
	// VRTK.VRTK_ControllerReference VRTK.InteractHapticsEventArgs::controllerReference
	VRTK_ControllerReference_t4139909849 * ___controllerReference_0;

public:
	inline static int32_t get_offset_of_controllerReference_0() { return static_cast<int32_t>(offsetof(InteractHapticsEventArgs_t3649463061, ___controllerReference_0)); }
	inline VRTK_ControllerReference_t4139909849 * get_controllerReference_0() const { return ___controllerReference_0; }
	inline VRTK_ControllerReference_t4139909849 ** get_address_of_controllerReference_0() { return &___controllerReference_0; }
	inline void set_controllerReference_0(VRTK_ControllerReference_t4139909849 * value)
	{
		___controllerReference_0 = value;
		Il2CppCodeGenWriteBarrier((&___controllerReference_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.InteractHapticsEventArgs
struct InteractHapticsEventArgs_t3649463061_marshaled_pinvoke
{
	VRTK_ControllerReference_t4139909849 * ___controllerReference_0;
};
// Native definition for COM marshalling of VRTK.InteractHapticsEventArgs
struct InteractHapticsEventArgs_t3649463061_marshaled_com
{
	VRTK_ControllerReference_t4139909849 * ___controllerReference_0;
};
#endif // INTERACTHAPTICSEVENTARGS_T3649463061_H
#ifndef OBJECTINTERACTEVENTARGS_T962020824_H
#define OBJECTINTERACTEVENTARGS_T962020824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.ObjectInteractEventArgs
struct  ObjectInteractEventArgs_t962020824 
{
public:
	// System.UInt32 VRTK.ObjectInteractEventArgs::controllerIndex
	uint32_t ___controllerIndex_0;
	// VRTK.VRTK_ControllerReference VRTK.ObjectInteractEventArgs::controllerReference
	VRTK_ControllerReference_t4139909849 * ___controllerReference_1;
	// UnityEngine.GameObject VRTK.ObjectInteractEventArgs::target
	GameObject_t1142533372 * ___target_2;

public:
	inline static int32_t get_offset_of_controllerIndex_0() { return static_cast<int32_t>(offsetof(ObjectInteractEventArgs_t962020824, ___controllerIndex_0)); }
	inline uint32_t get_controllerIndex_0() const { return ___controllerIndex_0; }
	inline uint32_t* get_address_of_controllerIndex_0() { return &___controllerIndex_0; }
	inline void set_controllerIndex_0(uint32_t value)
	{
		___controllerIndex_0 = value;
	}

	inline static int32_t get_offset_of_controllerReference_1() { return static_cast<int32_t>(offsetof(ObjectInteractEventArgs_t962020824, ___controllerReference_1)); }
	inline VRTK_ControllerReference_t4139909849 * get_controllerReference_1() const { return ___controllerReference_1; }
	inline VRTK_ControllerReference_t4139909849 ** get_address_of_controllerReference_1() { return &___controllerReference_1; }
	inline void set_controllerReference_1(VRTK_ControllerReference_t4139909849 * value)
	{
		___controllerReference_1 = value;
		Il2CppCodeGenWriteBarrier((&___controllerReference_1), value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(ObjectInteractEventArgs_t962020824, ___target_2)); }
	inline GameObject_t1142533372 * get_target_2() const { return ___target_2; }
	inline GameObject_t1142533372 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(GameObject_t1142533372 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((&___target_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.ObjectInteractEventArgs
struct ObjectInteractEventArgs_t962020824_marshaled_pinvoke
{
	uint32_t ___controllerIndex_0;
	VRTK_ControllerReference_t4139909849 * ___controllerReference_1;
	GameObject_t1142533372 * ___target_2;
};
// Native definition for COM marshalling of VRTK.ObjectInteractEventArgs
struct ObjectInteractEventArgs_t962020824_marshaled_com
{
	uint32_t ___controllerIndex_0;
	VRTK_ControllerReference_t4139909849 * ___controllerReference_1;
	GameObject_t1142533372 * ___target_2;
};
#endif // OBJECTINTERACTEVENTARGS_T962020824_H
#ifndef INTERACTCONTROLLERAPPEARANCEEVENTARGS_T2956512999_H
#define INTERACTCONTROLLERAPPEARANCEEVENTARGS_T2956512999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.InteractControllerAppearanceEventArgs
struct  InteractControllerAppearanceEventArgs_t2956512999 
{
public:
	// UnityEngine.GameObject VRTK.InteractControllerAppearanceEventArgs::interactingObject
	GameObject_t1142533372 * ___interactingObject_0;
	// UnityEngine.GameObject VRTK.InteractControllerAppearanceEventArgs::ignoredObject
	GameObject_t1142533372 * ___ignoredObject_1;

public:
	inline static int32_t get_offset_of_interactingObject_0() { return static_cast<int32_t>(offsetof(InteractControllerAppearanceEventArgs_t2956512999, ___interactingObject_0)); }
	inline GameObject_t1142533372 * get_interactingObject_0() const { return ___interactingObject_0; }
	inline GameObject_t1142533372 ** get_address_of_interactingObject_0() { return &___interactingObject_0; }
	inline void set_interactingObject_0(GameObject_t1142533372 * value)
	{
		___interactingObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___interactingObject_0), value);
	}

	inline static int32_t get_offset_of_ignoredObject_1() { return static_cast<int32_t>(offsetof(InteractControllerAppearanceEventArgs_t2956512999, ___ignoredObject_1)); }
	inline GameObject_t1142533372 * get_ignoredObject_1() const { return ___ignoredObject_1; }
	inline GameObject_t1142533372 ** get_address_of_ignoredObject_1() { return &___ignoredObject_1; }
	inline void set_ignoredObject_1(GameObject_t1142533372 * value)
	{
		___ignoredObject_1 = value;
		Il2CppCodeGenWriteBarrier((&___ignoredObject_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.InteractControllerAppearanceEventArgs
struct InteractControllerAppearanceEventArgs_t2956512999_marshaled_pinvoke
{
	GameObject_t1142533372 * ___interactingObject_0;
	GameObject_t1142533372 * ___ignoredObject_1;
};
// Native definition for COM marshalling of VRTK.InteractControllerAppearanceEventArgs
struct InteractControllerAppearanceEventArgs_t2956512999_marshaled_com
{
	GameObject_t1142533372 * ___interactingObject_0;
	GameObject_t1142533372 * ___ignoredObject_1;
};
#endif // INTERACTCONTROLLERAPPEARANCEEVENTARGS_T2956512999_H
#ifndef SNAPDROPZONEEVENTARGS_T2441986909_H
#define SNAPDROPZONEEVENTARGS_T2441986909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.SnapDropZoneEventArgs
struct  SnapDropZoneEventArgs_t2441986909 
{
public:
	// UnityEngine.GameObject VRTK.SnapDropZoneEventArgs::snappedObject
	GameObject_t1142533372 * ___snappedObject_0;

public:
	inline static int32_t get_offset_of_snappedObject_0() { return static_cast<int32_t>(offsetof(SnapDropZoneEventArgs_t2441986909, ___snappedObject_0)); }
	inline GameObject_t1142533372 * get_snappedObject_0() const { return ___snappedObject_0; }
	inline GameObject_t1142533372 ** get_address_of_snappedObject_0() { return &___snappedObject_0; }
	inline void set_snappedObject_0(GameObject_t1142533372 * value)
	{
		___snappedObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___snappedObject_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.SnapDropZoneEventArgs
struct SnapDropZoneEventArgs_t2441986909_marshaled_pinvoke
{
	GameObject_t1142533372 * ___snappedObject_0;
};
// Native definition for COM marshalling of VRTK.SnapDropZoneEventArgs
struct SnapDropZoneEventArgs_t2441986909_marshaled_com
{
	GameObject_t1142533372 * ___snappedObject_0;
};
#endif // SNAPDROPZONEEVENTARGS_T2441986909_H
#ifndef INTERACTABLEOBJECTEVENTARGS_T678850216_H
#define INTERACTABLEOBJECTEVENTARGS_T678850216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.InteractableObjectEventArgs
struct  InteractableObjectEventArgs_t678850216 
{
public:
	// UnityEngine.GameObject VRTK.InteractableObjectEventArgs::interactingObject
	GameObject_t1142533372 * ___interactingObject_0;

public:
	inline static int32_t get_offset_of_interactingObject_0() { return static_cast<int32_t>(offsetof(InteractableObjectEventArgs_t678850216, ___interactingObject_0)); }
	inline GameObject_t1142533372 * get_interactingObject_0() const { return ___interactingObject_0; }
	inline GameObject_t1142533372 ** get_address_of_interactingObject_0() { return &___interactingObject_0; }
	inline void set_interactingObject_0(GameObject_t1142533372 * value)
	{
		___interactingObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___interactingObject_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.InteractableObjectEventArgs
struct InteractableObjectEventArgs_t678850216_marshaled_pinvoke
{
	GameObject_t1142533372 * ___interactingObject_0;
};
// Native definition for COM marshalling of VRTK.InteractableObjectEventArgs
struct InteractableObjectEventArgs_t678850216_marshaled_com
{
	GameObject_t1142533372 * ___interactingObject_0;
};
#endif // INTERACTABLEOBJECTEVENTARGS_T678850216_H
#ifndef HEADSETFADEEVENTARGS_T3624876199_H
#define HEADSETFADEEVENTARGS_T3624876199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.HeadsetFadeEventArgs
struct  HeadsetFadeEventArgs_t3624876199 
{
public:
	// System.Single VRTK.HeadsetFadeEventArgs::timeTillComplete
	float ___timeTillComplete_0;
	// UnityEngine.Transform VRTK.HeadsetFadeEventArgs::currentTransform
	Transform_t1499854824 * ___currentTransform_1;

public:
	inline static int32_t get_offset_of_timeTillComplete_0() { return static_cast<int32_t>(offsetof(HeadsetFadeEventArgs_t3624876199, ___timeTillComplete_0)); }
	inline float get_timeTillComplete_0() const { return ___timeTillComplete_0; }
	inline float* get_address_of_timeTillComplete_0() { return &___timeTillComplete_0; }
	inline void set_timeTillComplete_0(float value)
	{
		___timeTillComplete_0 = value;
	}

	inline static int32_t get_offset_of_currentTransform_1() { return static_cast<int32_t>(offsetof(HeadsetFadeEventArgs_t3624876199, ___currentTransform_1)); }
	inline Transform_t1499854824 * get_currentTransform_1() const { return ___currentTransform_1; }
	inline Transform_t1499854824 ** get_address_of_currentTransform_1() { return &___currentTransform_1; }
	inline void set_currentTransform_1(Transform_t1499854824 * value)
	{
		___currentTransform_1 = value;
		Il2CppCodeGenWriteBarrier((&___currentTransform_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.HeadsetFadeEventArgs
struct HeadsetFadeEventArgs_t3624876199_marshaled_pinvoke
{
	float ___timeTillComplete_0;
	Transform_t1499854824 * ___currentTransform_1;
};
// Native definition for COM marshalling of VRTK.HeadsetFadeEventArgs
struct HeadsetFadeEventArgs_t3624876199_marshaled_com
{
	float ___timeTillComplete_0;
	Transform_t1499854824 * ___currentTransform_1;
};
#endif // HEADSETFADEEVENTARGS_T3624876199_H
#ifndef HEADSETCOLLISIONEVENTARGS_T829346591_H
#define HEADSETCOLLISIONEVENTARGS_T829346591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.HeadsetCollisionEventArgs
struct  HeadsetCollisionEventArgs_t829346591 
{
public:
	// UnityEngine.Collider VRTK.HeadsetCollisionEventArgs::collider
	Collider_t335618434 * ___collider_0;
	// UnityEngine.Transform VRTK.HeadsetCollisionEventArgs::currentTransform
	Transform_t1499854824 * ___currentTransform_1;

public:
	inline static int32_t get_offset_of_collider_0() { return static_cast<int32_t>(offsetof(HeadsetCollisionEventArgs_t829346591, ___collider_0)); }
	inline Collider_t335618434 * get_collider_0() const { return ___collider_0; }
	inline Collider_t335618434 ** get_address_of_collider_0() { return &___collider_0; }
	inline void set_collider_0(Collider_t335618434 * value)
	{
		___collider_0 = value;
		Il2CppCodeGenWriteBarrier((&___collider_0), value);
	}

	inline static int32_t get_offset_of_currentTransform_1() { return static_cast<int32_t>(offsetof(HeadsetCollisionEventArgs_t829346591, ___currentTransform_1)); }
	inline Transform_t1499854824 * get_currentTransform_1() const { return ___currentTransform_1; }
	inline Transform_t1499854824 ** get_address_of_currentTransform_1() { return &___currentTransform_1; }
	inline void set_currentTransform_1(Transform_t1499854824 * value)
	{
		___currentTransform_1 = value;
		Il2CppCodeGenWriteBarrier((&___currentTransform_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.HeadsetCollisionEventArgs
struct HeadsetCollisionEventArgs_t829346591_marshaled_pinvoke
{
	Collider_t335618434 * ___collider_0;
	Transform_t1499854824 * ___currentTransform_1;
};
// Native definition for COM marshalling of VRTK.HeadsetCollisionEventArgs
struct HeadsetCollisionEventArgs_t829346591_marshaled_com
{
	Collider_t335618434 * ___collider_0;
	Transform_t1499854824 * ___currentTransform_1;
};
#endif // HEADSETCOLLISIONEVENTARGS_T829346591_H
#ifndef DASHTELEPORTEVENTARGS_T3930070999_H
#define DASHTELEPORTEVENTARGS_T3930070999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.DashTeleportEventArgs
struct  DashTeleportEventArgs_t3930070999 
{
public:
	// UnityEngine.RaycastHit[] VRTK.DashTeleportEventArgs::hits
	RaycastHitU5BU5D_t1230267724* ___hits_0;

public:
	inline static int32_t get_offset_of_hits_0() { return static_cast<int32_t>(offsetof(DashTeleportEventArgs_t3930070999, ___hits_0)); }
	inline RaycastHitU5BU5D_t1230267724* get_hits_0() const { return ___hits_0; }
	inline RaycastHitU5BU5D_t1230267724** get_address_of_hits_0() { return &___hits_0; }
	inline void set_hits_0(RaycastHitU5BU5D_t1230267724* value)
	{
		___hits_0 = value;
		Il2CppCodeGenWriteBarrier((&___hits_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.DashTeleportEventArgs
struct DashTeleportEventArgs_t3930070999_marshaled_pinvoke
{
	RaycastHit_t3842505297_marshaled_pinvoke* ___hits_0;
};
// Native definition for COM marshalling of VRTK.DashTeleportEventArgs
struct DashTeleportEventArgs_t3930070999_marshaled_com
{
	RaycastHit_t3842505297_marshaled_com* ___hits_0;
};
#endif // DASHTELEPORTEVENTARGS_T3930070999_H
#ifndef COLOR32_T3032372069_H
#define COLOR32_T3032372069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct ALIGN_TYPE(4) Color32_t3032372069 
{
public:
	// System.Byte UnityEngine.Color32::r
	uint8_t ___r_0;
	// System.Byte UnityEngine.Color32::g
	uint8_t ___g_1;
	// System.Byte UnityEngine.Color32::b
	uint8_t ___b_2;
	// System.Byte UnityEngine.Color32::a
	uint8_t ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color32_t3032372069, ___r_0)); }
	inline uint8_t get_r_0() const { return ___r_0; }
	inline uint8_t* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(uint8_t value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color32_t3032372069, ___g_1)); }
	inline uint8_t get_g_1() const { return ___g_1; }
	inline uint8_t* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(uint8_t value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color32_t3032372069, ___b_2)); }
	inline uint8_t get_b_2() const { return ___b_2; }
	inline uint8_t* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(uint8_t value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color32_t3032372069, ___a_3)); }
	inline uint8_t get_a_3() const { return ___a_3; }
	inline uint8_t* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(uint8_t value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T3032372069_H
#ifndef CHANNELPACKET_T3876307771_H
#define CHANNELPACKET_T3876307771_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.ChannelPacket
struct  ChannelPacket_t3876307771 
{
public:
	// System.Int32 UnityEngine.Networking.ChannelPacket::m_Position
	int32_t ___m_Position_0;
	// System.Byte[] UnityEngine.Networking.ChannelPacket::m_Buffer
	ByteU5BU5D_t790048969* ___m_Buffer_1;
	// System.Boolean UnityEngine.Networking.ChannelPacket::m_IsReliable
	bool ___m_IsReliable_2;

public:
	inline static int32_t get_offset_of_m_Position_0() { return static_cast<int32_t>(offsetof(ChannelPacket_t3876307771, ___m_Position_0)); }
	inline int32_t get_m_Position_0() const { return ___m_Position_0; }
	inline int32_t* get_address_of_m_Position_0() { return &___m_Position_0; }
	inline void set_m_Position_0(int32_t value)
	{
		___m_Position_0 = value;
	}

	inline static int32_t get_offset_of_m_Buffer_1() { return static_cast<int32_t>(offsetof(ChannelPacket_t3876307771, ___m_Buffer_1)); }
	inline ByteU5BU5D_t790048969* get_m_Buffer_1() const { return ___m_Buffer_1; }
	inline ByteU5BU5D_t790048969** get_address_of_m_Buffer_1() { return &___m_Buffer_1; }
	inline void set_m_Buffer_1(ByteU5BU5D_t790048969* value)
	{
		___m_Buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Buffer_1), value);
	}

	inline static int32_t get_offset_of_m_IsReliable_2() { return static_cast<int32_t>(offsetof(ChannelPacket_t3876307771, ___m_IsReliable_2)); }
	inline bool get_m_IsReliable_2() const { return ___m_IsReliable_2; }
	inline bool* get_address_of_m_IsReliable_2() { return &___m_IsReliable_2; }
	inline void set_m_IsReliable_2(bool value)
	{
		___m_IsReliable_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.ChannelPacket
struct ChannelPacket_t3876307771_marshaled_pinvoke
{
	int32_t ___m_Position_0;
	uint8_t* ___m_Buffer_1;
	int32_t ___m_IsReliable_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.ChannelPacket
struct ChannelPacket_t3876307771_marshaled_com
{
	int32_t ___m_Position_0;
	uint8_t* ___m_Buffer_1;
	int32_t ___m_IsReliable_2;
};
#endif // CHANNELPACKET_T3876307771_H
#ifndef INTERNALMSG_T2319104184_H
#define INTERNALMSG_T2319104184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.LocalClient/InternalMsg
struct  InternalMsg_t2319104184 
{
public:
	// System.Byte[] UnityEngine.Networking.LocalClient/InternalMsg::buffer
	ByteU5BU5D_t790048969* ___buffer_0;
	// System.Int32 UnityEngine.Networking.LocalClient/InternalMsg::channelId
	int32_t ___channelId_1;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(InternalMsg_t2319104184, ___buffer_0)); }
	inline ByteU5BU5D_t790048969* get_buffer_0() const { return ___buffer_0; }
	inline ByteU5BU5D_t790048969** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ByteU5BU5D_t790048969* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_0), value);
	}

	inline static int32_t get_offset_of_channelId_1() { return static_cast<int32_t>(offsetof(InternalMsg_t2319104184, ___channelId_1)); }
	inline int32_t get_channelId_1() const { return ___channelId_1; }
	inline int32_t* get_address_of_channelId_1() { return &___channelId_1; }
	inline void set_channelId_1(int32_t value)
	{
		___channelId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.LocalClient/InternalMsg
struct InternalMsg_t2319104184_marshaled_pinvoke
{
	uint8_t* ___buffer_0;
	int32_t ___channelId_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.LocalClient/InternalMsg
struct InternalMsg_t2319104184_marshaled_com
{
	uint8_t* ___buffer_0;
	int32_t ___channelId_1;
};
#endif // INTERNALMSG_T2319104184_H
#ifndef PENDINGPLAYER_T3404685750_H
#define PENDINGPLAYER_T3404685750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkLobbyManager/PendingPlayer
struct  PendingPlayer_t3404685750 
{
public:
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkLobbyManager/PendingPlayer::conn
	NetworkConnection_t3785979506 * ___conn_0;
	// UnityEngine.GameObject UnityEngine.Networking.NetworkLobbyManager/PendingPlayer::lobbyPlayer
	GameObject_t1142533372 * ___lobbyPlayer_1;

public:
	inline static int32_t get_offset_of_conn_0() { return static_cast<int32_t>(offsetof(PendingPlayer_t3404685750, ___conn_0)); }
	inline NetworkConnection_t3785979506 * get_conn_0() const { return ___conn_0; }
	inline NetworkConnection_t3785979506 ** get_address_of_conn_0() { return &___conn_0; }
	inline void set_conn_0(NetworkConnection_t3785979506 * value)
	{
		___conn_0 = value;
		Il2CppCodeGenWriteBarrier((&___conn_0), value);
	}

	inline static int32_t get_offset_of_lobbyPlayer_1() { return static_cast<int32_t>(offsetof(PendingPlayer_t3404685750, ___lobbyPlayer_1)); }
	inline GameObject_t1142533372 * get_lobbyPlayer_1() const { return ___lobbyPlayer_1; }
	inline GameObject_t1142533372 ** get_address_of_lobbyPlayer_1() { return &___lobbyPlayer_1; }
	inline void set_lobbyPlayer_1(GameObject_t1142533372 * value)
	{
		___lobbyPlayer_1 = value;
		Il2CppCodeGenWriteBarrier((&___lobbyPlayer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.NetworkLobbyManager/PendingPlayer
struct PendingPlayer_t3404685750_marshaled_pinvoke
{
	NetworkConnection_t3785979506 * ___conn_0;
	GameObject_t1142533372 * ___lobbyPlayer_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.NetworkLobbyManager/PendingPlayer
struct PendingPlayer_t3404685750_marshaled_com
{
	NetworkConnection_t3785979506 * ___conn_0;
	GameObject_t1142533372 * ___lobbyPlayer_1;
};
#endif // PENDINGPLAYER_T3404685750_H
#ifndef MATRIX4X4_T1557494393_H
#define MATRIX4X4_T1557494393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1557494393 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1557494393, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1557494393, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1557494393, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1557494393, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1557494393, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1557494393, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1557494393, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1557494393, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1557494393, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1557494393, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1557494393, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1557494393, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1557494393, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1557494393, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1557494393, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1557494393, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1557494393_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1557494393  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1557494393  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1557494393_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1557494393  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1557494393 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1557494393  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1557494393_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1557494393  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1557494393 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1557494393  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1557494393_H
#ifndef NETWORKSCENEID_T956954815_H
#define NETWORKSCENEID_T956954815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSceneId
struct  NetworkSceneId_t956954815 
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkSceneId::m_Value
	uint32_t ___m_Value_0;

public:
	inline static int32_t get_offset_of_m_Value_0() { return static_cast<int32_t>(offsetof(NetworkSceneId_t956954815, ___m_Value_0)); }
	inline uint32_t get_m_Value_0() const { return ___m_Value_0; }
	inline uint32_t* get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(uint32_t value)
	{
		___m_Value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKSCENEID_T956954815_H
#ifndef NETWORKHASH128_T1321008331_H
#define NETWORKHASH128_T1321008331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkHash128
struct  NetworkHash128_t1321008331 
{
public:
	// System.Byte UnityEngine.Networking.NetworkHash128::i0
	uint8_t ___i0_0;
	// System.Byte UnityEngine.Networking.NetworkHash128::i1
	uint8_t ___i1_1;
	// System.Byte UnityEngine.Networking.NetworkHash128::i2
	uint8_t ___i2_2;
	// System.Byte UnityEngine.Networking.NetworkHash128::i3
	uint8_t ___i3_3;
	// System.Byte UnityEngine.Networking.NetworkHash128::i4
	uint8_t ___i4_4;
	// System.Byte UnityEngine.Networking.NetworkHash128::i5
	uint8_t ___i5_5;
	// System.Byte UnityEngine.Networking.NetworkHash128::i6
	uint8_t ___i6_6;
	// System.Byte UnityEngine.Networking.NetworkHash128::i7
	uint8_t ___i7_7;
	// System.Byte UnityEngine.Networking.NetworkHash128::i8
	uint8_t ___i8_8;
	// System.Byte UnityEngine.Networking.NetworkHash128::i9
	uint8_t ___i9_9;
	// System.Byte UnityEngine.Networking.NetworkHash128::i10
	uint8_t ___i10_10;
	// System.Byte UnityEngine.Networking.NetworkHash128::i11
	uint8_t ___i11_11;
	// System.Byte UnityEngine.Networking.NetworkHash128::i12
	uint8_t ___i12_12;
	// System.Byte UnityEngine.Networking.NetworkHash128::i13
	uint8_t ___i13_13;
	// System.Byte UnityEngine.Networking.NetworkHash128::i14
	uint8_t ___i14_14;
	// System.Byte UnityEngine.Networking.NetworkHash128::i15
	uint8_t ___i15_15;

public:
	inline static int32_t get_offset_of_i0_0() { return static_cast<int32_t>(offsetof(NetworkHash128_t1321008331, ___i0_0)); }
	inline uint8_t get_i0_0() const { return ___i0_0; }
	inline uint8_t* get_address_of_i0_0() { return &___i0_0; }
	inline void set_i0_0(uint8_t value)
	{
		___i0_0 = value;
	}

	inline static int32_t get_offset_of_i1_1() { return static_cast<int32_t>(offsetof(NetworkHash128_t1321008331, ___i1_1)); }
	inline uint8_t get_i1_1() const { return ___i1_1; }
	inline uint8_t* get_address_of_i1_1() { return &___i1_1; }
	inline void set_i1_1(uint8_t value)
	{
		___i1_1 = value;
	}

	inline static int32_t get_offset_of_i2_2() { return static_cast<int32_t>(offsetof(NetworkHash128_t1321008331, ___i2_2)); }
	inline uint8_t get_i2_2() const { return ___i2_2; }
	inline uint8_t* get_address_of_i2_2() { return &___i2_2; }
	inline void set_i2_2(uint8_t value)
	{
		___i2_2 = value;
	}

	inline static int32_t get_offset_of_i3_3() { return static_cast<int32_t>(offsetof(NetworkHash128_t1321008331, ___i3_3)); }
	inline uint8_t get_i3_3() const { return ___i3_3; }
	inline uint8_t* get_address_of_i3_3() { return &___i3_3; }
	inline void set_i3_3(uint8_t value)
	{
		___i3_3 = value;
	}

	inline static int32_t get_offset_of_i4_4() { return static_cast<int32_t>(offsetof(NetworkHash128_t1321008331, ___i4_4)); }
	inline uint8_t get_i4_4() const { return ___i4_4; }
	inline uint8_t* get_address_of_i4_4() { return &___i4_4; }
	inline void set_i4_4(uint8_t value)
	{
		___i4_4 = value;
	}

	inline static int32_t get_offset_of_i5_5() { return static_cast<int32_t>(offsetof(NetworkHash128_t1321008331, ___i5_5)); }
	inline uint8_t get_i5_5() const { return ___i5_5; }
	inline uint8_t* get_address_of_i5_5() { return &___i5_5; }
	inline void set_i5_5(uint8_t value)
	{
		___i5_5 = value;
	}

	inline static int32_t get_offset_of_i6_6() { return static_cast<int32_t>(offsetof(NetworkHash128_t1321008331, ___i6_6)); }
	inline uint8_t get_i6_6() const { return ___i6_6; }
	inline uint8_t* get_address_of_i6_6() { return &___i6_6; }
	inline void set_i6_6(uint8_t value)
	{
		___i6_6 = value;
	}

	inline static int32_t get_offset_of_i7_7() { return static_cast<int32_t>(offsetof(NetworkHash128_t1321008331, ___i7_7)); }
	inline uint8_t get_i7_7() const { return ___i7_7; }
	inline uint8_t* get_address_of_i7_7() { return &___i7_7; }
	inline void set_i7_7(uint8_t value)
	{
		___i7_7 = value;
	}

	inline static int32_t get_offset_of_i8_8() { return static_cast<int32_t>(offsetof(NetworkHash128_t1321008331, ___i8_8)); }
	inline uint8_t get_i8_8() const { return ___i8_8; }
	inline uint8_t* get_address_of_i8_8() { return &___i8_8; }
	inline void set_i8_8(uint8_t value)
	{
		___i8_8 = value;
	}

	inline static int32_t get_offset_of_i9_9() { return static_cast<int32_t>(offsetof(NetworkHash128_t1321008331, ___i9_9)); }
	inline uint8_t get_i9_9() const { return ___i9_9; }
	inline uint8_t* get_address_of_i9_9() { return &___i9_9; }
	inline void set_i9_9(uint8_t value)
	{
		___i9_9 = value;
	}

	inline static int32_t get_offset_of_i10_10() { return static_cast<int32_t>(offsetof(NetworkHash128_t1321008331, ___i10_10)); }
	inline uint8_t get_i10_10() const { return ___i10_10; }
	inline uint8_t* get_address_of_i10_10() { return &___i10_10; }
	inline void set_i10_10(uint8_t value)
	{
		___i10_10 = value;
	}

	inline static int32_t get_offset_of_i11_11() { return static_cast<int32_t>(offsetof(NetworkHash128_t1321008331, ___i11_11)); }
	inline uint8_t get_i11_11() const { return ___i11_11; }
	inline uint8_t* get_address_of_i11_11() { return &___i11_11; }
	inline void set_i11_11(uint8_t value)
	{
		___i11_11 = value;
	}

	inline static int32_t get_offset_of_i12_12() { return static_cast<int32_t>(offsetof(NetworkHash128_t1321008331, ___i12_12)); }
	inline uint8_t get_i12_12() const { return ___i12_12; }
	inline uint8_t* get_address_of_i12_12() { return &___i12_12; }
	inline void set_i12_12(uint8_t value)
	{
		___i12_12 = value;
	}

	inline static int32_t get_offset_of_i13_13() { return static_cast<int32_t>(offsetof(NetworkHash128_t1321008331, ___i13_13)); }
	inline uint8_t get_i13_13() const { return ___i13_13; }
	inline uint8_t* get_address_of_i13_13() { return &___i13_13; }
	inline void set_i13_13(uint8_t value)
	{
		___i13_13 = value;
	}

	inline static int32_t get_offset_of_i14_14() { return static_cast<int32_t>(offsetof(NetworkHash128_t1321008331, ___i14_14)); }
	inline uint8_t get_i14_14() const { return ___i14_14; }
	inline uint8_t* get_address_of_i14_14() { return &___i14_14; }
	inline void set_i14_14(uint8_t value)
	{
		___i14_14 = value;
	}

	inline static int32_t get_offset_of_i15_15() { return static_cast<int32_t>(offsetof(NetworkHash128_t1321008331, ___i15_15)); }
	inline uint8_t get_i15_15() const { return ___i15_15; }
	inline uint8_t* get_address_of_i15_15() { return &___i15_15; }
	inline void set_i15_15(uint8_t value)
	{
		___i15_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKHASH128_T1321008331_H
#ifndef KEYVALUEPAIR_2_T770086954_H
#define KEYVALUEPAIR_2_T770086954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>
struct  KeyValuePair_2_t770086954 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t770086954, ___key_0)); }
	inline uint32_t get_key_0() const { return ___key_0; }
	inline uint32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t770086954, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T770086954_H
#ifndef NETWORKBROADCASTRESULT_T2795851141_H
#define NETWORKBROADCASTRESULT_T2795851141_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkBroadcastResult
struct  NetworkBroadcastResult_t2795851141 
{
public:
	// System.String UnityEngine.Networking.NetworkBroadcastResult::serverAddress
	String_t* ___serverAddress_0;
	// System.Byte[] UnityEngine.Networking.NetworkBroadcastResult::broadcastData
	ByteU5BU5D_t790048969* ___broadcastData_1;

public:
	inline static int32_t get_offset_of_serverAddress_0() { return static_cast<int32_t>(offsetof(NetworkBroadcastResult_t2795851141, ___serverAddress_0)); }
	inline String_t* get_serverAddress_0() const { return ___serverAddress_0; }
	inline String_t** get_address_of_serverAddress_0() { return &___serverAddress_0; }
	inline void set_serverAddress_0(String_t* value)
	{
		___serverAddress_0 = value;
		Il2CppCodeGenWriteBarrier((&___serverAddress_0), value);
	}

	inline static int32_t get_offset_of_broadcastData_1() { return static_cast<int32_t>(offsetof(NetworkBroadcastResult_t2795851141, ___broadcastData_1)); }
	inline ByteU5BU5D_t790048969* get_broadcastData_1() const { return ___broadcastData_1; }
	inline ByteU5BU5D_t790048969** get_address_of_broadcastData_1() { return &___broadcastData_1; }
	inline void set_broadcastData_1(ByteU5BU5D_t790048969* value)
	{
		___broadcastData_1 = value;
		Il2CppCodeGenWriteBarrier((&___broadcastData_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.NetworkBroadcastResult
struct NetworkBroadcastResult_t2795851141_marshaled_pinvoke
{
	char* ___serverAddress_0;
	uint8_t* ___broadcastData_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.NetworkBroadcastResult
struct NetworkBroadcastResult_t2795851141_marshaled_com
{
	Il2CppChar* ___serverAddress_0;
	uint8_t* ___broadcastData_1;
};
#endif // NETWORKBROADCASTRESULT_T2795851141_H
#ifndef KEYVALUEPAIR_2_T3981853048_H
#define KEYVALUEPAIR_2_T3981853048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
struct  KeyValuePair_2_t3981853048 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	float ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3981853048, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3981853048, ___value_1)); }
	inline float get_value_1() const { return ___value_1; }
	inline float* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(float value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3981853048_H
#ifndef KEYVALUEPAIR_2_T625431188_H
#define KEYVALUEPAIR_2_T625431188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
struct  KeyValuePair_2_t625431188 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int64_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t625431188, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t625431188, ___value_1)); }
	inline int64_t get_value_1() const { return ___value_1; }
	inline int64_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int64_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T625431188_H
#ifndef KEYVALUEPAIR_2_T579732841_H
#define KEYVALUEPAIR_2_T579732841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
struct  KeyValuePair_2_t579732841 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t579732841, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t579732841, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T579732841_H
#ifndef KEYVALUEPAIR_2_T3962249312_H
#define KEYVALUEPAIR_2_T3962249312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
struct  KeyValuePair_2_t3962249312 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3962249312, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3962249312, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3962249312_H
#ifndef DEMODATA_T3123788122_H
#define DEMODATA_T3123788122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Demos.DemoHubManager/DemoData
struct  DemoData_t3123788122 
{
public:
	// System.String ExitGames.Demos.DemoHubManager/DemoData::Title
	String_t* ___Title_0;
	// System.String ExitGames.Demos.DemoHubManager/DemoData::Description
	String_t* ___Description_1;
	// System.String ExitGames.Demos.DemoHubManager/DemoData::Scene
	String_t* ___Scene_2;
	// System.String ExitGames.Demos.DemoHubManager/DemoData::TutorialLink
	String_t* ___TutorialLink_3;
	// System.String ExitGames.Demos.DemoHubManager/DemoData::DocLink
	String_t* ___DocLink_4;

public:
	inline static int32_t get_offset_of_Title_0() { return static_cast<int32_t>(offsetof(DemoData_t3123788122, ___Title_0)); }
	inline String_t* get_Title_0() const { return ___Title_0; }
	inline String_t** get_address_of_Title_0() { return &___Title_0; }
	inline void set_Title_0(String_t* value)
	{
		___Title_0 = value;
		Il2CppCodeGenWriteBarrier((&___Title_0), value);
	}

	inline static int32_t get_offset_of_Description_1() { return static_cast<int32_t>(offsetof(DemoData_t3123788122, ___Description_1)); }
	inline String_t* get_Description_1() const { return ___Description_1; }
	inline String_t** get_address_of_Description_1() { return &___Description_1; }
	inline void set_Description_1(String_t* value)
	{
		___Description_1 = value;
		Il2CppCodeGenWriteBarrier((&___Description_1), value);
	}

	inline static int32_t get_offset_of_Scene_2() { return static_cast<int32_t>(offsetof(DemoData_t3123788122, ___Scene_2)); }
	inline String_t* get_Scene_2() const { return ___Scene_2; }
	inline String_t** get_address_of_Scene_2() { return &___Scene_2; }
	inline void set_Scene_2(String_t* value)
	{
		___Scene_2 = value;
		Il2CppCodeGenWriteBarrier((&___Scene_2), value);
	}

	inline static int32_t get_offset_of_TutorialLink_3() { return static_cast<int32_t>(offsetof(DemoData_t3123788122, ___TutorialLink_3)); }
	inline String_t* get_TutorialLink_3() const { return ___TutorialLink_3; }
	inline String_t** get_address_of_TutorialLink_3() { return &___TutorialLink_3; }
	inline void set_TutorialLink_3(String_t* value)
	{
		___TutorialLink_3 = value;
		Il2CppCodeGenWriteBarrier((&___TutorialLink_3), value);
	}

	inline static int32_t get_offset_of_DocLink_4() { return static_cast<int32_t>(offsetof(DemoData_t3123788122, ___DocLink_4)); }
	inline String_t* get_DocLink_4() const { return ___DocLink_4; }
	inline String_t** get_address_of_DocLink_4() { return &___DocLink_4; }
	inline void set_DocLink_4(String_t* value)
	{
		___DocLink_4 = value;
		Il2CppCodeGenWriteBarrier((&___DocLink_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of ExitGames.Demos.DemoHubManager/DemoData
struct DemoData_t3123788122_marshaled_pinvoke
{
	char* ___Title_0;
	char* ___Description_1;
	char* ___Scene_2;
	char* ___TutorialLink_3;
	char* ___DocLink_4;
};
// Native definition for COM marshalling of ExitGames.Demos.DemoHubManager/DemoData
struct DemoData_t3123788122_marshaled_com
{
	Il2CppChar* ___Title_0;
	Il2CppChar* ___Description_1;
	Il2CppChar* ___Scene_2;
	Il2CppChar* ___TutorialLink_3;
	Il2CppChar* ___DocLink_4;
};
#endif // DEMODATA_T3123788122_H
#ifndef CONNECTIONPENDINGPLAYERS_T197839999_H
#define CONNECTIONPENDINGPLAYERS_T197839999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers
struct  ConnectionPendingPlayers_t197839999 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo> UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers::players
	List_1_t271397926 * ___players_0;

public:
	inline static int32_t get_offset_of_players_0() { return static_cast<int32_t>(offsetof(ConnectionPendingPlayers_t197839999, ___players_0)); }
	inline List_1_t271397926 * get_players_0() const { return ___players_0; }
	inline List_1_t271397926 ** get_address_of_players_0() { return &___players_0; }
	inline void set_players_0(List_1_t271397926 * value)
	{
		___players_0 = value;
		Il2CppCodeGenWriteBarrier((&___players_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers
struct ConnectionPendingPlayers_t197839999_marshaled_pinvoke
{
	List_1_t271397926 * ___players_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers
struct ConnectionPendingPlayers_t197839999_marshaled_com
{
	List_1_t271397926 * ___players_0;
};
#endif // CONNECTIONPENDINGPLAYERS_T197839999_H
#ifndef KEYVALUEPAIR_2_T2558416689_H
#define KEYVALUEPAIR_2_T2558416689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t2558416689 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2558416689, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2558416689, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T2558416689_H
#ifndef KEYVALUEPAIR_2_T3212048677_H
#define KEYVALUEPAIR_2_T3212048677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
struct  KeyValuePair_2_t3212048677 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3212048677, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3212048677, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3212048677_H
#ifndef KEYVALUEPAIR_2_T1244962648_H
#define KEYVALUEPAIR_2_T1244962648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>
struct  KeyValuePair_2_t1244962648 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int16_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1244962648, ___key_0)); }
	inline int16_t get_key_0() const { return ___key_0; }
	inline int16_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int16_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1244962648, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T1244962648_H
#ifndef KEYVALUEPAIR_2_T2370583178_H
#define KEYVALUEPAIR_2_T2370583178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>
struct  KeyValuePair_2_t2370583178 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2370583178, ___key_0)); }
	inline uint8_t get_key_0() const { return ___key_0; }
	inline uint8_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint8_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2370583178, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T2370583178_H
#ifndef VECTOR4_T2396709403_H
#define VECTOR4_T2396709403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t2396709403 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t2396709403, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t2396709403, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t2396709403, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t2396709403, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t2396709403_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t2396709403  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t2396709403  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t2396709403  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t2396709403  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t2396709403_StaticFields, ___zeroVector_5)); }
	inline Vector4_t2396709403  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t2396709403 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t2396709403  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t2396709403_StaticFields, ___oneVector_6)); }
	inline Vector4_t2396709403  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t2396709403 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t2396709403  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t2396709403_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t2396709403  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t2396709403 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t2396709403  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t2396709403_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t2396709403  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t2396709403 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t2396709403  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T2396709403_H
#ifndef CRCMESSAGEENTRY_T1496519431_H
#define CRCMESSAGEENTRY_T1496519431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.CRCMessageEntry
struct  CRCMessageEntry_t1496519431 
{
public:
	// System.String UnityEngine.Networking.NetworkSystem.CRCMessageEntry::name
	String_t* ___name_0;
	// System.Byte UnityEngine.Networking.NetworkSystem.CRCMessageEntry::channel
	uint8_t ___channel_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(CRCMessageEntry_t1496519431, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_channel_1() { return static_cast<int32_t>(offsetof(CRCMessageEntry_t1496519431, ___channel_1)); }
	inline uint8_t get_channel_1() const { return ___channel_1; }
	inline uint8_t* get_address_of_channel_1() { return &___channel_1; }
	inline void set_channel_1(uint8_t value)
	{
		___channel_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.NetworkSystem.CRCMessageEntry
struct CRCMessageEntry_t1496519431_marshaled_pinvoke
{
	char* ___name_0;
	uint8_t ___channel_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.NetworkSystem.CRCMessageEntry
struct CRCMessageEntry_t1496519431_marshaled_com
{
	Il2CppChar* ___name_0;
	uint8_t ___channel_1;
};
#endif // CRCMESSAGEENTRY_T1496519431_H
#ifndef CONTROLLERRIGIDBODYACTIVATOREVENTARGS_T2563519100_H
#define CONTROLLERRIGIDBODYACTIVATOREVENTARGS_T2563519100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.ControllerRigidbodyActivatorEventArgs
struct  ControllerRigidbodyActivatorEventArgs_t2563519100 
{
public:
	// VRTK.VRTK_InteractTouch VRTK.ControllerRigidbodyActivatorEventArgs::touchingObject
	VRTK_InteractTouch_t2596552983 * ___touchingObject_0;

public:
	inline static int32_t get_offset_of_touchingObject_0() { return static_cast<int32_t>(offsetof(ControllerRigidbodyActivatorEventArgs_t2563519100, ___touchingObject_0)); }
	inline VRTK_InteractTouch_t2596552983 * get_touchingObject_0() const { return ___touchingObject_0; }
	inline VRTK_InteractTouch_t2596552983 ** get_address_of_touchingObject_0() { return &___touchingObject_0; }
	inline void set_touchingObject_0(VRTK_InteractTouch_t2596552983 * value)
	{
		___touchingObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___touchingObject_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.ControllerRigidbodyActivatorEventArgs
struct ControllerRigidbodyActivatorEventArgs_t2563519100_marshaled_pinvoke
{
	VRTK_InteractTouch_t2596552983 * ___touchingObject_0;
};
// Native definition for COM marshalling of VRTK.ControllerRigidbodyActivatorEventArgs
struct ControllerRigidbodyActivatorEventArgs_t2563519100_marshaled_com
{
	VRTK_InteractTouch_t2596552983 * ___touchingObject_0;
};
#endif // CONTROLLERRIGIDBODYACTIVATOREVENTARGS_T2563519100_H
#ifndef CONTROLLERACTIONSEVENTARGS_T3432693411_H
#define CONTROLLERACTIONSEVENTARGS_T3432693411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.ControllerActionsEventArgs
struct  ControllerActionsEventArgs_t3432693411 
{
public:
	// System.UInt32 VRTK.ControllerActionsEventArgs::controllerIndex
	uint32_t ___controllerIndex_0;

public:
	inline static int32_t get_offset_of_controllerIndex_0() { return static_cast<int32_t>(offsetof(ControllerActionsEventArgs_t3432693411, ___controllerIndex_0)); }
	inline uint32_t get_controllerIndex_0() const { return ___controllerIndex_0; }
	inline uint32_t* get_address_of_controllerIndex_0() { return &___controllerIndex_0; }
	inline void set_controllerIndex_0(uint32_t value)
	{
		___controllerIndex_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLLERACTIONSEVENTARGS_T3432693411_H
#ifndef NETWORKINSTANCEID_T3634263817_H
#define NETWORKINSTANCEID_T3634263817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkInstanceId
struct  NetworkInstanceId_t3634263817 
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkInstanceId::m_Value
	uint32_t ___m_Value_0;

public:
	inline static int32_t get_offset_of_m_Value_0() { return static_cast<int32_t>(offsetof(NetworkInstanceId_t3634263817, ___m_Value_0)); }
	inline uint32_t get_m_Value_0() const { return ___m_Value_0; }
	inline uint32_t* get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(uint32_t value)
	{
		___m_Value_0 = value;
	}
};

struct NetworkInstanceId_t3634263817_StaticFields
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkInstanceId::Invalid
	NetworkInstanceId_t3634263817  ___Invalid_1;
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkInstanceId::Zero
	NetworkInstanceId_t3634263817  ___Zero_2;

public:
	inline static int32_t get_offset_of_Invalid_1() { return static_cast<int32_t>(offsetof(NetworkInstanceId_t3634263817_StaticFields, ___Invalid_1)); }
	inline NetworkInstanceId_t3634263817  get_Invalid_1() const { return ___Invalid_1; }
	inline NetworkInstanceId_t3634263817 * get_address_of_Invalid_1() { return &___Invalid_1; }
	inline void set_Invalid_1(NetworkInstanceId_t3634263817  value)
	{
		___Invalid_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(NetworkInstanceId_t3634263817_StaticFields, ___Zero_2)); }
	inline NetworkInstanceId_t3634263817  get_Zero_2() const { return ___Zero_2; }
	inline NetworkInstanceId_t3634263817 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(NetworkInstanceId_t3634263817  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKINSTANCEID_T3634263817_H
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
#ifndef RECT_T2247532882_H
#define RECT_T2247532882_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2247532882 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2247532882, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2247532882, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2247532882, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2247532882, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2247532882_H
#ifndef VECTOR2_T3157050673_H
#define VECTOR2_T3157050673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t3157050673 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t3157050673, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t3157050673, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t3157050673_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t3157050673  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t3157050673  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t3157050673  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t3157050673  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t3157050673  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t3157050673  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t3157050673  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t3157050673  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t3157050673_StaticFields, ___zeroVector_2)); }
	inline Vector2_t3157050673  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t3157050673 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t3157050673  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t3157050673_StaticFields, ___oneVector_3)); }
	inline Vector2_t3157050673  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t3157050673 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t3157050673  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t3157050673_StaticFields, ___upVector_4)); }
	inline Vector2_t3157050673  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t3157050673 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t3157050673  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t3157050673_StaticFields, ___downVector_5)); }
	inline Vector2_t3157050673  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t3157050673 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t3157050673  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t3157050673_StaticFields, ___leftVector_6)); }
	inline Vector2_t3157050673  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t3157050673 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t3157050673  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t3157050673_StaticFields, ___rightVector_7)); }
	inline Vector2_t3157050673  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t3157050673 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t3157050673  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t3157050673_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t3157050673  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t3157050673 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t3157050673  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t3157050673_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t3157050673  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t3157050673 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t3157050673  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T3157050673_H
#ifndef DICTIONARYENTRY_T1593501743_H
#define DICTIONARYENTRY_T1593501743_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.DictionaryEntry
struct  DictionaryEntry_t1593501743 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_t1593501743, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((&____key_0), value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_t1593501743, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((&____value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t1593501743_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t1593501743_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
#endif // DICTIONARYENTRY_T1593501743_H
#ifndef DSAPARAMETERS_T2831787968_H
#define DSAPARAMETERS_T2831787968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSAParameters
struct  DSAParameters_t2831787968 
{
public:
	// System.Int32 System.Security.Cryptography.DSAParameters::Counter
	int32_t ___Counter_0;
	// System.Byte[] System.Security.Cryptography.DSAParameters::G
	ByteU5BU5D_t790048969* ___G_1;
	// System.Byte[] System.Security.Cryptography.DSAParameters::J
	ByteU5BU5D_t790048969* ___J_2;
	// System.Byte[] System.Security.Cryptography.DSAParameters::P
	ByteU5BU5D_t790048969* ___P_3;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Q
	ByteU5BU5D_t790048969* ___Q_4;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Seed
	ByteU5BU5D_t790048969* ___Seed_5;
	// System.Byte[] System.Security.Cryptography.DSAParameters::X
	ByteU5BU5D_t790048969* ___X_6;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Y
	ByteU5BU5D_t790048969* ___Y_7;

public:
	inline static int32_t get_offset_of_Counter_0() { return static_cast<int32_t>(offsetof(DSAParameters_t2831787968, ___Counter_0)); }
	inline int32_t get_Counter_0() const { return ___Counter_0; }
	inline int32_t* get_address_of_Counter_0() { return &___Counter_0; }
	inline void set_Counter_0(int32_t value)
	{
		___Counter_0 = value;
	}

	inline static int32_t get_offset_of_G_1() { return static_cast<int32_t>(offsetof(DSAParameters_t2831787968, ___G_1)); }
	inline ByteU5BU5D_t790048969* get_G_1() const { return ___G_1; }
	inline ByteU5BU5D_t790048969** get_address_of_G_1() { return &___G_1; }
	inline void set_G_1(ByteU5BU5D_t790048969* value)
	{
		___G_1 = value;
		Il2CppCodeGenWriteBarrier((&___G_1), value);
	}

	inline static int32_t get_offset_of_J_2() { return static_cast<int32_t>(offsetof(DSAParameters_t2831787968, ___J_2)); }
	inline ByteU5BU5D_t790048969* get_J_2() const { return ___J_2; }
	inline ByteU5BU5D_t790048969** get_address_of_J_2() { return &___J_2; }
	inline void set_J_2(ByteU5BU5D_t790048969* value)
	{
		___J_2 = value;
		Il2CppCodeGenWriteBarrier((&___J_2), value);
	}

	inline static int32_t get_offset_of_P_3() { return static_cast<int32_t>(offsetof(DSAParameters_t2831787968, ___P_3)); }
	inline ByteU5BU5D_t790048969* get_P_3() const { return ___P_3; }
	inline ByteU5BU5D_t790048969** get_address_of_P_3() { return &___P_3; }
	inline void set_P_3(ByteU5BU5D_t790048969* value)
	{
		___P_3 = value;
		Il2CppCodeGenWriteBarrier((&___P_3), value);
	}

	inline static int32_t get_offset_of_Q_4() { return static_cast<int32_t>(offsetof(DSAParameters_t2831787968, ___Q_4)); }
	inline ByteU5BU5D_t790048969* get_Q_4() const { return ___Q_4; }
	inline ByteU5BU5D_t790048969** get_address_of_Q_4() { return &___Q_4; }
	inline void set_Q_4(ByteU5BU5D_t790048969* value)
	{
		___Q_4 = value;
		Il2CppCodeGenWriteBarrier((&___Q_4), value);
	}

	inline static int32_t get_offset_of_Seed_5() { return static_cast<int32_t>(offsetof(DSAParameters_t2831787968, ___Seed_5)); }
	inline ByteU5BU5D_t790048969* get_Seed_5() const { return ___Seed_5; }
	inline ByteU5BU5D_t790048969** get_address_of_Seed_5() { return &___Seed_5; }
	inline void set_Seed_5(ByteU5BU5D_t790048969* value)
	{
		___Seed_5 = value;
		Il2CppCodeGenWriteBarrier((&___Seed_5), value);
	}

	inline static int32_t get_offset_of_X_6() { return static_cast<int32_t>(offsetof(DSAParameters_t2831787968, ___X_6)); }
	inline ByteU5BU5D_t790048969* get_X_6() const { return ___X_6; }
	inline ByteU5BU5D_t790048969** get_address_of_X_6() { return &___X_6; }
	inline void set_X_6(ByteU5BU5D_t790048969* value)
	{
		___X_6 = value;
		Il2CppCodeGenWriteBarrier((&___X_6), value);
	}

	inline static int32_t get_offset_of_Y_7() { return static_cast<int32_t>(offsetof(DSAParameters_t2831787968, ___Y_7)); }
	inline ByteU5BU5D_t790048969* get_Y_7() const { return ___Y_7; }
	inline ByteU5BU5D_t790048969** get_address_of_Y_7() { return &___Y_7; }
	inline void set_Y_7(ByteU5BU5D_t790048969* value)
	{
		___Y_7 = value;
		Il2CppCodeGenWriteBarrier((&___Y_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t2831787968_marshaled_pinvoke
{
	int32_t ___Counter_0;
	uint8_t* ___G_1;
	uint8_t* ___J_2;
	uint8_t* ___P_3;
	uint8_t* ___Q_4;
	uint8_t* ___Seed_5;
	uint8_t* ___X_6;
	uint8_t* ___Y_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t2831787968_marshaled_com
{
	int32_t ___Counter_0;
	uint8_t* ___G_1;
	uint8_t* ___J_2;
	uint8_t* ___P_3;
	uint8_t* ___Q_4;
	uint8_t* ___Seed_5;
	uint8_t* ___X_6;
	uint8_t* ___Y_7;
};
#endif // DSAPARAMETERS_T2831787968_H
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
#ifndef DECIMAL_T1264892593_H
#define DECIMAL_T1264892593_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t1264892593 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_5;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_6;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_7;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_8;

public:
	inline static int32_t get_offset_of_flags_5() { return static_cast<int32_t>(offsetof(Decimal_t1264892593, ___flags_5)); }
	inline uint32_t get_flags_5() const { return ___flags_5; }
	inline uint32_t* get_address_of_flags_5() { return &___flags_5; }
	inline void set_flags_5(uint32_t value)
	{
		___flags_5 = value;
	}

	inline static int32_t get_offset_of_hi_6() { return static_cast<int32_t>(offsetof(Decimal_t1264892593, ___hi_6)); }
	inline uint32_t get_hi_6() const { return ___hi_6; }
	inline uint32_t* get_address_of_hi_6() { return &___hi_6; }
	inline void set_hi_6(uint32_t value)
	{
		___hi_6 = value;
	}

	inline static int32_t get_offset_of_lo_7() { return static_cast<int32_t>(offsetof(Decimal_t1264892593, ___lo_7)); }
	inline uint32_t get_lo_7() const { return ___lo_7; }
	inline uint32_t* get_address_of_lo_7() { return &___lo_7; }
	inline void set_lo_7(uint32_t value)
	{
		___lo_7 = value;
	}

	inline static int32_t get_offset_of_mid_8() { return static_cast<int32_t>(offsetof(Decimal_t1264892593, ___mid_8)); }
	inline uint32_t get_mid_8() const { return ___mid_8; }
	inline uint32_t* get_address_of_mid_8() { return &___mid_8; }
	inline void set_mid_8(uint32_t value)
	{
		___mid_8 = value;
	}
};

struct Decimal_t1264892593_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t1264892593  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t1264892593  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t1264892593  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t1264892593  ___One_3;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t1264892593  ___MaxValueDiv10_4;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t1264892593_StaticFields, ___MinValue_0)); }
	inline Decimal_t1264892593  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t1264892593 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t1264892593  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t1264892593_StaticFields, ___MaxValue_1)); }
	inline Decimal_t1264892593  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t1264892593 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t1264892593  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t1264892593_StaticFields, ___MinusOne_2)); }
	inline Decimal_t1264892593  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t1264892593 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t1264892593  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t1264892593_StaticFields, ___One_3)); }
	inline Decimal_t1264892593  get_One_3() const { return ___One_3; }
	inline Decimal_t1264892593 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t1264892593  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_4() { return static_cast<int32_t>(offsetof(Decimal_t1264892593_StaticFields, ___MaxValueDiv10_4)); }
	inline Decimal_t1264892593  get_MaxValueDiv10_4() const { return ___MaxValueDiv10_4; }
	inline Decimal_t1264892593 * get_address_of_MaxValueDiv10_4() { return &___MaxValueDiv10_4; }
	inline void set_MaxValueDiv10_4(Decimal_t1264892593  value)
	{
		___MaxValueDiv10_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T1264892593_H
#ifndef COLOR_T3719709917_H
#define COLOR_T3719709917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t3719709917 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t3719709917, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t3719709917, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t3719709917, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t3719709917, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T3719709917_H
#ifndef TIMESPAN_T2249836928_H
#define TIMESPAN_T2249836928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t2249836928 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_8;

public:
	inline static int32_t get_offset_of__ticks_8() { return static_cast<int32_t>(offsetof(TimeSpan_t2249836928, ____ticks_8)); }
	inline int64_t get__ticks_8() const { return ____ticks_8; }
	inline int64_t* get_address_of__ticks_8() { return &____ticks_8; }
	inline void set__ticks_8(int64_t value)
	{
		____ticks_8 = value;
	}
};

struct TimeSpan_t2249836928_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t2249836928  ___MaxValue_5;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t2249836928  ___MinValue_6;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t2249836928  ___Zero_7;

public:
	inline static int32_t get_offset_of_MaxValue_5() { return static_cast<int32_t>(offsetof(TimeSpan_t2249836928_StaticFields, ___MaxValue_5)); }
	inline TimeSpan_t2249836928  get_MaxValue_5() const { return ___MaxValue_5; }
	inline TimeSpan_t2249836928 * get_address_of_MaxValue_5() { return &___MaxValue_5; }
	inline void set_MaxValue_5(TimeSpan_t2249836928  value)
	{
		___MaxValue_5 = value;
	}

	inline static int32_t get_offset_of_MinValue_6() { return static_cast<int32_t>(offsetof(TimeSpan_t2249836928_StaticFields, ___MinValue_6)); }
	inline TimeSpan_t2249836928  get_MinValue_6() const { return ___MinValue_6; }
	inline TimeSpan_t2249836928 * get_address_of_MinValue_6() { return &___MinValue_6; }
	inline void set_MinValue_6(TimeSpan_t2249836928  value)
	{
		___MinValue_6 = value;
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(TimeSpan_t2249836928_StaticFields, ___Zero_7)); }
	inline TimeSpan_t2249836928  get_Zero_7() const { return ___Zero_7; }
	inline TimeSpan_t2249836928 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(TimeSpan_t2249836928  value)
	{
		___Zero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T2249836928_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t3048023816 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t3048023816 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t3048023816 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t3048023816 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t3048023816 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t3048023816 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t3048023816 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t3048023816 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef UILINEINFO_T1348464952_H
#define UILINEINFO_T1348464952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UILineInfo
struct  UILineInfo_t1348464952 
{
public:
	// System.Int32 UnityEngine.UILineInfo::startCharIdx
	int32_t ___startCharIdx_0;
	// System.Int32 UnityEngine.UILineInfo::height
	int32_t ___height_1;
	// System.Single UnityEngine.UILineInfo::topY
	float ___topY_2;
	// System.Single UnityEngine.UILineInfo::leading
	float ___leading_3;

public:
	inline static int32_t get_offset_of_startCharIdx_0() { return static_cast<int32_t>(offsetof(UILineInfo_t1348464952, ___startCharIdx_0)); }
	inline int32_t get_startCharIdx_0() const { return ___startCharIdx_0; }
	inline int32_t* get_address_of_startCharIdx_0() { return &___startCharIdx_0; }
	inline void set_startCharIdx_0(int32_t value)
	{
		___startCharIdx_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(UILineInfo_t1348464952, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_topY_2() { return static_cast<int32_t>(offsetof(UILineInfo_t1348464952, ___topY_2)); }
	inline float get_topY_2() const { return ___topY_2; }
	inline float* get_address_of_topY_2() { return &___topY_2; }
	inline void set_topY_2(float value)
	{
		___topY_2 = value;
	}

	inline static int32_t get_offset_of_leading_3() { return static_cast<int32_t>(offsetof(UILineInfo_t1348464952, ___leading_3)); }
	inline float get_leading_3() const { return ___leading_3; }
	inline float* get_address_of_leading_3() { return &___leading_3; }
	inline void set_leading_3(float value)
	{
		___leading_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UILINEINFO_T1348464952_H
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
#ifndef QUATERNION_T250915103_H
#define QUATERNION_T250915103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t250915103 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t250915103, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t250915103, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t250915103, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t250915103, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t250915103_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t250915103  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t250915103_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t250915103  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t250915103 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t250915103  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T250915103_H
#ifndef VECTOR3_T2230635801_H
#define VECTOR3_T2230635801_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t2230635801 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t2230635801, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t2230635801, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t2230635801, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t2230635801_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t2230635801  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t2230635801  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t2230635801  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t2230635801  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t2230635801  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t2230635801  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t2230635801  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t2230635801  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t2230635801  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t2230635801  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t2230635801_StaticFields, ___zeroVector_4)); }
	inline Vector3_t2230635801  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t2230635801 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t2230635801  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t2230635801_StaticFields, ___oneVector_5)); }
	inline Vector3_t2230635801  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t2230635801 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t2230635801  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t2230635801_StaticFields, ___upVector_6)); }
	inline Vector3_t2230635801  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t2230635801 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t2230635801  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t2230635801_StaticFields, ___downVector_7)); }
	inline Vector3_t2230635801  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t2230635801 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t2230635801  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t2230635801_StaticFields, ___leftVector_8)); }
	inline Vector3_t2230635801  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t2230635801 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t2230635801  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t2230635801_StaticFields, ___rightVector_9)); }
	inline Vector3_t2230635801  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t2230635801 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t2230635801  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t2230635801_StaticFields, ___forwardVector_10)); }
	inline Vector3_t2230635801  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t2230635801 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t2230635801  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t2230635801_StaticFields, ___backVector_11)); }
	inline Vector3_t2230635801  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t2230635801 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t2230635801  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t2230635801_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t2230635801  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t2230635801 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t2230635801  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t2230635801_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t2230635801  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t2230635801 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t2230635801  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T2230635801_H
#ifndef RSAPARAMETERS_T114625675_H
#define RSAPARAMETERS_T114625675_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAParameters
struct  RSAParameters_t114625675 
{
public:
	// System.Byte[] System.Security.Cryptography.RSAParameters::P
	ByteU5BU5D_t790048969* ___P_0;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Q
	ByteU5BU5D_t790048969* ___Q_1;
	// System.Byte[] System.Security.Cryptography.RSAParameters::D
	ByteU5BU5D_t790048969* ___D_2;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DP
	ByteU5BU5D_t790048969* ___DP_3;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DQ
	ByteU5BU5D_t790048969* ___DQ_4;
	// System.Byte[] System.Security.Cryptography.RSAParameters::InverseQ
	ByteU5BU5D_t790048969* ___InverseQ_5;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Modulus
	ByteU5BU5D_t790048969* ___Modulus_6;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Exponent
	ByteU5BU5D_t790048969* ___Exponent_7;

public:
	inline static int32_t get_offset_of_P_0() { return static_cast<int32_t>(offsetof(RSAParameters_t114625675, ___P_0)); }
	inline ByteU5BU5D_t790048969* get_P_0() const { return ___P_0; }
	inline ByteU5BU5D_t790048969** get_address_of_P_0() { return &___P_0; }
	inline void set_P_0(ByteU5BU5D_t790048969* value)
	{
		___P_0 = value;
		Il2CppCodeGenWriteBarrier((&___P_0), value);
	}

	inline static int32_t get_offset_of_Q_1() { return static_cast<int32_t>(offsetof(RSAParameters_t114625675, ___Q_1)); }
	inline ByteU5BU5D_t790048969* get_Q_1() const { return ___Q_1; }
	inline ByteU5BU5D_t790048969** get_address_of_Q_1() { return &___Q_1; }
	inline void set_Q_1(ByteU5BU5D_t790048969* value)
	{
		___Q_1 = value;
		Il2CppCodeGenWriteBarrier((&___Q_1), value);
	}

	inline static int32_t get_offset_of_D_2() { return static_cast<int32_t>(offsetof(RSAParameters_t114625675, ___D_2)); }
	inline ByteU5BU5D_t790048969* get_D_2() const { return ___D_2; }
	inline ByteU5BU5D_t790048969** get_address_of_D_2() { return &___D_2; }
	inline void set_D_2(ByteU5BU5D_t790048969* value)
	{
		___D_2 = value;
		Il2CppCodeGenWriteBarrier((&___D_2), value);
	}

	inline static int32_t get_offset_of_DP_3() { return static_cast<int32_t>(offsetof(RSAParameters_t114625675, ___DP_3)); }
	inline ByteU5BU5D_t790048969* get_DP_3() const { return ___DP_3; }
	inline ByteU5BU5D_t790048969** get_address_of_DP_3() { return &___DP_3; }
	inline void set_DP_3(ByteU5BU5D_t790048969* value)
	{
		___DP_3 = value;
		Il2CppCodeGenWriteBarrier((&___DP_3), value);
	}

	inline static int32_t get_offset_of_DQ_4() { return static_cast<int32_t>(offsetof(RSAParameters_t114625675, ___DQ_4)); }
	inline ByteU5BU5D_t790048969* get_DQ_4() const { return ___DQ_4; }
	inline ByteU5BU5D_t790048969** get_address_of_DQ_4() { return &___DQ_4; }
	inline void set_DQ_4(ByteU5BU5D_t790048969* value)
	{
		___DQ_4 = value;
		Il2CppCodeGenWriteBarrier((&___DQ_4), value);
	}

	inline static int32_t get_offset_of_InverseQ_5() { return static_cast<int32_t>(offsetof(RSAParameters_t114625675, ___InverseQ_5)); }
	inline ByteU5BU5D_t790048969* get_InverseQ_5() const { return ___InverseQ_5; }
	inline ByteU5BU5D_t790048969** get_address_of_InverseQ_5() { return &___InverseQ_5; }
	inline void set_InverseQ_5(ByteU5BU5D_t790048969* value)
	{
		___InverseQ_5 = value;
		Il2CppCodeGenWriteBarrier((&___InverseQ_5), value);
	}

	inline static int32_t get_offset_of_Modulus_6() { return static_cast<int32_t>(offsetof(RSAParameters_t114625675, ___Modulus_6)); }
	inline ByteU5BU5D_t790048969* get_Modulus_6() const { return ___Modulus_6; }
	inline ByteU5BU5D_t790048969** get_address_of_Modulus_6() { return &___Modulus_6; }
	inline void set_Modulus_6(ByteU5BU5D_t790048969* value)
	{
		___Modulus_6 = value;
		Il2CppCodeGenWriteBarrier((&___Modulus_6), value);
	}

	inline static int32_t get_offset_of_Exponent_7() { return static_cast<int32_t>(offsetof(RSAParameters_t114625675, ___Exponent_7)); }
	inline ByteU5BU5D_t790048969* get_Exponent_7() const { return ___Exponent_7; }
	inline ByteU5BU5D_t790048969** get_address_of_Exponent_7() { return &___Exponent_7; }
	inline void set_Exponent_7(ByteU5BU5D_t790048969* value)
	{
		___Exponent_7 = value;
		Il2CppCodeGenWriteBarrier((&___Exponent_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t114625675_marshaled_pinvoke
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___D_2;
	uint8_t* ___DP_3;
	uint8_t* ___DQ_4;
	uint8_t* ___InverseQ_5;
	uint8_t* ___Modulus_6;
	uint8_t* ___Exponent_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t114625675_marshaled_com
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___D_2;
	uint8_t* ___DP_3;
	uint8_t* ___DQ_4;
	uint8_t* ___InverseQ_5;
	uint8_t* ___Modulus_6;
	uint8_t* ___Exponent_7;
};
#endif // RSAPARAMETERS_T114625675_H
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
#ifndef BODYPHYSICSEVENTARGS_T2280455377_H
#define BODYPHYSICSEVENTARGS_T2280455377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.BodyPhysicsEventArgs
struct  BodyPhysicsEventArgs_t2280455377 
{
public:
	// UnityEngine.GameObject VRTK.BodyPhysicsEventArgs::target
	GameObject_t1142533372 * ___target_0;
	// UnityEngine.Collider VRTK.BodyPhysicsEventArgs::collider
	Collider_t335618434 * ___collider_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(BodyPhysicsEventArgs_t2280455377, ___target_0)); }
	inline GameObject_t1142533372 * get_target_0() const { return ___target_0; }
	inline GameObject_t1142533372 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t1142533372 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}

	inline static int32_t get_offset_of_collider_1() { return static_cast<int32_t>(offsetof(BodyPhysicsEventArgs_t2280455377, ___collider_1)); }
	inline Collider_t335618434 * get_collider_1() const { return ___collider_1; }
	inline Collider_t335618434 ** get_address_of_collider_1() { return &___collider_1; }
	inline void set_collider_1(Collider_t335618434 * value)
	{
		___collider_1 = value;
		Il2CppCodeGenWriteBarrier((&___collider_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.BodyPhysicsEventArgs
struct BodyPhysicsEventArgs_t2280455377_marshaled_pinvoke
{
	GameObject_t1142533372 * ___target_0;
	Collider_t335618434 * ___collider_1;
};
// Native definition for COM marshalling of VRTK.BodyPhysicsEventArgs
struct BodyPhysicsEventArgs_t2280455377_marshaled_com
{
	GameObject_t1142533372 * ___target_0;
	Collider_t335618434 * ___collider_1;
};
#endif // BODYPHYSICSEVENTARGS_T2280455377_H
#ifndef CONTROL3DEVENTARGS_T2199345537_H
#define CONTROL3DEVENTARGS_T2199345537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.Control3DEventArgs
struct  Control3DEventArgs_t2199345537 
{
public:
	// System.Single VRTK.Control3DEventArgs::value
	float ___value_0;
	// System.Single VRTK.Control3DEventArgs::normalizedValue
	float ___normalizedValue_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Control3DEventArgs_t2199345537, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_normalizedValue_1() { return static_cast<int32_t>(offsetof(Control3DEventArgs_t2199345537, ___normalizedValue_1)); }
	inline float get_normalizedValue_1() const { return ___normalizedValue_1; }
	inline float* get_address_of_normalizedValue_1() { return &___normalizedValue_1; }
	inline void set_normalizedValue_1(float value)
	{
		___normalizedValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROL3DEVENTARGS_T2199345537_H
#ifndef KEYVALUEPAIR_2_T4221068149_H
#define KEYVALUEPAIR_2_T4221068149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t4221068149 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4221068149, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4221068149, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T4221068149_H
#ifndef CONTROLVALUERANGE_T2616622292_H
#define CONTROLVALUERANGE_T2616622292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.VRTK_Control/ControlValueRange
struct  ControlValueRange_t2616622292 
{
public:
	// System.Single VRTK.VRTK_Control/ControlValueRange::controlMin
	float ___controlMin_0;
	// System.Single VRTK.VRTK_Control/ControlValueRange::controlMax
	float ___controlMax_1;

public:
	inline static int32_t get_offset_of_controlMin_0() { return static_cast<int32_t>(offsetof(ControlValueRange_t2616622292, ___controlMin_0)); }
	inline float get_controlMin_0() const { return ___controlMin_0; }
	inline float* get_address_of_controlMin_0() { return &___controlMin_0; }
	inline void set_controlMin_0(float value)
	{
		___controlMin_0 = value;
	}

	inline static int32_t get_offset_of_controlMax_1() { return static_cast<int32_t>(offsetof(ControlValueRange_t2616622292, ___controlMax_1)); }
	inline float get_controlMax_1() const { return ___controlMax_1; }
	inline float* get_address_of_controlMax_1() { return &___controlMax_1; }
	inline void set_controlMax_1(float value)
	{
		___controlMax_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLVALUERANGE_T2616622292_H
#ifndef COLLISIONTRACKEREVENTARGS_T3474486631_H
#define COLLISIONTRACKEREVENTARGS_T3474486631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.CollisionTrackerEventArgs
struct  CollisionTrackerEventArgs_t3474486631 
{
public:
	// System.Boolean VRTK.CollisionTrackerEventArgs::isTrigger
	bool ___isTrigger_0;
	// UnityEngine.Collision VRTK.CollisionTrackerEventArgs::collision
	Collision_t574347704 * ___collision_1;
	// UnityEngine.Collider VRTK.CollisionTrackerEventArgs::collider
	Collider_t335618434 * ___collider_2;

public:
	inline static int32_t get_offset_of_isTrigger_0() { return static_cast<int32_t>(offsetof(CollisionTrackerEventArgs_t3474486631, ___isTrigger_0)); }
	inline bool get_isTrigger_0() const { return ___isTrigger_0; }
	inline bool* get_address_of_isTrigger_0() { return &___isTrigger_0; }
	inline void set_isTrigger_0(bool value)
	{
		___isTrigger_0 = value;
	}

	inline static int32_t get_offset_of_collision_1() { return static_cast<int32_t>(offsetof(CollisionTrackerEventArgs_t3474486631, ___collision_1)); }
	inline Collision_t574347704 * get_collision_1() const { return ___collision_1; }
	inline Collision_t574347704 ** get_address_of_collision_1() { return &___collision_1; }
	inline void set_collision_1(Collision_t574347704 * value)
	{
		___collision_1 = value;
		Il2CppCodeGenWriteBarrier((&___collision_1), value);
	}

	inline static int32_t get_offset_of_collider_2() { return static_cast<int32_t>(offsetof(CollisionTrackerEventArgs_t3474486631, ___collider_2)); }
	inline Collider_t335618434 * get_collider_2() const { return ___collider_2; }
	inline Collider_t335618434 ** get_address_of_collider_2() { return &___collider_2; }
	inline void set_collider_2(Collider_t335618434 * value)
	{
		___collider_2 = value;
		Il2CppCodeGenWriteBarrier((&___collider_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.CollisionTrackerEventArgs
struct CollisionTrackerEventArgs_t3474486631_marshaled_pinvoke
{
	int32_t ___isTrigger_0;
	Collision_t574347704_marshaled_pinvoke* ___collision_1;
	Collider_t335618434 * ___collider_2;
};
// Native definition for COM marshalling of VRTK.CollisionTrackerEventArgs
struct CollisionTrackerEventArgs_t3474486631_marshaled_com
{
	int32_t ___isTrigger_0;
	Collision_t574347704_marshaled_com* ___collision_1;
	Collider_t335618434 * ___collider_2;
};
#endif // COLLISIONTRACKEREVENTARGS_T3474486631_H
#ifndef PHOTONMESSAGEINFO_T3458961678_H
#define PHOTONMESSAGEINFO_T3458961678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonMessageInfo
struct  PhotonMessageInfo_t3458961678 
{
public:
	// System.Int32 PhotonMessageInfo::timeInt
	int32_t ___timeInt_0;
	// PhotonPlayer PhotonMessageInfo::sender
	PhotonPlayer_t3292821370 * ___sender_1;
	// PhotonView PhotonMessageInfo::photonView
	PhotonView_t4029667435 * ___photonView_2;

public:
	inline static int32_t get_offset_of_timeInt_0() { return static_cast<int32_t>(offsetof(PhotonMessageInfo_t3458961678, ___timeInt_0)); }
	inline int32_t get_timeInt_0() const { return ___timeInt_0; }
	inline int32_t* get_address_of_timeInt_0() { return &___timeInt_0; }
	inline void set_timeInt_0(int32_t value)
	{
		___timeInt_0 = value;
	}

	inline static int32_t get_offset_of_sender_1() { return static_cast<int32_t>(offsetof(PhotonMessageInfo_t3458961678, ___sender_1)); }
	inline PhotonPlayer_t3292821370 * get_sender_1() const { return ___sender_1; }
	inline PhotonPlayer_t3292821370 ** get_address_of_sender_1() { return &___sender_1; }
	inline void set_sender_1(PhotonPlayer_t3292821370 * value)
	{
		___sender_1 = value;
		Il2CppCodeGenWriteBarrier((&___sender_1), value);
	}

	inline static int32_t get_offset_of_photonView_2() { return static_cast<int32_t>(offsetof(PhotonMessageInfo_t3458961678, ___photonView_2)); }
	inline PhotonView_t4029667435 * get_photonView_2() const { return ___photonView_2; }
	inline PhotonView_t4029667435 ** get_address_of_photonView_2() { return &___photonView_2; }
	inline void set_photonView_2(PhotonView_t4029667435 * value)
	{
		___photonView_2 = value;
		Il2CppCodeGenWriteBarrier((&___photonView_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of PhotonMessageInfo
struct PhotonMessageInfo_t3458961678_marshaled_pinvoke
{
	int32_t ___timeInt_0;
	PhotonPlayer_t3292821370 * ___sender_1;
	PhotonView_t4029667435 * ___photonView_2;
};
// Native definition for COM marshalling of PhotonMessageInfo
struct PhotonMessageInfo_t3458961678_marshaled_com
{
	int32_t ___timeInt_0;
	PhotonPlayer_t3292821370 * ___sender_1;
	PhotonView_t4029667435 * ___photonView_2;
};
#endif // PHOTONMESSAGEINFO_T3458961678_H
#ifndef RANGE_T3099095356_H
#define RANGE_T3099095356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Range
struct  Range_t3099095356 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.Range::from
	int32_t ___from_0;
	// System.Int32 UnityEngine.SocialPlatforms.Range::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_from_0() { return static_cast<int32_t>(offsetof(Range_t3099095356, ___from_0)); }
	inline int32_t get_from_0() const { return ___from_0; }
	inline int32_t* get_address_of_from_0() { return &___from_0; }
	inline void set_from_0(int32_t value)
	{
		___from_0 = value;
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Range_t3099095356, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGE_T3099095356_H
#ifndef KEYVALUEPAIR_2_T1679278443_H
#define KEYVALUEPAIR_2_T1679278443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.NetworkHash128,System.Object>
struct  KeyValuePair_2_t1679278443 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	NetworkHash128_t1321008331  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1679278443, ___key_0)); }
	inline NetworkHash128_t1321008331  get_key_0() const { return ___key_0; }
	inline NetworkHash128_t1321008331 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(NetworkHash128_t1321008331  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1679278443, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T1679278443_H
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
#ifndef KEYVALUEPAIR_2_T3921727729_H
#define KEYVALUEPAIR_2_T3921727729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Networking.NetworkBroadcastResult>
struct  KeyValuePair_2_t3921727729 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	NetworkBroadcastResult_t2795851141  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3921727729, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3921727729, ___value_1)); }
	inline NetworkBroadcastResult_t2795851141  get_value_1() const { return ___value_1; }
	inline NetworkBroadcastResult_t2795851141 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(NetworkBroadcastResult_t2795851141  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3921727729_H
#ifndef KEYVALUEPAIR_2_T1051977441_H
#define KEYVALUEPAIR_2_T1051977441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  KeyValuePair_2_t1051977441 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	KeyValuePair_2_t4221068149  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1051977441, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1051977441, ___value_1)); }
	inline KeyValuePair_2_t4221068149  get_value_1() const { return ___value_1; }
	inline KeyValuePair_2_t4221068149 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(KeyValuePair_2_t4221068149  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1051977441_H
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
#ifndef KEYVALUEPAIR_2_T4249664710_H
#define KEYVALUEPAIR_2_T4249664710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>
struct  KeyValuePair_2_t4249664710 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	DemoData_t3123788122  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4249664710, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4249664710, ___value_1)); }
	inline DemoData_t3123788122  get_value_1() const { return ___value_1; }
	inline DemoData_t3123788122 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(DemoData_t3123788122  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T4249664710_H
#ifndef DATETIMEKIND_T3103823499_H
#define DATETIMEKIND_T3103823499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3103823499 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3103823499, ___value___1)); }
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
#endif // DATETIMEKIND_T3103823499_H
#ifndef KEYVALUEPAIR_2_T1202434855_H
#define KEYVALUEPAIR_2_T1202434855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.NetworkSceneId,System.Object>
struct  KeyValuePair_2_t1202434855 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	NetworkSceneId_t956954815  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1202434855, ___key_0)); }
	inline NetworkSceneId_t956954815  get_key_0() const { return ___key_0; }
	inline NetworkSceneId_t956954815 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(NetworkSceneId_t956954815  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1202434855, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T1202434855_H
#ifndef STREAMINGCONTEXTSTATES_T2354478334_H
#define STREAMINGCONTEXTSTATES_T2354478334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t2354478334 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_t2354478334, ___value___1)); }
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
#endif // STREAMINGCONTEXTSTATES_T2354478334_H
#ifndef PLAYABLEHANDLE_T2561236468_H
#define PLAYABLEHANDLE_T2561236468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t2561236468 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t2561236468, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t2561236468, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T2561236468_H
#ifndef TOUCHPHASE_T2150425211_H
#define TOUCHPHASE_T2150425211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchPhase
struct  TouchPhase_t2150425211 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchPhase_t2150425211, ___value___1)); }
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
#endif // TOUCHPHASE_T2150425211_H
#ifndef TOUCHTYPE_T1548321058_H
#define TOUCHTYPE_T1548321058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchType
struct  TouchType_t1548321058 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchType_t1548321058, ___value___1)); }
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
#endif // TOUCHTYPE_T1548321058_H
#ifndef TOOLTIPBUTTONS_T530392595_H
#define TOOLTIPBUTTONS_T530392595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.VRTK_ControllerTooltips/TooltipButtons
struct  TooltipButtons_t530392595 
{
public:
	// System.Int32 VRTK.VRTK_ControllerTooltips/TooltipButtons::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TooltipButtons_t530392595, ___value___1)); }
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
#endif // TOOLTIPBUTTONS_T530392595_H
#ifndef MODE_T1222871997_H
#define MODE_T1222871997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1222871997 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1222871997, ___value___1)); }
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
#endif // MODE_T1222871997_H
#ifndef ARHITTESTRESULTTYPE_T1341494766_H
#define ARHITTESTRESULTTYPE_T1341494766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARHitTestResultType
struct  ARHitTestResultType_t1341494766 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARHitTestResultType::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARHitTestResultType_t1341494766, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARHITTESTRESULTTYPE_T1341494766_H
#ifndef CONNECTIONPROTOCOL_T3005958552_H
#define CONNECTIONPROTOCOL_T3005958552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.ConnectionProtocol
struct  ConnectionProtocol_t3005958552 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConnectionProtocol_t3005958552, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONPROTOCOL_T3005958552_H
#ifndef TEAM_T2938819277_H
#define TEAM_T2938819277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PunTeams/Team
struct  Team_t2938819277 
{
public:
	// System.Byte PunTeams/Team::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Team_t2938819277, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEAM_T2938819277_H
#ifndef KEYCODE_T4203193714_H
#define KEYCODE_T4203193714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t4203193714 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t4203193714, ___value___1)); }
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
#endif // KEYCODE_T4203193714_H
#ifndef TEXTEDITOP_T3004135989_H
#define TEXTEDITOP_T3004135989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextEditor/TextEditOp
struct  TextEditOp_t3004135989 
{
public:
	// System.Int32 UnityEngine.TextEditor/TextEditOp::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextEditOp_t3004135989, ___value___1)); }
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
#endif // TEXTEDITOP_T3004135989_H
#ifndef LOGTYPE_T1650371394_H
#define LOGTYPE_T1650371394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t1650371394 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t1650371394, ___value___1)); }
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
#endif // LOGTYPE_T1650371394_H
#ifndef NETWORKID_T2209863903_H
#define NETWORKID_T2209863903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Types.NetworkID
struct  NetworkID_t2209863903 
{
public:
	// System.UInt64 UnityEngine.Networking.Types.NetworkID::value__
	uint64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NetworkID_t2209863903, ___value___1)); }
	inline uint64_t get_value___1() const { return ___value___1; }
	inline uint64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKID_T2209863903_H
#ifndef KEYVALUEPAIR_2_T803377269_H
#define KEYVALUEPAIR_2_T803377269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.NetworkInstanceId,System.Object>
struct  KeyValuePair_2_t803377269 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	NetworkInstanceId_t3634263817  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t803377269, ___key_0)); }
	inline NetworkInstanceId_t3634263817  get_key_0() const { return ___key_0; }
	inline NetworkInstanceId_t3634263817 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(NetworkInstanceId_t3634263817  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t803377269, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T803377269_H
#ifndef KEYVALUEPAIR_2_T726132791_H
#define KEYVALUEPAIR_2_T726132791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>
struct  KeyValuePair_2_t726132791 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	IntPtr_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t726132791, ___key_0)); }
	inline IntPtr_t get_key_0() const { return ___key_0; }
	inline IntPtr_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(IntPtr_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t726132791, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T726132791_H
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
#ifndef KEYVALUEPAIR_2_T3956032423_H
#define KEYVALUEPAIR_2_T3956032423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>
struct  KeyValuePair_2_t3956032423 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ConnectionPendingPlayers_t197839999  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3956032423, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3956032423, ___value_1)); }
	inline ConnectionPendingPlayers_t197839999  get_value_1() const { return ___value_1; }
	inline ConnectionPendingPlayers_t197839999 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ConnectionPendingPlayers_t197839999  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3956032423_H
#ifndef RAY_T1615892028_H
#define RAY_T1615892028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t1615892028 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t2230635801  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t2230635801  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t1615892028, ___m_Origin_0)); }
	inline Vector3_t2230635801  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t2230635801 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t2230635801  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t1615892028, ___m_Direction_1)); }
	inline Vector3_t2230635801  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t2230635801 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t2230635801  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T1615892028_H
#ifndef OBJECTCONTROLEVENTARGS_T3300778628_H
#define OBJECTCONTROLEVENTARGS_T3300778628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.ObjectControlEventArgs
struct  ObjectControlEventArgs_t3300778628 
{
public:
	// UnityEngine.GameObject VRTK.ObjectControlEventArgs::controlledGameObject
	GameObject_t1142533372 * ___controlledGameObject_0;
	// UnityEngine.Transform VRTK.ObjectControlEventArgs::directionDevice
	Transform_t1499854824 * ___directionDevice_1;
	// UnityEngine.Vector3 VRTK.ObjectControlEventArgs::axisDirection
	Vector3_t2230635801  ___axisDirection_2;
	// System.Single VRTK.ObjectControlEventArgs::axis
	float ___axis_3;
	// System.Single VRTK.ObjectControlEventArgs::deadzone
	float ___deadzone_4;
	// System.Boolean VRTK.ObjectControlEventArgs::currentlyFalling
	bool ___currentlyFalling_5;
	// System.Boolean VRTK.ObjectControlEventArgs::modifierActive
	bool ___modifierActive_6;

public:
	inline static int32_t get_offset_of_controlledGameObject_0() { return static_cast<int32_t>(offsetof(ObjectControlEventArgs_t3300778628, ___controlledGameObject_0)); }
	inline GameObject_t1142533372 * get_controlledGameObject_0() const { return ___controlledGameObject_0; }
	inline GameObject_t1142533372 ** get_address_of_controlledGameObject_0() { return &___controlledGameObject_0; }
	inline void set_controlledGameObject_0(GameObject_t1142533372 * value)
	{
		___controlledGameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___controlledGameObject_0), value);
	}

	inline static int32_t get_offset_of_directionDevice_1() { return static_cast<int32_t>(offsetof(ObjectControlEventArgs_t3300778628, ___directionDevice_1)); }
	inline Transform_t1499854824 * get_directionDevice_1() const { return ___directionDevice_1; }
	inline Transform_t1499854824 ** get_address_of_directionDevice_1() { return &___directionDevice_1; }
	inline void set_directionDevice_1(Transform_t1499854824 * value)
	{
		___directionDevice_1 = value;
		Il2CppCodeGenWriteBarrier((&___directionDevice_1), value);
	}

	inline static int32_t get_offset_of_axisDirection_2() { return static_cast<int32_t>(offsetof(ObjectControlEventArgs_t3300778628, ___axisDirection_2)); }
	inline Vector3_t2230635801  get_axisDirection_2() const { return ___axisDirection_2; }
	inline Vector3_t2230635801 * get_address_of_axisDirection_2() { return &___axisDirection_2; }
	inline void set_axisDirection_2(Vector3_t2230635801  value)
	{
		___axisDirection_2 = value;
	}

	inline static int32_t get_offset_of_axis_3() { return static_cast<int32_t>(offsetof(ObjectControlEventArgs_t3300778628, ___axis_3)); }
	inline float get_axis_3() const { return ___axis_3; }
	inline float* get_address_of_axis_3() { return &___axis_3; }
	inline void set_axis_3(float value)
	{
		___axis_3 = value;
	}

	inline static int32_t get_offset_of_deadzone_4() { return static_cast<int32_t>(offsetof(ObjectControlEventArgs_t3300778628, ___deadzone_4)); }
	inline float get_deadzone_4() const { return ___deadzone_4; }
	inline float* get_address_of_deadzone_4() { return &___deadzone_4; }
	inline void set_deadzone_4(float value)
	{
		___deadzone_4 = value;
	}

	inline static int32_t get_offset_of_currentlyFalling_5() { return static_cast<int32_t>(offsetof(ObjectControlEventArgs_t3300778628, ___currentlyFalling_5)); }
	inline bool get_currentlyFalling_5() const { return ___currentlyFalling_5; }
	inline bool* get_address_of_currentlyFalling_5() { return &___currentlyFalling_5; }
	inline void set_currentlyFalling_5(bool value)
	{
		___currentlyFalling_5 = value;
	}

	inline static int32_t get_offset_of_modifierActive_6() { return static_cast<int32_t>(offsetof(ObjectControlEventArgs_t3300778628, ___modifierActive_6)); }
	inline bool get_modifierActive_6() const { return ___modifierActive_6; }
	inline bool* get_address_of_modifierActive_6() { return &___modifierActive_6; }
	inline void set_modifierActive_6(bool value)
	{
		___modifierActive_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.ObjectControlEventArgs
struct ObjectControlEventArgs_t3300778628_marshaled_pinvoke
{
	GameObject_t1142533372 * ___controlledGameObject_0;
	Transform_t1499854824 * ___directionDevice_1;
	Vector3_t2230635801  ___axisDirection_2;
	float ___axis_3;
	float ___deadzone_4;
	int32_t ___currentlyFalling_5;
	int32_t ___modifierActive_6;
};
// Native definition for COM marshalling of VRTK.ObjectControlEventArgs
struct ObjectControlEventArgs_t3300778628_marshaled_com
{
	GameObject_t1142533372 * ___controlledGameObject_0;
	Transform_t1499854824 * ___directionDevice_1;
	Vector3_t2230635801  ___axisDirection_2;
	float ___axis_3;
	float ___deadzone_4;
	int32_t ___currentlyFalling_5;
	int32_t ___modifierActive_6;
};
#endif // OBJECTCONTROLEVENTARGS_T3300778628_H
#ifndef NULLABLE_1_T3162839034_H
#define NULLABLE_1_T3162839034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<UnityEngine.Color>
struct  Nullable_1_t3162839034 
{
public:
	// T System.Nullable`1::value
	Color_t3719709917  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3162839034, ___value_0)); }
	inline Color_t3719709917  get_value_0() const { return ___value_0; }
	inline Color_t3719709917 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Color_t3719709917  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3162839034, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T3162839034_H
#ifndef NULLABLE_1_T3989011516_H
#define NULLABLE_1_T3989011516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<UnityEngine.Quaternion>
struct  Nullable_1_t3989011516 
{
public:
	// T System.Nullable`1::value
	Quaternion_t250915103  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3989011516, ___value_0)); }
	inline Quaternion_t250915103  get_value_0() const { return ___value_0; }
	inline Quaternion_t250915103 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Quaternion_t250915103  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3989011516, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T3989011516_H
#ifndef RAYCASTHIT_T3842505297_H
#define RAYCASTHIT_T3842505297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t3842505297 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t2230635801  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t2230635801  ___m_Normal_1;
	// System.Int32 UnityEngine.RaycastHit::m_FaceID
	int32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t3157050673  ___m_UV_4;
	// UnityEngine.Collider UnityEngine.RaycastHit::m_Collider
	Collider_t335618434 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t3842505297, ___m_Point_0)); }
	inline Vector3_t2230635801  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t2230635801 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t2230635801  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t3842505297, ___m_Normal_1)); }
	inline Vector3_t2230635801  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t2230635801 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t2230635801  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t3842505297, ___m_FaceID_2)); }
	inline int32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline int32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(int32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t3842505297, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t3842505297, ___m_UV_4)); }
	inline Vector2_t3157050673  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t3157050673 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t3157050673  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t3842505297, ___m_Collider_5)); }
	inline Collider_t335618434 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider_t335618434 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider_t335618434 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit
struct RaycastHit_t3842505297_marshaled_pinvoke
{
	Vector3_t2230635801  ___m_Point_0;
	Vector3_t2230635801  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t3157050673  ___m_UV_4;
	Collider_t335618434 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit
struct RaycastHit_t3842505297_marshaled_com
{
	Vector3_t2230635801  ___m_Point_0;
	Vector3_t2230635801  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t3157050673  ___m_UV_4;
	Collider_t335618434 * ___m_Collider_5;
};
#endif // RAYCASTHIT_T3842505297_H
#ifndef UIVERTEX_T3049587149_H
#define UIVERTEX_T3049587149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UIVertex
struct  UIVertex_t3049587149 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t2230635801  ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t2230635801  ___normal_1;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_t3032372069  ___color_2;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv0
	Vector2_t3157050673  ___uv0_3;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv1
	Vector2_t3157050673  ___uv1_4;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv2
	Vector2_t3157050673  ___uv2_5;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv3
	Vector2_t3157050673  ___uv3_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_t2396709403  ___tangent_7;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(UIVertex_t3049587149, ___position_0)); }
	inline Vector3_t2230635801  get_position_0() const { return ___position_0; }
	inline Vector3_t2230635801 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t2230635801  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(UIVertex_t3049587149, ___normal_1)); }
	inline Vector3_t2230635801  get_normal_1() const { return ___normal_1; }
	inline Vector3_t2230635801 * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t2230635801  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(UIVertex_t3049587149, ___color_2)); }
	inline Color32_t3032372069  get_color_2() const { return ___color_2; }
	inline Color32_t3032372069 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color32_t3032372069  value)
	{
		___color_2 = value;
	}

	inline static int32_t get_offset_of_uv0_3() { return static_cast<int32_t>(offsetof(UIVertex_t3049587149, ___uv0_3)); }
	inline Vector2_t3157050673  get_uv0_3() const { return ___uv0_3; }
	inline Vector2_t3157050673 * get_address_of_uv0_3() { return &___uv0_3; }
	inline void set_uv0_3(Vector2_t3157050673  value)
	{
		___uv0_3 = value;
	}

	inline static int32_t get_offset_of_uv1_4() { return static_cast<int32_t>(offsetof(UIVertex_t3049587149, ___uv1_4)); }
	inline Vector2_t3157050673  get_uv1_4() const { return ___uv1_4; }
	inline Vector2_t3157050673 * get_address_of_uv1_4() { return &___uv1_4; }
	inline void set_uv1_4(Vector2_t3157050673  value)
	{
		___uv1_4 = value;
	}

	inline static int32_t get_offset_of_uv2_5() { return static_cast<int32_t>(offsetof(UIVertex_t3049587149, ___uv2_5)); }
	inline Vector2_t3157050673  get_uv2_5() const { return ___uv2_5; }
	inline Vector2_t3157050673 * get_address_of_uv2_5() { return &___uv2_5; }
	inline void set_uv2_5(Vector2_t3157050673  value)
	{
		___uv2_5 = value;
	}

	inline static int32_t get_offset_of_uv3_6() { return static_cast<int32_t>(offsetof(UIVertex_t3049587149, ___uv3_6)); }
	inline Vector2_t3157050673  get_uv3_6() const { return ___uv3_6; }
	inline Vector2_t3157050673 * get_address_of_uv3_6() { return &___uv3_6; }
	inline void set_uv3_6(Vector2_t3157050673  value)
	{
		___uv3_6 = value;
	}

	inline static int32_t get_offset_of_tangent_7() { return static_cast<int32_t>(offsetof(UIVertex_t3049587149, ___tangent_7)); }
	inline Vector4_t2396709403  get_tangent_7() const { return ___tangent_7; }
	inline Vector4_t2396709403 * get_address_of_tangent_7() { return &___tangent_7; }
	inline void set_tangent_7(Vector4_t2396709403  value)
	{
		___tangent_7 = value;
	}
};

struct UIVertex_t3049587149_StaticFields
{
public:
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_t3032372069  ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_t2396709403  ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_t3049587149  ___simpleVert_10;

public:
	inline static int32_t get_offset_of_s_DefaultColor_8() { return static_cast<int32_t>(offsetof(UIVertex_t3049587149_StaticFields, ___s_DefaultColor_8)); }
	inline Color32_t3032372069  get_s_DefaultColor_8() const { return ___s_DefaultColor_8; }
	inline Color32_t3032372069 * get_address_of_s_DefaultColor_8() { return &___s_DefaultColor_8; }
	inline void set_s_DefaultColor_8(Color32_t3032372069  value)
	{
		___s_DefaultColor_8 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(UIVertex_t3049587149_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_t2396709403  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_t2396709403 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_t2396709403  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_simpleVert_10() { return static_cast<int32_t>(offsetof(UIVertex_t3049587149_StaticFields, ___simpleVert_10)); }
	inline UIVertex_t3049587149  get_simpleVert_10() const { return ___simpleVert_10; }
	inline UIVertex_t3049587149 * get_address_of_simpleVert_10() { return &___simpleVert_10; }
	inline void set_simpleVert_10(UIVertex_t3049587149  value)
	{
		___simpleVert_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIVERTEX_T3049587149_H
#ifndef UICHARINFO_T626782636_H
#define UICHARINFO_T626782636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UICharInfo
struct  UICharInfo_t626782636 
{
public:
	// UnityEngine.Vector2 UnityEngine.UICharInfo::cursorPos
	Vector2_t3157050673  ___cursorPos_0;
	// System.Single UnityEngine.UICharInfo::charWidth
	float ___charWidth_1;

public:
	inline static int32_t get_offset_of_cursorPos_0() { return static_cast<int32_t>(offsetof(UICharInfo_t626782636, ___cursorPos_0)); }
	inline Vector2_t3157050673  get_cursorPos_0() const { return ___cursorPos_0; }
	inline Vector2_t3157050673 * get_address_of_cursorPos_0() { return &___cursorPos_0; }
	inline void set_cursorPos_0(Vector2_t3157050673  value)
	{
		___cursorPos_0 = value;
	}

	inline static int32_t get_offset_of_charWidth_1() { return static_cast<int32_t>(offsetof(UICharInfo_t626782636, ___charWidth_1)); }
	inline float get_charWidth_1() const { return ___charWidth_1; }
	inline float* get_address_of_charWidth_1() { return &___charWidth_1; }
	inline void set_charWidth_1(float value)
	{
		___charWidth_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UICHARINFO_T626782636_H
#ifndef POSITIONREWINDEVENTARGS_T2534296695_H
#define POSITIONREWINDEVENTARGS_T2534296695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.PositionRewindEventArgs
struct  PositionRewindEventArgs_t2534296695 
{
public:
	// UnityEngine.Vector3 VRTK.PositionRewindEventArgs::collidedPosition
	Vector3_t2230635801  ___collidedPosition_0;
	// UnityEngine.Vector3 VRTK.PositionRewindEventArgs::resetPosition
	Vector3_t2230635801  ___resetPosition_1;

public:
	inline static int32_t get_offset_of_collidedPosition_0() { return static_cast<int32_t>(offsetof(PositionRewindEventArgs_t2534296695, ___collidedPosition_0)); }
	inline Vector3_t2230635801  get_collidedPosition_0() const { return ___collidedPosition_0; }
	inline Vector3_t2230635801 * get_address_of_collidedPosition_0() { return &___collidedPosition_0; }
	inline void set_collidedPosition_0(Vector3_t2230635801  value)
	{
		___collidedPosition_0 = value;
	}

	inline static int32_t get_offset_of_resetPosition_1() { return static_cast<int32_t>(offsetof(PositionRewindEventArgs_t2534296695, ___resetPosition_1)); }
	inline Vector3_t2230635801  get_resetPosition_1() const { return ___resetPosition_1; }
	inline Vector3_t2230635801 * get_address_of_resetPosition_1() { return &___resetPosition_1; }
	inline void set_resetPosition_1(Vector3_t2230635801  value)
	{
		___resetPosition_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONREWINDEVENTARGS_T2534296695_H
#ifndef RAYCASTRESULT_T2643500156_H
#define RAYCASTRESULT_T2643500156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t2643500156 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t1142533372 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t1720792500 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t2230635801  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t2230635801  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t3157050673  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t2643500156, ___m_GameObject_0)); }
	inline GameObject_t1142533372 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_t1142533372 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_t1142533372 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameObject_0), value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t2643500156, ___module_1)); }
	inline BaseRaycaster_t1720792500 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_t1720792500 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_t1720792500 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((&___module_1), value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t2643500156, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t2643500156, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t2643500156, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t2643500156, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t2643500156, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t2643500156, ___worldPosition_7)); }
	inline Vector3_t2230635801  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t2230635801 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t2230635801  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t2643500156, ___worldNormal_8)); }
	inline Vector3_t2230635801  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t2230635801 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t2230635801  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t2643500156, ___screenPosition_9)); }
	inline Vector2_t3157050673  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_t3157050673 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_t3157050673  value)
	{
		___screenPosition_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t2643500156_marshaled_pinvoke
{
	GameObject_t1142533372 * ___m_GameObject_0;
	BaseRaycaster_t1720792500 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t2230635801  ___worldPosition_7;
	Vector3_t2230635801  ___worldNormal_8;
	Vector2_t3157050673  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t2643500156_marshaled_com
{
	GameObject_t1142533372 * ___m_GameObject_0;
	BaseRaycaster_t1720792500 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t2230635801  ___worldPosition_7;
	Vector3_t2230635801  ___worldNormal_8;
	Vector2_t3157050673  ___screenPosition_9;
};
#endif // RAYCASTRESULT_T2643500156_H
#ifndef COMMONMESSAGEKEYS_T3306862464_H
#define COMMONMESSAGEKEYS_T3306862464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.VRTK_Logger/CommonMessageKeys
struct  CommonMessageKeys_t3306862464 
{
public:
	// System.Int32 VRTK.VRTK_Logger/CommonMessageKeys::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CommonMessageKeys_t3306862464, ___value___1)); }
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
#endif // COMMONMESSAGEKEYS_T3306862464_H
#ifndef COLORBLOCK_T1477727903_H
#define COLORBLOCK_T1477727903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t1477727903 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t3719709917  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t3719709917  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t3719709917  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t3719709917  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t1477727903, ___m_NormalColor_0)); }
	inline Color_t3719709917  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t3719709917 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t3719709917  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t1477727903, ___m_HighlightedColor_1)); }
	inline Color_t3719709917  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t3719709917 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t3719709917  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t1477727903, ___m_PressedColor_2)); }
	inline Color_t3719709917  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t3719709917 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t3719709917  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t1477727903, ___m_DisabledColor_3)); }
	inline Color_t3719709917  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t3719709917 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t3719709917  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t1477727903, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t1477727903, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T1477727903_H
#ifndef COMBINEINSTANCE_T344583213_H
#define COMBINEINSTANCE_T344583213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CombineInstance
struct  CombineInstance_t344583213 
{
public:
	// System.Int32 UnityEngine.CombineInstance::m_MeshInstanceID
	int32_t ___m_MeshInstanceID_0;
	// System.Int32 UnityEngine.CombineInstance::m_SubMeshIndex
	int32_t ___m_SubMeshIndex_1;
	// UnityEngine.Matrix4x4 UnityEngine.CombineInstance::m_Transform
	Matrix4x4_t1557494393  ___m_Transform_2;
	// UnityEngine.Vector4 UnityEngine.CombineInstance::m_LightmapScaleOffset
	Vector4_t2396709403  ___m_LightmapScaleOffset_3;
	// UnityEngine.Vector4 UnityEngine.CombineInstance::m_RealtimeLightmapScaleOffset
	Vector4_t2396709403  ___m_RealtimeLightmapScaleOffset_4;

public:
	inline static int32_t get_offset_of_m_MeshInstanceID_0() { return static_cast<int32_t>(offsetof(CombineInstance_t344583213, ___m_MeshInstanceID_0)); }
	inline int32_t get_m_MeshInstanceID_0() const { return ___m_MeshInstanceID_0; }
	inline int32_t* get_address_of_m_MeshInstanceID_0() { return &___m_MeshInstanceID_0; }
	inline void set_m_MeshInstanceID_0(int32_t value)
	{
		___m_MeshInstanceID_0 = value;
	}

	inline static int32_t get_offset_of_m_SubMeshIndex_1() { return static_cast<int32_t>(offsetof(CombineInstance_t344583213, ___m_SubMeshIndex_1)); }
	inline int32_t get_m_SubMeshIndex_1() const { return ___m_SubMeshIndex_1; }
	inline int32_t* get_address_of_m_SubMeshIndex_1() { return &___m_SubMeshIndex_1; }
	inline void set_m_SubMeshIndex_1(int32_t value)
	{
		___m_SubMeshIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Transform_2() { return static_cast<int32_t>(offsetof(CombineInstance_t344583213, ___m_Transform_2)); }
	inline Matrix4x4_t1557494393  get_m_Transform_2() const { return ___m_Transform_2; }
	inline Matrix4x4_t1557494393 * get_address_of_m_Transform_2() { return &___m_Transform_2; }
	inline void set_m_Transform_2(Matrix4x4_t1557494393  value)
	{
		___m_Transform_2 = value;
	}

	inline static int32_t get_offset_of_m_LightmapScaleOffset_3() { return static_cast<int32_t>(offsetof(CombineInstance_t344583213, ___m_LightmapScaleOffset_3)); }
	inline Vector4_t2396709403  get_m_LightmapScaleOffset_3() const { return ___m_LightmapScaleOffset_3; }
	inline Vector4_t2396709403 * get_address_of_m_LightmapScaleOffset_3() { return &___m_LightmapScaleOffset_3; }
	inline void set_m_LightmapScaleOffset_3(Vector4_t2396709403  value)
	{
		___m_LightmapScaleOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_RealtimeLightmapScaleOffset_4() { return static_cast<int32_t>(offsetof(CombineInstance_t344583213, ___m_RealtimeLightmapScaleOffset_4)); }
	inline Vector4_t2396709403  get_m_RealtimeLightmapScaleOffset_4() const { return ___m_RealtimeLightmapScaleOffset_4; }
	inline Vector4_t2396709403 * get_address_of_m_RealtimeLightmapScaleOffset_4() { return &___m_RealtimeLightmapScaleOffset_4; }
	inline void set_m_RealtimeLightmapScaleOffset_4(Vector4_t2396709403  value)
	{
		___m_RealtimeLightmapScaleOffset_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMBINEINSTANCE_T344583213_H
#ifndef PENDINGOWNER_T3878207167_H
#define PENDINGOWNER_T3878207167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.ClientScene/PendingOwner
struct  PendingOwner_t3878207167 
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.ClientScene/PendingOwner::netId
	NetworkInstanceId_t3634263817  ___netId_0;
	// System.Int16 UnityEngine.Networking.ClientScene/PendingOwner::playerControllerId
	int16_t ___playerControllerId_1;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(PendingOwner_t3878207167, ___netId_0)); }
	inline NetworkInstanceId_t3634263817  get_netId_0() const { return ___netId_0; }
	inline NetworkInstanceId_t3634263817 * get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(NetworkInstanceId_t3634263817  value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_playerControllerId_1() { return static_cast<int32_t>(offsetof(PendingOwner_t3878207167, ___playerControllerId_1)); }
	inline int16_t get_playerControllerId_1() const { return ___playerControllerId_1; }
	inline int16_t* get_address_of_playerControllerId_1() { return &___playerControllerId_1; }
	inline void set_playerControllerId_1(int16_t value)
	{
		___playerControllerId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PENDINGOWNER_T3878207167_H
#ifndef CONTROLLERINTERACTIONEVENTARGS_T1195934311_H
#define CONTROLLERINTERACTIONEVENTARGS_T1195934311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.ControllerInteractionEventArgs
struct  ControllerInteractionEventArgs_t1195934311 
{
public:
	// System.UInt32 VRTK.ControllerInteractionEventArgs::controllerIndex
	uint32_t ___controllerIndex_0;
	// VRTK.VRTK_ControllerReference VRTK.ControllerInteractionEventArgs::controllerReference
	VRTK_ControllerReference_t4139909849 * ___controllerReference_1;
	// System.Single VRTK.ControllerInteractionEventArgs::buttonPressure
	float ___buttonPressure_2;
	// UnityEngine.Vector2 VRTK.ControllerInteractionEventArgs::touchpadAxis
	Vector2_t3157050673  ___touchpadAxis_3;
	// System.Single VRTK.ControllerInteractionEventArgs::touchpadAngle
	float ___touchpadAngle_4;

public:
	inline static int32_t get_offset_of_controllerIndex_0() { return static_cast<int32_t>(offsetof(ControllerInteractionEventArgs_t1195934311, ___controllerIndex_0)); }
	inline uint32_t get_controllerIndex_0() const { return ___controllerIndex_0; }
	inline uint32_t* get_address_of_controllerIndex_0() { return &___controllerIndex_0; }
	inline void set_controllerIndex_0(uint32_t value)
	{
		___controllerIndex_0 = value;
	}

	inline static int32_t get_offset_of_controllerReference_1() { return static_cast<int32_t>(offsetof(ControllerInteractionEventArgs_t1195934311, ___controllerReference_1)); }
	inline VRTK_ControllerReference_t4139909849 * get_controllerReference_1() const { return ___controllerReference_1; }
	inline VRTK_ControllerReference_t4139909849 ** get_address_of_controllerReference_1() { return &___controllerReference_1; }
	inline void set_controllerReference_1(VRTK_ControllerReference_t4139909849 * value)
	{
		___controllerReference_1 = value;
		Il2CppCodeGenWriteBarrier((&___controllerReference_1), value);
	}

	inline static int32_t get_offset_of_buttonPressure_2() { return static_cast<int32_t>(offsetof(ControllerInteractionEventArgs_t1195934311, ___buttonPressure_2)); }
	inline float get_buttonPressure_2() const { return ___buttonPressure_2; }
	inline float* get_address_of_buttonPressure_2() { return &___buttonPressure_2; }
	inline void set_buttonPressure_2(float value)
	{
		___buttonPressure_2 = value;
	}

	inline static int32_t get_offset_of_touchpadAxis_3() { return static_cast<int32_t>(offsetof(ControllerInteractionEventArgs_t1195934311, ___touchpadAxis_3)); }
	inline Vector2_t3157050673  get_touchpadAxis_3() const { return ___touchpadAxis_3; }
	inline Vector2_t3157050673 * get_address_of_touchpadAxis_3() { return &___touchpadAxis_3; }
	inline void set_touchpadAxis_3(Vector2_t3157050673  value)
	{
		___touchpadAxis_3 = value;
	}

	inline static int32_t get_offset_of_touchpadAngle_4() { return static_cast<int32_t>(offsetof(ControllerInteractionEventArgs_t1195934311, ___touchpadAngle_4)); }
	inline float get_touchpadAngle_4() const { return ___touchpadAngle_4; }
	inline float* get_address_of_touchpadAngle_4() { return &___touchpadAngle_4; }
	inline void set_touchpadAngle_4(float value)
	{
		___touchpadAngle_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.ControllerInteractionEventArgs
struct ControllerInteractionEventArgs_t1195934311_marshaled_pinvoke
{
	uint32_t ___controllerIndex_0;
	VRTK_ControllerReference_t4139909849 * ___controllerReference_1;
	float ___buttonPressure_2;
	Vector2_t3157050673  ___touchpadAxis_3;
	float ___touchpadAngle_4;
};
// Native definition for COM marshalling of VRTK.ControllerInteractionEventArgs
struct ControllerInteractionEventArgs_t1195934311_marshaled_com
{
	uint32_t ___controllerIndex_0;
	VRTK_ControllerReference_t4139909849 * ___controllerReference_1;
	float ___buttonPressure_2;
	Vector2_t3157050673  ___touchpadAxis_3;
	float ___touchpadAngle_4;
};
#endif // CONTROLLERINTERACTIONEVENTARGS_T1195934311_H
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
#ifndef PENDINGPLAYERINFO_T3169147961_H
#define PENDINGPLAYERINFO_T3169147961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo
struct  PendingPlayerInfo_t3169147961 
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo::netId
	NetworkInstanceId_t3634263817  ___netId_0;
	// System.Int16 UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo::playerControllerId
	int16_t ___playerControllerId_1;
	// UnityEngine.GameObject UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo::obj
	GameObject_t1142533372 * ___obj_2;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(PendingPlayerInfo_t3169147961, ___netId_0)); }
	inline NetworkInstanceId_t3634263817  get_netId_0() const { return ___netId_0; }
	inline NetworkInstanceId_t3634263817 * get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(NetworkInstanceId_t3634263817  value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_playerControllerId_1() { return static_cast<int32_t>(offsetof(PendingPlayerInfo_t3169147961, ___playerControllerId_1)); }
	inline int16_t get_playerControllerId_1() const { return ___playerControllerId_1; }
	inline int16_t* get_address_of_playerControllerId_1() { return &___playerControllerId_1; }
	inline void set_playerControllerId_1(int16_t value)
	{
		___playerControllerId_1 = value;
	}

	inline static int32_t get_offset_of_obj_2() { return static_cast<int32_t>(offsetof(PendingPlayerInfo_t3169147961, ___obj_2)); }
	inline GameObject_t1142533372 * get_obj_2() const { return ___obj_2; }
	inline GameObject_t1142533372 ** get_address_of_obj_2() { return &___obj_2; }
	inline void set_obj_2(GameObject_t1142533372 * value)
	{
		___obj_2 = value;
		Il2CppCodeGenWriteBarrier((&___obj_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo
struct PendingPlayerInfo_t3169147961_marshaled_pinvoke
{
	NetworkInstanceId_t3634263817  ___netId_0;
	int16_t ___playerControllerId_1;
	GameObject_t1142533372 * ___obj_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo
struct PendingPlayerInfo_t3169147961_marshaled_com
{
	NetworkInstanceId_t3634263817  ___netId_0;
	int16_t ___playerControllerId_1;
	GameObject_t1142533372 * ___obj_2;
};
#endif // PENDINGPLAYERINFO_T3169147961_H
#ifndef PEERINFOPLAYER_T3812962099_H
#define PEERINFOPLAYER_T3812962099_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.PeerInfoPlayer
struct  PeerInfoPlayer_t3812962099 
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.PeerInfoPlayer::netId
	NetworkInstanceId_t3634263817  ___netId_0;
	// System.Int16 UnityEngine.Networking.NetworkSystem.PeerInfoPlayer::playerControllerId
	int16_t ___playerControllerId_1;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(PeerInfoPlayer_t3812962099, ___netId_0)); }
	inline NetworkInstanceId_t3634263817  get_netId_0() const { return ___netId_0; }
	inline NetworkInstanceId_t3634263817 * get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(NetworkInstanceId_t3634263817  value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_playerControllerId_1() { return static_cast<int32_t>(offsetof(PeerInfoPlayer_t3812962099, ___playerControllerId_1)); }
	inline int16_t get_playerControllerId_1() const { return ___playerControllerId_1; }
	inline int16_t* get_address_of_playerControllerId_1() { return &___playerControllerId_1; }
	inline void set_playerControllerId_1(int16_t value)
	{
		___playerControllerId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PEERINFOPLAYER_T3812962099_H
#ifndef SCRIPTABLERENDERCONTEXT_T4149546352_H
#define SCRIPTABLERENDERCONTEXT_T4149546352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.ScriptableRenderContext
struct  ScriptableRenderContext_t4149546352 
{
public:
	// System.IntPtr UnityEngine.Experimental.Rendering.ScriptableRenderContext::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ScriptableRenderContext_t4149546352, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTABLERENDERCONTEXT_T4149546352_H
#ifndef PLAYABLEGRAPH_T2404823325_H
#define PLAYABLEGRAPH_T2404823325_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_t2404823325 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableGraph::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_t2404823325, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_t2404823325, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEGRAPH_T2404823325_H
#ifndef DATETIME_T2739188836_H
#define DATETIME_T2739188836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t2739188836 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t2249836928  ___ticks_10;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_11;

public:
	inline static int32_t get_offset_of_ticks_10() { return static_cast<int32_t>(offsetof(DateTime_t2739188836, ___ticks_10)); }
	inline TimeSpan_t2249836928  get_ticks_10() const { return ___ticks_10; }
	inline TimeSpan_t2249836928 * get_address_of_ticks_10() { return &___ticks_10; }
	inline void set_ticks_10(TimeSpan_t2249836928  value)
	{
		___ticks_10 = value;
	}

	inline static int32_t get_offset_of_kind_11() { return static_cast<int32_t>(offsetof(DateTime_t2739188836, ___kind_11)); }
	inline int32_t get_kind_11() const { return ___kind_11; }
	inline int32_t* get_address_of_kind_11() { return &___kind_11; }
	inline void set_kind_11(int32_t value)
	{
		___kind_11 = value;
	}
};

struct DateTime_t2739188836_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t2739188836  ___MaxValue_12;
	// System.DateTime System.DateTime::MinValue
	DateTime_t2739188836  ___MinValue_13;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t2563340356* ___ParseTimeFormats_14;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t2563340356* ___ParseYearDayMonthFormats_15;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t2563340356* ___ParseYearMonthDayFormats_16;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t2563340356* ___ParseDayMonthYearFormats_17;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t2563340356* ___ParseMonthDayYearFormats_18;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t2563340356* ___MonthDayShortFormats_19;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t2563340356* ___DayMonthShortFormats_20;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t977882480* ___daysmonth_21;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t977882480* ___daysmonthleap_22;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_23;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_24;

public:
	inline static int32_t get_offset_of_MaxValue_12() { return static_cast<int32_t>(offsetof(DateTime_t2739188836_StaticFields, ___MaxValue_12)); }
	inline DateTime_t2739188836  get_MaxValue_12() const { return ___MaxValue_12; }
	inline DateTime_t2739188836 * get_address_of_MaxValue_12() { return &___MaxValue_12; }
	inline void set_MaxValue_12(DateTime_t2739188836  value)
	{
		___MaxValue_12 = value;
	}

	inline static int32_t get_offset_of_MinValue_13() { return static_cast<int32_t>(offsetof(DateTime_t2739188836_StaticFields, ___MinValue_13)); }
	inline DateTime_t2739188836  get_MinValue_13() const { return ___MinValue_13; }
	inline DateTime_t2739188836 * get_address_of_MinValue_13() { return &___MinValue_13; }
	inline void set_MinValue_13(DateTime_t2739188836  value)
	{
		___MinValue_13 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_14() { return static_cast<int32_t>(offsetof(DateTime_t2739188836_StaticFields, ___ParseTimeFormats_14)); }
	inline StringU5BU5D_t2563340356* get_ParseTimeFormats_14() const { return ___ParseTimeFormats_14; }
	inline StringU5BU5D_t2563340356** get_address_of_ParseTimeFormats_14() { return &___ParseTimeFormats_14; }
	inline void set_ParseTimeFormats_14(StringU5BU5D_t2563340356* value)
	{
		___ParseTimeFormats_14 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_14), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_15() { return static_cast<int32_t>(offsetof(DateTime_t2739188836_StaticFields, ___ParseYearDayMonthFormats_15)); }
	inline StringU5BU5D_t2563340356* get_ParseYearDayMonthFormats_15() const { return ___ParseYearDayMonthFormats_15; }
	inline StringU5BU5D_t2563340356** get_address_of_ParseYearDayMonthFormats_15() { return &___ParseYearDayMonthFormats_15; }
	inline void set_ParseYearDayMonthFormats_15(StringU5BU5D_t2563340356* value)
	{
		___ParseYearDayMonthFormats_15 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_15), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_16() { return static_cast<int32_t>(offsetof(DateTime_t2739188836_StaticFields, ___ParseYearMonthDayFormats_16)); }
	inline StringU5BU5D_t2563340356* get_ParseYearMonthDayFormats_16() const { return ___ParseYearMonthDayFormats_16; }
	inline StringU5BU5D_t2563340356** get_address_of_ParseYearMonthDayFormats_16() { return &___ParseYearMonthDayFormats_16; }
	inline void set_ParseYearMonthDayFormats_16(StringU5BU5D_t2563340356* value)
	{
		___ParseYearMonthDayFormats_16 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_16), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_17() { return static_cast<int32_t>(offsetof(DateTime_t2739188836_StaticFields, ___ParseDayMonthYearFormats_17)); }
	inline StringU5BU5D_t2563340356* get_ParseDayMonthYearFormats_17() const { return ___ParseDayMonthYearFormats_17; }
	inline StringU5BU5D_t2563340356** get_address_of_ParseDayMonthYearFormats_17() { return &___ParseDayMonthYearFormats_17; }
	inline void set_ParseDayMonthYearFormats_17(StringU5BU5D_t2563340356* value)
	{
		___ParseDayMonthYearFormats_17 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_17), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_18() { return static_cast<int32_t>(offsetof(DateTime_t2739188836_StaticFields, ___ParseMonthDayYearFormats_18)); }
	inline StringU5BU5D_t2563340356* get_ParseMonthDayYearFormats_18() const { return ___ParseMonthDayYearFormats_18; }
	inline StringU5BU5D_t2563340356** get_address_of_ParseMonthDayYearFormats_18() { return &___ParseMonthDayYearFormats_18; }
	inline void set_ParseMonthDayYearFormats_18(StringU5BU5D_t2563340356* value)
	{
		___ParseMonthDayYearFormats_18 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_18), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_19() { return static_cast<int32_t>(offsetof(DateTime_t2739188836_StaticFields, ___MonthDayShortFormats_19)); }
	inline StringU5BU5D_t2563340356* get_MonthDayShortFormats_19() const { return ___MonthDayShortFormats_19; }
	inline StringU5BU5D_t2563340356** get_address_of_MonthDayShortFormats_19() { return &___MonthDayShortFormats_19; }
	inline void set_MonthDayShortFormats_19(StringU5BU5D_t2563340356* value)
	{
		___MonthDayShortFormats_19 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_19), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_20() { return static_cast<int32_t>(offsetof(DateTime_t2739188836_StaticFields, ___DayMonthShortFormats_20)); }
	inline StringU5BU5D_t2563340356* get_DayMonthShortFormats_20() const { return ___DayMonthShortFormats_20; }
	inline StringU5BU5D_t2563340356** get_address_of_DayMonthShortFormats_20() { return &___DayMonthShortFormats_20; }
	inline void set_DayMonthShortFormats_20(StringU5BU5D_t2563340356* value)
	{
		___DayMonthShortFormats_20 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_20), value);
	}

	inline static int32_t get_offset_of_daysmonth_21() { return static_cast<int32_t>(offsetof(DateTime_t2739188836_StaticFields, ___daysmonth_21)); }
	inline Int32U5BU5D_t977882480* get_daysmonth_21() const { return ___daysmonth_21; }
	inline Int32U5BU5D_t977882480** get_address_of_daysmonth_21() { return &___daysmonth_21; }
	inline void set_daysmonth_21(Int32U5BU5D_t977882480* value)
	{
		___daysmonth_21 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_21), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_22() { return static_cast<int32_t>(offsetof(DateTime_t2739188836_StaticFields, ___daysmonthleap_22)); }
	inline Int32U5BU5D_t977882480* get_daysmonthleap_22() const { return ___daysmonthleap_22; }
	inline Int32U5BU5D_t977882480** get_address_of_daysmonthleap_22() { return &___daysmonthleap_22; }
	inline void set_daysmonthleap_22(Int32U5BU5D_t977882480* value)
	{
		___daysmonthleap_22 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_22), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_23() { return static_cast<int32_t>(offsetof(DateTime_t2739188836_StaticFields, ___to_local_time_span_object_23)); }
	inline RuntimeObject * get_to_local_time_span_object_23() const { return ___to_local_time_span_object_23; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_23() { return &___to_local_time_span_object_23; }
	inline void set_to_local_time_span_object_23(RuntimeObject * value)
	{
		___to_local_time_span_object_23 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_23), value);
	}

	inline static int32_t get_offset_of_last_now_24() { return static_cast<int32_t>(offsetof(DateTime_t2739188836_StaticFields, ___last_now_24)); }
	inline int64_t get_last_now_24() const { return ___last_now_24; }
	inline int64_t* get_address_of_last_now_24() { return &___last_now_24; }
	inline void set_last_now_24(int64_t value)
	{
		___last_now_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T2739188836_H
#ifndef CONTROLLERTOOLTIPSEVENTARGS_T1238716540_H
#define CONTROLLERTOOLTIPSEVENTARGS_T1238716540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.ControllerTooltipsEventArgs
struct  ControllerTooltipsEventArgs_t1238716540 
{
public:
	// VRTK.VRTK_ControllerTooltips/TooltipButtons VRTK.ControllerTooltipsEventArgs::element
	int32_t ___element_0;

public:
	inline static int32_t get_offset_of_element_0() { return static_cast<int32_t>(offsetof(ControllerTooltipsEventArgs_t1238716540, ___element_0)); }
	inline int32_t get_element_0() const { return ___element_0; }
	inline int32_t* get_address_of_element_0() { return &___element_0; }
	inline void set_element_0(int32_t value)
	{
		___element_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLLERTOOLTIPSEVENTARGS_T1238716540_H
#ifndef KEYVALUEPAIR_2_T2574194977_H
#define KEYVALUEPAIR_2_T2574194977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>
struct  KeyValuePair_2_t2574194977 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2574194977, ___key_0)); }
	inline uint8_t get_key_0() const { return ___key_0; }
	inline uint8_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint8_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2574194977, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T2574194977_H
#ifndef HEADSETCONTROLLERAWAREEVENTARGS_T941492745_H
#define HEADSETCONTROLLERAWAREEVENTARGS_T941492745_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.HeadsetControllerAwareEventArgs
struct  HeadsetControllerAwareEventArgs_t941492745 
{
public:
	// UnityEngine.RaycastHit VRTK.HeadsetControllerAwareEventArgs::raycastHit
	RaycastHit_t3842505297  ___raycastHit_0;
	// System.UInt32 VRTK.HeadsetControllerAwareEventArgs::controllerIndex
	uint32_t ___controllerIndex_1;
	// VRTK.VRTK_ControllerReference VRTK.HeadsetControllerAwareEventArgs::controllerReference
	VRTK_ControllerReference_t4139909849 * ___controllerReference_2;

public:
	inline static int32_t get_offset_of_raycastHit_0() { return static_cast<int32_t>(offsetof(HeadsetControllerAwareEventArgs_t941492745, ___raycastHit_0)); }
	inline RaycastHit_t3842505297  get_raycastHit_0() const { return ___raycastHit_0; }
	inline RaycastHit_t3842505297 * get_address_of_raycastHit_0() { return &___raycastHit_0; }
	inline void set_raycastHit_0(RaycastHit_t3842505297  value)
	{
		___raycastHit_0 = value;
	}

	inline static int32_t get_offset_of_controllerIndex_1() { return static_cast<int32_t>(offsetof(HeadsetControllerAwareEventArgs_t941492745, ___controllerIndex_1)); }
	inline uint32_t get_controllerIndex_1() const { return ___controllerIndex_1; }
	inline uint32_t* get_address_of_controllerIndex_1() { return &___controllerIndex_1; }
	inline void set_controllerIndex_1(uint32_t value)
	{
		___controllerIndex_1 = value;
	}

	inline static int32_t get_offset_of_controllerReference_2() { return static_cast<int32_t>(offsetof(HeadsetControllerAwareEventArgs_t941492745, ___controllerReference_2)); }
	inline VRTK_ControllerReference_t4139909849 * get_controllerReference_2() const { return ___controllerReference_2; }
	inline VRTK_ControllerReference_t4139909849 ** get_address_of_controllerReference_2() { return &___controllerReference_2; }
	inline void set_controllerReference_2(VRTK_ControllerReference_t4139909849 * value)
	{
		___controllerReference_2 = value;
		Il2CppCodeGenWriteBarrier((&___controllerReference_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.HeadsetControllerAwareEventArgs
struct HeadsetControllerAwareEventArgs_t941492745_marshaled_pinvoke
{
	RaycastHit_t3842505297_marshaled_pinvoke ___raycastHit_0;
	uint32_t ___controllerIndex_1;
	VRTK_ControllerReference_t4139909849 * ___controllerReference_2;
};
// Native definition for COM marshalling of VRTK.HeadsetControllerAwareEventArgs
struct HeadsetControllerAwareEventArgs_t941492745_marshaled_com
{
	RaycastHit_t3842505297_marshaled_com ___raycastHit_0;
	uint32_t ___controllerIndex_1;
	VRTK_ControllerReference_t4139909849 * ___controllerReference_2;
};
#endif // HEADSETCONTROLLERAWAREEVENTARGS_T941492745_H
#ifndef KEYVALUEPAIR_2_T2269064906_H
#define KEYVALUEPAIR_2_T2269064906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>
struct  KeyValuePair_2_t2269064906 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2269064906, ___key_0)); }
	inline uint8_t get_key_0() const { return ___key_0; }
	inline uint8_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint8_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2269064906, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T2269064906_H
#ifndef KEYVALUEPAIR_2_T2922696894_H
#define KEYVALUEPAIR_2_T2922696894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct  KeyValuePair_2_t2922696894 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2922696894, ___key_0)); }
	inline uint8_t get_key_0() const { return ___key_0; }
	inline uint8_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint8_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2922696894, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2922696894_H
#ifndef DESTINATIONMARKEREVENTARGS_T2008947816_H
#define DESTINATIONMARKEREVENTARGS_T2008947816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.DestinationMarkerEventArgs
struct  DestinationMarkerEventArgs_t2008947816 
{
public:
	// System.Single VRTK.DestinationMarkerEventArgs::distance
	float ___distance_0;
	// UnityEngine.Transform VRTK.DestinationMarkerEventArgs::target
	Transform_t1499854824 * ___target_1;
	// UnityEngine.RaycastHit VRTK.DestinationMarkerEventArgs::raycastHit
	RaycastHit_t3842505297  ___raycastHit_2;
	// UnityEngine.Vector3 VRTK.DestinationMarkerEventArgs::destinationPosition
	Vector3_t2230635801  ___destinationPosition_3;
	// System.Nullable`1<UnityEngine.Quaternion> VRTK.DestinationMarkerEventArgs::destinationRotation
	Nullable_1_t3989011516  ___destinationRotation_4;
	// System.Boolean VRTK.DestinationMarkerEventArgs::forceDestinationPosition
	bool ___forceDestinationPosition_5;
	// System.Boolean VRTK.DestinationMarkerEventArgs::enableTeleport
	bool ___enableTeleport_6;
	// System.UInt32 VRTK.DestinationMarkerEventArgs::controllerIndex
	uint32_t ___controllerIndex_7;
	// VRTK.VRTK_ControllerReference VRTK.DestinationMarkerEventArgs::controllerReference
	VRTK_ControllerReference_t4139909849 * ___controllerReference_8;

public:
	inline static int32_t get_offset_of_distance_0() { return static_cast<int32_t>(offsetof(DestinationMarkerEventArgs_t2008947816, ___distance_0)); }
	inline float get_distance_0() const { return ___distance_0; }
	inline float* get_address_of_distance_0() { return &___distance_0; }
	inline void set_distance_0(float value)
	{
		___distance_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(DestinationMarkerEventArgs_t2008947816, ___target_1)); }
	inline Transform_t1499854824 * get_target_1() const { return ___target_1; }
	inline Transform_t1499854824 ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Transform_t1499854824 * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier((&___target_1), value);
	}

	inline static int32_t get_offset_of_raycastHit_2() { return static_cast<int32_t>(offsetof(DestinationMarkerEventArgs_t2008947816, ___raycastHit_2)); }
	inline RaycastHit_t3842505297  get_raycastHit_2() const { return ___raycastHit_2; }
	inline RaycastHit_t3842505297 * get_address_of_raycastHit_2() { return &___raycastHit_2; }
	inline void set_raycastHit_2(RaycastHit_t3842505297  value)
	{
		___raycastHit_2 = value;
	}

	inline static int32_t get_offset_of_destinationPosition_3() { return static_cast<int32_t>(offsetof(DestinationMarkerEventArgs_t2008947816, ___destinationPosition_3)); }
	inline Vector3_t2230635801  get_destinationPosition_3() const { return ___destinationPosition_3; }
	inline Vector3_t2230635801 * get_address_of_destinationPosition_3() { return &___destinationPosition_3; }
	inline void set_destinationPosition_3(Vector3_t2230635801  value)
	{
		___destinationPosition_3 = value;
	}

	inline static int32_t get_offset_of_destinationRotation_4() { return static_cast<int32_t>(offsetof(DestinationMarkerEventArgs_t2008947816, ___destinationRotation_4)); }
	inline Nullable_1_t3989011516  get_destinationRotation_4() const { return ___destinationRotation_4; }
	inline Nullable_1_t3989011516 * get_address_of_destinationRotation_4() { return &___destinationRotation_4; }
	inline void set_destinationRotation_4(Nullable_1_t3989011516  value)
	{
		___destinationRotation_4 = value;
	}

	inline static int32_t get_offset_of_forceDestinationPosition_5() { return static_cast<int32_t>(offsetof(DestinationMarkerEventArgs_t2008947816, ___forceDestinationPosition_5)); }
	inline bool get_forceDestinationPosition_5() const { return ___forceDestinationPosition_5; }
	inline bool* get_address_of_forceDestinationPosition_5() { return &___forceDestinationPosition_5; }
	inline void set_forceDestinationPosition_5(bool value)
	{
		___forceDestinationPosition_5 = value;
	}

	inline static int32_t get_offset_of_enableTeleport_6() { return static_cast<int32_t>(offsetof(DestinationMarkerEventArgs_t2008947816, ___enableTeleport_6)); }
	inline bool get_enableTeleport_6() const { return ___enableTeleport_6; }
	inline bool* get_address_of_enableTeleport_6() { return &___enableTeleport_6; }
	inline void set_enableTeleport_6(bool value)
	{
		___enableTeleport_6 = value;
	}

	inline static int32_t get_offset_of_controllerIndex_7() { return static_cast<int32_t>(offsetof(DestinationMarkerEventArgs_t2008947816, ___controllerIndex_7)); }
	inline uint32_t get_controllerIndex_7() const { return ___controllerIndex_7; }
	inline uint32_t* get_address_of_controllerIndex_7() { return &___controllerIndex_7; }
	inline void set_controllerIndex_7(uint32_t value)
	{
		___controllerIndex_7 = value;
	}

	inline static int32_t get_offset_of_controllerReference_8() { return static_cast<int32_t>(offsetof(DestinationMarkerEventArgs_t2008947816, ___controllerReference_8)); }
	inline VRTK_ControllerReference_t4139909849 * get_controllerReference_8() const { return ___controllerReference_8; }
	inline VRTK_ControllerReference_t4139909849 ** get_address_of_controllerReference_8() { return &___controllerReference_8; }
	inline void set_controllerReference_8(VRTK_ControllerReference_t4139909849 * value)
	{
		___controllerReference_8 = value;
		Il2CppCodeGenWriteBarrier((&___controllerReference_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.DestinationMarkerEventArgs
struct DestinationMarkerEventArgs_t2008947816_marshaled_pinvoke
{
	float ___distance_0;
	Transform_t1499854824 * ___target_1;
	RaycastHit_t3842505297_marshaled_pinvoke ___raycastHit_2;
	Vector3_t2230635801  ___destinationPosition_3;
	Nullable_1_t3989011516  ___destinationRotation_4;
	int32_t ___forceDestinationPosition_5;
	int32_t ___enableTeleport_6;
	uint32_t ___controllerIndex_7;
	VRTK_ControllerReference_t4139909849 * ___controllerReference_8;
};
// Native definition for COM marshalling of VRTK.DestinationMarkerEventArgs
struct DestinationMarkerEventArgs_t2008947816_marshaled_com
{
	float ___distance_0;
	Transform_t1499854824 * ___target_1;
	RaycastHit_t3842505297_marshaled_com ___raycastHit_2;
	Vector3_t2230635801  ___destinationPosition_3;
	Nullable_1_t3989011516  ___destinationRotation_4;
	int32_t ___forceDestinationPosition_5;
	int32_t ___enableTeleport_6;
	uint32_t ___controllerIndex_7;
	VRTK_ControllerReference_t4139909849 * ___controllerReference_8;
};
#endif // DESTINATIONMARKEREVENTARGS_T2008947816_H
#ifndef ARHITTESTRESULT_T2798272109_H
#define ARHITTESTRESULT_T2798272109_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARHitTestResult
struct  ARHitTestResult_t2798272109 
{
public:
	// UnityEngine.XR.iOS.ARHitTestResultType UnityEngine.XR.iOS.ARHitTestResult::type
	int64_t ___type_0;
	// System.Double UnityEngine.XR.iOS.ARHitTestResult::distance
	double ___distance_1;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARHitTestResult::localTransform
	Matrix4x4_t1557494393  ___localTransform_2;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARHitTestResult::worldTransform
	Matrix4x4_t1557494393  ___worldTransform_3;
	// System.String UnityEngine.XR.iOS.ARHitTestResult::anchorIdentifier
	String_t* ___anchorIdentifier_4;
	// System.Boolean UnityEngine.XR.iOS.ARHitTestResult::isValid
	bool ___isValid_5;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(ARHitTestResult_t2798272109, ___type_0)); }
	inline int64_t get_type_0() const { return ___type_0; }
	inline int64_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int64_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_distance_1() { return static_cast<int32_t>(offsetof(ARHitTestResult_t2798272109, ___distance_1)); }
	inline double get_distance_1() const { return ___distance_1; }
	inline double* get_address_of_distance_1() { return &___distance_1; }
	inline void set_distance_1(double value)
	{
		___distance_1 = value;
	}

	inline static int32_t get_offset_of_localTransform_2() { return static_cast<int32_t>(offsetof(ARHitTestResult_t2798272109, ___localTransform_2)); }
	inline Matrix4x4_t1557494393  get_localTransform_2() const { return ___localTransform_2; }
	inline Matrix4x4_t1557494393 * get_address_of_localTransform_2() { return &___localTransform_2; }
	inline void set_localTransform_2(Matrix4x4_t1557494393  value)
	{
		___localTransform_2 = value;
	}

	inline static int32_t get_offset_of_worldTransform_3() { return static_cast<int32_t>(offsetof(ARHitTestResult_t2798272109, ___worldTransform_3)); }
	inline Matrix4x4_t1557494393  get_worldTransform_3() const { return ___worldTransform_3; }
	inline Matrix4x4_t1557494393 * get_address_of_worldTransform_3() { return &___worldTransform_3; }
	inline void set_worldTransform_3(Matrix4x4_t1557494393  value)
	{
		___worldTransform_3 = value;
	}

	inline static int32_t get_offset_of_anchorIdentifier_4() { return static_cast<int32_t>(offsetof(ARHitTestResult_t2798272109, ___anchorIdentifier_4)); }
	inline String_t* get_anchorIdentifier_4() const { return ___anchorIdentifier_4; }
	inline String_t** get_address_of_anchorIdentifier_4() { return &___anchorIdentifier_4; }
	inline void set_anchorIdentifier_4(String_t* value)
	{
		___anchorIdentifier_4 = value;
		Il2CppCodeGenWriteBarrier((&___anchorIdentifier_4), value);
	}

	inline static int32_t get_offset_of_isValid_5() { return static_cast<int32_t>(offsetof(ARHitTestResult_t2798272109, ___isValid_5)); }
	inline bool get_isValid_5() const { return ___isValid_5; }
	inline bool* get_address_of_isValid_5() { return &___isValid_5; }
	inline void set_isValid_5(bool value)
	{
		___isValid_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARHitTestResult
struct ARHitTestResult_t2798272109_marshaled_pinvoke
{
	int64_t ___type_0;
	double ___distance_1;
	Matrix4x4_t1557494393  ___localTransform_2;
	Matrix4x4_t1557494393  ___worldTransform_3;
	char* ___anchorIdentifier_4;
	int32_t ___isValid_5;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARHitTestResult
struct ARHitTestResult_t2798272109_marshaled_com
{
	int64_t ___type_0;
	double ___distance_1;
	Matrix4x4_t1557494393  ___localTransform_2;
	Matrix4x4_t1557494393  ___worldTransform_3;
	Il2CppChar* ___anchorIdentifier_4;
	int32_t ___isValid_5;
};
#endif // ARHITTESTRESULT_T2798272109_H
#ifndef KEYVALUEPAIR_2_T1034103006_H
#define KEYVALUEPAIR_2_T1034103006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.KeyCode>
struct  KeyValuePair_2_t1034103006 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1034103006, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1034103006, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1034103006_H
#ifndef KEYVALUEPAIR_2_T4130012577_H
#define KEYVALUEPAIR_2_T4130012577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct  KeyValuePair_2_t4130012577 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4130012577, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4130012577, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T4130012577_H
#ifndef NAVIGATION_T1572503590_H
#define NAVIGATION_T1572503590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t1572503590 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3364017548 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3364017548 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3364017548 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3364017548 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1572503590, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t1572503590, ___m_SelectOnUp_1)); }
	inline Selectable_t3364017548 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3364017548 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3364017548 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t1572503590, ___m_SelectOnDown_2)); }
	inline Selectable_t3364017548 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3364017548 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3364017548 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t1572503590, ___m_SelectOnLeft_3)); }
	inline Selectable_t3364017548 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3364017548 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3364017548 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t1572503590, ___m_SelectOnRight_4)); }
	inline Selectable_t3364017548 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3364017548 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3364017548 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1572503590_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3364017548 * ___m_SelectOnUp_1;
	Selectable_t3364017548 * ___m_SelectOnDown_2;
	Selectable_t3364017548 * ___m_SelectOnLeft_3;
	Selectable_t3364017548 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1572503590_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3364017548 * ___m_SelectOnUp_1;
	Selectable_t3364017548 * ___m_SelectOnDown_2;
	Selectable_t3364017548 * ___m_SelectOnLeft_3;
	Selectable_t3364017548 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T1572503590_H
#ifndef KEYVALUEPAIR_2_T388957250_H
#define KEYVALUEPAIR_2_T388957250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<VRTK.VRTK_Logger/CommonMessageKeys,System.Object>
struct  KeyValuePair_2_t388957250 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t388957250, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t388957250, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T388957250_H
#ifndef KEYVALUEPAIR_2_T1042589238_H
#define KEYVALUEPAIR_2_T1042589238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<VRTK.VRTK_Logger/CommonMessageKeys,System.Int32>
struct  KeyValuePair_2_t1042589238 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1042589238, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1042589238, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1042589238_H
#ifndef STREAMINGCONTEXT_T3496369225_H
#define STREAMINGCONTEXT_T3496369225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t3496369225 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t3496369225, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t3496369225, ___additional_1)); }
	inline RuntimeObject * get_additional_1() const { return ___additional_1; }
	inline RuntimeObject ** get_address_of_additional_1() { return &___additional_1; }
	inline void set_additional_1(RuntimeObject * value)
	{
		___additional_1 = value;
		Il2CppCodeGenWriteBarrier((&___additional_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3496369225_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3496369225_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T3496369225_H
#ifndef TOUCH_T3220869452_H
#define TOUCH_T3220869452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Touch
struct  Touch_t3220869452 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t3157050673  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t3157050673  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t3157050673  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_t3220869452, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_t3220869452, ___m_Position_1)); }
	inline Vector2_t3157050673  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_t3157050673 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_t3157050673  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_t3220869452, ___m_RawPosition_2)); }
	inline Vector2_t3157050673  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_t3157050673 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_t3157050673  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_t3220869452, ___m_PositionDelta_3)); }
	inline Vector2_t3157050673  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_t3157050673 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_t3157050673  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_t3220869452, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_t3220869452, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_t3220869452, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_t3220869452, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_t3220869452, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_t3220869452, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_t3220869452, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_t3220869452, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_t3220869452, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_t3220869452, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCH_T3220869452_H
#ifndef PLAYABLE_T2356177164_H
#define PLAYABLE_T2356177164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.Playable
struct  Playable_t2356177164 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t2561236468  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t2356177164, ___m_Handle_0)); }
	inline PlayableHandle_t2561236468  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t2561236468 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t2561236468  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_t2356177164_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t2356177164  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_t2356177164_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_t2356177164  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_t2356177164 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_t2356177164  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLE_T2356177164_H
#ifndef KEYVALUEPAIR_2_T155104268_H
#define KEYVALUEPAIR_2_T155104268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.LogType,UnityEngine.Color>
struct  KeyValuePair_2_t155104268 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Color_t3719709917  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t155104268, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t155104268, ___value_1)); }
	inline Color_t3719709917  get_value_1() const { return ___value_1; }
	inline Color_t3719709917 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Color_t3719709917  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T155104268_H
#ifndef UIPOINTEREVENTARGS_T229069691_H
#define UIPOINTEREVENTARGS_T229069691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.UIPointerEventArgs
struct  UIPointerEventArgs_t229069691 
{
public:
	// System.UInt32 VRTK.UIPointerEventArgs::controllerIndex
	uint32_t ___controllerIndex_0;
	// VRTK.VRTK_ControllerReference VRTK.UIPointerEventArgs::controllerReference
	VRTK_ControllerReference_t4139909849 * ___controllerReference_1;
	// System.Boolean VRTK.UIPointerEventArgs::isActive
	bool ___isActive_2;
	// UnityEngine.GameObject VRTK.UIPointerEventArgs::currentTarget
	GameObject_t1142533372 * ___currentTarget_3;
	// UnityEngine.GameObject VRTK.UIPointerEventArgs::previousTarget
	GameObject_t1142533372 * ___previousTarget_4;
	// UnityEngine.EventSystems.RaycastResult VRTK.UIPointerEventArgs::raycastResult
	RaycastResult_t2643500156  ___raycastResult_5;

public:
	inline static int32_t get_offset_of_controllerIndex_0() { return static_cast<int32_t>(offsetof(UIPointerEventArgs_t229069691, ___controllerIndex_0)); }
	inline uint32_t get_controllerIndex_0() const { return ___controllerIndex_0; }
	inline uint32_t* get_address_of_controllerIndex_0() { return &___controllerIndex_0; }
	inline void set_controllerIndex_0(uint32_t value)
	{
		___controllerIndex_0 = value;
	}

	inline static int32_t get_offset_of_controllerReference_1() { return static_cast<int32_t>(offsetof(UIPointerEventArgs_t229069691, ___controllerReference_1)); }
	inline VRTK_ControllerReference_t4139909849 * get_controllerReference_1() const { return ___controllerReference_1; }
	inline VRTK_ControllerReference_t4139909849 ** get_address_of_controllerReference_1() { return &___controllerReference_1; }
	inline void set_controllerReference_1(VRTK_ControllerReference_t4139909849 * value)
	{
		___controllerReference_1 = value;
		Il2CppCodeGenWriteBarrier((&___controllerReference_1), value);
	}

	inline static int32_t get_offset_of_isActive_2() { return static_cast<int32_t>(offsetof(UIPointerEventArgs_t229069691, ___isActive_2)); }
	inline bool get_isActive_2() const { return ___isActive_2; }
	inline bool* get_address_of_isActive_2() { return &___isActive_2; }
	inline void set_isActive_2(bool value)
	{
		___isActive_2 = value;
	}

	inline static int32_t get_offset_of_currentTarget_3() { return static_cast<int32_t>(offsetof(UIPointerEventArgs_t229069691, ___currentTarget_3)); }
	inline GameObject_t1142533372 * get_currentTarget_3() const { return ___currentTarget_3; }
	inline GameObject_t1142533372 ** get_address_of_currentTarget_3() { return &___currentTarget_3; }
	inline void set_currentTarget_3(GameObject_t1142533372 * value)
	{
		___currentTarget_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentTarget_3), value);
	}

	inline static int32_t get_offset_of_previousTarget_4() { return static_cast<int32_t>(offsetof(UIPointerEventArgs_t229069691, ___previousTarget_4)); }
	inline GameObject_t1142533372 * get_previousTarget_4() const { return ___previousTarget_4; }
	inline GameObject_t1142533372 ** get_address_of_previousTarget_4() { return &___previousTarget_4; }
	inline void set_previousTarget_4(GameObject_t1142533372 * value)
	{
		___previousTarget_4 = value;
		Il2CppCodeGenWriteBarrier((&___previousTarget_4), value);
	}

	inline static int32_t get_offset_of_raycastResult_5() { return static_cast<int32_t>(offsetof(UIPointerEventArgs_t229069691, ___raycastResult_5)); }
	inline RaycastResult_t2643500156  get_raycastResult_5() const { return ___raycastResult_5; }
	inline RaycastResult_t2643500156 * get_address_of_raycastResult_5() { return &___raycastResult_5; }
	inline void set_raycastResult_5(RaycastResult_t2643500156  value)
	{
		___raycastResult_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.UIPointerEventArgs
struct UIPointerEventArgs_t229069691_marshaled_pinvoke
{
	uint32_t ___controllerIndex_0;
	VRTK_ControllerReference_t4139909849 * ___controllerReference_1;
	int32_t ___isActive_2;
	GameObject_t1142533372 * ___currentTarget_3;
	GameObject_t1142533372 * ___previousTarget_4;
	RaycastResult_t2643500156_marshaled_pinvoke ___raycastResult_5;
};
// Native definition for COM marshalling of VRTK.UIPointerEventArgs
struct UIPointerEventArgs_t229069691_marshaled_com
{
	uint32_t ___controllerIndex_0;
	VRTK_ControllerReference_t4139909849 * ___controllerReference_1;
	int32_t ___isActive_2;
	GameObject_t1142533372 * ___currentTarget_3;
	GameObject_t1142533372 * ___previousTarget_4;
	RaycastResult_t2643500156_marshaled_com ___raycastResult_5;
};
#endif // UIPOINTEREVENTARGS_T229069691_H
#ifndef KEYVALUEPAIR_2_T2440998535_H
#define KEYVALUEPAIR_2_T2440998535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct  KeyValuePair_2_t2440998535 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint64_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2440998535, ___key_0)); }
	inline uint64_t get_key_0() const { return ___key_0; }
	inline uint64_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint64_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2440998535, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T2440998535_H
#ifndef DATETIMEOFFSET_T2238900343_H
#define DATETIMEOFFSET_T2238900343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeOffset
struct  DateTimeOffset_t2238900343 
{
public:
	// System.DateTime System.DateTimeOffset::dt
	DateTime_t2739188836  ___dt_2;
	// System.TimeSpan System.DateTimeOffset::utc_offset
	TimeSpan_t2249836928  ___utc_offset_3;

public:
	inline static int32_t get_offset_of_dt_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t2238900343, ___dt_2)); }
	inline DateTime_t2739188836  get_dt_2() const { return ___dt_2; }
	inline DateTime_t2739188836 * get_address_of_dt_2() { return &___dt_2; }
	inline void set_dt_2(DateTime_t2739188836  value)
	{
		___dt_2 = value;
	}

	inline static int32_t get_offset_of_utc_offset_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t2238900343, ___utc_offset_3)); }
	inline TimeSpan_t2249836928  get_utc_offset_3() const { return ___utc_offset_3; }
	inline TimeSpan_t2249836928 * get_address_of_utc_offset_3() { return &___utc_offset_3; }
	inline void set_utc_offset_3(TimeSpan_t2249836928  value)
	{
		___utc_offset_3 = value;
	}
};

struct DateTimeOffset_t2238900343_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t2238900343  ___MaxValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t2238900343  ___MinValue_1;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t2238900343_StaticFields, ___MaxValue_0)); }
	inline DateTimeOffset_t2238900343  get_MaxValue_0() const { return ___MaxValue_0; }
	inline DateTimeOffset_t2238900343 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(DateTimeOffset_t2238900343  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t2238900343_StaticFields, ___MinValue_1)); }
	inline DateTimeOffset_t2238900343  get_MinValue_1() const { return ___MinValue_1; }
	inline DateTimeOffset_t2238900343 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(DateTimeOffset_t2238900343  value)
	{
		___MinValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSET_T2238900343_H



static  int32_t UnresolvedVirtualCall_0 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_1 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_2 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_3 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_4 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_5 (RuntimeObject * __this, int16_t ___Int161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_6 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_7 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_8 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_9 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_10 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_11 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, RuntimeObject * ___Object4, int32_t ___Int325, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_12 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_13 (RuntimeObject * __this, RSAParameters_t114625675  ___RSAParameters1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_14 (RuntimeObject * __this, DSAParameters_t2831787968  ___DSAParameters1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RSAParameters_t114625675  UnresolvedVirtualCall_15 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DSAParameters_t2831787968  UnresolvedVirtualCall_16 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_17 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_18 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_19 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_20 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_21 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_22 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, RuntimeObject * ___Object4, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_23 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_24 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_25 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_26 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_27 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_28 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_29 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_30 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_31 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DictionaryEntry_t1593501743  UnresolvedVirtualCall_32 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint8_t UnresolvedVirtualCall_33 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_34 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DateTime_t2739188836  UnresolvedVirtualCall_35 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Decimal_t1264892593  UnresolvedVirtualCall_36 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  double UnresolvedVirtualCall_37 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_38 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_39 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint16_t UnresolvedVirtualCall_40 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint32_t UnresolvedVirtualCall_41 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint64_t UnresolvedVirtualCall_42 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_43 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_44 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_45 (RuntimeObject * __this, DateTime_t2739188836  ___DateTime1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DateTime_t2739188836  UnresolvedVirtualCall_46 (RuntimeObject * __this, DateTime_t2739188836  ___DateTime1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  TimeSpan_t2249836928  UnresolvedVirtualCall_47 (RuntimeObject * __this, DateTime_t2739188836  ___DateTime1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_48 (RuntimeObject * __this, DateTime_t2739188836  ___DateTime1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_49 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, int32_t ___Int324, int32_t ___Int325, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_50 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, RuntimeObject * ___Object4, int32_t ___Int325, int32_t ___Int326, int32_t ___Int327, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint8_t UnresolvedVirtualCall_51 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_52 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_53 (RuntimeObject * __this, uint8_t ___Byte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_54 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_55 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_56 (RuntimeObject * __this, int64_t ___Int641, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_57 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, RuntimeObject * ___Object4, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_58 (RuntimeObject * __this, int64_t ___Int641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_59 (RuntimeObject * __this, int16_t ___Int161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_60 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_61 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_62 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_63 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, RuntimeObject * ___Object5, RuntimeObject * ___Object6, RuntimeObject * ___Object7, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  double UnresolvedVirtualCall_64 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_65 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  CustomAttributeTypedArgument_t215531209  UnresolvedVirtualCall_66 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  CustomAttributeNamedArgument_t4044901038  UnresolvedVirtualCall_67 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_68 (RuntimeObject * __this, OpCode_t2368491978  ___OpCode1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_69 (RuntimeObject * __this, IntPtr_t ___IntPtr1, RuntimeObject * ___Object2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_70 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_71 (RuntimeObject * __this, OpCode_t2368491978  ___OpCode1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_72 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, RuntimeObject * ___Object4, RuntimeObject * ___Object5, RuntimeObject * ___Object6, RuntimeObject * ___Object7, RuntimeObject * ___Object8, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeTypeHandle_t915944704  UnresolvedVirtualCall_73 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_74 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, RuntimeObject * ___Object4, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_75 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, RuntimeObject * ___Object4, RuntimeObject * ___Object5, RuntimeObject * ___Object6, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint16_t UnresolvedVirtualCall_76 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_77 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint32_t UnresolvedVirtualCall_78 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint64_t UnresolvedVirtualCall_79 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_80 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Decimal_t1264892593  UnresolvedVirtualCall_81 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_82 (RuntimeObject * __this, TimeSpan_t2249836928  ___TimeSpan1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_83 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_84 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_85 (RuntimeObject * __this, RuntimeObject * ___Object1, StreamingContext_t3496369225  ___StreamingContext2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_86 (RuntimeObject * __this, RuntimeObject * ___Object1, StreamingContext_t3496369225  ___StreamingContext2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_87 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_88 (RuntimeObject * __this, OpCode_t2368491978  ___OpCode1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_89 (RuntimeObject * __this, OpCode_t2368491978  ___OpCode1, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Label_t2538759339  UnresolvedVirtualCall_90 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_91 (RuntimeObject * __this, OpCode_t2368491978  ___OpCode1, Label_t2538759339  ___Label2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_92 (RuntimeObject * __this, OpCode_t2368491978  ___OpCode1, uint8_t ___Byte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_93 (RuntimeObject * __this, Label_t2538759339  ___Label1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_94 (RuntimeObject * __this, uint32_t ___UInt321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_95 (RuntimeObject * __this, int64_t ___Int641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_96 (RuntimeObject * __this, StreamingContext_t3496369225  ___StreamingContext1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_97 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_98 (RuntimeObject * __this, int64_t ___Int641, RuntimeObject * ___Object2, int64_t ___Int643, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_99 (RuntimeObject * __this, int64_t ___Int641, int32_t ___Int322, int64_t ___Int643, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_100 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_101 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_102 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, StreamingContext_t3496369225  ___StreamingContext3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_103 (RuntimeObject * __this, Decimal_t1264892593  ___Decimal1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_104 (RuntimeObject * __this, double ___Double1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_105 (RuntimeObject * __this, float ___Single1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_106 (RuntimeObject * __this, uint16_t ___UInt161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_107 (RuntimeObject * __this, uint64_t ___UInt641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_108 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, StreamingContext_t3496369225  ___StreamingContext3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeFieldHandle_t2468717698  UnresolvedVirtualCall_109 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeMethodHandle_t2363731392  UnresolvedVirtualCall_110 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_111 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DateTime_t2739188836  UnresolvedVirtualCall_112 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_113 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_114 (RuntimeObject * __this, int16_t ___Int161, int16_t ___Int162, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_115 (RuntimeObject * __this, int16_t ___Int161, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_116 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_117 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_118 (RuntimeObject * __this, IntPtr_t ___IntPtr1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  IntPtr_t UnresolvedVirtualCall_119 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_120 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, int32_t ___Int324, RuntimeObject * ___Object5, RuntimeObject * ___Object6, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_121 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, RuntimeObject * ___Object4, RuntimeObject * ___Object5, RuntimeObject * ___Object6, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_122 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, int32_t ___Int323, RuntimeObject * ___Object4, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_123 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, int8_t ___SByte4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_124 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_125 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_126 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_127 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, int8_t ___SByte3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_128 (RuntimeObject * __this, int16_t ___Int161, RuntimeObject * ___Object2, int8_t ___SByte3, int8_t ___SByte4, int8_t ___SByte5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_129 (RuntimeObject * __this, int16_t ___Int161, int8_t ___SByte2, int8_t ___SByte3, int8_t ___SByte4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_130 (RuntimeObject * __this, int16_t ___Int161, int16_t ___Int162, int8_t ___SByte3, int8_t ___SByte4, int8_t ___SByte5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_131 (RuntimeObject * __this, uint16_t ___UInt161, int8_t ___SByte2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_132 (RuntimeObject * __this, int32_t ___Int321, int8_t ___SByte2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_133 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_134 (RuntimeObject * __this, int8_t ___SByte1, int32_t ___Int322, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_135 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_136 (RuntimeObject * __this, uint8_t ___Byte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_137 (RuntimeObject * __this, uint8_t ___Byte1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_138 (RuntimeObject * __this, int32_t ___Int321, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t4221068149  UnresolvedVirtualCall_139 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_140 (RuntimeObject * __this, RuntimeObject * ___Object1, KeyValuePair_2_t4221068149  ___KeyValuePair_22, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_141 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_142 (RuntimeObject * __this, ScriptableRenderContext_t4149546352  ___ScriptableRenderContext1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_143 (RuntimeObject * __this, float ___Single1, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_144 (RuntimeObject * __this, Guid_t  ___Guid1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_145 (RuntimeObject * __this, Guid_t  ___Guid1, RuntimeObject * ___Object2, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Playable_t2356177164  UnresolvedVirtualCall_146 (RuntimeObject * __this, PlayableGraph_t2404823325  ___PlayableGraph1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Range_t3099095356  UnresolvedVirtualCall_147 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Rect_t2247532882  UnresolvedVirtualCall_148 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_149 (RuntimeObject * __this, uint8_t ___Byte1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_150 (RuntimeObject * __this, uint8_t ___Byte1, RuntimeObject * ___Object2, uint8_t ___Byte3, int8_t ___SByte4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_151 (RuntimeObject * __this, RuntimeObject * ___Object1, uint8_t ___Byte2, RuntimeObject * ___Object3, int8_t ___SByte4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_152 (RuntimeObject * __this, RuntimeObject * ___Object1, uint8_t ___Byte2, int8_t ___SByte3, uint8_t ___Byte4, int8_t ___SByte5, uint8_t ___Byte6, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_153 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_154 (RuntimeObject * __this, uint8_t ___Byte1, RuntimeObject * ___Object2, int8_t ___SByte3, uint8_t ___Byte4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_155 (RuntimeObject * __this, RuntimeObject * ___Object1, int16_t ___Int162, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_156 (RuntimeObject * __this, RuntimeObject * ___Object1, uint8_t ___Byte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_157 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector2_t3157050673  UnresolvedVirtualCall_158 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Touch_t3220869452  UnresolvedVirtualCall_159 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_160 (RuntimeObject * __this, float ___Single1, float ___Single2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_161 (RuntimeObject * __this, int32_t ___Int321, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_162 (RuntimeObject * __this, Color_t3719709917  ___Color1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Color_t3719709917  UnresolvedVirtualCall_163 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_164 (RuntimeObject * __this, Vector2_t3157050673  ___Vector21, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_165 (RuntimeObject * __this, Color_t3719709917  ___Color1, float ___Single2, int8_t ___SByte3, int8_t ___SByte4, int8_t ___SByte5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  UILineInfo_t1348464952  UnresolvedVirtualCall_166 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  UICharInfo_t626782636  UnresolvedVirtualCall_167 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_168 (RuntimeObject * __this, Vector2_t3157050673  ___Vector21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_169 (RuntimeObject * __this, Rect_t2247532882  ___Rect1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_170 (RuntimeObject * __this, float ___Single1, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_171 (RuntimeObject * __this, Color_t3719709917  ___Color1, float ___Single2, int8_t ___SByte3, int8_t ___SByte4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_172 (RuntimeObject * __this, float ___Single1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  UIVertex_t3049587149  UnresolvedVirtualCall_173 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_174 (RuntimeObject * __this, float ___Single1, float ___Single2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_175 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_176 (RuntimeObject * __this, int16_t ___Int161, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_177 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_178 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_179 (RuntimeObject * __this, int16_t ___Int161, RuntimeObject * ___Object2, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_180 (RuntimeObject * __this, RuntimeObject * ___Object1, int16_t ___Int162, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_181 (RuntimeObject * __this, RuntimeObject * ___Object1, int16_t ___Int162, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_182 (RuntimeObject * __this, RuntimeObject * ___Object1, int16_t ___Int162, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_183 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_184 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, int16_t ___Int164, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_185 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, int16_t ___Int164, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_186 (RuntimeObject * __this, int32_t ___Int321, uint8_t ___Byte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_187 (RuntimeObject * __this, RuntimeObject * ___Object1, uint8_t ___Byte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_188 (RuntimeObject * __this, uint8_t ___Byte1, RuntimeObject * ___Object2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_189 (RuntimeObject * __this, uint8_t ___Byte1, RuntimeObject * ___Object2, int8_t ___SByte3, uint8_t ___Byte4, int8_t ___SByte5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_190 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int8_t ___SByte3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_191 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, int8_t ___SByte5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_192 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, int32_t ___Int325, uint8_t ___Byte6, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_193 (RuntimeObject * __this, uint8_t ___Byte1, RuntimeObject * ___Object2, int8_t ___SByte3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_194 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_195 (RuntimeObject * __this, RuntimeObject * ___Object1, Vector3_t2230635801  ___Vector32, Quaternion_t250915103  ___Quaternion3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_196 (RuntimeObject * __this, Vector3_t2230635801  ___Vector31, Quaternion_t250915103  ___Quaternion2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_197 (RuntimeObject * __this, Vector3_t2230635801  ___Vector31, Vector3_t2230635801  ___Vector32, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_198 (RuntimeObject * __this, RuntimeObject * ___Object1, PhotonMessageInfo_t3458961678  ___PhotonMessageInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_199 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DestinationMarkerEventArgs_t2008947816  UnresolvedVirtualCall_200 (RuntimeObject * __this, float ___Single1, RuntimeObject * ___Object2, RaycastHit_t3842505297  ___RaycastHit3, Vector3_t2230635801  ___Vector34, RuntimeObject * ___Object5, int8_t ___SByte6, Nullable_1_t3989011516  ___Nullable_17, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_201 (RuntimeObject * __this, DestinationMarkerEventArgs_t2008947816  ___DestinationMarkerEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_202 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_203 (RuntimeObject * __this, int8_t ___SByte1, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_204 (RuntimeObject * __this, int32_t ___Int321, Color_t3719709917  ___Color2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_205 (RuntimeObject * __this, Color_t3719709917  ___Color1, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_206 (RuntimeObject * __this, int8_t ___SByte1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_207 (RuntimeObject * __this, Nullable_1_t3162839034  ___Nullable_11, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_208 (RuntimeObject * __this, RuntimeObject * ___Object1, Color_t3719709917  ___Color2, Color_t3719709917  ___Color3, float ___Single4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_209 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, Color_t3719709917  ___Color3, float ___Single4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_210 (RuntimeObject * __this, uint32_t ___UInt321, RuntimeObject * ___Object2, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_211 (RuntimeObject * __this, uint32_t ___UInt321, int32_t ___Int322, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_212 (RuntimeObject * __this, float ___Single1, float ___Single2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_213 (RuntimeObject * __this, Vector3_t2230635801  ___Vector31, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_214 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, Vector3_t2230635801  ___Vector33, float ___Single4, float ___Single5, int8_t ___SByte6, int8_t ___SByte7, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector3_t2230635801  UnresolvedVirtualCall_215 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_216 (RuntimeObject * __this, Vector3_t2230635801  ___Vector31, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_217 (RuntimeObject * __this, Color_t3719709917  ___Color1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_218 (RuntimeObject * __this, RuntimeObject * ___Object1, Vector3_t2230635801  ___Vector32, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_219 (RuntimeObject * __this, int8_t ___SByte1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_220 (RuntimeObject * __this, RaycastHit_t3842505297  ___RaycastHit1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RaycastHit_t3842505297  UnresolvedVirtualCall_221 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_222 (RuntimeObject * __this, int8_t ___SByte1, Vector3_t2230635801  ___Vector32, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_223 (RuntimeObject * __this, RuntimeObject * ___Object1, DestinationMarkerEventArgs_t2008947816  ___DestinationMarkerEventArgs2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DestinationMarkerEventArgs_t2008947816  UnresolvedVirtualCall_224 (RuntimeObject * __this, RuntimeObject * ___Object1, Vector3_t2230635801  ___Vector32, Nullable_1_t3989011516  ___Nullable_13, int8_t ___SByte4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_225 (RuntimeObject * __this, float ___Single1, Vector3_t2230635801  ___Vector32, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Quaternion_t250915103  UnresolvedVirtualCall_226 (RuntimeObject * __this, Nullable_1_t3989011516  ___Nullable_11, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_227 (RuntimeObject * __this, RuntimeObject * ___Object1, DestinationMarkerEventArgs_t2008947816  ___DestinationMarkerEventArgs2, Vector3_t2230635801  ___Vector33, Quaternion_t250915103  ___Quaternion4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector3_t2230635801  UnresolvedVirtualCall_228 (RuntimeObject * __this, Vector3_t2230635801  ___Vector31, RuntimeObject * ___Object2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_229 (RuntimeObject * __this, int32_t ___Int321, float ___Single2, RuntimeObject * ___Object3, int8_t ___SByte4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_230 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, Color_t3719709917  ___Color3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector3_t2230635801  UnresolvedVirtualCall_231 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector3_t2230635801  UnresolvedVirtualCall_232 (RuntimeObject * __this, Vector3_t2230635801  ___Vector31, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_233 (RuntimeObject * __this, RuntimeObject * ___Object1, Color_t3719709917  ___Color2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_234 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, int8_t ___SByte3, int32_t ___Int324, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  BodyPhysicsEventArgs_t2280455377  UnresolvedVirtualCall_235 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_236 (RuntimeObject * __this, BodyPhysicsEventArgs_t2280455377  ___BodyPhysicsEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_237 (RuntimeObject * __this, Vector3_t2230635801  ___Vector31, float ___Single2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_238 (RuntimeObject * __this, float ___Single1, RaycastHit_t3842505297  ___RaycastHit2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_239 (RuntimeObject * __this, RuntimeObject * ___Object1, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_240 (RuntimeObject * __this, RaycastHit_t3842505297  ___RaycastHit1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_241 (RuntimeObject * __this, float ___Single1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_242 (RuntimeObject * __this, int8_t ___SByte1, RaycastHit_t3842505297  ___RaycastHit2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_243 (RuntimeObject * __this, Vector3_t2230635801  ___Vector31, int8_t ___SByte2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Control3DEventArgs_t2199345537  UnresolvedVirtualCall_244 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_245 (RuntimeObject * __this, Control3DEventArgs_t2199345537  ___Control3DEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ObjectControlEventArgs_t3300778628  UnresolvedVirtualCall_246 (RuntimeObject * __this, Vector3_t2230635801  ___Vector31, float ___Single2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_247 (RuntimeObject * __this, ObjectControlEventArgs_t3300778628  ___ObjectControlEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_248 (RuntimeObject * __this, int8_t ___SByte1, int32_t ___Int322, RuntimeObject * ___Object3, RuntimeObject * ___Object4, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_249 (RuntimeObject * __this, int32_t ___Int321, int8_t ___SByte2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  CollisionTrackerEventArgs_t3474486631  UnresolvedVirtualCall_250 (RuntimeObject * __this, int8_t ___SByte1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ControlValueRange_t2616622292  UnresolvedVirtualCall_251 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ControllerActionsEventArgs_t3432693411  UnresolvedVirtualCall_252 (RuntimeObject * __this, uint32_t ___UInt321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_253 (RuntimeObject * __this, ControllerActionsEventArgs_t3432693411  ___ControllerActionsEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_254 (RuntimeObject * __this, int8_t ___SByte1, int32_t ___Int322, Nullable_1_t3162839034  ___Nullable_13, float ___Single4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ControllerInteractionEventArgs_t1195934311  UnresolvedVirtualCall_255 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_256 (RuntimeObject * __this, Vector2_t3157050673  ___Vector21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_257 (RuntimeObject * __this, int8_t ___SByte1, int32_t ___Int322, int8_t ___SByte3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_258 (RuntimeObject * __this, ControllerInteractionEventArgs_t1195934311  ___ControllerInteractionEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_259 (RuntimeObject * __this, int32_t ___Int321, int8_t ___SByte2, float ___Single3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ControllerInteractionEventArgs_t1195934311  UnresolvedVirtualCall_260 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_261 (RuntimeObject * __this, RuntimeObject * ___Object1, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_262 (RuntimeObject * __this, RuntimeObject * ___Object1, float ___Single2, float ___Single3, float ___Single4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_263 (RuntimeObject * __this, RuntimeObject * ___Object1, float ___Single2, float ___Single3, float ___Single4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_264 (RuntimeObject * __this, Nullable_1_t3162839034  ___Nullable_11, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_265 (RuntimeObject * __this, int32_t ___Int321, Color_t3719709917  ___Color2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Color_t3719709917  UnresolvedVirtualCall_266 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_267 (RuntimeObject * __this, Color_t3719709917  ___Color1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_268 (RuntimeObject * __this, ControllerRigidbodyActivatorEventArgs_t2563519100  ___ControllerRigidbodyActivatorEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_269 (RuntimeObject * __this, ControllerTooltipsEventArgs_t1238716540  ___ControllerTooltipsEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector3_t2230635801  UnresolvedVirtualCall_270 (RuntimeObject * __this, float ___Single1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_271 (RuntimeObject * __this, int32_t ___Int321, Vector3_t2230635801  ___Vector32, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_272 (RuntimeObject * __this, RuntimeObject * ___Object1, Color_t3719709917  ___Color2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_273 (RuntimeObject * __this, int32_t ___Int321, Vector3_t2230635801  ___Vector32, RuntimeObject * ___Object3, Color_t3719709917  ___Color4, float ___Single5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_274 (RuntimeObject * __this, Ray_t1615892028  ___Ray1, RuntimeObject * ___Object2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_275 (RuntimeObject * __this, Vector3_t2230635801  ___Vector31, Vector3_t2230635801  ___Vector32, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_276 (RuntimeObject * __this, Vector3_t2230635801  ___Vector31, Vector3_t2230635801  ___Vector32, float ___Single3, Vector3_t2230635801  ___Vector34, float ___Single5, RuntimeObject * ___Object6, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_277 (RuntimeObject * __this, RuntimeObject * ___Object1, DestinationMarkerEventArgs_t2008947816  ___DestinationMarkerEventArgs2, Vector3_t2230635801  ___Vector33, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DashTeleportEventArgs_t3930070999  UnresolvedVirtualCall_278 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_279 (RuntimeObject * __this, DashTeleportEventArgs_t3930070999  ___DashTeleportEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Nullable_1_t3989011516  UnresolvedVirtualCall_280 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_281 (RuntimeObject * __this, DestinationMarkerEventArgs_t2008947816  ___DestinationMarkerEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector3_t2230635801  UnresolvedVirtualCall_282 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  HeadsetCollisionEventArgs_t829346591  UnresolvedVirtualCall_283 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_284 (RuntimeObject * __this, HeadsetCollisionEventArgs_t829346591  ___HeadsetCollisionEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_285 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, RaycastHit_t3842505297  ___RaycastHit3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  HeadsetControllerAwareEventArgs_t941492745  UnresolvedVirtualCall_286 (RuntimeObject * __this, RaycastHit_t3842505297  ___RaycastHit1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_287 (RuntimeObject * __this, HeadsetControllerAwareEventArgs_t941492745  ___HeadsetControllerAwareEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  HeadsetFadeEventArgs_t3624876199  UnresolvedVirtualCall_288 (RuntimeObject * __this, RuntimeObject * ___Object1, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_289 (RuntimeObject * __this, HeadsetFadeEventArgs_t3624876199  ___HeadsetFadeEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_290 (RuntimeObject * __this, RuntimeObject * ___Object1, Vector3_t2230635801  ___Vector32, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_291 (RuntimeObject * __this, float ___Single1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_292 (RuntimeObject * __this, InteractableObjectEventArgs_t678850216  ___InteractableObjectEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_293 (RuntimeObject * __this, int8_t ___SByte1, InteractableObjectEventArgs_t678850216  ___InteractableObjectEventArgs2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_294 (RuntimeObject * __this, int8_t ___SByte1, float ___Single2, InteractableObjectEventArgs_t678850216  ___InteractableObjectEventArgs3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_295 (RuntimeObject * __this, Vector3_t2230635801  ___Vector31, Vector3_t2230635801  ___Vector32, Vector3_t2230635801  ___Vector33, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_296 (RuntimeObject * __this, RuntimeObject * ___Object1, InteractableObjectEventArgs_t678850216  ___InteractableObjectEventArgs2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_297 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  SnapDropZoneEventArgs_t2441986909  UnresolvedVirtualCall_298 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_299 (RuntimeObject * __this, SnapDropZoneEventArgs_t2441986909  ___SnapDropZoneEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_300 (RuntimeObject * __this, int8_t ___SByte1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, float ___Single4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  InteractControllerAppearanceEventArgs_t2956512999  UnresolvedVirtualCall_301 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_302 (RuntimeObject * __this, InteractControllerAppearanceEventArgs_t2956512999  ___InteractControllerAppearanceEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_303 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_304 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_305 (RuntimeObject * __this, int8_t ___SByte1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ObjectInteractEventArgs_t962020824  UnresolvedVirtualCall_306 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_307 (RuntimeObject * __this, ObjectInteractEventArgs_t962020824  ___ObjectInteractEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  InteractHapticsEventArgs_t3649463061  UnresolvedVirtualCall_308 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_309 (RuntimeObject * __this, InteractHapticsEventArgs_t3649463061  ___InteractHapticsEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_310 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, RuntimeObject * ___Object3, int8_t ___SByte4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_311 (RuntimeObject * __this, Vector3_t2230635801  ___Vector31, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Quaternion_t250915103  UnresolvedVirtualCall_312 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_313 (RuntimeObject * __this, RuntimeObject * ___Object1, Vector3_t2230635801  ___Vector32, Vector3_t2230635801  ___Vector33, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Quaternion_t250915103  UnresolvedVirtualCall_314 (RuntimeObject * __this, Quaternion_t250915103  ___Quaternion1, Quaternion_t250915103  ___Quaternion2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_315 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_316 (RuntimeObject * __this, RuntimeObject * ___Object1, float ___Single2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_317 (RuntimeObject * __this, RuntimeObject * ___Object1, Nullable_1_t3162839034  ___Nullable_12, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_318 (RuntimeObject * __this, Quaternion_t250915103  ___Quaternion1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ObjectTooltipEventArgs_t1056724890  UnresolvedVirtualCall_319 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_320 (RuntimeObject * __this, ObjectTooltipEventArgs_t1056724890  ___ObjectTooltipEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_321 (RuntimeObject * __this, ControllerInteractionEventArgs_t1195934311  ___ControllerInteractionEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_322 (RuntimeObject * __this, float ___Single1, float ___Single2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_323 (RuntimeObject * __this, float ___Single1, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  PanelMenuItemControllerEventArgs_t1113369656  UnresolvedVirtualCall_324 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_325 (RuntimeObject * __this, PanelMenuItemControllerEventArgs_t1113369656  ___PanelMenuItemControllerEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  PlayAreaCursorEventArgs_t87185873  UnresolvedVirtualCall_326 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_327 (RuntimeObject * __this, PlayAreaCursorEventArgs_t87185873  ___PlayAreaCursorEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_328 (RuntimeObject * __this, int32_t ___Int321, float ___Single2, float ___Single3, float ___Single4, float ___Single5, float ___Single6, Vector3_t2230635801  ___Vector37, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  PlayerClimbEventArgs_t3801355594  UnresolvedVirtualCall_329 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_330 (RuntimeObject * __this, PlayerClimbEventArgs_t3801355594  ___PlayerClimbEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DestinationMarkerEventArgs_t2008947816  UnresolvedVirtualCall_331 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_332 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, float ___Single3, int8_t ___SByte4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_333 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  PositionRewindEventArgs_t2534296695  UnresolvedVirtualCall_334 (RuntimeObject * __this, Vector3_t2230635801  ___Vector31, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_335 (RuntimeObject * __this, PositionRewindEventArgs_t2534296695  ___PositionRewindEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_336 (RuntimeObject * __this, float ___Single1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_337 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_338 (RuntimeObject * __this, uint32_t ___UInt321, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_339 (RuntimeObject * __this, int8_t ___SByte1, Vector2_t3157050673  ___Vector22, Vector2_t3157050673  ___Vector23, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector2_t3157050673  UnresolvedVirtualCall_340 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_341 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_342 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_343 (RuntimeObject * __this, Color_t3719709917  ___Color1, float ___Single2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_344 (RuntimeObject * __this, float ___Single1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector3_t2230635801  UnresolvedVirtualCall_345 (RuntimeObject * __this, Vector3_t2230635801  ___Vector31, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_346 (RuntimeObject * __this, float ___Single1, int8_t ___SByte2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_347 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, Vector3_t2230635801  ___Vector33, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector3_t2230635801  UnresolvedVirtualCall_348 (RuntimeObject * __this, Vector3_t2230635801  ___Vector31, Vector3_t2230635801  ___Vector32, float ___Single3, float ___Single4, int8_t ___SByte5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_349 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, Vector3_t2230635801  ___Vector33, float ___Single4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_350 (RuntimeObject * __this, float ___Single1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_351 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_352 (RuntimeObject * __this, int8_t ___SByte1, RaycastHit_t3842505297  ___RaycastHit2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_353 (RuntimeObject * __this, float ___Single1, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  VRTKTrackedControllerEventArgs_t2668893150  UnresolvedVirtualCall_354 (RuntimeObject * __this, uint32_t ___UInt321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_355 (RuntimeObject * __this, VRTKTrackedControllerEventArgs_t2668893150  ___VRTKTrackedControllerEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_356 (RuntimeObject * __this, RuntimeObject * ___Object1, Vector2_t3157050673  ___Vector22, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_357 (RuntimeObject * __this, RuntimeObject * ___Object1, Vector2_t3157050673  ___Vector22, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  UIPointerEventArgs_t229069691  UnresolvedVirtualCall_358 (RuntimeObject * __this, RaycastResult_t2643500156  ___RaycastResult1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_359 (RuntimeObject * __this, UIPointerEventArgs_t229069691  ___UIPointerEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  UIDraggableItemEventArgs_t2743003549  UnresolvedVirtualCall_360 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_361 (RuntimeObject * __this, UIDraggableItemEventArgs_t2743003549  ___UIDraggableItemEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_362 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, Ray_t1615892028  ___Ray3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_363 (RuntimeObject * __this, Ray_t1615892028  ___Ray1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_364 (RuntimeObject * __this, int8_t ___SByte1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_365 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, Vector3_t2230635801  ___Vector33, float ___Single4, int8_t ___SByte5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_366 (RuntimeObject * __this, uint8_t ___Byte1, uint8_t ___Byte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_367 (RuntimeObject * __this, uint8_t ___Byte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  NetworkInstanceId_t3634263817  UnresolvedVirtualCall_368 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_369 (RuntimeObject * __this, NetworkInstanceId_t3634263817  ___NetworkInstanceId1, NetworkInstanceId_t3634263817  ___NetworkInstanceId2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_370 (RuntimeObject * __this, NetworkInstanceId_t3634263817  ___NetworkInstanceId1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_371 (RuntimeObject * __this, int16_t ___Int161, int16_t ___Int162, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_372 (RuntimeObject * __this, ColorBlock_t1477727903  ___ColorBlock1, ColorBlock_t1477727903  ___ColorBlock2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_373 (RuntimeObject * __this, Navigation_t1572503590  ___Navigation1, Navigation_t1572503590  ___Navigation2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_374 (RuntimeObject * __this, SpriteState_t3054955245  ___SpriteState1, SpriteState_t3054955245  ___SpriteState2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_375 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_376 (RuntimeObject * __this, int8_t ___SByte1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_377 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_378 (RuntimeObject * __this, uint8_t ___Byte1, uint8_t ___Byte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_379 (RuntimeObject * __this, uint8_t ___Byte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_380 (RuntimeObject * __this, CustomAttributeNamedArgument_t4044901038  ___CustomAttributeNamedArgument1, CustomAttributeNamedArgument_t4044901038  ___CustomAttributeNamedArgument2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_381 (RuntimeObject * __this, CustomAttributeNamedArgument_t4044901038  ___CustomAttributeNamedArgument1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_382 (RuntimeObject * __this, CustomAttributeTypedArgument_t215531209  ___CustomAttributeTypedArgument1, CustomAttributeTypedArgument_t215531209  ___CustomAttributeTypedArgument2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_383 (RuntimeObject * __this, CustomAttributeTypedArgument_t215531209  ___CustomAttributeTypedArgument1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_384 (RuntimeObject * __this, float ___Single1, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_385 (RuntimeObject * __this, uint32_t ___UInt321, uint32_t ___UInt322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_386 (RuntimeObject * __this, uint32_t ___UInt321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_387 (RuntimeObject * __this, AnimatorClipInfo_t3624719347  ___AnimatorClipInfo1, AnimatorClipInfo_t3624719347  ___AnimatorClipInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_388 (RuntimeObject * __this, AnimatorClipInfo_t3624719347  ___AnimatorClipInfo1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_389 (RuntimeObject * __this, Color32_t3032372069  ___Color321, Color32_t3032372069  ___Color322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_390 (RuntimeObject * __this, Color32_t3032372069  ___Color321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_391 (RuntimeObject * __this, CombineInstance_t344583213  ___CombineInstance1, CombineInstance_t344583213  ___CombineInstance2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_392 (RuntimeObject * __this, CombineInstance_t344583213  ___CombineInstance1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_393 (RuntimeObject * __this, RaycastResult_t2643500156  ___RaycastResult1, RaycastResult_t2643500156  ___RaycastResult2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_394 (RuntimeObject * __this, RaycastResult_t2643500156  ___RaycastResult1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_395 (RuntimeObject * __this, ChannelPacket_t3876307771  ___ChannelPacket1, ChannelPacket_t3876307771  ___ChannelPacket2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_396 (RuntimeObject * __this, ChannelPacket_t3876307771  ___ChannelPacket1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_397 (RuntimeObject * __this, PendingOwner_t3878207167  ___PendingOwner1, PendingOwner_t3878207167  ___PendingOwner2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_398 (RuntimeObject * __this, PendingOwner_t3878207167  ___PendingOwner1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_399 (RuntimeObject * __this, InternalMsg_t2319104184  ___InternalMsg1, InternalMsg_t2319104184  ___InternalMsg2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_400 (RuntimeObject * __this, InternalMsg_t2319104184  ___InternalMsg1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_401 (RuntimeObject * __this, PendingPlayer_t3404685750  ___PendingPlayer1, PendingPlayer_t3404685750  ___PendingPlayer2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_402 (RuntimeObject * __this, PendingPlayer_t3404685750  ___PendingPlayer1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_403 (RuntimeObject * __this, PendingPlayerInfo_t3169147961  ___PendingPlayerInfo1, PendingPlayerInfo_t3169147961  ___PendingPlayerInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_404 (RuntimeObject * __this, PendingPlayerInfo_t3169147961  ___PendingPlayerInfo1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_405 (RuntimeObject * __this, CRCMessageEntry_t1496519431  ___CRCMessageEntry1, CRCMessageEntry_t1496519431  ___CRCMessageEntry2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_406 (RuntimeObject * __this, CRCMessageEntry_t1496519431  ___CRCMessageEntry1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_407 (RuntimeObject * __this, PeerInfoPlayer_t3812962099  ___PeerInfoPlayer1, PeerInfoPlayer_t3812962099  ___PeerInfoPlayer2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_408 (RuntimeObject * __this, PeerInfoPlayer_t3812962099  ___PeerInfoPlayer1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_409 (RuntimeObject * __this, UICharInfo_t626782636  ___UICharInfo1, UICharInfo_t626782636  ___UICharInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_410 (RuntimeObject * __this, UICharInfo_t626782636  ___UICharInfo1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_411 (RuntimeObject * __this, UILineInfo_t1348464952  ___UILineInfo1, UILineInfo_t1348464952  ___UILineInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_412 (RuntimeObject * __this, UILineInfo_t1348464952  ___UILineInfo1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_413 (RuntimeObject * __this, UIVertex_t3049587149  ___UIVertex1, UIVertex_t3049587149  ___UIVertex2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_414 (RuntimeObject * __this, UIVertex_t3049587149  ___UIVertex1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_415 (RuntimeObject * __this, Vector2_t3157050673  ___Vector21, Vector2_t3157050673  ___Vector22, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_416 (RuntimeObject * __this, Vector2_t3157050673  ___Vector21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_417 (RuntimeObject * __this, Vector3_t2230635801  ___Vector31, Vector3_t2230635801  ___Vector32, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_418 (RuntimeObject * __this, Vector3_t2230635801  ___Vector31, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_419 (RuntimeObject * __this, Vector4_t2396709403  ___Vector41, Vector4_t2396709403  ___Vector42, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_420 (RuntimeObject * __this, Vector4_t2396709403  ___Vector41, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_421 (RuntimeObject * __this, ARHitTestResult_t2798272109  ___ARHitTestResult1, ARHitTestResult_t2798272109  ___ARHitTestResult2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_422 (RuntimeObject * __this, ARHitTestResult_t2798272109  ___ARHitTestResult1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_423 (RuntimeObject * __this, CustomAttributeNamedArgument_t4044901038  ___CustomAttributeNamedArgument1, CustomAttributeNamedArgument_t4044901038  ___CustomAttributeNamedArgument2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_424 (RuntimeObject * __this, CustomAttributeTypedArgument_t215531209  ___CustomAttributeTypedArgument1, CustomAttributeTypedArgument_t215531209  ___CustomAttributeTypedArgument2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_425 (RuntimeObject * __this, uint32_t ___UInt321, uint32_t ___UInt322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_426 (RuntimeObject * __this, AnimatorClipInfo_t3624719347  ___AnimatorClipInfo1, AnimatorClipInfo_t3624719347  ___AnimatorClipInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_427 (RuntimeObject * __this, Color32_t3032372069  ___Color321, Color32_t3032372069  ___Color322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_428 (RuntimeObject * __this, CombineInstance_t344583213  ___CombineInstance1, CombineInstance_t344583213  ___CombineInstance2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_429 (RuntimeObject * __this, RaycastResult_t2643500156  ___RaycastResult1, RaycastResult_t2643500156  ___RaycastResult2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_430 (RuntimeObject * __this, ChannelPacket_t3876307771  ___ChannelPacket1, ChannelPacket_t3876307771  ___ChannelPacket2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_431 (RuntimeObject * __this, PendingOwner_t3878207167  ___PendingOwner1, PendingOwner_t3878207167  ___PendingOwner2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_432 (RuntimeObject * __this, InternalMsg_t2319104184  ___InternalMsg1, InternalMsg_t2319104184  ___InternalMsg2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_433 (RuntimeObject * __this, PendingPlayer_t3404685750  ___PendingPlayer1, PendingPlayer_t3404685750  ___PendingPlayer2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_434 (RuntimeObject * __this, PendingPlayerInfo_t3169147961  ___PendingPlayerInfo1, PendingPlayerInfo_t3169147961  ___PendingPlayerInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_435 (RuntimeObject * __this, CRCMessageEntry_t1496519431  ___CRCMessageEntry1, CRCMessageEntry_t1496519431  ___CRCMessageEntry2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_436 (RuntimeObject * __this, PeerInfoPlayer_t3812962099  ___PeerInfoPlayer1, PeerInfoPlayer_t3812962099  ___PeerInfoPlayer2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_437 (RuntimeObject * __this, UICharInfo_t626782636  ___UICharInfo1, UICharInfo_t626782636  ___UICharInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_438 (RuntimeObject * __this, UILineInfo_t1348464952  ___UILineInfo1, UILineInfo_t1348464952  ___UILineInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_439 (RuntimeObject * __this, UIVertex_t3049587149  ___UIVertex1, UIVertex_t3049587149  ___UIVertex2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_440 (RuntimeObject * __this, Vector2_t3157050673  ___Vector21, Vector2_t3157050673  ___Vector22, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_441 (RuntimeObject * __this, Vector3_t2230635801  ___Vector31, Vector3_t2230635801  ___Vector32, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_442 (RuntimeObject * __this, Vector4_t2396709403  ___Vector41, Vector4_t2396709403  ___Vector42, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_443 (RuntimeObject * __this, ARHitTestResult_t2798272109  ___ARHitTestResult1, ARHitTestResult_t2798272109  ___ARHitTestResult2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_444 (RuntimeObject * __this, DateTimeOffset_t2238900343  ___DateTimeOffset1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_445 (RuntimeObject * __this, Guid_t  ___Guid1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_446 (RuntimeObject * __this, TimeSpan_t2249836928  ___TimeSpan1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_447 (RuntimeObject * __this, DateTime_t2739188836  ___DateTime1, DateTime_t2739188836  ___DateTime2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_448 (RuntimeObject * __this, DateTimeOffset_t2238900343  ___DateTimeOffset1, DateTimeOffset_t2238900343  ___DateTimeOffset2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_449 (RuntimeObject * __this, Guid_t  ___Guid1, Guid_t  ___Guid2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_450 (RuntimeObject * __this, TimeSpan_t2249836928  ___TimeSpan1, TimeSpan_t2249836928  ___TimeSpan2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t2922696894  UnresolvedVirtualCall_451 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t2269064906  UnresolvedVirtualCall_452 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t2574194977  UnresolvedVirtualCall_453 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t2370583178  UnresolvedVirtualCall_454 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t1244962648  UnresolvedVirtualCall_455 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_456 (RuntimeObject * __this, int16_t ___Int161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t3212048677  UnresolvedVirtualCall_457 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t2558416689  UnresolvedVirtualCall_458 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t3956032423  UnresolvedVirtualCall_459 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_460 (RuntimeObject * __this, ConnectionPendingPlayers_t197839999  ___ConnectionPendingPlayers1, ConnectionPendingPlayers_t197839999  ___ConnectionPendingPlayers2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t726132791  UnresolvedVirtualCall_461 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_462 (RuntimeObject * __this, IntPtr_t ___IntPtr1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_463 (RuntimeObject * __this, IntPtr_t ___IntPtr1, IntPtr_t ___IntPtr2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t4249664710  UnresolvedVirtualCall_464 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_465 (RuntimeObject * __this, DemoData_t3123788122  ___DemoData1, DemoData_t3123788122  ___DemoData2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t3962249312  UnresolvedVirtualCall_466 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t1051977441  UnresolvedVirtualCall_467 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_468 (RuntimeObject * __this, KeyValuePair_2_t4221068149  ___KeyValuePair_21, KeyValuePair_2_t4221068149  ___KeyValuePair_22, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t579732841  UnresolvedVirtualCall_469 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t625431188  UnresolvedVirtualCall_470 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_471 (RuntimeObject * __this, int64_t ___Int641, int64_t ___Int642, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t3981853048  UnresolvedVirtualCall_472 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t1034103006  UnresolvedVirtualCall_473 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t3921727729  UnresolvedVirtualCall_474 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_475 (RuntimeObject * __this, NetworkBroadcastResult_t2795851141  ___NetworkBroadcastResult1, NetworkBroadcastResult_t2795851141  ___NetworkBroadcastResult2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t4130012577  UnresolvedVirtualCall_476 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t770086954  UnresolvedVirtualCall_477 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t155104268  UnresolvedVirtualCall_478 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_479 (RuntimeObject * __this, Color_t3719709917  ___Color1, Color_t3719709917  ___Color2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t1679278443  UnresolvedVirtualCall_480 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_481 (RuntimeObject * __this, NetworkHash128_t1321008331  ___NetworkHash1281, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_482 (RuntimeObject * __this, NetworkHash128_t1321008331  ___NetworkHash1281, NetworkHash128_t1321008331  ___NetworkHash1282, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t803377269  UnresolvedVirtualCall_483 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_484 (RuntimeObject * __this, NetworkInstanceId_t3634263817  ___NetworkInstanceId1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t1202434855  UnresolvedVirtualCall_485 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_486 (RuntimeObject * __this, NetworkSceneId_t956954815  ___NetworkSceneId1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_487 (RuntimeObject * __this, NetworkSceneId_t956954815  ___NetworkSceneId1, NetworkSceneId_t956954815  ___NetworkSceneId2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t2440998535  UnresolvedVirtualCall_488 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_489 (RuntimeObject * __this, uint64_t ___UInt641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_490 (RuntimeObject * __this, uint64_t ___UInt641, uint64_t ___UInt642, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t1042589238  UnresolvedVirtualCall_491 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t388957250  UnresolvedVirtualCall_492 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_493 (RuntimeObject * __this, DemoData_t3123788122  ___DemoData1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_494 (RuntimeObject * __this, KeyValuePair_2_t4221068149  ___KeyValuePair_21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_495 (RuntimeObject * __this, DateTime_t2739188836  ___DateTime1, DateTime_t2739188836  ___DateTime2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_496 (RuntimeObject * __this, DateTimeOffset_t2238900343  ___DateTimeOffset1, DateTimeOffset_t2238900343  ___DateTimeOffset2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_497 (RuntimeObject * __this, Guid_t  ___Guid1, Guid_t  ___Guid2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_498 (RuntimeObject * __this, int64_t ___Int641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_499 (RuntimeObject * __this, TimeSpan_t2249836928  ___TimeSpan1, TimeSpan_t2249836928  ___TimeSpan2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_500 (RuntimeObject * __this, Color_t3719709917  ___Color1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_501 (RuntimeObject * __this, NetworkBroadcastResult_t2795851141  ___NetworkBroadcastResult1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_502 (RuntimeObject * __this, ConnectionPendingPlayers_t197839999  ___ConnectionPendingPlayers1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_503 (RuntimeObject * __this, ColorBlock_t1477727903  ___ColorBlock1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_504 (RuntimeObject * __this, Navigation_t1572503590  ___Navigation1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_505 (RuntimeObject * __this, SpriteState_t3054955245  ___SpriteState1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  CustomAttributeNamedArgument_t4044901038  UnresolvedVirtualCall_506 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  CustomAttributeTypedArgument_t215531209  UnresolvedVirtualCall_507 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  AnimatorClipInfo_t3624719347  UnresolvedVirtualCall_508 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Color32_t3032372069  UnresolvedVirtualCall_509 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  CombineInstance_t344583213  UnresolvedVirtualCall_510 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RaycastResult_t2643500156  UnresolvedVirtualCall_511 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ChannelPacket_t3876307771  UnresolvedVirtualCall_512 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  PendingOwner_t3878207167  UnresolvedVirtualCall_513 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  InternalMsg_t2319104184  UnresolvedVirtualCall_514 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  PendingPlayer_t3404685750  UnresolvedVirtualCall_515 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  PendingPlayerInfo_t3169147961  UnresolvedVirtualCall_516 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  CRCMessageEntry_t1496519431  UnresolvedVirtualCall_517 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  PeerInfoPlayer_t3812962099  UnresolvedVirtualCall_518 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  UICharInfo_t626782636  UnresolvedVirtualCall_519 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  UILineInfo_t1348464952  UnresolvedVirtualCall_520 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  UIVertex_t3049587149  UnresolvedVirtualCall_521 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector4_t2396709403  UnresolvedVirtualCall_522 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ARHitTestResult_t2798272109  UnresolvedVirtualCall_523 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint8_t UnresolvedVirtualCall_524 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_525 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_526 (RuntimeObject * __this, int32_t ___Int321, CustomAttributeNamedArgument_t4044901038  ___CustomAttributeNamedArgument2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_527 (RuntimeObject * __this, CustomAttributeNamedArgument_t4044901038  ___CustomAttributeNamedArgument1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_528 (RuntimeObject * __this, int32_t ___Int321, CustomAttributeTypedArgument_t215531209  ___CustomAttributeTypedArgument2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_529 (RuntimeObject * __this, CustomAttributeTypedArgument_t215531209  ___CustomAttributeTypedArgument1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_530 (RuntimeObject * __this, int32_t ___Int321, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_531 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_532 (RuntimeObject * __this, int32_t ___Int321, uint32_t ___UInt322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_533 (RuntimeObject * __this, uint32_t ___UInt321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint32_t UnresolvedVirtualCall_534 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_535 (RuntimeObject * __this, int32_t ___Int321, AnimatorClipInfo_t3624719347  ___AnimatorClipInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_536 (RuntimeObject * __this, AnimatorClipInfo_t3624719347  ___AnimatorClipInfo1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  AnimatorClipInfo_t3624719347  UnresolvedVirtualCall_537 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_538 (RuntimeObject * __this, int32_t ___Int321, Color32_t3032372069  ___Color322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_539 (RuntimeObject * __this, Color32_t3032372069  ___Color321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Color32_t3032372069  UnresolvedVirtualCall_540 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_541 (RuntimeObject * __this, int32_t ___Int321, CombineInstance_t344583213  ___CombineInstance2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_542 (RuntimeObject * __this, CombineInstance_t344583213  ___CombineInstance1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  CombineInstance_t344583213  UnresolvedVirtualCall_543 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_544 (RuntimeObject * __this, int32_t ___Int321, RaycastResult_t2643500156  ___RaycastResult2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_545 (RuntimeObject * __this, RaycastResult_t2643500156  ___RaycastResult1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RaycastResult_t2643500156  UnresolvedVirtualCall_546 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_547 (RuntimeObject * __this, int32_t ___Int321, ChannelPacket_t3876307771  ___ChannelPacket2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_548 (RuntimeObject * __this, ChannelPacket_t3876307771  ___ChannelPacket1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ChannelPacket_t3876307771  UnresolvedVirtualCall_549 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_550 (RuntimeObject * __this, int32_t ___Int321, PendingOwner_t3878207167  ___PendingOwner2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_551 (RuntimeObject * __this, PendingOwner_t3878207167  ___PendingOwner1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  PendingOwner_t3878207167  UnresolvedVirtualCall_552 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_553 (RuntimeObject * __this, int32_t ___Int321, InternalMsg_t2319104184  ___InternalMsg2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_554 (RuntimeObject * __this, InternalMsg_t2319104184  ___InternalMsg1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  InternalMsg_t2319104184  UnresolvedVirtualCall_555 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_556 (RuntimeObject * __this, int32_t ___Int321, PendingPlayer_t3404685750  ___PendingPlayer2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_557 (RuntimeObject * __this, PendingPlayer_t3404685750  ___PendingPlayer1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  PendingPlayer_t3404685750  UnresolvedVirtualCall_558 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_559 (RuntimeObject * __this, int32_t ___Int321, PendingPlayerInfo_t3169147961  ___PendingPlayerInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_560 (RuntimeObject * __this, PendingPlayerInfo_t3169147961  ___PendingPlayerInfo1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  PendingPlayerInfo_t3169147961  UnresolvedVirtualCall_561 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_562 (RuntimeObject * __this, int32_t ___Int321, CRCMessageEntry_t1496519431  ___CRCMessageEntry2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_563 (RuntimeObject * __this, CRCMessageEntry_t1496519431  ___CRCMessageEntry1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  CRCMessageEntry_t1496519431  UnresolvedVirtualCall_564 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_565 (RuntimeObject * __this, int32_t ___Int321, PeerInfoPlayer_t3812962099  ___PeerInfoPlayer2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_566 (RuntimeObject * __this, PeerInfoPlayer_t3812962099  ___PeerInfoPlayer1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  PeerInfoPlayer_t3812962099  UnresolvedVirtualCall_567 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_568 (RuntimeObject * __this, int32_t ___Int321, UICharInfo_t626782636  ___UICharInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_569 (RuntimeObject * __this, UICharInfo_t626782636  ___UICharInfo1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_570 (RuntimeObject * __this, int32_t ___Int321, UILineInfo_t1348464952  ___UILineInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_571 (RuntimeObject * __this, UILineInfo_t1348464952  ___UILineInfo1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_572 (RuntimeObject * __this, int32_t ___Int321, UIVertex_t3049587149  ___UIVertex2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_573 (RuntimeObject * __this, UIVertex_t3049587149  ___UIVertex1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_574 (RuntimeObject * __this, int32_t ___Int321, Vector2_t3157050673  ___Vector22, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_575 (RuntimeObject * __this, Vector2_t3157050673  ___Vector21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector2_t3157050673  UnresolvedVirtualCall_576 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_577 (RuntimeObject * __this, Vector3_t2230635801  ___Vector31, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_578 (RuntimeObject * __this, int32_t ___Int321, Vector4_t2396709403  ___Vector42, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_579 (RuntimeObject * __this, Vector4_t2396709403  ___Vector41, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector4_t2396709403  UnresolvedVirtualCall_580 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_581 (RuntimeObject * __this, int32_t ___Int321, ARHitTestResult_t2798272109  ___ARHitTestResult2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_582 (RuntimeObject * __this, ARHitTestResult_t2798272109  ___ARHitTestResult1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ARHitTestResult_t2798272109  UnresolvedVirtualCall_583 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_584 (RuntimeObject * __this, RuntimeObject * ___Object1, uint32_t ___UInt322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

extern const Il2CppMethodPointer g_UnresolvedVirtualMethodPointers[585] = 
{
	(const Il2CppMethodPointer) UnresolvedVirtualCall_0,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_1,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_2,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_3,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_4,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_5,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_6,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_7,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_8,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_9,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_10,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_11,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_12,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_13,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_14,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_15,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_16,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_17,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_18,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_19,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_20,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_21,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_22,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_23,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_24,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_25,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_26,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_27,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_28,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_29,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_30,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_31,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_32,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_33,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_34,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_35,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_36,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_37,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_38,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_39,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_40,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_41,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_42,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_43,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_44,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_45,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_46,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_47,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_48,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_49,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_50,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_51,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_52,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_53,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_54,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_55,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_56,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_57,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_58,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_59,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_60,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_61,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_62,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_63,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_64,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_65,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_66,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_67,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_68,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_69,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_70,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_71,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_72,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_73,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_74,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_75,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_76,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_77,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_78,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_79,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_80,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_81,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_82,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_83,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_84,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_85,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_86,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_87,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_88,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_89,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_90,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_91,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_92,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_93,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_94,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_95,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_96,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_97,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_98,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_99,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_100,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_101,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_102,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_103,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_104,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_105,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_106,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_107,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_108,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_109,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_110,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_111,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_112,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_113,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_114,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_115,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_116,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_117,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_118,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_119,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_120,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_121,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_122,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_123,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_124,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_125,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_126,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_127,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_128,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_129,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_130,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_131,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_132,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_133,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_134,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_135,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_136,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_137,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_138,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_139,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_140,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_141,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_142,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_143,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_144,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_145,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_146,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_147,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_148,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_149,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_150,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_151,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_152,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_153,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_154,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_155,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_156,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_157,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_158,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_159,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_160,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_161,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_162,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_163,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_164,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_165,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_166,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_167,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_168,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_169,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_170,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_171,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_172,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_173,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_174,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_175,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_176,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_177,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_178,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_179,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_180,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_181,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_182,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_183,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_184,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_185,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_186,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_187,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_188,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_189,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_190,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_191,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_192,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_193,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_194,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_195,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_196,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_197,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_198,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_199,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_200,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_201,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_202,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_203,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_204,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_205,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_206,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_207,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_208,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_209,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_210,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_211,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_212,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_213,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_214,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_215,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_216,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_217,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_218,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_219,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_220,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_221,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_222,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_223,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_224,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_225,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_226,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_227,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_228,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_229,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_230,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_231,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_232,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_233,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_234,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_235,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_236,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_237,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_238,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_239,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_240,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_241,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_242,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_243,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_244,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_245,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_246,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_247,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_248,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_249,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_250,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_251,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_252,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_253,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_254,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_255,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_256,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_257,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_258,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_259,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_260,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_261,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_262,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_263,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_264,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_265,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_266,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_267,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_268,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_269,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_270,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_271,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_272,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_273,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_274,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_275,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_276,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_277,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_278,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_279,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_280,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_281,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_282,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_283,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_284,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_285,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_286,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_287,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_288,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_289,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_290,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_291,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_292,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_293,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_294,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_295,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_296,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_297,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_298,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_299,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_300,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_301,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_302,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_303,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_304,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_305,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_306,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_307,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_308,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_309,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_310,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_311,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_312,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_313,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_314,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_315,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_316,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_317,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_318,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_319,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_320,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_321,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_322,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_323,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_324,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_325,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_326,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_327,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_328,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_329,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_330,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_331,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_332,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_333,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_334,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_335,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_336,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_337,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_338,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_339,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_340,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_341,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_342,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_343,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_344,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_345,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_346,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_347,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_348,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_349,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_350,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_351,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_352,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_353,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_354,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_355,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_356,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_357,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_358,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_359,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_360,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_361,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_362,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_363,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_364,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_365,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_366,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_367,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_368,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_369,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_370,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_371,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_372,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_373,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_374,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_375,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_376,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_377,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_378,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_379,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_380,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_381,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_382,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_383,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_384,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_385,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_386,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_387,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_388,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_389,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_390,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_391,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_392,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_393,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_394,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_395,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_396,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_397,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_398,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_399,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_400,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_401,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_402,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_403,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_404,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_405,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_406,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_407,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_408,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_409,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_410,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_411,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_412,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_413,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_414,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_415,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_416,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_417,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_418,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_419,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_420,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_421,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_422,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_423,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_424,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_425,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_426,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_427,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_428,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_429,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_430,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_431,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_432,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_433,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_434,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_435,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_436,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_437,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_438,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_439,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_440,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_441,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_442,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_443,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_444,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_445,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_446,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_447,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_448,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_449,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_450,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_451,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_452,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_453,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_454,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_455,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_456,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_457,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_458,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_459,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_460,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_461,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_462,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_463,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_464,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_465,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_466,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_467,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_468,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_469,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_470,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_471,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_472,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_473,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_474,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_475,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_476,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_477,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_478,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_479,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_480,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_481,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_482,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_483,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_484,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_485,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_486,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_487,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_488,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_489,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_490,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_491,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_492,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_493,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_494,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_495,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_496,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_497,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_498,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_499,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_500,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_501,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_502,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_503,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_504,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_505,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_506,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_507,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_508,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_509,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_510,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_511,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_512,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_513,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_514,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_515,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_516,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_517,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_518,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_519,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_520,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_521,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_522,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_523,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_524,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_525,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_526,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_527,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_528,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_529,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_530,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_531,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_532,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_533,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_534,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_535,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_536,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_537,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_538,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_539,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_540,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_541,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_542,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_543,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_544,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_545,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_546,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_547,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_548,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_549,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_550,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_551,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_552,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_553,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_554,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_555,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_556,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_557,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_558,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_559,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_560,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_561,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_562,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_563,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_564,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_565,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_566,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_567,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_568,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_569,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_570,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_571,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_572,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_573,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_574,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_575,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_576,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_577,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_578,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_579,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_580,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_581,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_582,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_583,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_584,
};
