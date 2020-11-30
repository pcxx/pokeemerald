#ifndef GUARD_EGG_HATCH_H
#define GUARD_EGG_HATCH_H

extern "C" void ScriptHatchMon(void);
extern "C" bool8 CheckDaycareMonReceivedMail(void);
extern "C" void EggHatch(void);
u8 GetEggCyclesToSubtract(void);
extern "C" u16 CountPartyAliveNonEggMons(void);

#endif // GUARD_EGG_HATCH_H
