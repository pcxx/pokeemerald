#ifndef GUARD_ALLOC_H
#define GUARD_ALLOC_H

#define HEAP_SIZE 0x1C000
#define malloc Alloc
#define calloc(ct, sz) AllocZeroed((ct) * (sz))
#define free Free

#define FREE_AND_SET_NULL(ptr)          \
{                                       \
    free(ptr);                          \
    ptr = NULL;                         \
}

extern u8 gHeap[];

template<typename T>
T *Alloc(u32 size)
{
    return static_cast<T *>( AllocInternal(sHeapStart, size));
}

template<typename T>
T *AllocZeroed(u32 size)
{
    return static_cast<T *>( AllocZeroedInternal(sHeapStart, size));
}
void Free(void *pointer);
void InitHeap(void *pointer, u32 size);

#endif // GUARD_ALLOC_H
