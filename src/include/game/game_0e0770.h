#ifndef IN_GAME_GAME_0E0770_H
#define IN_GAME_GAME_0E0770_H
#include <ultra64.h>
#include "data.h"
#include "types.h"

void menuCreateBlur(void);
u32 func0f0e0998(void);
u32 func0f0e0dac(void);
u32 func0f0e1668(void);
u32 func0f0e194c(void);
u32 func0f0e1ce8(void);
u32 func0f0e1fac(void);
Gfx *func0f0e2348(Gfx *gdl);
Gfx *func0f0e2498(Gfx *gdl);
Gfx *gfxDrawTri2(Gfx *gdl, s32 x1, s32 y1, s32 x2, s32 y2, u32 colour1, u32 colour2, bool arg7);
Gfx *gfxDrawLine(Gfx *gdl, s32 x1, s32 y1, s32 x2, s32 y2, u32 colour1, u32 colour2);
Gfx *func0f0e2744(Gfx *gdl, s32 x1, s32 y1, s32 x2, s32 y2, u32 colour1, u32 colour2);
Gfx *func0f0e2aa4(Gfx *gdl, s32 x1, s32 y1, s32 x2, s32 y2, u32 colourleft, u32 arg6, u32 arg7, u32 arg8);
Gfx *func0f0e2ee8(Gfx *gdl, s32 x1, s32 y1, s32 x2, s32 y2, u32 colour1, u32 colour2);
Gfx *gfxDrawFilledRect(Gfx *gdl, s32 x1, s32 y1, s32 x2, s32 y2, u32 colour1, u32 colour2);
Gfx *gfxDrawChevron(Gfx *gdl, s32 x, s32 y, u32 arg3, u32 arg4, s32 arg5, u32 colour);
u32 func0f0e3324(void);
Gfx *gfxDrawSquare(Gfx *gdl, s32 x, s32 y, s32 size, bool fill, u32 bordercolour, u32 fillcolour);
u32 func0f0e39d0(void);
Gfx *func0f0e4190(Gfx *gdl);
void func0f0e4fd4(void);
u32 func0f0e4fe0(void);
u32 func0f0e5000(void);

#endif
