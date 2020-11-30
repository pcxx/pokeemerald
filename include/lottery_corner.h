#ifndef GUARD_LOTTERY_CORNER_H
#define GUARD_LOTTERY_CORNER_H

void ResetLotteryCorner(void);
void SetRandomLotteryNumber(u16 i);
extern "C" void RetrieveLotteryNumber(void);
extern "C" void PickLotteryCornerTicket(void);
void SetLotteryNumber(u32 lotteryNum);
u32 GetLotteryNumber(void);
void SetLotteryNumber16_Unused(u16 lotteryNum);

#endif // GUARD_LOTTERY_CORNER_H
