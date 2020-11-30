#ifndef GUARD_FLDEFF_MISC_H
#define GUARD_FLDEFF_MISC_H

void ComputerScreenOpenEffect(u16 a0, u16 a1, u8 a2);
void ComputerScreenCloseEffect(u16 a0, u16 a1, u8 a2);
bool8 IsComputerScreenOpenEffectActive(void);
bool8 IsComputerScreenCloseEffectActive(void);
bool8 SetUpFieldMove_SecretPower(void);
extern "C" bool8 FldEff_UseSecretPowerCave(void);
extern "C" bool8 FldEff_SecretPowerCave(void);
extern "C" bool8 FldEff_UseSecretPowerTree(void);
extern "C" bool8 FldEff_SecretPowerTree(void);
extern "C" bool8 FldEff_UseSecretPowerShrub(void);
extern "C" bool8 FldEff_SecretPowerShrub(void);
extern "C" bool8 FldEff_SecretBasePCTurnOn(void);
extern "C" void DoSecretBasePCTurnOffEffect(void);
void PopSecretBaseBalloon(s16 metatileId, s16 x, s16 y);
extern "C" bool8 FldEff_Nop47(void);
extern "C" bool8 FldEff_Nop48(void);
void ShatterSecretBaseBreakableDoor(s16 x, s16 y);
void PlaySecretBaseMusicNoteMatSound(s16 metatileId);
void DoSecretBaseGlitterMatSparkle(void);
extern "C" bool8 FldEff_SandPillar(void);
extern "C" void InteractWithShieldOrTVDecoration(void);
bool8 IsLargeBreakableDecoration(u16 arg0, u8 arg1);
void FldEffPoison_Start(void);
bool32 FldEffPoison_IsActive(void);
extern "C" void DoWateringBerryTreeAnim(void);
u8 CreateRecordMixingLights(void);
void DestroyRecordMixingLights(void);

extern const struct SpritePalette gSpritePalette_SecretPower_Cave;
extern const struct SpritePalette gSpritePalette_SecretPower_Plant;
extern const struct SpritePalette gFieldEffectObjectPaletteInfo9;
extern const u16 gTilesetPalettes_SecretBase[][16];

#endif //GUARD_FLDEFF_MISC_H
