#ifndef GUARD_CABLE_CLUB_H
#define GUARD_CABLE_CLUB_H

#include "task.h"

extern "C" void CreateTask_EnterCableClubSeat(TaskFunc taskFunc);
extern "C" u8 CreateTask_ReestablishCableClubLink(void);
extern "C" void CB2_ReturnFromCableClubBattle(void);
extern "C" bool32 AreBattleTowerLinkSpeciesSame(u16 *speciesList1, u16 *speciesList2);
extern "C" void sub_80B3AF8(u8 taskId);
extern "C" void Task_WaitForLinkPlayerConnection(u8 taskId);
extern "C" bool32 GetLinkTrainerCardColor(u8 linkPlayerIndex);

#endif //GUARD_CABLE_CLUB_H
