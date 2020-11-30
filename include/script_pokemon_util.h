#ifndef GUARD_SCRIPT_POKEMON_UTIL
#define GUARD_SCRIPT_POKEMON_UTIL

u8 ScriptGiveMon(u16, u8, u16, u32, u32, u8);
u8 ScriptGiveEgg(u16);
void CreateScriptedWildMon(u16, u8, u16);
void ScriptSetMonMoveSlot(u8, u16, u8);
extern "C" void ReducePlayerPartyToSelectedMons(void);
extern "C" void HealPlayerParty(void);

#endif // GUARD_SCRIPT_POKEMON_UTIL
