#ifndef GUARD_POKEMON_JUMP_H
#define GUARD_POKEMON_JUMP_H

#include "main.h"

void StartPokemonJump(u16 monId, MainCallback callback);
bool32 IsSpeciesAllowedInPokemonJump(u16 species);
extern "C" void IsPokemonJumpSpeciesInParty(void);
void ResetPokeJumpResults(void);
extern "C" void ShowPokemonJumpRecords(void);

#endif // GUARD_POKEMON_JUMP_H
