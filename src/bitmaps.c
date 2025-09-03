#include <bitmaps.h>

void bitmapSetBit(bitmap_t *map, unsigned long long index) {
    map[index / 8] |= (1 << (index % 8));
}

void bitmapClearBit(bitmap_t *map, unsigned long long index) {
    map[index / 8] &= ~(1 << (index % 8));
}

unsigned char bitmapGetBit(bitmap_t *map, unsigned long long index) {
    return map[index / 8] & (1 << (index % 8));
}