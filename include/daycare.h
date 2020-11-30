#ifndef GUARD_DAYCARE_H
#define GUARD_DAYCARE_H

#include "constants/daycare.h"

u8 *GetMonNickname2(struct Pokemon *mon, u8 *dest);
u8 *GetBoxMonNickname(struct BoxPokemon *mon, u8 *dest);
u8 CountPokemonInDaycare(struct DayCare *daycare);
void InitDaycareMailRecordMixing(struct DayCare *daycare, struct RecordMixingDayCareMail *daycareMail);
extern "C" void StoreSelectedPokemonInDaycare(void);
extern "C" u16 TakePokemonFromDaycare(void);
extern "C" void GetDaycareCost(void);
extern "C" u8 GetNumLevelsGainedFromDaycare(void);
void TriggerPendingDaycareEgg(void);
extern "C" void RejectEggFromDayCare(void);
void CreateEgg(struct Pokemon *mon, u16 species, bool8 setHotSpringsLocation);
extern "C" void GiveEggFromDaycare(void);
bool8 ShouldEggHatch(void);
extern "C" u16 GetSelectedMonNicknameAndSpecies(void);
extern "C" void GetDaycareMonNicknames(void);
extern "C" u8 GetDaycareState(void);
extern "C" void SetDaycareCompatibilityString(void);
bool8 NameHasGenderSymbol(const u8 *name, u8 genderRatio);
extern "C" void ShowDaycareLevelMenu(void);
extern "C" void ChooseSendDaycareMon(void);

#endif // GUARD_DAYCARE_H
