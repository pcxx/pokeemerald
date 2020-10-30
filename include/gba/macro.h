#ifndef GUARD_GBA_MACRO_H
#define GUARD_GBA_MACRO_H

#include <type_traits>

#include "types.h"

#define CPU_FILL(value, dest, size, bit)                                          \
{                                                                                 \
    vu##bit tmp = (vu##bit)(value);                                               \
    CpuSet((void *)&tmp,                                                          \
           dest,                                                                  \
           CPU_SET_##bit##BIT | CPU_SET_SRC_FIXED | ((size)/(bit/8) & 0x1FFFFF)); \
}

#define CpuFill16(value, dest, size) CPU_FILL(value, dest, size, 16)
#define CpuFill32(value, dest, size) CPU_FILL(value, dest, size, 32)

#define CPU_COPY(src, dest, size, bit) CpuSet(src, dest, CPU_SET_##bit##BIT | ((size)/(bit/8) & 0x1FFFFF))

#define CpuCopy16(src, dest, size) CPU_COPY(src, dest, size, 16)
#define CpuCopy32(src, dest, size) CPU_COPY(src, dest, size, 32)

#define CpuFastFill(value, dest, size)                               \
{                                                                    \
    vu32 tmp = (vu32)(value);                                        \
    CpuFastSet((void *)&tmp,                                         \
               dest,                                                 \
               CPU_FAST_SET_SRC_FIXED | ((size)/(32/8) & 0x1FFFFF)); \
}

#define CpuFastFill16(value, dest, size) CpuFastFill(((value) << 16) | (value), (dest), (size))

#define CpuFastFill8(value, dest, size) CpuFastFill(((value) << 24) | ((value) << 16) | ((value) << 8) | (value), (dest), (size))

#define CpuFastCopy(src, dest, size) CpuFastSet(src, dest, ((size)/(32/8) & 0x1FFFFF))

template<typename T>
concept is_u16 = std::is_same<T, vu16>::value;

template<typename T>
concept is_u32 = std::is_same<T, vu32>::value;

template<u32 dmaNum>
concept is_valid_dma_num = dmaNum < 4;

constexpr u32 REG_ADDR_DMAx[] = {REG_ADDR_DMA0, REG_ADDR_DMA1, REG_ADDR_DMA2, REG_ADDR_DMA3};

template<u32 dmaNum, typename T>
constexpr void DmaSet(T *src, T *dest, u32 control) requires (is_u16<T> || is_u32<T>) && is_valid_dma_num<dmaNum>
{
    vu32 *dmaRegs = reinterpret_cast<vu32 *>(REG_ADDR_DMAx[dmaNum]);
    dmaRegs[0] = reinterpret_cast<u32>(src);
    dmaRegs[1] = reinterpret_cast<u32>(dest);
    dmaRegs[2] = control;     
    dmaRegs[2]; // I guess you have to read from the register to ? start dma? wait for it to finish?
}

template<u32 dmaNum, typename T>
constexpr void DmaFill(u32 value, T *dest, u32 size) requires is_u16<T>
{
    volatile T tmp = value;
    u32 control = (DMA_ENABLE | DMA_START_NOW | DMA_16BIT | DMA_SRC_FIXED | DMA_DEST_INC) << 16 | size;
    DmaSet<dmaNum>(&tmp, dest, control);
}

template<u32 dmaNum, typename T>
constexpr void DmaFill(u32 value, T *dest, u32 size) requires is_u32<T>
{
    volatile T tmp = value;
    u32 control = (DMA_ENABLE | DMA_START_NOW | DMA_32BIT | DMA_SRC_FIXED | DMA_DEST_INC) << 16 | size;
    DmaSet<dmaNum>(&tmp, dest, control);
}

// Note that the DMA clear macros cause the DMA control value to be calculated
// at runtime rather than compile time. The size is divided by the DMA transfer
// unit size (2 or 4 bytes) and then combined with the DMA control flags using a
// bitwise OR operation.

template<u32 dmaNum, typename T>
constexpr void DmaClear(T *dest, u32 size)
{
    DmaFill<dmaNum>(0, dest, size);
}

template<u32 dmaNum, typename T>
constexpr void DmaCopy(T *src, T *dest, u32 size) requires is_u16<T>
{
    u32 control = (DMA_ENABLE | DMA_START_NOW | DMA_16BIT | DMA_SRC_INC | DMA_DEST_INC) << 16 | size;
    DmaSet<dmaNum>(src, dest, control);
}

template<u32 dmaNum, typename T>
constexpr void DmaCopy(T *src, T *dest, u32 size) requires is_u32<T>
{
    u32 control = (DMA_ENABLE | DMA_START_NOW | DMA_32BIT | DMA_SRC_INC | DMA_DEST_INC) << 16 | size;
    DmaSet<dmaNum>(src, dest, control);
}

template<u32 dmaNum, typename T>
constexpr void DmaCopyLarge(T *src, T *dest, u32 size, u32 block_size)
{
    while (size >= block_size)
    {
        DmaCopy<dmaNum>(src, dest, block_size);
        src += block_size;
        dest += block_size;
        size -= block_size;
    }
    DmaCopy<dmaNum>(src, dest, size);
    
}

template<u32 dmaNum, typename T>
constexpr void DmaFillLarge(u32 value, T *dest, u32 size, u32 block_size)
{
    while(size >= block_size)
    {
        DmaFill<dmaNum>(value, dest, block_size);
        dest += block_size;
        size -= block_size;
    }
    DmaFill<dmaNum>(value, dest, size);
}

template<u32 dmaNum, typename T>
constexpr void DmaClearLarge(T *dest, u32 size, u32 block_size)
{
    DmaFillLarge<dmaNum>(0, dest, size, block_size);
}

template<u32 dmaNum>
constexpr void DmaStop() requires is_valid_dma_num<dmaNum>
{
    vu16 *dmaRegs = reinterpret_cast<vu16 *>(REG_ADDR_DMAx[dmaNum]);
    dmaRegs[5] &= ~(DMA_START_MASK | DMA_DREQ_ON | DMA_REPEAT);
    dmaRegs[5] &= ~DMA_ENABLE;
    dmaRegs[5];
}

#define IntrEnable(flags)                                       \
{                                                               \
    u16 imeTemp;                                                \
                                                                \
    imeTemp = REG_IME;                                          \
    REG_IME = 0;                                                \
    REG_IE |= flags;                                            \
    REG_IME = imeTemp;                                          \
}                                                               \

#endif // GUARD_GBA_MACRO_H
