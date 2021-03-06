
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "global.h"
#include "entity.h"

// Identified
extern u32 Random(void);
extern void PlaySFX(u32);
extern void UpdateSpriteOrderAndFlip(Entity*);
extern void InitAnimationForceUpdate(Entity*, u32);
extern void ShowNPCDialogue(Entity*, u32*);
extern u32 UpdateFuseInteraction();
extern void CopyPosition(Entity*, Entity*);
extern void PositionRelative(Entity*, Entity*, u32, u32);
extern void InitializeAnimation(Entity*, u32);
extern void DeleteEntity(Entity*);
extern u32 __modsi3(u32, u32);
extern void DoFade(u32, u32);
extern void UpdateAnimationSingleFrame(Entity*);
extern u32 GetInventoryValue(u32);
extern void TextboxNoOverlapFollow(u32 index);
extern Entity* CreateFx(Entity*, u32, u32);
extern u32 CheckKinstoneFused(u32);

// Unidentified
extern void sub_0806ED78(Entity*);
extern void sub_0806920C(Entity*);
extern u32 sub_0805ACC0(Entity*);
extern u32 sub_0801E99C(Entity*);
extern void sub_0806924C(Entity*);
extern void sub_080AEF88(Entity*);
extern Entity* sub_080873AC(Entity*, u32, u32);
extern void sub_08078778(Entity*);
extern void sub_080787A8(Entity*, u32);
extern void sub_0806F118(Entity*);
extern void sub_080791D0();
extern void sub_08087380();
extern void sub_08004274();
extern void sub_0805EC9C();
extern void sub_0805EC60();
extern void sub_080873D0();
extern void sub_080045D4();
extern void sub_0806F69C();
extern void sub_0805E3A0(Entity*, u32);
extern void sub_0806D0B0(Entity*);
extern void sub_0807DD64(Entity*);
extern void sub_0807DDAC(Entity*, u32);
extern void sub_0807DDE4(Entity*);
extern void sub_0806D02C(Entity*);
extern u32 sub_0806F5A4(u32);
extern u32 sub_080045C4(Entity*, Entity*);
extern void sub_08078784(Entity*, u32);
extern void sub_0807DD50(Entity*);
extern void sub_0807DD94(Entity*, u32);
extern Entity* sub_0805EB00(u32, u32, u32);
extern Entity* sub_0805EB2C(u32, u32, u32, u32, u32);
extern u32 sub_0806FDEC(Entity*, u32*);
extern s32 sub_0806ED9C(Entity*, u32, u32);
extern s32* sub_0807DAD0(Entity*, u8*);
extern void sub_0806FF60(Entity*, u32, u32);
extern void sub_0806FF88(Entity*, u32, u32);
extern void sub_0807000C(Entity*);
extern void sub_0805E47C(Entity*);
extern void sub_0805E584(Entity*);
extern void sub_0806FAB0(Entity*, Entity*);
#endif
