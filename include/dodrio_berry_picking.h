#ifndef GUARD_DODRIO_BERRY_PICKING_H
#define GUARD_DODRIO_BERRY_PICKING_H

void StartDodrioBerryPicking(u16 a0, void (*callback)(void));
extern "C" void IsDodrioInParty(void);
extern "C" void ShowDodrioBerryPickingRecords(void);

#endif // GUARD_DODRIO_BERRY_PICKING_H
