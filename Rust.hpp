#ifndef $OFFSETS
#define $OFFSETS
#include <Windows.h>

namespace offsets 
{
    uintptr_t gameObjectManager = 0x17C1F18;
    
    namespace ModelState 
    {
        uintptr_t waterLevel = 0x14;
        uintptr_t flags = 0x24;
    }

    namespace InputMessage
    {
        uintptr_t aimAngles = 0x18;
    }

    namespace Entity 
    {
        uintptr_t heldEntity = 0x88;
        uintptr_t baseProjectile = 0x90;
    }

    namespace BaseProjectile 
    {
        uintptr_t automatic = 0x290;
        uintptr_t primaryMagazine = 0x2C0;
        uintptr_t recoil = 0x2E0;
        uintptr_t aimCone = 0x2F0;
        uintptr_t hipAimCone = 0x2F4;
        uintptr_t aimconePenaltyPerShot = 0x2F8;
        uintptr_t numShotsFired = 0x318;
        uintptr_t stancePenalty = 0x324;
        uintptr_t aimconePenalty = 0x328;
        uintptr_t triggerReady = 0x360;
        uintptr_t createdProjectiles = 0x370;
    }

    namespace ItemContainer 
    {
        uintptr_t contents = 0x38;
    }

    namespace Item 
    {
        uintptr_t amount = 0x30;
    }

    namespace BasePlayer 
    {
        uintptr_t playerModel = 0x4C8;
        uintptr_t input = 0x4E8;
        uintptr_t movement = 0x4F0;
        uintptr_t currentTeam = 0x598;
        uintptr_t clActiveItem = 0x5D0;
        uintptr_t mounted = 0x600;
        uintptr_t clientTickInterval = 0x650;
        uintptr_t playerFlags = 0x688;
        uintptr_t eyes = 0x690;
        uintptr_t inventory = 0x698;
        uintptr_t userID = 0x6D0;
        uintptr_t _displayName = 0x6E8;
        uintptr_t clothingBlocksAiming = 0x758;
        uintptr_t clothingMoveSpeedReduction = 0x75C;
    }

    namespace BaseCombatEntity 
    {
        uintptr_t _health = 0x22C;
        uintptr_t _maxHealth = 0x230;
    }

    namespace BaseEntity
    {
        uintptr_t model = 0x130;
    }

    namespace BaseMelee 
    {
        uintptr_t maxDistance = 0x298;
        uintptr_t attackRadius = 0x29C;
        uintptr_t blockSprintOnAttack = 0x2A1;
    }

    namespace BaseProjectile.Magazine 
    {
        uintptr_t ammoType = 0x20;
    }

    namespace BowWeapon 
    {
        uintptr_t attackReady = 0x378;
        uintptr_t arrowBack = 0x37C;
        uintptr_t wasAiming = 0x388;
    }

    namespace PlayerInventory 
    {
        uintptr_t containerBelt = 0x28;
    }

    namespace Model 
    {
        uintptr_t boneTransforms = 0x48;
    }

    namespace FlintStrikeWeapon 
    {
        uintptr_t successFraction = 0x378;
        uintptr_t strikeRecoil = 0x380;
    }

    namespace PlayerEyes 
    {
        uintptr_t EyeOffset = 0x0;
        uintptr_t viewOffset = 0x38;
    }

    namespace PlayerInput 
    {
        uintptr_t state = 0x20;
        uintptr_t bodyRotation = 0x2C;
        uintptr_t bodyAngles = 0x3C;
        uintptr_t recoilAngles = 0x64;
        uintptr_t hasKeyFocus = 0xA4;
    }

    namespace PlayerModel 
    {
        uintptr_t modelState = 0x210;
        uintptr_t newVelocity = 0x23C;
        uintptr_t isLocalPlayer = 0x299;
    }

    namespace BaseMovement 
    {
        uintptr_t adminCheat = 0x18;
    }

    namespace PlayerWalkMovement 
    {
        uintptr_t capsuleHeight = 0x68;
        uintptr_t capsuleCenter = 0x6C;
        uintptr_t capsuleHeightDucked = 0x70;
        uintptr_t capsuleCenterDucked = 0x74;
        uintptr_t gravityMultiplier = 0x84;
        uintptr_t gravityMultiplierSwimming = 0x88;
        uintptr_t maxAngleWalking = 0x8C;
        uintptr_t maxAngleClimbing = 0x90;
        uintptr_t groundAngle = 0xC4;
        uintptr_t groundAngleNew = 0xC8;
        uintptr_t groundTime = 0xCC;
        uintptr_t jumpTime = 0xD0;
        uintptr_t landTime = 0xD4;
    }

    namespace ResourceEntity 
    {
        uintptr_t startHealth = 0x168;
        uintptr_t health = 0x178;
    }

    namespace InputState
    {
        uintptr_t current = 0x10;
    }

    namespace ItemDefinition 
    {
        uintptr_t shortname = 0x20;
    }

    namespace RecoilProperties 
    {
        uintptr_t recoilYawMin = 0x18;
        uintptr_t recoilYawMax = 0x1C;
        uintptr_t recoilPitchMin = 0x20;
        uintptr_t recoilPitchMax = 0x24;
        uintptr_t timeToTakeMin = 0x28;
        uintptr_t timeToTakeMax = 0x2C;
        uintptr_t ADSScale = 0x30;
        uintptr_t movementPenalty = 0x34;
    }

    namespace Graphics 
    {
        uintptr_t _fov = 0x18;
    }

}

namespace signatures 
{

    uintptr_t ConVar_Graphics_c = 0x3235620;
    uintptr_t ConVar_Client_c = 0x3233C18;
    uintptr_t ConVar_Console_c = 0x322DF18;
    uintptr_t ConsoleSystem_Command_c = 0x322C988;

}

#endif !$OFFSETS
