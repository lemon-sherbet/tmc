#ifndef FLAGS_H
#define FLAGS_H

#include "global.h"

extern u32 CheckFlags(u32);
extern u32 CheckGlobalFlag(u32);
extern u32 CheckGlobalFlags(u32);
extern u32 CheckLocalFlag(u32);
extern u32 CheckLocalFlagByOffset(u32, u32);
extern u32 CheckLocalFlags(u32);
extern u32 CheckLocalFlagsByOffset(u32, u32);
extern u32 CheckRoomFlag(u32);
extern u32 CheckRoomFlags(u32);

extern void ClearFlag(u32);
extern void ClearGlobalFlag(u32);
extern void ClearLocalFlag(u32);
extern void ClearLocalFlagByOffset(u32, u32);
extern void ClearRoomFlag(u32);

extern void SetFlag(u32);
extern void SetGlobalFlag(u32);
extern void SetLocalFlag(u32);
extern void SetLocalFlagByOffset(u32, u32);
extern void SetRoomFlag(u32);

extern u32 gGlobalFlags;

#endif