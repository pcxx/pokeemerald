#ifndef GUARD_ALLOC_H
#define GUARD_ALLOC_H

#define HEAP_SIZE 0x1C000

#define FREE_AND_SET_NULL(ptr)          \
{                                       \
    Free(ptr);                          \
    ptr = NULL;                         \
}

extern u8 gHeap[];

void *Alloc_(u32 size);
void *AllocZeroed_(u32 size);

template<typename T>
T *Alloc(u32 count = 1)
{
    return static_cast<T *>( Alloc_(sizeof(T) * count));
}

template<typename T>
T *AllocZeroed(u32 count = 1)
{
    return static_cast<T *>( AllocZeroed_(sizeof(T) * count));
}
void Free(void *pointer);
void InitHeap(void *pointer, u32 size);

#endif // GUARD_ALLOC_H
