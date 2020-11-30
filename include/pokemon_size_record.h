#ifndef GUARD_POKEMON_SIZE_RECORD_H
#define GUARD_POKEMON_SIZE_RECORD_H

void InitSeedotSizeRecord(void);
extern "C" void GetSeedotSizeRecordInfo(void);
extern "C" void CompareSeedotSize(void);

void InitLotadSizeRecord(void);
extern "C" void GetLotadSizeRecordInfo(void);
extern "C" void CompareLotadSize(void);

void GiveGiftRibbonToParty(u8 index, u8 ribbonId);

#endif // GUARD_POKEMON_SIZE_RECORD_H
