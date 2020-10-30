#ifndef GUARD_GBA_DEFINES
#define GUARD_GBA_DEFINES

#include <cstddef>

#include "types.h"

#define TRUE  1
#define FALSE 0

#define BSS_DATA   __attribute__((section(".bss")))
#define IWRAM_DATA __attribute__((section("iwram_data")))
#define EWRAM_DATA __attribute__((section("ewram_data")))
#define UNUSED __attribute__((unused))

#if MODERN
#define NOINLINE __attribute__((noinline))
#else
#define NOINLINE
#endif

#define ALIGNED(n) __attribute__((aligned(n)))

#define SOUND_INFO_PTR (*(struct SoundInfo **)0x3007FF0)
#define INTR_CHECK     (*(u16 *)0x3007FF8)
#define INTR_VECTOR    (*(void **)0x3007FFC)

constexpr u32 EWRAM_START = 0x02000000;
constexpr u32 EWRAM_END   = EWRAM_START + 0x40000;
constexpr u32 IWRAM_START = 0x03000000;
constexpr u32 IWRAM_END   = IWRAM_START + 0x8000;

constexpr u32 PLTT      = 0x5000000;
constexpr u32 PLTT_SIZE = 0x400;

constexpr u32 BG_PLTT      = PLTT;
constexpr u32 BG_PLTT_SIZE = 0x200;

constexpr u32 OBJ_PLTT      = PLTT + 0x200;
constexpr u32 OBJ_PLTT_SIZE = 0x200;

constexpr u32 VRAM      = 0x6000000;
constexpr u32 VRAM_SIZE = 0x18000;

constexpr u32 BG_VRAM           = VRAM;
constexpr u32 BG_VRAM_SIZE      = 0x10000;
constexpr u32 BG_CHAR_SIZE      = 0x4000;
constexpr u32 BG_SCREEN_SIZE    = 0x800;

constexpr u32 BG_CHAR_ADDR(u32 n)
{
    return BG_VRAM + (BG_CHAR_SIZE * n);
}
constexpr u32 BG_SCREEN_ADDR(u32 n)
{
    return BG_VRAM + (BG_SCREEN_SIZE * n);
}

constexpr u32 BG_TILE_H_FLIP(u32 n)
{
    return 0x400 + n;
}
constexpr u32 BG_TILE_V_FLIP(u32 n)
{
    return 0x800 + n;
}

// text-mode BG
constexpr u32 OBJ_VRAM0      = VRAM + 0x10000;
constexpr u32 OBJ_VRAM0_SIZE = 0x8000;

// bitmap-mode BG
constexpr u32 OBJ_VRAM1      = VRAM + 0x14000;
constexpr u32 OBJ_VRAM1_SIZE = 0x4000;

constexpr u32 OAM      = 0x7000000;
constexpr u32 OAM_SIZE = 0x400;

constexpr u32 ROM_HEADER_SIZE = 0xC0;

constexpr u32 DISPLAY_WIDTH  = 240;
constexpr u32 DISPLAY_HEIGHT = 160;

constexpr u32 TILE_SIZE_4BPP = 32;
constexpr u32 TILE_SIZE_8BPP = 64;

constexpr u32 TILE_OFFSET_4BPP(u32 n)
{
    return n * TILE_SIZE_4BPP;
}
constexpr u32 TILE_OFFSET_8BPP(u32 n)
{
    return n * TILE_SIZE_8BPP;
}

constexpr u32 TOTAL_OBJ_TILE_COUNT = 1024;

#endif // GUARD_GBA_DEFINES
