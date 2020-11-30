#ifndef GUARD_CONTEST_UTIL_H
#define GUARD_CONTEST_UTIL_H

void BufferContestantTrainerName(void);
void BufferContestantMonNickname(void);
void StartContest(void);
void BufferContestantMonSpecies(void);
void ShowContestResults(void);
void ContestLinkTransfer(u8);
extern "C" void ShowContestWinnerPainting(void);
u16 GetContestRand(void);
extern "C" u8 CountPlayerContestPaintings(void);

#endif // GUARD_CONTEST_UTIL_H
