#ifndef GUARD_TRAINER_SEE_H
#define GUARD_TRAINER_SEE_H

struct ApproachingTrainer
{
    u8 objectEventId;
    u8 radius; // plus 1
    const u8 *trainerScriptPtr;
    u8 taskId;
};

extern u16 gWhichTrainerToFaceAfterBattle;
extern u8 gPostBattleMovementScript[4];
extern struct ApproachingTrainer gApproachingTrainers[2];
extern u8 gNoOfApproachingTrainers;
extern bool8 gTrainerApproachedPlayer;
extern u8 gApproachingTrainerId;

bool8 CheckForTrainersWantingBattle(void);
void sub_80B4578(struct ObjectEvent *var);
extern "C" void EndTrainerApproach(void);
extern "C" void TryPrepareSecondApproachingTrainer(void);
extern "C" u8 FldEff_ExclamationMarkIcon(void);
extern "C" u8 FldEff_QuestionMarkIcon(void);
extern "C" u8 FldEff_HeartIcon(void);
u8 GetCurrentApproachingTrainerObjectEventId(void);
u8 GetChosenApproachingTrainerObjectEventId(u8 arrayId);
extern "C" void PlayerFaceTrainerAfterBattle(void);

#endif // GUARD_TRAINER_SEE_H
