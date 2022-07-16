#ifndef $OFFSETS
#define $OFFSETS
#include <Windows.h>


namespace offsets
{
    namespace PhysicalValue
    {
        constexpr uintptr_t Current = 0x48; // Single
    }

    namespace Physical
    {
        constexpr uintptr_t Stamina = 0x38; // PhysicalValue
        constexpr uintptr_t HandsStamina = 0x40; // PhysicalValue
        constexpr uintptr_t Oxygen = 0x48; // PhysicalValue
        constexpr uintptr_t Overweight = 0x8C; // Single
        constexpr uintptr_t WalkOverweight = 0x90; // Single
        constexpr uintptr_t WalkSpeedLimit = 0x94; // Single
        constexpr uintptr_t WalkOverweightLimits = 0xD8; // UnityEngine_Vector2
        constexpr uintptr_t BaseOverweightLimits = 0xE0; // UnityEngine_Vector2
        constexpr uintptr_t SprintOverweightLimits = 0xF4; // UnityEngine_Vector2
        constexpr uintptr_t WalkSpeedOverweightLimits = 0xFC; // UnityEngine_Vector2
        constexpr uintptr_t SprintAcceleration = 0x114; // Single
        constexpr uintptr_t PreSprintAcceleration = 0x118; // Single
    }

    namespace MovementContext
    {
        constexpr uintptr_t FreefallTime = 0x1F8; // Single
        constexpr uintptr_t vector2 = 0x224; // UnityEngine_Vector2
        //constexpr uintptr_t vector2 = 0x22C; // UnityEngine_Vector2
        //constexpr uintptr_t vector2 = 0x234; // UnityEngine_Vector2
        //constexpr uintptr_t vector2 = 0x278; // UnityEngine_Vector2
        //constexpr uintptr_t vector2 = 0x280; // UnityEngine_Vector2
        //constexpr uintptr_t vector2 = 0x288; // UnityEngine_Vector2
    }

    namespace AIInfo
    {
        constexpr uintptr_t Role = 0x10; // System_Int32
        constexpr uintptr_t BotDifficulty = 0x14; // System_Int32
        constexpr uintptr_t Experience = 0x18; // Int32
        constexpr uintptr_t StandingForKill = 0x20; // Double
        constexpr uintptr_t AggressorBonus = 0x28; // Double
    }

    namespace PlayerInfo
    {
        constexpr uintptr_t Nickname = 0x10; // String
        constexpr uintptr_t MainProfileNickname = 0x18; // String
        constexpr uintptr_t GroupId = 0x20; // String
        constexpr uintptr_t Settings = 0x48; // AIInfo
        constexpr uintptr_t Side = 0x68; // System_Int32
        constexpr uintptr_t RegistrationDate = 0x6C; // Int32
        constexpr uintptr_t IsStreamerModeAvailable = 0x80; // Boolean
    }

    namespace CameraStruct
    {
        constexpr uintptr_t ViewMatrix = 0xDC; // __MotionState_GStruct4C76
        //constexpr uintptr_t ViewMatrix = 0x10C; // __MotionState_GStruct4C76
        //constexpr uintptr_t ViewMatrix = 0x13C; // __MotionState_GStruct4C76
    }

    namespace __MotionEffector
    {
        constexpr uintptr_t Motion = 0x38; // UnityEngine_Vector3
        constexpr uintptr_t Velocity = 0x44; // UnityEngine_Vector3
        constexpr uintptr_t RotationInputClamp = 0x50; // Single
        constexpr uintptr_t _lastPosition = 0x54; // UnityEngine_Vector3
        constexpr uintptr_t _lastForward = 0x60; // UnityEngine_Vector3
        constexpr uintptr_t PositionVelocity = 0x6C; // UnityEngine_Vector3
        constexpr uintptr_t RotationVelocity = 0x78; // UnityEngine_Vector2
        constexpr uintptr_t PositionAcceleration = 0x80; // UnityEngine_Vector3
        constexpr uintptr_t RotationAcceleration = 0x8C; // UnityEngine_Vector2
        constexpr uintptr_t SwayFactors = 0x94; // UnityEngine_Vector3
        constexpr uintptr_t Intensity = 0xD0; // Single
    }

    namespace __Player_FirearmController
    {
        constexpr uintptr_t Fireport = 0xC8; // EFT_BifacialTransform
    }

    namespace __Player_ItemHandsController
    {
        constexpr uintptr_t item = 0x60; // EFT_InventoryLogic_Item
    }

    namespace __ShotEffector
    {
        constexpr uintptr_t Recoil = 0x18; // __GClass044E
        constexpr uintptr_t RecoilPower = 0x20; // __GClass044E
        constexpr uintptr_t _weapon = 0x28; // EFT_InventoryLogic_Weapon
        constexpr uintptr_t _aimingConfig = 0x30; // __GClass0D68_GClass0D9B
        constexpr uintptr_t _buffs = 0x38; // __GClass1114_GClass1115
        constexpr uintptr_t RecoilStrengthXy = 0x40; // UnityEngine_Vector2
        constexpr uintptr_t RecoilStrengthZ = 0x48; // UnityEngine_Vector2
        constexpr uintptr_t RecoilDegree = 0x50; // UnityEngine_Vector2
        constexpr uintptr_t RecoilDirection = 0x58; // UnityEngine_Vector3
        constexpr uintptr_t RecoilRadian = 0x64; // UnityEngine_Vector2
        constexpr uintptr_t Stiffness = 0x6C; // Single
        constexpr uintptr_t Intensity = 0x70; // Single
        constexpr uintptr_t _separateIntensityFactors = 0x74; // UnityEngine_Vector3
        constexpr uintptr_t _pose = 0x80; // Int32
    }

    namespace Diz_Skinning_Skeleton
    {
        constexpr uintptr_t m_CachedPtr = 0x10; // IntPtr
        constexpr uintptr_t Bones = 0x18; // System_Collections_Generic_Dictionary_String,_Transform_
        constexpr uintptr_t _keys = 0x20; // System_Collections_Generic_List_String_
        constexpr uintptr_t _values = 0x28; // System_Collections_Generic_List_Transform_
    }

    namespace Diz_Skinning_Skin
    {
        constexpr uintptr_t _skinnedMeshRenderer = 0x20; // UnityEngine_SkinnedMeshRenderer
    }

    namespace EFT_Animations_BreathEffector
    {
        constexpr uintptr_t IsAiming = 0xA0; // Boolean
        constexpr uintptr_t Intensity = 0xA4; // Single
        constexpr uintptr_t _shakeIntensity = 0xA8; // Single
        constexpr uintptr_t _breathIntensity = 0xAC; // Single
        constexpr uintptr_t _breathFrequency = 0xB0; // Single
        constexpr uintptr_t HipPenalty = 0xB4; // Single
        constexpr uintptr_t TremorOn = 0xB8; // Boolean
        constexpr uintptr_t Fracture = 0xB9; // Boolean
        constexpr uintptr_t _cameraSensetivity = 0xBC; // Single
        constexpr uintptr_t StiffUntill = 0xC0; // Single
        constexpr uintptr_t EnergyLowerLimit = 0xC4; // Single
        constexpr uintptr_t EnergyFractureLimit = 0xC8; // Single
        constexpr uintptr_t _baseHipRandomAmplitudes = 0xD4; // UnityEngine_Vector2
        constexpr uintptr_t _randomBetween = 0xDC; // UnityEngine_Vector2
        constexpr uintptr_t _Overweight_k__BackingField = 0xE8; // Single
    }

    namespace EFT_Animations_PlayerSpring
    {
        constexpr uintptr_t Recoil = 0x40; // EFT_Animations_RecoilSpring
    }

    namespace EFT_Animations_ProceduralWeaponAnimation
    {
        constexpr uintptr_t HandsContainer = 0x18; // EFT_Animations_PlayerSpring
        constexpr uintptr_t CameraContainer = 0x20; // UnityEngine_GameObject
        constexpr uintptr_t Breath = 0x28; // EFT_Animations_BreathEffector
        constexpr uintptr_t Walk = 0x30; // __WalkEffector
        constexpr uintptr_t MotionReact = 0x38; // __MotionEffector
        constexpr uintptr_t ForceReact = 0x40; // __ForceEffector
        constexpr uintptr_t Shootingg = 0x48; // __ShotEffector
        constexpr uintptr_t TurnAway = 0x50; // __TurnAwayEffector
        constexpr uintptr_t CustomEffector = 0x58; // __CustomEffector
        constexpr uintptr_t firearmController = 0x80; // __Player_FirearmController
        constexpr uintptr_t AimSwayMax = 0x20C; // UnityEngine_Vector3
        constexpr uintptr_t AimingDisplacementStr = 0x2F8; // Single
    }

    namespace EFT_Animations_RecoilSpring
    {
        constexpr uintptr_t ReturnSpeed = 0x38; // Single
        constexpr uintptr_t Damping = 0x3C; // Single
        constexpr uintptr_t X = 0x68; // System_Int32
        constexpr uintptr_t Y = 0x6C; // System_Int32
        constexpr uintptr_t Z = 0x70; // System_Int32
    }

    namespace EFT_BifacialTransform
    {
        constexpr uintptr_t Original = 0x10; // UnityEngine_Transform
    }

    namespace EFT_ClientGameWorld
    {
        constexpr uintptr_t m_CachedPtr = 0x10; // IntPtr
        constexpr uintptr_t GameDateTime = 0x28; // __GClass0E59
        constexpr uintptr_t SpeedLimits = 0x30; // __GClass10A9_Config
        constexpr uintptr_t CurrentProfileId = 0x38; // String
        constexpr uintptr_t LootList = 0x68; // System_Collections_Generic_List_GInterface155E_
        constexpr uintptr_t ItemOwners = 0x70; // System_Collections_Generic_Dictionary_IItemOwner,_GClass1A7E_
        constexpr uintptr_t LootItems = 0x78; // __GClass0615_Int32,_LootItem_
        constexpr uintptr_t AllLoot = 0x80; // System_Collections_Generic_List_GClass0C9B_
        constexpr uintptr_t RegisteredPlayers = 0x88; // System_Collections_Generic_List_Player_
        constexpr uintptr_t Grenades = 0xF8; // __GClass0615_Int32,_Throwable_
    }

    namespace EFT_InventoryLogic_Item
    {
        constexpr uintptr_t Id = 0x10; // String
        constexpr uintptr_t _Template_k__BackingField = 0x40; // EFT_InventoryLogic_ItemTemplate
    }

    namespace EFT_InventoryLogic_ItemTemplate
    {
        constexpr uintptr_t Name = 0x10; // String
        constexpr uintptr_t ShortName = 0x18; // String
        constexpr uintptr_t Description = 0x20; // String
        constexpr uintptr_t QuestItem = 0x9C; // Boolean
    }

    namespace EFT_Player
    {
        constexpr uintptr_t movementContext = 0x40; // MovementContext
        constexpr uintptr_t _playerBody = 0xA8; // EFT_PlayerBody
        constexpr uintptr_t proceduralWeaponAnimation = 0x198; // EFT_Animations_ProceduralWeaponAnimation
        constexpr uintptr_t profile = 0x4F0; // EFT_Profile
        constexpr uintptr_t Physical = 0x500; // Physical
        constexpr uintptr_t _healthController = 0x528; // __GInterface8066
        constexpr uintptr_t _handsController = 0x540; // __Player_AbstractHandsController
    }

    namespace EFT_PlayerBody
    {
        constexpr uintptr_t SkeletonRootJoint = 0x28; // Diz_Skinning_Skeleton
        constexpr uintptr_t BodySkins = 0x38; // System_Collections_Generic_Dictionary_Int32,_LoddedSkin_
        constexpr uintptr_t SlotViews = 0x50; // __GClass0615_Int32,_GClass1430_
    }

    namespace EFT_Profile
    {
        constexpr uintptr_t Id = 0x10; // String
        constexpr uintptr_t AccountId = 0x18; // String
        constexpr uintptr_t Info = 0x28; // PlayerInfo
        constexpr uintptr_t Skills = 0x60; // __GClass1114
    }

    namespace EFT_Visual_LoddedSkin
    {
        constexpr uintptr_t _lods = 0x18; // Diz_Skinning_AbstractSkin[]
    }


}
namespace structs
{
    enum bones : int
    {
        l_hip = 20,
        l_knee = 22,
        l_foot = 23,
        pelvis = 14,
        r_hip = 15,
        r_knee = 17,
        r_foot = 18,
        spine1 = 36,
        spine2 = 36,
        spine3 = 37,
        spine4 = 89,
        l_upperarm = 111,
        l_forearm = 112,
        l_hand = 115,
        neck = 88,
        head = 133,
        r_upperarm = 90,
        r_forearm = 91,
        r_hand = 94
    };
}


#endif // !$OFFSETS
