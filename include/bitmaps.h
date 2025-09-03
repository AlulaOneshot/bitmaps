#ifndef _BITMAPS_H
#define _BITMAPS_H

typedef unsigned char bitmap_t;

void bitmapSetBit(bitmap_t *map, unsigned long long index);
void bitmapClearBit(bitmap_t *map, unsigned long long index);
unsigned char bitmapGetBit(bitmap_t *map, unsigned long long index);

#endif