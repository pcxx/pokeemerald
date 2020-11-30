#ifndef GUARD_GBA_SYSCALL_H
#define GUARD_GBA_SYSCALL_H

#define RESET_EWRAM      0x01
#define RESET_IWRAM      0x02
#define RESET_PALETTE    0x04
#define RESET_VRAM       0x08
#define RESET_OAM        0x10
#define RESET_SIO_REGS   0x20
#define RESET_SOUND_REGS 0x40
#define RESET_REGS       0x80
#define RESET_ALL        0xFF

extern "C" void SoftReset(u32 resetFlags);

extern "C" void RegisterRamReset(u32 resetFlags);

extern "C" void VBlankIntrWait(void);

extern "C" u16 Sqrt(u32 num);

extern "C" u16 ArcTan2(s16 x, s16 y);

#define CPU_SET_SRC_FIXED 0x01000000
#define CPU_SET_16BIT     0x00000000
#define CPU_SET_32BIT     0x04000000

extern "C" void CpuSet(const void *src, void *dest, u32 control);

#define CPU_FAST_SET_SRC_FIXED 0x01000000

extern "C" void CpuFastSet(const void *src, void *dest, u32 control);

extern "C" void BgAffineSet(struct BgAffineSrcData *src, struct BgAffineDstData *dest, s32 count);

extern "C" void ObjAffineSet(struct ObjAffineSrcData *src, void *dest, s32 count, s32 offset);

extern "C" void LZ77UnCompWram(const u32 *src, void *dest);

extern "C" void LZ77UnCompVram(const u32 *src, void *dest);

extern "C" void RLUnCompWram(const void *src, void *dest);

extern "C" void RLUnCompVram(const void *src, void *dest);

extern "C" int MultiBoot(struct MultiBootParam *mp);

extern "C" s32 Div(s32 num, s32 denom);

#endif // GUARD_GBA_SYSCALL_H
