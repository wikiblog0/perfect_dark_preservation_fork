#include <ultra64.h>
#include "constants.h"
#include "game/cheats.h"
#include "game/data/ailists.h"
#include "game/data/data_000000.h"
#include "game/data/data_0083d0.h"
#include "game/data/data_00e460.h"
#include "game/data/data_0160b0.h"
#include "game/data/data_01a3a0.h"
#include "game/data/data_020df0.h"
#include "game/data/data_02a0e0.h"
#include "game/data/data_02da90.h"
#include "game/game_00b480.h"
#include "game/game_00b820.h"
#include "game/game_00c490.h"
#include "game/game_0109d0.h"
#include "game/game_011110.h"
#include "game/game_012450.h"
#include "game/game_0125a0.h"
#include "game/game_012d50.h"
#include "game/game_0147d0.h"
#include "game/chr/chr.h"
#include "game/game_02cde0.h"
#include "game/game_0601b0.h"
#include "game/game_091e10.h"
#include "game/game_096750.h"
#include "game/game_111600.h"
#include "game/game_127910.h"
#include "game/game_157db0.h"
#include "game/game_1655c0.h"
#include "game/game_166e40.h"
#include "game/game_167ae0.h"
#include "game/game_17f930.h"
#include "game/game_19aa80.h"
#include "game/lang.h"
#include "game/mplayer.h"
#include "game/pad.h"
#include "game/propobj.h"
#include "gvars/gvars.h"
#include "lib/lib_121e0.h"
#include "lib/lib_12dc0.h"
#include "lib/lib_159b0.h"
#include "lib/lib_16110.h"
#include "lib/lib_1a500.h"
#include "lib/lib_233c0.h"
#include "lib/lib_4a360.h"
#include "types.h"

GLOBAL_ASM(
glabel func0f00c490
/*  f00c490:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f00c494:	3c028007 */ 	lui	$v0,%hi(g_Lifts)
/*  f00c498:	3c038007 */ 	lui	$v1,%hi(var80069a70)
/*  f00c49c:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f00c4a0:	24639a70 */ 	addiu	$v1,$v1,%lo(var80069a70)
/*  f00c4a4:	24429a48 */ 	addiu	$v0,$v0,%lo(g_Lifts)
.L0f00c4a8:
/*  f00c4a8:	24420004 */ 	addiu	$v0,$v0,0x4
/*  f00c4ac:	0043082b */ 	sltu	$at,$v0,$v1
/*  f00c4b0:	1420fffd */ 	bnez	$at,.L0f00c4a8
/*  f00c4b4:	ac40fffc */ 	sw	$zero,-0x4($v0)
/*  f00c4b8:	3c06800a */ 	lui	$a2,%hi(var8009ce40)
/*  f00c4bc:	3c07800a */ 	lui	$a3,%hi(var8009ce44)
/*  f00c4c0:	3c08800a */ 	lui	$t0,%hi(var8009ce48)
/*  f00c4c4:	3c09800a */ 	lui	$t1,%hi(var8009ce4c)
/*  f00c4c8:	2529ce4c */ 	addiu	$t1,$t1,%lo(var8009ce4c)
/*  f00c4cc:	2508ce48 */ 	addiu	$t0,$t0,%lo(var8009ce48)
/*  f00c4d0:	24e7ce44 */ 	addiu	$a3,$a3,%lo(var8009ce44)
/*  f00c4d4:	24c6ce40 */ 	addiu	$a2,$a2,%lo(var8009ce40)
/*  f00c4d8:	24030014 */ 	addiu	$v1,$zero,0x14
/*  f00c4dc:	240e0032 */ 	addiu	$t6,$zero,0x32
/*  f00c4e0:	240f000a */ 	addiu	$t7,$zero,0xa
/*  f00c4e4:	2418000f */ 	addiu	$t8,$zero,0xf
/*  f00c4e8:	acce0000 */ 	sw	$t6,0x0($a2)
/*  f00c4ec:	acef0000 */ 	sw	$t7,0x0($a3)
/*  f00c4f0:	ad030000 */ 	sw	$v1,0x0($t0)
/*  f00c4f4:	ad380000 */ 	sw	$t8,0x0($t1)
/*  f00c4f8:	3c028009 */ 	lui	$v0,%hi(g_Is4Mb)
/*  f00c4fc:	90420af0 */ 	lbu	$v0,%lo(g_Is4Mb)($v0)
/*  f00c500:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f00c504:	3c0a800a */ 	lui	$t2,%hi(g_Menus+0x2000)
/*  f00c508:	14820005 */ 	bne	$a0,$v0,.L0f00c520
/*  f00c50c:	3c0f800a */ 	lui	$t7,%hi(g_Vars+0x4b4)
/*  f00c510:	3c0a800a */ 	lui	$t2,%hi(var8009ce50)
/*  f00c514:	254ace50 */ 	addiu	$t2,$t2,%lo(var8009ce50)
/*  f00c518:	10000004 */ 	b	.L0f00c52c
/*  f00c51c:	ad430000 */ 	sw	$v1,%lo(g_Menus+0x2000)($t2)
.L0f00c520:
/*  f00c520:	254ace50 */ 	addiu	$t2,$t2,-12720
/*  f00c524:	24190064 */ 	addiu	$t9,$zero,0x64
/*  f00c528:	ad590000 */ 	sw	$t9,0x0($t2)
.L0f00c52c:
/*  f00c52c:	14820006 */ 	bne	$a0,$v0,.L0f00c548
/*  f00c530:	3c0b800a */ 	lui	$t3,%hi(g_Menus+0x2000)
/*  f00c534:	3c0b800a */ 	lui	$t3,%hi(var8009ce54)
/*  f00c538:	256bce54 */ 	addiu	$t3,$t3,%lo(var8009ce54)
/*  f00c53c:	240d0028 */ 	addiu	$t5,$zero,0x28
/*  f00c540:	10000004 */ 	b	.L0f00c554
/*  f00c544:	ad6d0000 */ 	sw	$t5,%lo(g_Menus+0x2000)($t3)
.L0f00c548:
/*  f00c548:	256bce54 */ 	addiu	$t3,$t3,-12716
/*  f00c54c:	240e0050 */ 	addiu	$t6,$zero,0x50
/*  f00c550:	ad6e0000 */ 	sw	$t6,0x0($t3)
.L0f00c554:
/*  f00c554:	8defa474 */ 	lw	$t7,%lo(g_Vars+0x4b4)($t7)
/*  f00c558:	29e1005a */ 	slti	$at,$t7,0x5a
/*  f00c55c:	14200007 */ 	bnez	$at,.L0f00c57c
/*  f00c560:	00000000 */ 	nop
/*  f00c564:	acc00000 */ 	sw	$zero,0x0($a2)
/*  f00c568:	ace00000 */ 	sw	$zero,0x0($a3)
/*  f00c56c:	ad000000 */ 	sw	$zero,0x0($t0)
/*  f00c570:	ad200000 */ 	sw	$zero,0x0($t1)
/*  f00c574:	ad400000 */ 	sw	$zero,0x0($t2)
/*  f00c578:	ad600000 */ 	sw	$zero,0x0($t3)
.L0f00c57c:
/*  f00c57c:	0fc03323 */ 	jal	func0f00cc8c
/*  f00c580:	00000000 */ 	nop
/*  f00c584:	0fc0338f */ 	jal	setupClearProxyMines
/*  f00c588:	00000000 */ 	nop
/*  f00c58c:	3c018007 */ 	lui	$at,%hi(g_AlarmTimer)
/*  f00c590:	ac2098d4 */ 	sw	$zero,%lo(g_AlarmTimer)($at)
/*  f00c594:	3c018007 */ 	lui	$at,%hi(g_AlarmAudioHandle)
/*  f00c598:	ac2098d8 */ 	sw	$zero,%lo(g_AlarmAudioHandle)($at)
/*  f00c59c:	3c014280 */ 	lui	$at,0x4280
/*  f00c5a0:	44812000 */ 	mtc1	$at,$f4
/*  f00c5a4:	44800000 */ 	mtc1	$zero,$f0
/*  f00c5a8:	3c018007 */ 	lui	$at,%hi(g_AlarmSpeakerWeight)
/*  f00c5ac:	e42498dc */ 	swc1	$f4,%lo(g_AlarmSpeakerWeight)($at)
/*  f00c5b0:	3c018007 */ 	lui	$at,%hi(var800698e4)
/*  f00c5b4:	e42098e4 */ 	swc1	$f0,%lo(var800698e4)($at)
/*  f00c5b8:	3c018007 */ 	lui	$at,%hi(var800698e8)
/*  f00c5bc:	3c028007 */ 	lui	$v0,%hi(var800698ec)
/*  f00c5c0:	ac2098e8 */ 	sw	$zero,%lo(var800698e8)($at)
/*  f00c5c4:	244298ec */ 	addiu	$v0,$v0,%lo(var800698ec)
/*  f00c5c8:	3c018007 */ 	lui	$at,%hi(var800698f8)
/*  f00c5cc:	e4400000 */ 	swc1	$f0,0x0($v0)
/*  f00c5d0:	e4400004 */ 	swc1	$f0,0x4($v0)
/*  f00c5d4:	e4400008 */ 	swc1	$f0,0x8($v0)
/*  f00c5d8:	ac2098f8 */ 	sw	$zero,%lo(var800698f8)($at)
/*  f00c5dc:	3c018007 */ 	lui	$at,%hi(var800698fc)
/*  f00c5e0:	e42098fc */ 	swc1	$f0,%lo(var800698fc)($at)
/*  f00c5e4:	3c018007 */ 	lui	$at,%hi(var80069900)
/*  f00c5e8:	ac209900 */ 	sw	$zero,%lo(var80069900)($at)
/*  f00c5ec:	240c0001 */ 	addiu	$t4,$zero,0x1
/*  f00c5f0:	3c018007 */ 	lui	$at,%hi(g_CountdownTimerVisible)
/*  f00c5f4:	ac2c9904 */ 	sw	$t4,%lo(g_CountdownTimerVisible)($at)
/*  f00c5f8:	3c018007 */ 	lui	$at,%hi(g_CountdownTimerRunning)
/*  f00c5fc:	ac209908 */ 	sw	$zero,%lo(g_CountdownTimerRunning)($at)
/*  f00c600:	3c018007 */ 	lui	$at,%hi(g_CountdownTimerValue)
/*  f00c604:	e420990c */ 	swc1	$f0,%lo(g_CountdownTimerValue)($at)
/*  f00c608:	3c018007 */ 	lui	$at,%hi(var80069910)
/*  f00c60c:	ac209910 */ 	sw	$zero,%lo(var80069910)($at)
/*  f00c610:	3c06800a */ 	lui	$a2,%hi(var8009ce40)
/*  f00c614:	3c018007 */ 	lui	$at,%hi(g_TintedGlassEnabled)
/*  f00c618:	24c6ce40 */ 	addiu	$a2,$a2,%lo(var8009ce40)
/*  f00c61c:	ac2098d0 */ 	sw	$zero,%lo(g_TintedGlassEnabled)($at)
/*  f00c620:	8cc30000 */ 	lw	$v1,0x0($a2)
/*  f00c624:	3c07800a */ 	lui	$a3,%hi(var8009ce44)
/*  f00c628:	3c08800a */ 	lui	$t0,%hi(var8009ce48)
/*  f00c62c:	3c09800a */ 	lui	$t1,%hi(var8009ce4c)
/*  f00c630:	3c0a800a */ 	lui	$t2,%hi(var8009ce50)
/*  f00c634:	3c0b800a */ 	lui	$t3,%hi(var8009ce54)
/*  f00c638:	256bce54 */ 	addiu	$t3,$t3,%lo(var8009ce54)
/*  f00c63c:	254ace50 */ 	addiu	$t2,$t2,%lo(var8009ce50)
/*  f00c640:	2529ce4c */ 	addiu	$t1,$t1,%lo(var8009ce4c)
/*  f00c644:	2508ce48 */ 	addiu	$t0,$t0,%lo(var8009ce48)
/*  f00c648:	14600006 */ 	bnez	$v1,.L0f00c664
/*  f00c64c:	24e7ce44 */ 	addiu	$a3,$a3,%lo(var8009ce44)
/*  f00c650:	3c04800a */ 	lui	$a0,%hi(var8009ce58)
/*  f00c654:	2484ce58 */ 	addiu	$a0,$a0,%lo(var8009ce58)
/*  f00c658:	ac800000 */ 	sw	$zero,0x0($a0)
/*  f00c65c:	1000002a */ 	b	.L0f00c708
/*  f00c660:	00001825 */ 	or	$v1,$zero,$zero
.L0f00c664:
/*  f00c664:	00032080 */ 	sll	$a0,$v1,0x2
/*  f00c668:	00832023 */ 	subu	$a0,$a0,$v1
/*  f00c66c:	00042080 */ 	sll	$a0,$a0,0x2
/*  f00c670:	00832021 */ 	addu	$a0,$a0,$v1
/*  f00c674:	000420c0 */ 	sll	$a0,$a0,0x3
/*  f00c678:	2484000f */ 	addiu	$a0,$a0,0xf
/*  f00c67c:	3498000f */ 	ori	$t8,$a0,0xf
/*  f00c680:	3b04000f */ 	xori	$a0,$t8,0xf
/*  f00c684:	0c0048f2 */ 	jal	malloc
/*  f00c688:	24050004 */ 	addiu	$a1,$zero,0x4
/*  f00c68c:	3c06800a */ 	lui	$a2,%hi(var8009ce40)
/*  f00c690:	24c6ce40 */ 	addiu	$a2,$a2,%lo(var8009ce40)
/*  f00c694:	8ccd0000 */ 	lw	$t5,0x0($a2)
/*  f00c698:	3c04800a */ 	lui	$a0,%hi(var8009ce58)
/*  f00c69c:	2484ce58 */ 	addiu	$a0,$a0,%lo(var8009ce58)
/*  f00c6a0:	3c07800a */ 	lui	$a3,%hi(var8009ce44)
/*  f00c6a4:	3c08800a */ 	lui	$t0,%hi(var8009ce48)
/*  f00c6a8:	3c09800a */ 	lui	$t1,%hi(var8009ce4c)
/*  f00c6ac:	3c0a800a */ 	lui	$t2,%hi(var8009ce50)
/*  f00c6b0:	3c0b800a */ 	lui	$t3,%hi(var8009ce54)
/*  f00c6b4:	256bce54 */ 	addiu	$t3,$t3,%lo(var8009ce54)
/*  f00c6b8:	254ace50 */ 	addiu	$t2,$t2,%lo(var8009ce50)
/*  f00c6bc:	2529ce4c */ 	addiu	$t1,$t1,%lo(var8009ce4c)
/*  f00c6c0:	2508ce48 */ 	addiu	$t0,$t0,%lo(var8009ce48)
/*  f00c6c4:	24e7ce44 */ 	addiu	$a3,$a3,%lo(var8009ce44)
/*  f00c6c8:	ac820000 */ 	sw	$v0,0x0($a0)
/*  f00c6cc:	19a0000c */ 	blez	$t5,.L0f00c700
/*  f00c6d0:	00001825 */ 	or	$v1,$zero,$zero
/*  f00c6d4:	00001025 */ 	or	$v0,$zero,$zero
/*  f00c6d8:	8c8e0000 */ 	lw	$t6,0x0($a0)
.L0f00c6dc:
/*  f00c6dc:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f00c6e0:	01c27821 */ 	addu	$t7,$t6,$v0
/*  f00c6e4:	ade00014 */ 	sw	$zero,0x14($t7)
/*  f00c6e8:	8cd80000 */ 	lw	$t8,0x0($a2)
/*  f00c6ec:	24420068 */ 	addiu	$v0,$v0,104
/*  f00c6f0:	0078082a */ 	slt	$at,$v1,$t8
/*  f00c6f4:	5420fff9 */ 	bnezl	$at,.L0f00c6dc
/*  f00c6f8:	8c8e0000 */ 	lw	$t6,0x0($a0)
/*  f00c6fc:	00001825 */ 	or	$v1,$zero,$zero
.L0f00c700:
/*  f00c700:	3c018007 */ 	lui	$at,%hi(var80069914)
/*  f00c704:	ac209914 */ 	sw	$zero,%lo(var80069914)($at)
.L0f00c708:
/*  f00c708:	8ce20000 */ 	lw	$v0,0x0($a3)
/*  f00c70c:	3c04800a */ 	lui	$a0,%hi(var8009ce5c)
/*  f00c710:	2484ce5c */ 	addiu	$a0,$a0,%lo(var8009ce5c)
/*  f00c714:	54400004 */ 	bnezl	$v0,.L0f00c728
/*  f00c718:	00022080 */ 	sll	$a0,$v0,0x2
/*  f00c71c:	10000029 */ 	b	.L0f00c7c4
/*  f00c720:	ac800000 */ 	sw	$zero,0x0($a0)
/*  f00c724:	00022080 */ 	sll	$a0,$v0,0x2
.L0f00c728:
/*  f00c728:	00822023 */ 	subu	$a0,$a0,$v0
/*  f00c72c:	000420c0 */ 	sll	$a0,$a0,0x3
/*  f00c730:	00822023 */ 	subu	$a0,$a0,$v0
/*  f00c734:	00042080 */ 	sll	$a0,$a0,0x2
/*  f00c738:	2484000f */ 	addiu	$a0,$a0,0xf
/*  f00c73c:	3499000f */ 	ori	$t9,$a0,0xf
/*  f00c740:	3b24000f */ 	xori	$a0,$t9,0xf
/*  f00c744:	24050004 */ 	addiu	$a1,$zero,0x4
/*  f00c748:	0c0048f2 */ 	jal	malloc
/*  f00c74c:	afa3001c */ 	sw	$v1,0x1c($sp)
/*  f00c750:	3c07800a */ 	lui	$a3,%hi(var8009ce44)
/*  f00c754:	24e7ce44 */ 	addiu	$a3,$a3,%lo(var8009ce44)
/*  f00c758:	8cee0000 */ 	lw	$t6,0x0($a3)
/*  f00c75c:	3c04800a */ 	lui	$a0,%hi(var8009ce5c)
/*  f00c760:	2484ce5c */ 	addiu	$a0,$a0,%lo(var8009ce5c)
/*  f00c764:	3c08800a */ 	lui	$t0,%hi(var8009ce48)
/*  f00c768:	3c09800a */ 	lui	$t1,%hi(var8009ce4c)
/*  f00c76c:	3c0a800a */ 	lui	$t2,%hi(var8009ce50)
/*  f00c770:	3c0b800a */ 	lui	$t3,%hi(var8009ce54)
/*  f00c774:	256bce54 */ 	addiu	$t3,$t3,%lo(var8009ce54)
/*  f00c778:	254ace50 */ 	addiu	$t2,$t2,%lo(var8009ce50)
/*  f00c77c:	2529ce4c */ 	addiu	$t1,$t1,%lo(var8009ce4c)
/*  f00c780:	2508ce48 */ 	addiu	$t0,$t0,%lo(var8009ce48)
/*  f00c784:	ac820000 */ 	sw	$v0,0x0($a0)
/*  f00c788:	19c0000c */ 	blez	$t6,.L0f00c7bc
/*  f00c78c:	8fa3001c */ 	lw	$v1,0x1c($sp)
/*  f00c790:	00001025 */ 	or	$v0,$zero,$zero
/*  f00c794:	8c8f0000 */ 	lw	$t7,0x0($a0)
.L0f00c798:
/*  f00c798:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f00c79c:	01e2c021 */ 	addu	$t8,$t7,$v0
/*  f00c7a0:	af000014 */ 	sw	$zero,0x14($t8)
/*  f00c7a4:	8cf90000 */ 	lw	$t9,0x0($a3)
/*  f00c7a8:	2442005c */ 	addiu	$v0,$v0,0x5c
/*  f00c7ac:	0079082a */ 	slt	$at,$v1,$t9
/*  f00c7b0:	5420fff9 */ 	bnezl	$at,.L0f00c798
/*  f00c7b4:	8c8f0000 */ 	lw	$t7,0x0($a0)
/*  f00c7b8:	00001825 */ 	or	$v1,$zero,$zero
.L0f00c7bc:
/*  f00c7bc:	3c018007 */ 	lui	$at,%hi(var80069918)
/*  f00c7c0:	ac209918 */ 	sw	$zero,%lo(var80069918)($at)
.L0f00c7c4:
/*  f00c7c4:	8d020000 */ 	lw	$v0,0x0($t0)
/*  f00c7c8:	3c04800a */ 	lui	$a0,%hi(var8009ce60)
/*  f00c7cc:	2484ce60 */ 	addiu	$a0,$a0,%lo(var8009ce60)
/*  f00c7d0:	54400004 */ 	bnezl	$v0,.L0f00c7e4
/*  f00c7d4:	00022080 */ 	sll	$a0,$v0,0x2
/*  f00c7d8:	10000023 */ 	b	.L0f00c868
/*  f00c7dc:	ac800000 */ 	sw	$zero,0x0($a0)
/*  f00c7e0:	00022080 */ 	sll	$a0,$v0,0x2
.L0f00c7e4:
/*  f00c7e4:	00822023 */ 	subu	$a0,$a0,$v0
/*  f00c7e8:	00042140 */ 	sll	$a0,$a0,0x5
/*  f00c7ec:	2484000f */ 	addiu	$a0,$a0,0xf
/*  f00c7f0:	348d000f */ 	ori	$t5,$a0,0xf
/*  f00c7f4:	39a4000f */ 	xori	$a0,$t5,0xf
/*  f00c7f8:	24050004 */ 	addiu	$a1,$zero,0x4
/*  f00c7fc:	0c0048f2 */ 	jal	malloc
/*  f00c800:	afa3001c */ 	sw	$v1,0x1c($sp)
/*  f00c804:	3c08800a */ 	lui	$t0,%hi(var8009ce48)
/*  f00c808:	2508ce48 */ 	addiu	$t0,$t0,%lo(var8009ce48)
/*  f00c80c:	8d0f0000 */ 	lw	$t7,0x0($t0)
/*  f00c810:	3c04800a */ 	lui	$a0,%hi(var8009ce60)
/*  f00c814:	2484ce60 */ 	addiu	$a0,$a0,%lo(var8009ce60)
/*  f00c818:	3c09800a */ 	lui	$t1,%hi(var8009ce4c)
/*  f00c81c:	3c0a800a */ 	lui	$t2,%hi(var8009ce50)
/*  f00c820:	3c0b800a */ 	lui	$t3,%hi(var8009ce54)
/*  f00c824:	256bce54 */ 	addiu	$t3,$t3,%lo(var8009ce54)
/*  f00c828:	254ace50 */ 	addiu	$t2,$t2,%lo(var8009ce50)
/*  f00c82c:	2529ce4c */ 	addiu	$t1,$t1,%lo(var8009ce4c)
/*  f00c830:	ac820000 */ 	sw	$v0,0x0($a0)
/*  f00c834:	19e0000c */ 	blez	$t7,.L0f00c868
/*  f00c838:	8fa3001c */ 	lw	$v1,0x1c($sp)
/*  f00c83c:	00001025 */ 	or	$v0,$zero,$zero
/*  f00c840:	8c980000 */ 	lw	$t8,0x0($a0)
.L0f00c844:
/*  f00c844:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f00c848:	0302c821 */ 	addu	$t9,$t8,$v0
/*  f00c84c:	af200014 */ 	sw	$zero,0x14($t9)
/*  f00c850:	8d0d0000 */ 	lw	$t5,0x0($t0)
/*  f00c854:	24420060 */ 	addiu	$v0,$v0,0x60
/*  f00c858:	006d082a */ 	slt	$at,$v1,$t5
/*  f00c85c:	5420fff9 */ 	bnezl	$at,.L0f00c844
/*  f00c860:	8c980000 */ 	lw	$t8,0x0($a0)
/*  f00c864:	00001825 */ 	or	$v1,$zero,$zero
.L0f00c868:
/*  f00c868:	8d220000 */ 	lw	$v0,0x0($t1)
/*  f00c86c:	14400004 */ 	bnez	$v0,.L0f00c880
/*  f00c870:	3c04800a */ 	lui	$a0,%hi(var8009ce64)
/*  f00c874:	2484ce64 */ 	addiu	$a0,$a0,%lo(var8009ce64)
/*  f00c878:	10000023 */ 	b	.L0f00c908
/*  f00c87c:	ac800000 */ 	sw	$zero,0x0($a0)
.L0f00c880:
/*  f00c880:	00022080 */ 	sll	$a0,$v0,0x2
/*  f00c884:	00822023 */ 	subu	$a0,$a0,$v0
/*  f00c888:	000420c0 */ 	sll	$a0,$a0,0x3
/*  f00c88c:	00822023 */ 	subu	$a0,$a0,$v0
/*  f00c890:	00042080 */ 	sll	$a0,$a0,0x2
/*  f00c894:	2484000f */ 	addiu	$a0,$a0,0xf
/*  f00c898:	348e000f */ 	ori	$t6,$a0,0xf
/*  f00c89c:	39c4000f */ 	xori	$a0,$t6,0xf
/*  f00c8a0:	24050004 */ 	addiu	$a1,$zero,0x4
/*  f00c8a4:	0c0048f2 */ 	jal	malloc
/*  f00c8a8:	afa3001c */ 	sw	$v1,0x1c($sp)
/*  f00c8ac:	3c09800a */ 	lui	$t1,%hi(var8009ce4c)
/*  f00c8b0:	2529ce4c */ 	addiu	$t1,$t1,%lo(var8009ce4c)
/*  f00c8b4:	8d380000 */ 	lw	$t8,0x0($t1)
/*  f00c8b8:	3c04800a */ 	lui	$a0,%hi(var8009ce64)
/*  f00c8bc:	2484ce64 */ 	addiu	$a0,$a0,%lo(var8009ce64)
/*  f00c8c0:	3c0a800a */ 	lui	$t2,%hi(var8009ce50)
/*  f00c8c4:	3c0b800a */ 	lui	$t3,%hi(var8009ce54)
/*  f00c8c8:	256bce54 */ 	addiu	$t3,$t3,%lo(var8009ce54)
/*  f00c8cc:	254ace50 */ 	addiu	$t2,$t2,%lo(var8009ce50)
/*  f00c8d0:	ac820000 */ 	sw	$v0,0x0($a0)
/*  f00c8d4:	1b00000c */ 	blez	$t8,.L0f00c908
/*  f00c8d8:	8fa3001c */ 	lw	$v1,0x1c($sp)
/*  f00c8dc:	00001025 */ 	or	$v0,$zero,$zero
/*  f00c8e0:	8c990000 */ 	lw	$t9,0x0($a0)
.L0f00c8e4:
/*  f00c8e4:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f00c8e8:	03226821 */ 	addu	$t5,$t9,$v0
/*  f00c8ec:	ada00014 */ 	sw	$zero,0x14($t5)
/*  f00c8f0:	8d2e0000 */ 	lw	$t6,0x0($t1)
/*  f00c8f4:	2442005c */ 	addiu	$v0,$v0,0x5c
/*  f00c8f8:	006e082a */ 	slt	$at,$v1,$t6
/*  f00c8fc:	5420fff9 */ 	bnezl	$at,.L0f00c8e4
/*  f00c900:	8c990000 */ 	lw	$t9,0x0($a0)
/*  f00c904:	00001825 */ 	or	$v1,$zero,$zero
.L0f00c908:
/*  f00c908:	8d420000 */ 	lw	$v0,0x0($t2)
/*  f00c90c:	14400004 */ 	bnez	$v0,.L0f00c920
/*  f00c910:	3c05800a */ 	lui	$a1,%hi(var8009ce68)
/*  f00c914:	24a5ce68 */ 	addiu	$a1,$a1,%lo(var8009ce68)
/*  f00c918:	10000022 */ 	b	.L0f00c9a4
/*  f00c91c:	aca00000 */ 	sw	$zero,0x0($a1)
.L0f00c920:
/*  f00c920:	00022100 */ 	sll	$a0,$v0,0x4
/*  f00c924:	00822021 */ 	addu	$a0,$a0,$v0
/*  f00c928:	00042080 */ 	sll	$a0,$a0,0x2
/*  f00c92c:	00822023 */ 	subu	$a0,$a0,$v0
/*  f00c930:	00042080 */ 	sll	$a0,$a0,0x2
/*  f00c934:	2484000f */ 	addiu	$a0,$a0,0xf
/*  f00c938:	348f000f */ 	ori	$t7,$a0,0xf
/*  f00c93c:	39e4000f */ 	xori	$a0,$t7,0xf
/*  f00c940:	24050004 */ 	addiu	$a1,$zero,0x4
/*  f00c944:	0c0048f2 */ 	jal	malloc
/*  f00c948:	afa3001c */ 	sw	$v1,0x1c($sp)
/*  f00c94c:	3c0a800a */ 	lui	$t2,%hi(var8009ce50)
/*  f00c950:	254ace50 */ 	addiu	$t2,$t2,%lo(var8009ce50)
/*  f00c954:	8d590000 */ 	lw	$t9,0x0($t2)
/*  f00c958:	3c05800a */ 	lui	$a1,%hi(var8009ce68)
/*  f00c95c:	24a5ce68 */ 	addiu	$a1,$a1,%lo(var8009ce68)
/*  f00c960:	3c0b800a */ 	lui	$t3,%hi(var8009ce54)
/*  f00c964:	256bce54 */ 	addiu	$t3,$t3,%lo(var8009ce54)
/*  f00c968:	aca20000 */ 	sw	$v0,0x0($a1)
/*  f00c96c:	1b20000d */ 	blez	$t9,.L0f00c9a4
/*  f00c970:	8fa3001c */ 	lw	$v1,0x1c($sp)
/*  f00c974:	00001025 */ 	or	$v0,$zero,$zero
/*  f00c978:	3c048000 */ 	lui	$a0,0x8000
/*  f00c97c:	8cad0000 */ 	lw	$t5,0x0($a1)
.L0f00c980:
/*  f00c980:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f00c984:	01a27021 */ 	addu	$t6,$t5,$v0
/*  f00c988:	adc40000 */ 	sw	$a0,0x0($t6)
/*  f00c98c:	8d4f0000 */ 	lw	$t7,0x0($t2)
/*  f00c990:	2442010c */ 	addiu	$v0,$v0,0x10c
/*  f00c994:	006f082a */ 	slt	$at,$v1,$t7
/*  f00c998:	5420fff9 */ 	bnezl	$at,.L0f00c980
/*  f00c99c:	8cad0000 */ 	lw	$t5,0x0($a1)
/*  f00c9a0:	00001825 */ 	or	$v1,$zero,$zero
.L0f00c9a4:
/*  f00c9a4:	8d620000 */ 	lw	$v0,0x0($t3)
/*  f00c9a8:	14400004 */ 	bnez	$v0,.L0f00c9bc
/*  f00c9ac:	3c04800a */ 	lui	$a0,%hi(var8009ce6c)
/*  f00c9b0:	2484ce6c */ 	addiu	$a0,$a0,%lo(var8009ce6c)
/*  f00c9b4:	1000001e */ 	b	.L0f00ca30
/*  f00c9b8:	ac800000 */ 	sw	$zero,0x0($a0)
.L0f00c9bc:
/*  f00c9bc:	000220c0 */ 	sll	$a0,$v0,0x3
/*  f00c9c0:	00822021 */ 	addu	$a0,$a0,$v0
/*  f00c9c4:	000420c0 */ 	sll	$a0,$a0,0x3
/*  f00c9c8:	2484000f */ 	addiu	$a0,$a0,0xf
/*  f00c9cc:	3498000f */ 	ori	$t8,$a0,0xf
/*  f00c9d0:	3b04000f */ 	xori	$a0,$t8,0xf
/*  f00c9d4:	24050004 */ 	addiu	$a1,$zero,0x4
/*  f00c9d8:	0c0048f2 */ 	jal	malloc
/*  f00c9dc:	afa3001c */ 	sw	$v1,0x1c($sp)
/*  f00c9e0:	3c0b800a */ 	lui	$t3,%hi(var8009ce54)
/*  f00c9e4:	256bce54 */ 	addiu	$t3,$t3,%lo(var8009ce54)
/*  f00c9e8:	8d6d0000 */ 	lw	$t5,0x0($t3)
/*  f00c9ec:	3c04800a */ 	lui	$a0,%hi(var8009ce6c)
/*  f00c9f0:	2484ce6c */ 	addiu	$a0,$a0,%lo(var8009ce6c)
/*  f00c9f4:	ac820000 */ 	sw	$v0,0x0($a0)
/*  f00c9f8:	8fa3001c */ 	lw	$v1,0x1c($sp)
/*  f00c9fc:	19a0000c */ 	blez	$t5,.L0f00ca30
/*  f00ca00:	240c0001 */ 	addiu	$t4,$zero,0x1
/*  f00ca04:	00001025 */ 	or	$v0,$zero,$zero
/*  f00ca08:	8c8e0000 */ 	lw	$t6,0x0($a0)
.L0f00ca0c:
/*  f00ca0c:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f00ca10:	01c27821 */ 	addu	$t7,$t6,$v0
/*  f00ca14:	adec0000 */ 	sw	$t4,0x0($t7)
/*  f00ca18:	8d780000 */ 	lw	$t8,0x0($t3)
/*  f00ca1c:	24420048 */ 	addiu	$v0,$v0,0x48
/*  f00ca20:	0078082a */ 	slt	$at,$v1,$t8
/*  f00ca24:	5420fff9 */ 	bnezl	$at,.L0f00ca0c
/*  f00ca28:	8c8e0000 */ 	lw	$t6,0x0($a0)
/*  f00ca2c:	00001825 */ 	or	$v1,$zero,$zero
.L0f00ca30:
/*  f00ca30:	3c013f80 */ 	lui	$at,0x3f80
/*  f00ca34:	44810000 */ 	mtc1	$at,$f0
/*  f00ca38:	3c018007 */ 	lui	$at,%hi(g_LiftDoors)
/*  f00ca3c:	ac20991c */ 	sw	$zero,%lo(g_LiftDoors)($at)
/*  f00ca40:	3c018007 */ 	lui	$at,%hi(g_PadlockedDoors)
/*  f00ca44:	ac209920 */ 	sw	$zero,%lo(g_PadlockedDoors)($at)
/*  f00ca48:	3c018007 */ 	lui	$at,%hi(g_SafeItems)
/*  f00ca4c:	ac209924 */ 	sw	$zero,%lo(g_SafeItems)($at)
/*  f00ca50:	3c018007 */ 	lui	$at,%hi(g_LinkedScenery)
/*  f00ca54:	ac209928 */ 	sw	$zero,%lo(g_LinkedScenery)($at)
/*  f00ca58:	3c018007 */ 	lui	$at,%hi(g_BlockedPaths)
/*  f00ca5c:	ac20992c */ 	sw	$zero,%lo(g_BlockedPaths)($at)
/*  f00ca60:	3c018007 */ 	lui	$at,%hi(var80069930)
/*  f00ca64:	ac209930 */ 	sw	$zero,%lo(var80069930)($at)
/*  f00ca68:	3c018007 */ 	lui	$at,%hi(var80069934)
/*  f00ca6c:	2419ffff */ 	addiu	$t9,$zero,-1
/*  f00ca70:	ac399934 */ 	sw	$t9,%lo(var80069934)($at)
/*  f00ca74:	3c018007 */ 	lui	$at,%hi(var80069948)
/*  f00ca78:	e4209948 */ 	swc1	$f0,%lo(var80069948)($at)
/*  f00ca7c:	3c018007 */ 	lui	$at,%hi(var8006994c)
/*  f00ca80:	e420994c */ 	swc1	$f0,%lo(var8006994c)($at)
/*  f00ca84:	3c018007 */ 	lui	$at,%hi(var80069950)
/*  f00ca88:	e4209950 */ 	swc1	$f0,%lo(var80069950)($at)
/*  f00ca8c:	3c018007 */ 	lui	$at,%hi(var80069954)
/*  f00ca90:	e4209954 */ 	swc1	$f0,%lo(var80069954)($at)
/*  f00ca94:	3c018007 */ 	lui	$at,%hi(var80069958)
/*  f00ca98:	e4209958 */ 	swc1	$f0,%lo(var80069958)($at)
/*  f00ca9c:	3c02800a */ 	lui	$v0,%hi(g_Vars)
/*  f00caa0:	3c018007 */ 	lui	$at,%hi(g_AmmoMultiplier)
/*  f00caa4:	24429fc0 */ 	addiu	$v0,$v0,%lo(g_Vars)
/*  f00caa8:	e420995c */ 	swc1	$f0,%lo(g_AmmoMultiplier)($at)
/*  f00caac:	8c4d0318 */ 	lw	$t5,0x318($v0)
/*  f00cab0:	11a00005 */ 	beqz	$t5,.L0f00cac8
/*  f00cab4:	3c078007 */ 	lui	$a3,%hi(var80069970)
/*  f00cab8:	24e79970 */ 	addiu	$a3,$a3,%lo(var80069970)
/*  f00cabc:	240e000c */ 	addiu	$t6,$zero,0xc
/*  f00cac0:	1000001f */ 	b	.L0f00cb40
/*  f00cac4:	acee0000 */ 	sw	$t6,0x0($a3)
.L0f00cac8:
/*  f00cac8:	8c4f006c */ 	lw	$t7,0x6c($v0)
/*  f00cacc:	3c078007 */ 	lui	$a3,%hi(var80069970)
/*  f00cad0:	24e79970 */ 	addiu	$a3,$a3,%lo(var80069970)
/*  f00cad4:	51e00004 */ 	beqzl	$t7,.L0f00cae8
/*  f00cad8:	00003025 */ 	or	$a2,$zero,$zero
/*  f00cadc:	10000002 */ 	b	.L0f00cae8
/*  f00cae0:	24060001 */ 	addiu	$a2,$zero,0x1
/*  f00cae4:	00003025 */ 	or	$a2,$zero,$zero
.L0f00cae8:
/*  f00cae8:	8c580068 */ 	lw	$t8,0x68($v0)
/*  f00caec:	53000004 */ 	beqzl	$t8,.L0f00cb00
/*  f00caf0:	00002025 */ 	or	$a0,$zero,$zero
/*  f00caf4:	10000002 */ 	b	.L0f00cb00
/*  f00caf8:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f00cafc:	00002025 */ 	or	$a0,$zero,$zero
.L0f00cb00:
/*  f00cb00:	8c590064 */ 	lw	$t9,0x64($v0)
/*  f00cb04:	53200004 */ 	beqzl	$t9,.L0f00cb18
/*  f00cb08:	00002825 */ 	or	$a1,$zero,$zero
/*  f00cb0c:	10000002 */ 	b	.L0f00cb18
/*  f00cb10:	24050001 */ 	addiu	$a1,$zero,0x1
/*  f00cb14:	00002825 */ 	or	$a1,$zero,$zero
.L0f00cb18:
/*  f00cb18:	8c4d0070 */ 	lw	$t5,0x70($v0)
/*  f00cb1c:	51a00004 */ 	beqzl	$t5,.L0f00cb30
/*  f00cb20:	00001025 */ 	or	$v0,$zero,$zero
/*  f00cb24:	10000002 */ 	b	.L0f00cb30
/*  f00cb28:	24020001 */ 	addiu	$v0,$zero,0x1
/*  f00cb2c:	00001025 */ 	or	$v0,$zero,$zero
.L0f00cb30:
/*  f00cb30:	00457021 */ 	addu	$t6,$v0,$a1
/*  f00cb34:	01c47821 */ 	addu	$t7,$t6,$a0
/*  f00cb38:	01e6c021 */ 	addu	$t8,$t7,$a2
/*  f00cb3c:	acf80000 */ 	sw	$t8,0x0($a3)
.L0f00cb40:
/*  f00cb40:	8ce40000 */ 	lw	$a0,0x0($a3)
/*  f00cb44:	24050004 */ 	addiu	$a1,$zero,0x4
/*  f00cb48:	afa3001c */ 	sw	$v1,0x1c($sp)
/*  f00cb4c:	0004c880 */ 	sll	$t9,$a0,0x2
/*  f00cb50:	0324c823 */ 	subu	$t9,$t9,$a0
/*  f00cb54:	0019c880 */ 	sll	$t9,$t9,0x2
/*  f00cb58:	0324c823 */ 	subu	$t9,$t9,$a0
/*  f00cb5c:	0019c880 */ 	sll	$t9,$t9,0x2
/*  f00cb60:	0324c823 */ 	subu	$t9,$t9,$a0
/*  f00cb64:	0019c880 */ 	sll	$t9,$t9,0x2
/*  f00cb68:	2724000f */ 	addiu	$a0,$t9,0xf
/*  f00cb6c:	348d000f */ 	ori	$t5,$a0,0xf
/*  f00cb70:	0c0048f2 */ 	jal	malloc
/*  f00cb74:	39a4000f */ 	xori	$a0,$t5,0xf
/*  f00cb78:	3c078007 */ 	lui	$a3,%hi(var80069970)
/*  f00cb7c:	24e79970 */ 	addiu	$a3,$a3,%lo(var80069970)
/*  f00cb80:	8ce40000 */ 	lw	$a0,0x0($a3)
/*  f00cb84:	3c068007 */ 	lui	$a2,%hi(g_ThrownLaptops)
/*  f00cb88:	24c69968 */ 	addiu	$a2,$a2,%lo(g_ThrownLaptops)
/*  f00cb8c:	00047880 */ 	sll	$t7,$a0,0x2
/*  f00cb90:	01e47823 */ 	subu	$t7,$t7,$a0
/*  f00cb94:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f00cb98:	01e47823 */ 	subu	$t7,$t7,$a0
/*  f00cb9c:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f00cba0:	25e4000f */ 	addiu	$a0,$t7,0xf
/*  f00cba4:	3498000f */ 	ori	$t8,$a0,0xf
/*  f00cba8:	acc20000 */ 	sw	$v0,0x0($a2)
/*  f00cbac:	3b04000f */ 	xori	$a0,$t8,0xf
/*  f00cbb0:	0c0048f2 */ 	jal	malloc
/*  f00cbb4:	24050004 */ 	addiu	$a1,$zero,0x4
/*  f00cbb8:	3c078007 */ 	lui	$a3,%hi(var80069970)
/*  f00cbbc:	3c018007 */ 	lui	$at,%hi(var8006996c)
/*  f00cbc0:	ac22996c */ 	sw	$v0,%lo(var8006996c)($at)
/*  f00cbc4:	24e79970 */ 	addiu	$a3,$a3,%lo(var80069970)
/*  f00cbc8:	8ced0000 */ 	lw	$t5,0x0($a3)
/*  f00cbcc:	3c068007 */ 	lui	$a2,%hi(g_ThrownLaptops)
/*  f00cbd0:	24c69968 */ 	addiu	$a2,$a2,%lo(g_ThrownLaptops)
/*  f00cbd4:	19a0000b */ 	blez	$t5,.L0f00cc04
/*  f00cbd8:	8fa3001c */ 	lw	$v1,0x1c($sp)
/*  f00cbdc:	00001025 */ 	or	$v0,$zero,$zero
/*  f00cbe0:	8cce0000 */ 	lw	$t6,0x0($a2)
.L0f00cbe4:
/*  f00cbe4:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f00cbe8:	01c27821 */ 	addu	$t7,$t6,$v0
/*  f00cbec:	ade00014 */ 	sw	$zero,0x14($t7)
/*  f00cbf0:	8cf80000 */ 	lw	$t8,0x0($a3)
/*  f00cbf4:	244200ac */ 	addiu	$v0,$v0,0xac
/*  f00cbf8:	0078082a */ 	slt	$at,$v1,$t8
/*  f00cbfc:	5420fff9 */ 	bnezl	$at,.L0f00cbe4
/*  f00cc00:	8cce0000 */ 	lw	$t6,0x0($a2)
.L0f00cc04:
/*  f00cc04:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f00cc08:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f00cc0c:	03e00008 */ 	jr	$ra
/*  f00cc10:	00000000 */ 	nop
);

void addLiftDoor(struct linkliftdoorobj *link)
{
	link->next = g_LiftDoors;
	g_LiftDoors = link;
}

void addPadlockedDoor(struct padlockeddoorobj *link)
{
	link->next = g_PadlockedDoors;
	g_PadlockedDoors = link;
}

void addSafeItem(struct safeitemobj *link)
{
	link->next = g_SafeItems;
	g_SafeItems = link;
}

void addConditionalScenery(struct linksceneryobj *link)
{
	link->next = g_LinkedScenery;
	g_LinkedScenery = link;
}

void addBlockedPath(struct blockedpathobj *blockedpath)
{
	blockedpath->next = g_BlockedPaths;
	g_BlockedPaths = blockedpath;
}

GLOBAL_ASM(
glabel func0f00cc8c
/*  f00cc8c:	27bdfea0 */ 	addiu	$sp,$sp,-352
/*  f00cc90:	3c0e8006 */ 	lui	$t6,%hi(var80061a80)
/*  f00cc94:	27a200ec */ 	addiu	$v0,$sp,0xec
/*  f00cc98:	25ce1a80 */ 	addiu	$t6,$t6,%lo(var80061a80)
/*  f00cc9c:	27a30078 */ 	addiu	$v1,$sp,0x78
/*  f00cca0:	27a40004 */ 	addiu	$a0,$sp,0x4
/*  f00cca4:	25d9006c */ 	addiu	$t9,$t6,0x6c
/*  f00cca8:	00404025 */ 	or	$t0,$v0,$zero
.L0f00ccac:
/*  f00ccac:	8dc10000 */ 	lw	$at,0x0($t6)
/*  f00ccb0:	25ce000c */ 	addiu	$t6,$t6,0xc
/*  f00ccb4:	2508000c */ 	addiu	$t0,$t0,0xc
/*  f00ccb8:	ad01fff4 */ 	sw	$at,-0xc($t0)
/*  f00ccbc:	8dc1fff8 */ 	lw	$at,-0x8($t6)
/*  f00ccc0:	ad01fff8 */ 	sw	$at,-0x8($t0)
/*  f00ccc4:	8dc1fffc */ 	lw	$at,-0x4($t6)
/*  f00ccc8:	15d9fff8 */ 	bne	$t6,$t9,.L0f00ccac
/*  f00cccc:	ad01fffc */ 	sw	$at,-0x4($t0)
/*  f00ccd0:	8dc10000 */ 	lw	$at,0x0($t6)
/*  f00ccd4:	3c09800a */ 	lui	$t1,%hi(var8009ce98)
/*  f00ccd8:	2529ce98 */ 	addiu	$t1,$t1,%lo(var8009ce98)
/*  f00ccdc:	ad010000 */ 	sw	$at,0x0($t0)
/*  f00cce0:	8dd90004 */ 	lw	$t9,0x4($t6)
/*  f00cce4:	00406825 */ 	or	$t5,$v0,$zero
/*  f00cce8:	244c006c */ 	addiu	$t4,$v0,0x6c
/*  f00ccec:	ad190004 */ 	sw	$t9,0x4($t0)
.L0f00ccf0:
/*  f00ccf0:	8da10000 */ 	lw	$at,0x0($t5)
/*  f00ccf4:	25ad000c */ 	addiu	$t5,$t5,0xc
/*  f00ccf8:	2529000c */ 	addiu	$t1,$t1,0xc
/*  f00ccfc:	ad21fff4 */ 	sw	$at,-0xc($t1)
/*  f00cd00:	8da1fff8 */ 	lw	$at,-0x8($t5)
/*  f00cd04:	ad21fff8 */ 	sw	$at,-0x8($t1)
/*  f00cd08:	8da1fffc */ 	lw	$at,-0x4($t5)
/*  f00cd0c:	15acfff8 */ 	bne	$t5,$t4,.L0f00ccf0
/*  f00cd10:	ad21fffc */ 	sw	$at,-0x4($t1)
/*  f00cd14:	8da10000 */ 	lw	$at,0x0($t5)
/*  f00cd18:	3c188006 */ 	lui	$t8,%hi(var80061af4)
/*  f00cd1c:	27181af4 */ 	addiu	$t8,$t8,%lo(var80061af4)
/*  f00cd20:	ad210000 */ 	sw	$at,0x0($t1)
/*  f00cd24:	8dac0004 */ 	lw	$t4,0x4($t5)
/*  f00cd28:	270e006c */ 	addiu	$t6,$t8,0x6c
/*  f00cd2c:	00604025 */ 	or	$t0,$v1,$zero
/*  f00cd30:	ad2c0004 */ 	sw	$t4,0x4($t1)
.L0f00cd34:
/*  f00cd34:	8f010000 */ 	lw	$at,0x0($t8)
/*  f00cd38:	2718000c */ 	addiu	$t8,$t8,0xc
/*  f00cd3c:	2508000c */ 	addiu	$t0,$t0,0xc
/*  f00cd40:	ad01fff4 */ 	sw	$at,-0xc($t0)
/*  f00cd44:	8f01fff8 */ 	lw	$at,-0x8($t8)
/*  f00cd48:	ad01fff8 */ 	sw	$at,-0x8($t0)
/*  f00cd4c:	8f01fffc */ 	lw	$at,-0x4($t8)
/*  f00cd50:	170efff8 */ 	bne	$t8,$t6,.L0f00cd34
/*  f00cd54:	ad01fffc */ 	sw	$at,-0x4($t0)
/*  f00cd58:	8f010000 */ 	lw	$at,0x0($t8)
/*  f00cd5c:	3c0b800a */ 	lui	$t3,%hi(var8009cf10)
/*  f00cd60:	256bcf10 */ 	addiu	$t3,$t3,%lo(var8009cf10)
/*  f00cd64:	ad010000 */ 	sw	$at,0x0($t0)
/*  f00cd68:	8f0e0004 */ 	lw	$t6,0x4($t8)
/*  f00cd6c:	00604825 */ 	or	$t1,$v1,$zero
/*  f00cd70:	246d006c */ 	addiu	$t5,$v1,0x6c
/*  f00cd74:	ad0e0004 */ 	sw	$t6,0x4($t0)
.L0f00cd78:
/*  f00cd78:	8d210000 */ 	lw	$at,0x0($t1)
/*  f00cd7c:	2529000c */ 	addiu	$t1,$t1,0xc
/*  f00cd80:	256b000c */ 	addiu	$t3,$t3,0xc
/*  f00cd84:	ad61fff4 */ 	sw	$at,-0xc($t3)
/*  f00cd88:	8d21fff8 */ 	lw	$at,-0x8($t1)
/*  f00cd8c:	ad61fff8 */ 	sw	$at,-0x8($t3)
/*  f00cd90:	8d21fffc */ 	lw	$at,-0x4($t1)
/*  f00cd94:	152dfff8 */ 	bne	$t1,$t5,.L0f00cd78
/*  f00cd98:	ad61fffc */ 	sw	$at,-0x4($t3)
/*  f00cd9c:	8d210000 */ 	lw	$at,0x0($t1)
/*  f00cda0:	3c198006 */ 	lui	$t9,%hi(var80061b68)
/*  f00cda4:	27391b68 */ 	addiu	$t9,$t9,%lo(var80061b68)
/*  f00cda8:	ad610000 */ 	sw	$at,0x0($t3)
/*  f00cdac:	8d2d0004 */ 	lw	$t5,0x4($t1)
/*  f00cdb0:	2738006c */ 	addiu	$t8,$t9,0x6c
/*  f00cdb4:	00804025 */ 	or	$t0,$a0,$zero
/*  f00cdb8:	ad6d0004 */ 	sw	$t5,0x4($t3)
.L0f00cdbc:
/*  f00cdbc:	8f210000 */ 	lw	$at,0x0($t9)
/*  f00cdc0:	2739000c */ 	addiu	$t9,$t9,0xc
/*  f00cdc4:	2508000c */ 	addiu	$t0,$t0,0xc
/*  f00cdc8:	ad01fff4 */ 	sw	$at,-0xc($t0)
/*  f00cdcc:	8f21fff8 */ 	lw	$at,-0x8($t9)
/*  f00cdd0:	ad01fff8 */ 	sw	$at,-0x8($t0)
/*  f00cdd4:	8f21fffc */ 	lw	$at,-0x4($t9)
/*  f00cdd8:	1738fff8 */ 	bne	$t9,$t8,.L0f00cdbc
/*  f00cddc:	ad01fffc */ 	sw	$at,-0x4($t0)
/*  f00cde0:	8f210000 */ 	lw	$at,0x0($t9)
/*  f00cde4:	3c0c800a */ 	lui	$t4,%hi(var8009cf88)
/*  f00cde8:	258ccf88 */ 	addiu	$t4,$t4,%lo(var8009cf88)
/*  f00cdec:	ad010000 */ 	sw	$at,0x0($t0)
/*  f00cdf0:	8f380004 */ 	lw	$t8,0x4($t9)
/*  f00cdf4:	00805825 */ 	or	$t3,$a0,$zero
/*  f00cdf8:	2489006c */ 	addiu	$t1,$a0,0x6c
/*  f00cdfc:	ad180004 */ 	sw	$t8,0x4($t0)
.L0f00ce00:
/*  f00ce00:	8d610000 */ 	lw	$at,0x0($t3)
/*  f00ce04:	256b000c */ 	addiu	$t3,$t3,0xc
/*  f00ce08:	258c000c */ 	addiu	$t4,$t4,0xc
/*  f00ce0c:	ad81fff4 */ 	sw	$at,-0xc($t4)
/*  f00ce10:	8d61fff8 */ 	lw	$at,-0x8($t3)
/*  f00ce14:	ad81fff8 */ 	sw	$at,-0x8($t4)
/*  f00ce18:	8d61fffc */ 	lw	$at,-0x4($t3)
/*  f00ce1c:	1569fff8 */ 	bne	$t3,$t1,.L0f00ce00
/*  f00ce20:	ad81fffc */ 	sw	$at,-0x4($t4)
/*  f00ce24:	8d610000 */ 	lw	$at,0x0($t3)
/*  f00ce28:	ad810000 */ 	sw	$at,0x0($t4)
/*  f00ce2c:	8d690004 */ 	lw	$t1,0x4($t3)
/*  f00ce30:	27bd0160 */ 	addiu	$sp,$sp,0x160
/*  f00ce34:	03e00008 */ 	jr	$ra
/*  f00ce38:	ad890004 */ 	sw	$t1,0x4($t4)
);

void setupClearProxyMines(void)
{
	s32 i;

	for (i = 0; i < ARRAYCOUNT(g_ProxyMines); i++) {
		g_ProxyMines[i] = NULL;
	}
}

GLOBAL_ASM(
glabel setupCountCommandType
/*  f00ce60:	27bdffd8 */ 	addiu	$sp,$sp,-40
/*  f00ce64:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f00ce68:	3c10800a */ 	lui	$s0,%hi(g_StageSetup+0x10)
/*  f00ce6c:	8e10d040 */ 	lw	$s0,%lo(g_StageSetup+0x10)($s0)
/*  f00ce70:	afb10018 */ 	sw	$s1,0x18($sp)
/*  f00ce74:	afbf0024 */ 	sw	$ra,0x24($sp)
/*  f00ce78:	afb30020 */ 	sw	$s3,0x20($sp)
/*  f00ce7c:	afb2001c */ 	sw	$s2,0x1c($sp)
/*  f00ce80:	12000010 */ 	beqz	$s0,.L0f00cec4
/*  f00ce84:	00008825 */ 	or	$s1,$zero,$zero
/*  f00ce88:	92030003 */ 	lbu	$v1,0x3($s0)
/*  f00ce8c:	24130034 */ 	addiu	$s3,$zero,0x34
/*  f00ce90:	309200ff */ 	andi	$s2,$a0,0xff
/*  f00ce94:	5263000c */ 	beql	$s3,$v1,.L0f00cec8
/*  f00ce98:	8fbf0024 */ 	lw	$ra,0x24($sp)
.L0f00ce9c:
/*  f00ce9c:	16430002 */ 	bne	$s2,$v1,.L0f00cea8
/*  f00cea0:	00000000 */ 	nop
/*  f00cea4:	26310001 */ 	addiu	$s1,$s1,0x1
.L0f00cea8:
/*  f00cea8:	0fc24784 */ 	jal	setupGetCommandLength
/*  f00ceac:	02002025 */ 	or	$a0,$s0,$zero
/*  f00ceb0:	00027080 */ 	sll	$t6,$v0,0x2
/*  f00ceb4:	01d08021 */ 	addu	$s0,$t6,$s0
/*  f00ceb8:	92030003 */ 	lbu	$v1,0x3($s0)
/*  f00cebc:	1663fff7 */ 	bne	$s3,$v1,.L0f00ce9c
/*  f00cec0:	00000000 */ 	nop
.L0f00cec4:
/*  f00cec4:	8fbf0024 */ 	lw	$ra,0x24($sp)
.L0f00cec8:
/*  f00cec8:	02201025 */ 	or	$v0,$s1,$zero
/*  f00cecc:	8fb10018 */ 	lw	$s1,0x18($sp)
/*  f00ced0:	8fb00014 */ 	lw	$s0,0x14($sp)
/*  f00ced4:	8fb2001c */ 	lw	$s2,0x1c($sp)
/*  f00ced8:	8fb30020 */ 	lw	$s3,0x20($sp)
/*  f00cedc:	03e00008 */ 	jr	$ra
/*  f00cee0:	27bd0028 */ 	addiu	$sp,$sp,0x28
);

GLOBAL_ASM(
glabel setupGenericObject
.late_rodata
glabel var7f1a7f80
.word 0x358637bd
.text
/*  f00cee4:	27bdfeb8 */ 	addiu	$sp,$sp,-328
/*  f00cee8:	afb00030 */ 	sw	$s0,0x30($sp)
/*  f00ceec:	00808025 */ 	or	$s0,$a0,$zero
/*  f00cef0:	afbf0034 */ 	sw	$ra,0x34($sp)
/*  f00cef4:	afa5014c */ 	sw	$a1,0x14c($sp)
/*  f00cef8:	84840004 */ 	lh	$a0,0x4($a0)
/*  f00cefc:	0fc2486d */ 	jal	propLoad
/*  f00cf00:	afa40140 */ 	sw	$a0,0x140($sp)
/*  f00cf04:	960e0000 */ 	lhu	$t6,0x0($s0)
/*  f00cf08:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f00cf0c:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f00cf10:	448e2000 */ 	mtc1	$t6,$f4
/*  f00cf14:	8fa80140 */ 	lw	$t0,0x140($sp)
/*  f00cf18:	05c10005 */ 	bgez	$t6,.L0f00cf30
/*  f00cf1c:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f00cf20:	3c014f80 */ 	lui	$at,0x4f80
/*  f00cf24:	44814000 */ 	mtc1	$at,$f8
/*  f00cf28:	00000000 */ 	nop
/*  f00cf2c:	46083180 */ 	add.s	$f6,$f6,$f8
.L0f00cf30:
/*  f00cf30:	3c013b80 */ 	lui	$at,0x3b80
/*  f00cf34:	44815000 */ 	mtc1	$at,$f10
/*  f00cf38:	8c6f0318 */ 	lw	$t7,0x318($v1)
/*  f00cf3c:	460a3102 */ 	mul.s	$f4,$f6,$f10
/*  f00cf40:	15e00004 */ 	bnez	$t7,.L0f00cf54
/*  f00cf44:	e7a4009c */ 	swc1	$f4,0x9c($sp)
/*  f00cf48:	8c78031c */ 	lw	$t8,0x31c($v1)
/*  f00cf4c:	53000005 */ 	beqzl	$t8,.L0f00cf64
/*  f00cf50:	8e030008 */ 	lw	$v1,0x8($s0)
.L0f00cf54:
/*  f00cf54:	92190002 */ 	lbu	$t9,0x2($s0)
/*  f00cf58:	37290004 */ 	ori	$t1,$t9,0x4
/*  f00cf5c:	a2090002 */ 	sb	$t1,0x2($s0)
/*  f00cf60:	8e030008 */ 	lw	$v1,0x8($s0)
.L0f00cf64:
/*  f00cf64:	306a8000 */ 	andi	$t2,$v1,0x8000
/*  f00cf68:	1140001b */ 	beqz	$t2,.L0f00cfd8
/*  f00cf6c:	306e4000 */ 	andi	$t6,$v1,0x4000
/*  f00cf70:	920b0003 */ 	lbu	$t3,0x3($s0)
/*  f00cf74:	24010008 */ 	addiu	$at,$zero,0x8
/*  f00cf78:	02002025 */ 	or	$a0,$s0,$zero
/*  f00cf7c:	15610009 */ 	bne	$t3,$at,.L0f00cfa4
/*  f00cf80:	000868c0 */ 	sll	$t5,$t0,0x3
/*  f00cf84:	000860c0 */ 	sll	$t4,$t0,0x3
/*  f00cf88:	3c058008 */ 	lui	$a1,%hi(g_Props)
/*  f00cf8c:	00ac2821 */ 	addu	$a1,$a1,$t4
/*  f00cf90:	8ca5b06c */ 	lw	$a1,%lo(g_Props)($a1)
/*  f00cf94:	0fc22b83 */ 	jal	func0f08ae0c
/*  f00cf98:	02002025 */ 	or	$a0,$s0,$zero
/*  f00cf9c:	10000006 */ 	b	.L0f00cfb8
/*  f00cfa0:	8e040018 */ 	lw	$a0,0x18($s0)
.L0f00cfa4:
/*  f00cfa4:	3c058008 */ 	lui	$a1,%hi(g_Props)
/*  f00cfa8:	00ad2821 */ 	addu	$a1,$a1,$t5
/*  f00cfac:	0fc1a94b */ 	jal	func0f06a52c
/*  f00cfb0:	8ca5b06c */ 	lw	$a1,%lo(g_Props)($a1)
/*  f00cfb4:	8e040018 */ 	lw	$a0,0x18($s0)
.L0f00cfb8:
/*  f00cfb8:	c7a6009c */ 	lwc1	$f6,0x9c($sp)
/*  f00cfbc:	c4880014 */ 	lwc1	$f8,0x14($a0)
/*  f00cfc0:	46064282 */ 	mul.s	$f10,$f8,$f6
/*  f00cfc4:	44055000 */ 	mfc1	$a1,$f10
/*  f00cfc8:	0c006bd6 */ 	jal	modelSetUnk14
/*  f00cfcc:	00000000 */ 	nop
/*  f00cfd0:	100001a3 */ 	b	.L0f00d660
/*  f00cfd4:	8fbf0034 */ 	lw	$ra,0x34($sp)
.L0f00cfd8:
/*  f00cfd8:	51c0002d */ 	beqzl	$t6,.L0f00d090
/*  f00cfdc:	86040006 */ 	lh	$a0,0x6($s0)
/*  f00cfe0:	0fc0a1dd */ 	jal	chrFindByLiteralId
/*  f00cfe4:	86040006 */ 	lh	$a0,0x6($s0)
/*  f00cfe8:	8fa80140 */ 	lw	$t0,0x140($sp)
/*  f00cfec:	1040019b */ 	beqz	$v0,.L0f00d65c
/*  f00cff0:	afa20070 */ 	sw	$v0,0x70($sp)
/*  f00cff4:	8c4f001c */ 	lw	$t7,0x1c($v0)
/*  f00cff8:	51e00199 */ 	beqzl	$t7,.L0f00d660
/*  f00cffc:	8fbf0034 */ 	lw	$ra,0x34($sp)
/*  f00d000:	8c580020 */ 	lw	$t8,0x20($v0)
/*  f00d004:	53000196 */ 	beqzl	$t8,.L0f00d660
/*  f00d008:	8fbf0034 */ 	lw	$ra,0x34($sp)
/*  f00d00c:	92190003 */ 	lbu	$t9,0x3($s0)
/*  f00d010:	24010008 */ 	addiu	$at,$zero,0x8
/*  f00d014:	02002025 */ 	or	$a0,$s0,$zero
/*  f00d018:	17210009 */ 	bne	$t9,$at,.L0f00d040
/*  f00d01c:	000850c0 */ 	sll	$t2,$t0,0x3
/*  f00d020:	000848c0 */ 	sll	$t1,$t0,0x3
/*  f00d024:	3c058008 */ 	lui	$a1,%hi(g_Props)
/*  f00d028:	00a92821 */ 	addu	$a1,$a1,$t1
/*  f00d02c:	8ca5b06c */ 	lw	$a1,%lo(g_Props)($a1)
/*  f00d030:	0fc22b83 */ 	jal	func0f08ae0c
/*  f00d034:	02002025 */ 	or	$a0,$s0,$zero
/*  f00d038:	10000006 */ 	b	.L0f00d054
/*  f00d03c:	00403025 */ 	or	$a2,$v0,$zero
.L0f00d040:
/*  f00d040:	3c058008 */ 	lui	$a1,%hi(g_Props)
/*  f00d044:	00aa2821 */ 	addu	$a1,$a1,$t2
/*  f00d048:	0fc1a94b */ 	jal	func0f06a52c
/*  f00d04c:	8ca5b06c */ 	lw	$a1,%lo(g_Props)($a1)
/*  f00d050:	00403025 */ 	or	$a2,$v0,$zero
.L0f00d054:
/*  f00d054:	8e040018 */ 	lw	$a0,0x18($s0)
/*  f00d058:	c7a8009c */ 	lwc1	$f8,0x9c($sp)
/*  f00d05c:	c4840014 */ 	lwc1	$f4,0x14($a0)
/*  f00d060:	afa6006c */ 	sw	$a2,0x6c($sp)
/*  f00d064:	46082182 */ 	mul.s	$f6,$f4,$f8
/*  f00d068:	44053000 */ 	mfc1	$a1,$f6
/*  f00d06c:	0c006bd6 */ 	jal	modelSetUnk14
/*  f00d070:	00000000 */ 	nop
/*  f00d074:	8fab0070 */ 	lw	$t3,0x70($sp)
/*  f00d078:	8fa4006c */ 	lw	$a0,0x6c($sp)
/*  f00d07c:	0fc181a6 */ 	jal	propReparent
/*  f00d080:	8d65001c */ 	lw	$a1,0x1c($t3)
/*  f00d084:	10000176 */ 	b	.L0f00d660
/*  f00d088:	8fbf0034 */ 	lw	$ra,0x34($sp)
/*  f00d08c:	86040006 */ 	lh	$a0,0x6($s0)
.L0f00d090:
/*  f00d090:	2405006e */ 	addiu	$a1,$zero,0x6e
/*  f00d094:	0481001b */ 	bgez	$a0,.L0f00d104
/*  f00d098:	00000000 */ 	nop
/*  f00d09c:	920c0003 */ 	lbu	$t4,0x3($s0)
/*  f00d0a0:	24010008 */ 	addiu	$at,$zero,0x8
/*  f00d0a4:	02002025 */ 	or	$a0,$s0,$zero
/*  f00d0a8:	15810009 */ 	bne	$t4,$at,.L0f00d0d0
/*  f00d0ac:	000870c0 */ 	sll	$t6,$t0,0x3
/*  f00d0b0:	000868c0 */ 	sll	$t5,$t0,0x3
/*  f00d0b4:	3c058008 */ 	lui	$a1,%hi(g_Props)
/*  f00d0b8:	00ad2821 */ 	addu	$a1,$a1,$t5
/*  f00d0bc:	8ca5b06c */ 	lw	$a1,%lo(g_Props)($a1)
/*  f00d0c0:	0fc22b83 */ 	jal	func0f08ae0c
/*  f00d0c4:	02002025 */ 	or	$a0,$s0,$zero
/*  f00d0c8:	10000006 */ 	b	.L0f00d0e4
/*  f00d0cc:	8e040018 */ 	lw	$a0,0x18($s0)
.L0f00d0d0:
/*  f00d0d0:	3c058008 */ 	lui	$a1,%hi(g_Props)
/*  f00d0d4:	00ae2821 */ 	addu	$a1,$a1,$t6
/*  f00d0d8:	0fc1a94b */ 	jal	func0f06a52c
/*  f00d0dc:	8ca5b06c */ 	lw	$a1,%lo(g_Props)($a1)
/*  f00d0e0:	8e040018 */ 	lw	$a0,0x18($s0)
.L0f00d0e4:
/*  f00d0e4:	c7a4009c */ 	lwc1	$f4,0x9c($sp)
/*  f00d0e8:	c48a0014 */ 	lwc1	$f10,0x14($a0)
/*  f00d0ec:	46045202 */ 	mul.s	$f8,$f10,$f4
/*  f00d0f0:	44054000 */ 	mfc1	$a1,$f8
/*  f00d0f4:	0c006bd6 */ 	jal	modelSetUnk14
/*  f00d0f8:	00000000 */ 	nop
/*  f00d0fc:	10000158 */ 	b	.L0f00d660
/*  f00d100:	8fbf0034 */ 	lw	$ra,0x34($sp)
.L0f00d104:
/*  f00d104:	0fc456ac */ 	jal	padUnpack
/*  f00d108:	27a600ec */ 	addiu	$a2,$sp,0xec
/*  f00d10c:	8faf0134 */ 	lw	$t7,0x134($sp)
/*  f00d110:	27a400ac */ 	addiu	$a0,$sp,0xac
/*  f00d114:	c7a600f8 */ 	lwc1	$f6,0xf8($sp)
/*  f00d118:	59e00151 */ 	blezl	$t7,.L0f00d660
/*  f00d11c:	8fbf0034 */ 	lw	$ra,0x34($sp)
/*  f00d120:	c7a400fc */ 	lwc1	$f4,0xfc($sp)
/*  f00d124:	46003287 */ 	neg.s	$f10,$f6
/*  f00d128:	44800000 */ 	mtc1	$zero,$f0
/*  f00d12c:	c7a60100 */ 	lwc1	$f6,0x100($sp)
/*  f00d130:	46002207 */ 	neg.s	$f8,$f4
/*  f00d134:	e7aa0010 */ 	swc1	$f10,0x10($sp)
/*  f00d138:	46003287 */ 	neg.s	$f10,$f6
/*  f00d13c:	e7a80014 */ 	swc1	$f8,0x14($sp)
/*  f00d140:	c7a80108 */ 	lwc1	$f8,0x108($sp)
/*  f00d144:	c7a6010c */ 	lwc1	$f6,0x10c($sp)
/*  f00d148:	c7a40104 */ 	lwc1	$f4,0x104($sp)
/*  f00d14c:	44050000 */ 	mfc1	$a1,$f0
/*  f00d150:	44060000 */ 	mfc1	$a2,$f0
/*  f00d154:	44070000 */ 	mfc1	$a3,$f0
/*  f00d158:	e7aa0018 */ 	swc1	$f10,0x18($sp)
/*  f00d15c:	e7a80020 */ 	swc1	$f8,0x20($sp)
/*  f00d160:	e7a60024 */ 	swc1	$f6,0x24($sp)
/*  f00d164:	0c005b56 */ 	jal	func00016d58
/*  f00d168:	e7a4001c */ 	swc1	$f4,0x1c($sp)
/*  f00d16c:	c7aa00ec */ 	lwc1	$f10,0xec($sp)
/*  f00d170:	c7a400f0 */ 	lwc1	$f4,0xf0($sp)
/*  f00d174:	c7a800f4 */ 	lwc1	$f8,0xf4($sp)
/*  f00d178:	8fb80134 */ 	lw	$t8,0x134($sp)
/*  f00d17c:	2419ffff */ 	addiu	$t9,$zero,-1
/*  f00d180:	a7b90082 */ 	sh	$t9,0x82($sp)
/*  f00d184:	e7aa0090 */ 	swc1	$f10,0x90($sp)
/*  f00d188:	e7a40094 */ 	swc1	$f4,0x94($sp)
/*  f00d18c:	e7a80098 */ 	swc1	$f8,0x98($sp)
/*  f00d190:	a7b80080 */ 	sh	$t8,0x80($sp)
/*  f00d194:	0fc457c0 */ 	jal	padHasBboxData
/*  f00d198:	86040006 */ 	lh	$a0,0x6($s0)
/*  f00d19c:	14400013 */ 	bnez	$v0,.L0f00d1ec
/*  f00d1a0:	8fa80140 */ 	lw	$t0,0x140($sp)
/*  f00d1a4:	8e090008 */ 	lw	$t1,0x8($s0)
/*  f00d1a8:	c7a600ec */ 	lwc1	$f6,0xec($sp)
/*  f00d1ac:	c7a800ec */ 	lwc1	$f8,0xec($sp)
/*  f00d1b0:	312a0002 */ 	andi	$t2,$t1,0x2
/*  f00d1b4:	51400008 */ 	beqzl	$t2,.L0f00d1d8
/*  f00d1b8:	c7a600f0 */ 	lwc1	$f6,0xf0($sp)
/*  f00d1bc:	c7aa00f0 */ 	lwc1	$f10,0xf0($sp)
/*  f00d1c0:	c7a400f4 */ 	lwc1	$f4,0xf4($sp)
/*  f00d1c4:	e7a600a0 */ 	swc1	$f6,0xa0($sp)
/*  f00d1c8:	e7aa00a4 */ 	swc1	$f10,0xa4($sp)
/*  f00d1cc:	10000021 */ 	b	.L0f00d254
/*  f00d1d0:	e7a400a8 */ 	swc1	$f4,0xa8($sp)
/*  f00d1d4:	c7a600f0 */ 	lwc1	$f6,0xf0($sp)
.L0f00d1d8:
/*  f00d1d8:	c7aa00f4 */ 	lwc1	$f10,0xf4($sp)
/*  f00d1dc:	e7a800a0 */ 	swc1	$f8,0xa0($sp)
/*  f00d1e0:	e7a600a4 */ 	swc1	$f6,0xa4($sp)
/*  f00d1e4:	1000001b */ 	b	.L0f00d254
/*  f00d1e8:	e7aa00a8 */ 	swc1	$f10,0xa8($sp)
.L0f00d1ec:
/*  f00d1ec:	86040006 */ 	lh	$a0,0x6($s0)
/*  f00d1f0:	0fc457cd */ 	jal	padGetCentre
/*  f00d1f4:	27a500a0 */ 	addiu	$a1,$sp,0xa0
/*  f00d1f8:	c7a40124 */ 	lwc1	$f4,0x124($sp)
/*  f00d1fc:	c7a80128 */ 	lwc1	$f8,0x128($sp)
/*  f00d200:	3c013f00 */ 	lui	$at,0x3f00
/*  f00d204:	44815000 */ 	mtc1	$at,$f10
/*  f00d208:	46082181 */ 	sub.s	$f6,$f4,$f8
/*  f00d20c:	c7a80104 */ 	lwc1	$f8,0x104($sp)
/*  f00d210:	c7a400a0 */ 	lwc1	$f4,0xa0($sp)
/*  f00d214:	8fa80140 */ 	lw	$t0,0x140($sp)
/*  f00d218:	460a3002 */ 	mul.s	$f0,$f6,$f10
/*  f00d21c:	00000000 */ 	nop
/*  f00d220:	46080182 */ 	mul.s	$f6,$f0,$f8
/*  f00d224:	c7a800a4 */ 	lwc1	$f8,0xa4($sp)
/*  f00d228:	46062280 */ 	add.s	$f10,$f4,$f6
/*  f00d22c:	c7a40108 */ 	lwc1	$f4,0x108($sp)
/*  f00d230:	46040182 */ 	mul.s	$f6,$f0,$f4
/*  f00d234:	e7aa00a0 */ 	swc1	$f10,0xa0($sp)
/*  f00d238:	c7a400a8 */ 	lwc1	$f4,0xa8($sp)
/*  f00d23c:	46064280 */ 	add.s	$f10,$f8,$f6
/*  f00d240:	c7a8010c */ 	lwc1	$f8,0x10c($sp)
/*  f00d244:	46080182 */ 	mul.s	$f6,$f0,$f8
/*  f00d248:	e7aa00a4 */ 	swc1	$f10,0xa4($sp)
/*  f00d24c:	46062280 */ 	add.s	$f10,$f4,$f6
/*  f00d250:	e7aa00a8 */ 	swc1	$f10,0xa8($sp)
.L0f00d254:
/*  f00d254:	920b0003 */ 	lbu	$t3,0x3($s0)
/*  f00d258:	24010008 */ 	addiu	$at,$zero,0x8
/*  f00d25c:	02002025 */ 	or	$a0,$s0,$zero
/*  f00d260:	15610007 */ 	bne	$t3,$at,.L0f00d280
/*  f00d264:	000860c0 */ 	sll	$t4,$t0,0x3
/*  f00d268:	3c058008 */ 	lui	$a1,%hi(g_Props)
/*  f00d26c:	00ac2821 */ 	addu	$a1,$a1,$t4
/*  f00d270:	0fc22b83 */ 	jal	func0f08ae0c
/*  f00d274:	8ca5b06c */ 	lw	$a1,%lo(g_Props)($a1)
/*  f00d278:	10000004 */ 	b	.L0f00d28c
/*  f00d27c:	afa2007c */ 	sw	$v0,0x7c($sp)
.L0f00d280:
/*  f00d280:	0fc1a954 */ 	jal	func0f06a550
/*  f00d284:	02002025 */ 	or	$a0,$s0,$zero
/*  f00d288:	afa2007c */ 	sw	$v0,0x7c($sp)
.L0f00d28c:
/*  f00d28c:	0fc457c0 */ 	jal	padHasBboxData
/*  f00d290:	86040006 */ 	lh	$a0,0x6($s0)
/*  f00d294:	504000c1 */ 	beqzl	$v0,.L0f00d59c
/*  f00d298:	8e040018 */ 	lw	$a0,0x18($s0)
/*  f00d29c:	0fc1a2bd */ 	jal	func0f068af4
/*  f00d2a0:	02002025 */ 	or	$a0,$s0,$zero
/*  f00d2a4:	104000bc */ 	beqz	$v0,.L0f00d598
/*  f00d2a8:	3c013f80 */ 	lui	$at,0x3f80
/*  f00d2ac:	44819000 */ 	mtc1	$at,$f18
/*  f00d2b0:	00000000 */ 	nop
/*  f00d2b4:	e7b20064 */ 	swc1	$f18,0x64($sp)
/*  f00d2b8:	8e030008 */ 	lw	$v1,0x8($s0)
/*  f00d2bc:	46009406 */ 	mov.s	$f16,$f18
/*  f00d2c0:	30640020 */ 	andi	$a0,$v1,0x20
/*  f00d2c4:	1080001c */ 	beqz	$a0,.L0f00d338
/*  f00d2c8:	30660040 */ 	andi	$a2,$v1,0x40
/*  f00d2cc:	c4420004 */ 	lwc1	$f2,0x4($v0)
/*  f00d2d0:	c4400008 */ 	lwc1	$f0,0x8($v0)
/*  f00d2d4:	306d0002 */ 	andi	$t5,$v1,0x2
/*  f00d2d8:	4600103c */ 	c.lt.s	$f2,$f0
/*  f00d2dc:	00000000 */ 	nop
/*  f00d2e0:	45000015 */ 	bc1f	.L0f00d338
/*  f00d2e4:	00000000 */ 	nop
/*  f00d2e8:	11a0000b */ 	beqz	$t5,.L0f00d318
/*  f00d2ec:	c7a80120 */ 	lwc1	$f8,0x120($sp)
/*  f00d2f0:	c7a80120 */ 	lwc1	$f8,0x120($sp)
/*  f00d2f4:	c7a4011c */ 	lwc1	$f4,0x11c($sp)
/*  f00d2f8:	8e0e0018 */ 	lw	$t6,0x18($s0)
/*  f00d2fc:	46020281 */ 	sub.s	$f10,$f0,$f2
/*  f00d300:	46044181 */ 	sub.s	$f6,$f8,$f4
/*  f00d304:	c5c80014 */ 	lwc1	$f8,0x14($t6)
/*  f00d308:	46085102 */ 	mul.s	$f4,$f10,$f8
/*  f00d30c:	46043283 */ 	div.s	$f10,$f6,$f4
/*  f00d310:	10000009 */ 	b	.L0f00d338
/*  f00d314:	e7aa0064 */ 	swc1	$f10,0x64($sp)
.L0f00d318:
/*  f00d318:	c7a6011c */ 	lwc1	$f6,0x11c($sp)
/*  f00d31c:	8e0f0018 */ 	lw	$t7,0x18($s0)
/*  f00d320:	46020281 */ 	sub.s	$f10,$f0,$f2
/*  f00d324:	46064101 */ 	sub.s	$f4,$f8,$f6
/*  f00d328:	c5e80014 */ 	lwc1	$f8,0x14($t7)
/*  f00d32c:	46085182 */ 	mul.s	$f6,$f10,$f8
/*  f00d330:	46062283 */ 	div.s	$f10,$f4,$f6
/*  f00d334:	e7aa0064 */ 	swc1	$f10,0x64($sp)
.L0f00d338:
/*  f00d338:	10c00018 */ 	beqz	$a2,.L0f00d39c
/*  f00d33c:	30650080 */ 	andi	$a1,$v1,0x80
/*  f00d340:	c442000c */ 	lwc1	$f2,0xc($v0)
/*  f00d344:	c4400010 */ 	lwc1	$f0,0x10($v0)
/*  f00d348:	4600103c */ 	c.lt.s	$f2,$f0
/*  f00d34c:	00000000 */ 	nop
/*  f00d350:	45000012 */ 	bc1f	.L0f00d39c
/*  f00d354:	00000000 */ 	nop
/*  f00d358:	8e180018 */ 	lw	$t8,0x18($s0)
/*  f00d35c:	30790002 */ 	andi	$t9,$v1,0x2
/*  f00d360:	13200008 */ 	beqz	$t9,.L0f00d384
/*  f00d364:	c70c0014 */ 	lwc1	$f12,0x14($t8)
/*  f00d368:	46020281 */ 	sub.s	$f10,$f0,$f2
/*  f00d36c:	c7a80130 */ 	lwc1	$f8,0x130($sp)
/*  f00d370:	c7a4012c */ 	lwc1	$f4,0x12c($sp)
/*  f00d374:	46044181 */ 	sub.s	$f6,$f8,$f4
/*  f00d378:	460c5202 */ 	mul.s	$f8,$f10,$f12
/*  f00d37c:	10000007 */ 	b	.L0f00d39c
/*  f00d380:	46083483 */ 	div.s	$f18,$f6,$f8
.L0f00d384:
/*  f00d384:	46020201 */ 	sub.s	$f8,$f0,$f2
/*  f00d388:	c7a40128 */ 	lwc1	$f4,0x128($sp)
/*  f00d38c:	c7aa0124 */ 	lwc1	$f10,0x124($sp)
/*  f00d390:	460a2181 */ 	sub.s	$f6,$f4,$f10
/*  f00d394:	460c4102 */ 	mul.s	$f4,$f8,$f12
/*  f00d398:	46043403 */ 	div.s	$f16,$f6,$f4
.L0f00d39c:
/*  f00d39c:	50a00019 */ 	beqzl	$a1,.L0f00d404
/*  f00d3a0:	c7a40064 */ 	lwc1	$f4,0x64($sp)
/*  f00d3a4:	c4420014 */ 	lwc1	$f2,0x14($v0)
/*  f00d3a8:	c4400018 */ 	lwc1	$f0,0x18($v0)
/*  f00d3ac:	4600103c */ 	c.lt.s	$f2,$f0
/*  f00d3b0:	00000000 */ 	nop
/*  f00d3b4:	45020013 */ 	bc1fl	.L0f00d404
/*  f00d3b8:	c7a40064 */ 	lwc1	$f4,0x64($sp)
/*  f00d3bc:	8e090018 */ 	lw	$t1,0x18($s0)
/*  f00d3c0:	306a0002 */ 	andi	$t2,$v1,0x2
/*  f00d3c4:	11400008 */ 	beqz	$t2,.L0f00d3e8
/*  f00d3c8:	c52c0014 */ 	lwc1	$f12,0x14($t1)
/*  f00d3cc:	46020101 */ 	sub.s	$f4,$f0,$f2
/*  f00d3d0:	c7aa0128 */ 	lwc1	$f10,0x128($sp)
/*  f00d3d4:	c7a80124 */ 	lwc1	$f8,0x124($sp)
/*  f00d3d8:	46085181 */ 	sub.s	$f6,$f10,$f8
/*  f00d3dc:	460c2282 */ 	mul.s	$f10,$f4,$f12
/*  f00d3e0:	10000007 */ 	b	.L0f00d400
/*  f00d3e4:	460a3403 */ 	div.s	$f16,$f6,$f10
.L0f00d3e8:
/*  f00d3e8:	46020281 */ 	sub.s	$f10,$f0,$f2
/*  f00d3ec:	c7a80130 */ 	lwc1	$f8,0x130($sp)
/*  f00d3f0:	c7a4012c */ 	lwc1	$f4,0x12c($sp)
/*  f00d3f4:	46044181 */ 	sub.s	$f6,$f8,$f4
/*  f00d3f8:	460c5202 */ 	mul.s	$f8,$f10,$f12
/*  f00d3fc:	46083483 */ 	div.s	$f18,$f6,$f8
.L0f00d400:
/*  f00d400:	c7a40064 */ 	lwc1	$f4,0x64($sp)
.L0f00d404:
/*  f00d404:	c7ac0064 */ 	lwc1	$f12,0x64($sp)
/*  f00d408:	4604803c */ 	c.lt.s	$f16,$f4
/*  f00d40c:	00000000 */ 	nop
/*  f00d410:	45020002 */ 	bc1fl	.L0f00d41c
/*  f00d414:	4610603c */ 	c.lt.s	$f12,$f16
/*  f00d418:	4610603c */ 	c.lt.s	$f12,$f16
.L0f00d41c:
/*  f00d41c:	46006386 */ 	mov.s	$f14,$f12
/*  f00d420:	45020003 */ 	bc1fl	.L0f00d430
/*  f00d424:	4612703c */ 	c.lt.s	$f14,$f18
/*  f00d428:	46008386 */ 	mov.s	$f14,$f16
/*  f00d42c:	4612703c */ 	c.lt.s	$f14,$f18
.L0f00d430:
/*  f00d430:	306b0002 */ 	andi	$t3,$v1,0x2
/*  f00d434:	306c0002 */ 	andi	$t4,$v1,0x2
/*  f00d438:	45000002 */ 	bc1f	.L0f00d444
/*  f00d43c:	00000000 */ 	nop
/*  f00d440:	46009386 */ 	mov.s	$f14,$f18
.L0f00d444:
/*  f00d444:	1480000f */ 	bnez	$a0,.L0f00d484
/*  f00d448:	306d0002 */ 	andi	$t5,$v1,0x2
/*  f00d44c:	c4400008 */ 	lwc1	$f0,0x8($v0)
/*  f00d450:	11600007 */ 	beqz	$t3,.L0f00d470
/*  f00d454:	c4420004 */ 	lwc1	$f2,0x4($v0)
/*  f00d458:	46001032 */ 	c.eq.s	$f2,$f0
/*  f00d45c:	00000000 */ 	nop
/*  f00d460:	45000008 */ 	bc1f	.L0f00d484
/*  f00d464:	00000000 */ 	nop
/*  f00d468:	10000006 */ 	b	.L0f00d484
/*  f00d46c:	46007306 */ 	mov.s	$f12,$f14
.L0f00d470:
/*  f00d470:	46001032 */ 	c.eq.s	$f2,$f0
/*  f00d474:	00000000 */ 	nop
/*  f00d478:	45000002 */ 	bc1f	.L0f00d484
/*  f00d47c:	00000000 */ 	nop
/*  f00d480:	46007306 */ 	mov.s	$f12,$f14
.L0f00d484:
/*  f00d484:	14c0000f */ 	bnez	$a2,.L0f00d4c4
/*  f00d488:	460e6303 */ 	div.s	$f12,$f12,$f14
/*  f00d48c:	c4400010 */ 	lwc1	$f0,0x10($v0)
/*  f00d490:	11800007 */ 	beqz	$t4,.L0f00d4b0
/*  f00d494:	c442000c */ 	lwc1	$f2,0xc($v0)
/*  f00d498:	46001032 */ 	c.eq.s	$f2,$f0
/*  f00d49c:	00000000 */ 	nop
/*  f00d4a0:	45000008 */ 	bc1f	.L0f00d4c4
/*  f00d4a4:	00000000 */ 	nop
/*  f00d4a8:	10000006 */ 	b	.L0f00d4c4
/*  f00d4ac:	46007486 */ 	mov.s	$f18,$f14
.L0f00d4b0:
/*  f00d4b0:	46001032 */ 	c.eq.s	$f2,$f0
/*  f00d4b4:	00000000 */ 	nop
/*  f00d4b8:	45000002 */ 	bc1f	.L0f00d4c4
/*  f00d4bc:	00000000 */ 	nop
/*  f00d4c0:	46007406 */ 	mov.s	$f16,$f14
.L0f00d4c4:
/*  f00d4c4:	14a0000f */ 	bnez	$a1,.L0f00d504
/*  f00d4c8:	3c017f1a */ 	lui	$at,%hi(var7f1a7f80)
/*  f00d4cc:	c4400018 */ 	lwc1	$f0,0x18($v0)
/*  f00d4d0:	11a00007 */ 	beqz	$t5,.L0f00d4f0
/*  f00d4d4:	c4420014 */ 	lwc1	$f2,0x14($v0)
/*  f00d4d8:	46001032 */ 	c.eq.s	$f2,$f0
/*  f00d4dc:	00000000 */ 	nop
/*  f00d4e0:	45000008 */ 	bc1f	.L0f00d504
/*  f00d4e4:	00000000 */ 	nop
/*  f00d4e8:	10000006 */ 	b	.L0f00d504
/*  f00d4ec:	46007406 */ 	mov.s	$f16,$f14
.L0f00d4f0:
/*  f00d4f0:	46001032 */ 	c.eq.s	$f2,$f0
/*  f00d4f4:	00000000 */ 	nop
/*  f00d4f8:	45000002 */ 	bc1f	.L0f00d504
/*  f00d4fc:	00000000 */ 	nop
/*  f00d500:	46007486 */ 	mov.s	$f18,$f14
.L0f00d504:
/*  f00d504:	c4207f80 */ 	lwc1	$f0,%lo(var7f1a7f80)($at)
/*  f00d508:	460e8403 */ 	div.s	$f16,$f16,$f14
/*  f00d50c:	3c013f80 */ 	lui	$at,0x3f80
/*  f00d510:	27a500ac */ 	addiu	$a1,$sp,0xac
/*  f00d514:	4600603e */ 	c.le.s	$f12,$f0
/*  f00d518:	00000000 */ 	nop
/*  f00d51c:	45010009 */ 	bc1t	.L0f00d544
/*  f00d520:	460e9483 */ 	div.s	$f18,$f18,$f14
/*  f00d524:	4600803e */ 	c.le.s	$f16,$f0
/*  f00d528:	00000000 */ 	nop
/*  f00d52c:	45030006 */ 	bc1tl	.L0f00d548
/*  f00d530:	44816000 */ 	mtc1	$at,$f12
/*  f00d534:	4600903e */ 	c.le.s	$f18,$f0
/*  f00d538:	00000000 */ 	nop
/*  f00d53c:	45020006 */ 	bc1fl	.L0f00d558
/*  f00d540:	e7ae0054 */ 	swc1	$f14,0x54($sp)
.L0f00d544:
/*  f00d544:	44816000 */ 	mtc1	$at,$f12
.L0f00d548:
/*  f00d548:	00000000 */ 	nop
/*  f00d54c:	46006486 */ 	mov.s	$f18,$f12
/*  f00d550:	46006406 */ 	mov.s	$f16,$f12
/*  f00d554:	e7ae0054 */ 	swc1	$f14,0x54($sp)
.L0f00d558:
/*  f00d558:	e7b00060 */ 	swc1	$f16,0x60($sp)
/*  f00d55c:	0c005789 */ 	jal	func00015e24
/*  f00d560:	e7b2005c */ 	swc1	$f18,0x5c($sp)
/*  f00d564:	c7ac0060 */ 	lwc1	$f12,0x60($sp)
/*  f00d568:	0c0057a0 */ 	jal	func00015e80
/*  f00d56c:	27a500ac */ 	addiu	$a1,$sp,0xac
/*  f00d570:	c7ac005c */ 	lwc1	$f12,0x5c($sp)
/*  f00d574:	0c0057b7 */ 	jal	func00015edc
/*  f00d578:	27a500ac */ 	addiu	$a1,$sp,0xac
/*  f00d57c:	8e040018 */ 	lw	$a0,0x18($s0)
/*  f00d580:	c7ae0054 */ 	lwc1	$f14,0x54($sp)
/*  f00d584:	c48a0014 */ 	lwc1	$f10,0x14($a0)
/*  f00d588:	460e5182 */ 	mul.s	$f6,$f10,$f14
/*  f00d58c:	44053000 */ 	mfc1	$a1,$f6
/*  f00d590:	0c006bd6 */ 	jal	modelSetUnk14
/*  f00d594:	00000000 */ 	nop
.L0f00d598:
/*  f00d598:	8e040018 */ 	lw	$a0,0x18($s0)
.L0f00d59c:
/*  f00d59c:	c7a4009c */ 	lwc1	$f4,0x9c($sp)
/*  f00d5a0:	c4880014 */ 	lwc1	$f8,0x14($a0)
/*  f00d5a4:	46044282 */ 	mul.s	$f10,$f8,$f4
/*  f00d5a8:	44055000 */ 	mfc1	$a1,$f10
/*  f00d5ac:	0c006bd6 */ 	jal	modelSetUnk14
/*  f00d5b0:	00000000 */ 	nop
/*  f00d5b4:	8e0e0018 */ 	lw	$t6,0x18($s0)
/*  f00d5b8:	27a500ac */ 	addiu	$a1,$sp,0xac
/*  f00d5bc:	0c0057c1 */ 	jal	func00015f04
/*  f00d5c0:	c5cc0014 */ 	lwc1	$f12,0x14($t6)
/*  f00d5c4:	8e0f000c */ 	lw	$t7,0xc($s0)
/*  f00d5c8:	8fb9007c */ 	lw	$t9,0x7c($sp)
/*  f00d5cc:	02002025 */ 	or	$a0,$s0,$zero
/*  f00d5d0:	000fc380 */ 	sll	$t8,$t7,0xe
/*  f00d5d4:	07010004 */ 	bgez	$t8,.L0f00d5e8
/*  f00d5d8:	27a50090 */ 	addiu	$a1,$sp,0x90
/*  f00d5dc:	93290001 */ 	lbu	$t1,0x1($t9)
/*  f00d5e0:	352a0010 */ 	ori	$t2,$t1,0x10
/*  f00d5e4:	a32a0001 */ 	sb	$t2,0x1($t9)
.L0f00d5e8:
/*  f00d5e8:	8e0b0008 */ 	lw	$t3,0x8($s0)
/*  f00d5ec:	27a600ac */ 	addiu	$a2,$sp,0xac
/*  f00d5f0:	27a70080 */ 	addiu	$a3,$sp,0x80
/*  f00d5f4:	316c0002 */ 	andi	$t4,$t3,0x2
/*  f00d5f8:	1180000a */ 	beqz	$t4,.L0f00d624
/*  f00d5fc:	27ae00a0 */ 	addiu	$t6,$sp,0xa0
/*  f00d600:	27ad00a0 */ 	addiu	$t5,$sp,0xa0
/*  f00d604:	afad0010 */ 	sw	$t5,0x10($sp)
/*  f00d608:	02002025 */ 	or	$a0,$s0,$zero
/*  f00d60c:	27a50090 */ 	addiu	$a1,$sp,0x90
/*  f00d610:	27a600ac */ 	addiu	$a2,$sp,0xac
/*  f00d614:	0fc1aad8 */ 	jal	func0f06ab60
/*  f00d618:	27a70080 */ 	addiu	$a3,$sp,0x80
/*  f00d61c:	10000004 */ 	b	.L0f00d630
/*  f00d620:	8e0f0040 */ 	lw	$t7,0x40($s0)
.L0f00d624:
/*  f00d624:	0fc1a9cc */ 	jal	func0f06a730
/*  f00d628:	afae0010 */ 	sw	$t6,0x10($sp)
/*  f00d62c:	8e0f0040 */ 	lw	$t7,0x40($s0)
.L0f00d630:
/*  f00d630:	31f88000 */ 	andi	$t8,$t7,0x8000
/*  f00d634:	13000005 */ 	beqz	$t8,.L0f00d64c
/*  f00d638:	00000000 */ 	nop
/*  f00d63c:	0fc1814e */ 	jal	func0f060538
/*  f00d640:	8fa4007c */ 	lw	$a0,0x7c($sp)
/*  f00d644:	10000003 */ 	b	.L0f00d654
/*  f00d648:	00000000 */ 	nop
.L0f00d64c:
/*  f00d64c:	0fc1812f */ 	jal	func0f0604bc
/*  f00d650:	8fa4007c */ 	lw	$a0,0x7c($sp)
.L0f00d654:
/*  f00d654:	0fc180bc */ 	jal	propShow
/*  f00d658:	8fa4007c */ 	lw	$a0,0x7c($sp)
.L0f00d65c:
/*  f00d65c:	8fbf0034 */ 	lw	$ra,0x34($sp)
.L0f00d660:
/*  f00d660:	8fb00030 */ 	lw	$s0,0x30($sp)
/*  f00d664:	27bd0148 */ 	addiu	$sp,$sp,0x148
/*  f00d668:	03e00008 */ 	jr	$ra
/*  f00d66c:	00000000 */ 	nop
);

/**
 * Assigns a weapon to its home.
 *
 * Its home is a chr's hand or a pad, as defined in the stage's setup file.
 *
 * The Marquis of Queensbury Rules (everyone unarmed) and Enemy Rockets cheats
 * are implemented here.
 */
void weaponAssignToHome(struct weaponobj *weapon, s32 cmdindex)
{
	if (weapon->base.flags & OBJFLAG_ASSIGNEDTOCHR) {
		u32 stack[2];
		struct chrdata *chr = chrFindByLiteralId(weapon->base.pad);

		if (chr && chr->prop && chr->model) {
			if (cheatIsActive(CHEAT_MARQUIS)) {
				weapon->base.flags &= ~OBJFLAG_DEACTIVATED;
				weapon->base.flags |= OBJFLAG_20000000;
				func0f011560(weapon->weaponnum);
				func0f08b25c(weapon, chr);
			} else {
				if (cheatIsActive(CHEAT_ENEMYROCKETS)) {
					switch (weapon->weaponnum) {
					case WEAPON_FALCON2:
					case WEAPON_FALCON2_SILENCER:
					case WEAPON_FALCON2_SCOPE:
					case WEAPON_MAGSEC4:
					case WEAPON_MAULER:
					case WEAPON_PHOENIX:
					case WEAPON_DY357MAGNUM:
					case WEAPON_DY357LX:
					case WEAPON_CMP150:
					case WEAPON_CYCLONE:
					case WEAPON_CALLISTONTG:
					case WEAPON_RCP120:
					case WEAPON_LAPTOPGUN:
					case WEAPON_DRAGON:
					case WEAPON_AR34:
					case WEAPON_SUPERDRAGON:
					case WEAPON_SHOTGUN:
					case WEAPON_REAPER:
					case WEAPON_SNIPERRIFLE:
					case WEAPON_FARSIGHTXR20:
					case WEAPON_DEVASTATOR:
					case WEAPON_ROCKETLAUNCHER:
					case WEAPON_SLAYER:
					case WEAPON_COMBATKNIFE:
					case WEAPON_CROSSBOW:
					case WEAPON_TRANQUILIZER:
					case WEAPON_GRENADE:
					case WEAPON_NBOMB:
					case WEAPON_TIMEDMINE:
					case WEAPON_PROXIMITYMINE:
					case WEAPON_REMOTEMINE:
						weapon->weaponnum = WEAPON_ROCKETLAUNCHER;
						weapon->base.modelnum = MODEL_CHRDYROCKET;
						weapon->base.extrascale = 256;
						break;
					case WEAPON_K7AVENGER:
						// Don't replace the K7 guard's weapon in Investigation
						// because it would make an objective impossible
						if (g_Vars.stagenum != STAGE_INVESTIGATION || getDifficulty() != DIFF_PA) {
							weapon->weaponnum = WEAPON_ROCKETLAUNCHER;
							weapon->base.modelnum = MODEL_CHRDYROCKET;
							weapon->base.extrascale = 256;
						}
						break;
					}
				}

				func0f011560(weapon->weaponnum);
				func0f08b25c(weapon, chr);
			}
		}
	} else {
		bool giveweapon = true;

		if (g_Vars.normmplayerisrunning || g_Vars.lvmpbotlevel) {
			struct mpweapon *mpweapon;
			s32 mpweaponnum;

			var8009cc30 = -1;

			// Seems like a weaponnum >= 240 means an mpweaponnum...
			switch (weapon->weaponnum) {
			case 0xf0:
			case 0xf1:
			case 0xf2:
			case 0xf3:
			case 0xf4:
			case 0xf5:
			case 0xf6:
			case 0xf7:
			case 0xf8:
			case 0xf9:
			case 0xfa:
			case 0xfb:
			case 0xfc:
			case 0xfd:
			case 0xfe:
			case 0xff:
				mpweaponnum = weapon->weaponnum - 0xf0;
				mpweapon = func0f188e24(mpweaponnum);
				var8009cc30 = mpweaponnum;
				weapon->weaponnum = mpweapon->weaponnum;
				weapon->base.modelnum = mpweapon->model;
				weapon->base.extrascale = mpweapon->extrascale;
				giveweapon = mpweapon->giveweapon;

				if (mpweapon->weaponnum == WEAPON_MPSHIELD) {
					struct shieldobj *shield = (struct shieldobj *)weapon;
					shield->base.modelnum = MODEL_CHRSHIELD;
					shield->base.type = OBJTYPE_SHIELD;
					shield->base.flags |= OBJFLAG_01000000 | OBJFLAG_INVINCIBLE;
					shield->base.flags2 |= OBJFLAG2_00200000 | OBJFLAG2_00004000;
					shield->initialamount = 1;
					shield->amount = 1;
					setupGenericObject(&shield->base, cmdindex);
					giveweapon = false;
				}
				break;
			}
		}

		if (weapon->weaponnum != WEAPON_NONE && giveweapon) {
			func0f011560(weapon->weaponnum);
			setupGenericObject(&weapon->base, cmdindex);
		}
	}
}

void setupHat(struct hatobj *hat, s32 cmdindex)
{
	if (hat->base.flags & OBJFLAG_ASSIGNEDTOCHR) {
		struct chrdata *chr = chrFindByLiteralId(hat->base.pad);

		if (chr && chr->prop && chr->model) {
			hatAssignToChr(hat, chr);
		}
	} else {
		setupGenericObject(&hat->base, cmdindex);
	}
}

void setupKey(struct keyobj *key, s32 cmdindex)
{
	setupGenericObject(&key->base, cmdindex);
}

void setupMine(struct mineobj *mine, s32 cmdindex)
{
	mine->base.type = OBJTYPE_WEAPON;

	setupGenericObject(&mine->base, cmdindex);

	if (g_Vars.coopplayernum >= 0 || g_Vars.antiplayernum >= 0) {
		mine->base.hidden = mine->base.hidden & 0x0fffffff | OBJHFLAG_20000000;
	}

	mine->base.prop->unk3f_02 = 1;
}

GLOBAL_ASM(
glabel setupCamera
.late_rodata
glabel var7f1a8048
.word 0x40c907a9
glabel var7f1a804c
.word 0x40c907a9
.text
/*  f00da10:	27bdff38 */ 	addiu	$sp,$sp,-200
/*  f00da14:	afbf0044 */ 	sw	$ra,0x44($sp)
/*  f00da18:	afb00040 */ 	sw	$s0,0x40($sp)
/*  f00da1c:	00808025 */ 	or	$s0,$a0,$zero
/*  f00da20:	f7b60038 */ 	sdc1	$f22,0x38($sp)
/*  f00da24:	0fc033b9 */ 	jal	setupGenericObject
/*  f00da28:	f7b40030 */ 	sdc1	$f20,0x30($sp)
/*  f00da2c:	860e005c */ 	lh	$t6,0x5c($s0)
/*  f00da30:	05c2006e */ 	bltzl	$t6,.L0f00dbec
/*  f00da34:	8fbf0044 */ 	lw	$ra,0x44($sp)
/*  f00da38:	8e0f0018 */ 	lw	$t7,0x18($s0)
/*  f00da3c:	00002825 */ 	or	$a1,$zero,$zero
/*  f00da40:	0c006a6f */ 	jal	modelGetPartNodeData
/*  f00da44:	8de40008 */ 	lw	$a0,0x8($t7)
/*  f00da48:	8604005c */ 	lh	$a0,0x5c($s0)
/*  f00da4c:	afa200b4 */ 	sw	$v0,0xb4($sp)
/*  f00da50:	24050002 */ 	addiu	$a1,$zero,0x2
/*  f00da54:	0fc456ac */ 	jal	padUnpack
/*  f00da58:	27a60060 */ 	addiu	$a2,$sp,0x60
/*  f00da5c:	8fa300b4 */ 	lw	$v1,0xb4($sp)
/*  f00da60:	2604001c */ 	addiu	$a0,$s0,0x1c
/*  f00da64:	27a500b8 */ 	addiu	$a1,$sp,0xb8
/*  f00da68:	c4640000 */ 	lwc1	$f4,0x0($v1)
/*  f00da6c:	e7a400b8 */ 	swc1	$f4,0xb8($sp)
/*  f00da70:	c4660004 */ 	lwc1	$f6,0x4($v1)
/*  f00da74:	e7a600bc */ 	swc1	$f6,0xbc($sp)
/*  f00da78:	c4680008 */ 	lwc1	$f8,0x8($v1)
/*  f00da7c:	0c005882 */ 	jal	func00016208
/*  f00da80:	e7a800c0 */ 	swc1	$f8,0xc0($sp)
/*  f00da84:	8e180014 */ 	lw	$t8,0x14($s0)
/*  f00da88:	c7aa00b8 */ 	lwc1	$f10,0xb8($sp)
/*  f00da8c:	c7a600bc */ 	lwc1	$f6,0xbc($sp)
/*  f00da90:	c7120008 */ 	lwc1	$f18,0x8($t8)
/*  f00da94:	44800000 */ 	mtc1	$zero,$f0
/*  f00da98:	3c013f80 */ 	lui	$at,0x3f80
/*  f00da9c:	46125100 */ 	add.s	$f4,$f10,$f18
/*  f00daa0:	c7b200c0 */ 	lwc1	$f18,0xc0($sp)
/*  f00daa4:	26040060 */ 	addiu	$a0,$s0,0x60
/*  f00daa8:	44050000 */ 	mfc1	$a1,$f0
/*  f00daac:	e7a400b8 */ 	swc1	$f4,0xb8($sp)
/*  f00dab0:	8e190014 */ 	lw	$t9,0x14($s0)
/*  f00dab4:	44060000 */ 	mfc1	$a2,$f0
/*  f00dab8:	44070000 */ 	mfc1	$a3,$f0
/*  f00dabc:	c728000c */ 	lwc1	$f8,0xc($t9)
/*  f00dac0:	46083280 */ 	add.s	$f10,$f6,$f8
/*  f00dac4:	e7aa00bc */ 	swc1	$f10,0xbc($sp)
/*  f00dac8:	8e080014 */ 	lw	$t0,0x14($s0)
/*  f00dacc:	c5060010 */ 	lwc1	$f6,0x10($t0)
/*  f00dad0:	afa4004c */ 	sw	$a0,0x4c($sp)
/*  f00dad4:	e7a00024 */ 	swc1	$f0,0x24($sp)
/*  f00dad8:	46069200 */ 	add.s	$f8,$f18,$f6
/*  f00dadc:	c7b20060 */ 	lwc1	$f18,0x60($sp)
/*  f00dae0:	c7a60064 */ 	lwc1	$f6,0x64($sp)
/*  f00dae4:	e7a0001c */ 	swc1	$f0,0x1c($sp)
/*  f00dae8:	46122501 */ 	sub.s	$f20,$f4,$f18
/*  f00daec:	c7a40068 */ 	lwc1	$f4,0x68($sp)
/*  f00daf0:	44819000 */ 	mtc1	$at,$f18
/*  f00daf4:	46065081 */ 	sub.s	$f2,$f10,$f6
/*  f00daf8:	e7a800c0 */ 	swc1	$f8,0xc0($sp)
/*  f00dafc:	e7b40010 */ 	swc1	$f20,0x10($sp)
/*  f00db00:	46044581 */ 	sub.s	$f22,$f8,$f4
/*  f00db04:	e7a20014 */ 	swc1	$f2,0x14($sp)
/*  f00db08:	e7a20058 */ 	swc1	$f2,0x58($sp)
/*  f00db0c:	e7b20020 */ 	swc1	$f18,0x20($sp)
/*  f00db10:	0c005b56 */ 	jal	func00016d58
/*  f00db14:	e7b60018 */ 	swc1	$f22,0x18($sp)
/*  f00db18:	8e090018 */ 	lw	$t1,0x18($s0)
/*  f00db1c:	8fa5004c */ 	lw	$a1,0x4c($sp)
/*  f00db20:	0c0057c1 */ 	jal	func00015f04
/*  f00db24:	c52c0014 */ 	lwc1	$f12,0x14($t1)
/*  f00db28:	8e0a00a8 */ 	lw	$t2,0xa8($s0)
/*  f00db2c:	3c014780 */ 	lui	$at,0x4780
/*  f00db30:	44811000 */ 	mtc1	$at,$f2
/*  f00db34:	448a5000 */ 	mtc1	$t2,$f10
/*  f00db38:	3c017f1b */ 	lui	$at,%hi(var7f1a8048)
/*  f00db3c:	c4308048 */ 	lwc1	$f16,%lo(var7f1a8048)($at)
/*  f00db40:	468051a0 */ 	cvt.s.w	$f6,$f10
/*  f00db44:	8e0b00ac */ 	lw	$t3,0xac($s0)
/*  f00db48:	8e0c00b4 */ 	lw	$t4,0xb4($s0)
/*  f00db4c:	8e0d00bc */ 	lw	$t5,0xbc($s0)
/*  f00db50:	448b9000 */ 	mtc1	$t3,$f18
/*  f00db54:	44800000 */ 	mtc1	$zero,$f0
/*  f00db58:	46103202 */ 	mul.s	$f8,$f6,$f16
/*  f00db5c:	a600005e */ 	sh	$zero,0x5e($s0)
/*  f00db60:	4600a306 */ 	mov.s	$f12,$f20
/*  f00db64:	4600b386 */ 	mov.s	$f14,$f22
/*  f00db68:	e60000b0 */ 	swc1	$f0,0xb0($s0)
/*  f00db6c:	468092a0 */ 	cvt.s.w	$f10,$f18
/*  f00db70:	46024103 */ 	div.s	$f4,$f8,$f2
/*  f00db74:	46105182 */ 	mul.s	$f6,$f10,$f16
/*  f00db78:	46023203 */ 	div.s	$f8,$f6,$f2
/*  f00db7c:	e60400a8 */ 	swc1	$f4,0xa8($s0)
/*  f00db80:	448c2000 */ 	mtc1	$t4,$f4
/*  f00db84:	00000000 */ 	nop
/*  f00db88:	468024a0 */ 	cvt.s.w	$f18,$f4
/*  f00db8c:	46109282 */ 	mul.s	$f10,$f18,$f16
/*  f00db90:	e60800ac */ 	swc1	$f8,0xac($s0)
/*  f00db94:	448d4000 */ 	mtc1	$t5,$f8
/*  f00db98:	c61200a8 */ 	lwc1	$f18,0xa8($s0)
/*  f00db9c:	46804120 */ 	cvt.s.w	$f4,$f8
/*  f00dba0:	e61200a4 */ 	swc1	$f18,0xa4($s0)
/*  f00dba4:	46025183 */ 	div.s	$f6,$f10,$f2
/*  f00dba8:	e60400bc */ 	swc1	$f4,0xbc($s0)
/*  f00dbac:	0fc259d4 */ 	jal	func0f096750
/*  f00dbb0:	e60600b4 */ 	swc1	$f6,0xb4($s0)
/*  f00dbb4:	4614a282 */ 	mul.s	$f10,$f20,$f20
/*  f00dbb8:	e60000a0 */ 	swc1	$f0,0xa0($s0)
/*  f00dbbc:	4616b182 */ 	mul.s	$f6,$f22,$f22
/*  f00dbc0:	0c012974 */ 	jal	sqrtf
/*  f00dbc4:	46065300 */ 	add.s	$f12,$f10,$f6
/*  f00dbc8:	c7ac0058 */ 	lwc1	$f12,0x58($sp)
/*  f00dbcc:	0fc259d4 */ 	jal	func0f096750
/*  f00dbd0:	46000386 */ 	mov.s	$f14,$f0
/*  f00dbd4:	3c017f1b */ 	lui	$at,%hi(var7f1a804c)
/*  f00dbd8:	c428804c */ 	lwc1	$f8,%lo(var7f1a804c)($at)
/*  f00dbdc:	ae0000b8 */ 	sw	$zero,0xb8($s0)
/*  f00dbe0:	46004101 */ 	sub.s	$f4,$f8,$f0
/*  f00dbe4:	e60400c0 */ 	swc1	$f4,0xc0($s0)
/*  f00dbe8:	8fbf0044 */ 	lw	$ra,0x44($sp)
.L0f00dbec:
/*  f00dbec:	d7b40030 */ 	ldc1	$f20,0x30($sp)
/*  f00dbf0:	d7b60038 */ 	ldc1	$f22,0x38($sp)
/*  f00dbf4:	8fb00040 */ 	lw	$s0,0x40($sp)
/*  f00dbf8:	03e00008 */ 	jr	$ra
/*  f00dbfc:	27bd00c8 */ 	addiu	$sp,$sp,0xc8
);

GLOBAL_ASM(
glabel setupAutogun
.late_rodata
glabel var7f1a8050
.word 0x40c907a9
glabel var7f1a8054
.word 0xbfc907a9
.text
/*  f00dc00:	27bdff70 */ 	addiu	$sp,$sp,-144
/*  f00dc04:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f00dc08:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f00dc0c:	0fc033b9 */ 	jal	setupGenericObject
/*  f00dc10:	00808025 */ 	or	$s0,$a0,$zero
/*  f00dc14:	8e0e0080 */ 	lw	$t6,0x80($s0)
/*  f00dc18:	8e0f0084 */ 	lw	$t7,0x84($s0)
/*  f00dc1c:	3c014780 */ 	lui	$at,0x4780
/*  f00dc20:	448e2000 */ 	mtc1	$t6,$f4
/*  f00dc24:	44811000 */ 	mtc1	$at,$f2
/*  f00dc28:	3c017f1b */ 	lui	$at,%hi(var7f1a8050)
/*  f00dc2c:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f00dc30:	c42c8050 */ 	lwc1	$f12,%lo(var7f1a8050)($at)
/*  f00dc34:	448f8000 */ 	mtc1	$t7,$f16
/*  f00dc38:	3c0142c8 */ 	lui	$at,0x42c8
/*  f00dc3c:	44812000 */ 	mtc1	$at,$f4
/*  f00dc40:	468084a0 */ 	cvt.s.w	$f18,$f16
/*  f00dc44:	460c3202 */ 	mul.s	$f8,$f6,$f12
/*  f00dc48:	8e180064 */ 	lw	$t8,0x64($s0)
/*  f00dc4c:	8e190068 */ 	lw	$t9,0x68($s0)
/*  f00dc50:	44800000 */ 	mtc1	$zero,$f0
/*  f00dc54:	2403ffff */ 	addiu	$v1,$zero,-1
/*  f00dc58:	46049182 */ 	mul.s	$f6,$f18,$f4
/*  f00dc5c:	a200005f */ 	sb	$zero,0x5f($s0)
/*  f00dc60:	ae030090 */ 	sw	$v1,0x90($s0)
/*  f00dc64:	ae030094 */ 	sw	$v1,0x94($s0)
/*  f00dc68:	ae030098 */ 	sw	$v1,0x98($s0)
/*  f00dc6c:	24040030 */ 	addiu	$a0,$zero,0x30
/*  f00dc70:	46024283 */ 	div.s	$f10,$f8,$f2
/*  f00dc74:	24050004 */ 	addiu	$a1,$zero,0x4
/*  f00dc78:	e600006c */ 	swc1	$f0,0x6c($s0)
/*  f00dc7c:	e6000070 */ 	swc1	$f0,0x70($s0)
/*  f00dc80:	e6000060 */ 	swc1	$f0,0x60($s0)
/*  f00dc84:	e6000078 */ 	swc1	$f0,0x78($s0)
/*  f00dc88:	e600007c */ 	swc1	$f0,0x7c($s0)
/*  f00dc8c:	e6000074 */ 	swc1	$f0,0x74($s0)
/*  f00dc90:	e6000088 */ 	swc1	$f0,0x88($s0)
/*  f00dc94:	e600008c */ 	swc1	$f0,0x8c($s0)
/*  f00dc98:	46023203 */ 	div.s	$f8,$f6,$f2
/*  f00dc9c:	e60a0080 */ 	swc1	$f10,0x80($s0)
/*  f00dca0:	44985000 */ 	mtc1	$t8,$f10
/*  f00dca4:	44993000 */ 	mtc1	$t9,$f6
/*  f00dca8:	46805420 */ 	cvt.s.w	$f16,$f10
/*  f00dcac:	460c8482 */ 	mul.s	$f18,$f16,$f12
/*  f00dcb0:	e6080084 */ 	swc1	$f8,0x84($s0)
/*  f00dcb4:	46803220 */ 	cvt.s.w	$f8,$f6
/*  f00dcb8:	46029103 */ 	div.s	$f4,$f18,$f2
/*  f00dcbc:	460c4282 */ 	mul.s	$f10,$f8,$f12
/*  f00dcc0:	46025403 */ 	div.s	$f16,$f10,$f2
/*  f00dcc4:	e6040064 */ 	swc1	$f4,0x64($s0)
/*  f00dcc8:	0c0048f2 */ 	jal	malloc
/*  f00dccc:	e6100068 */ 	swc1	$f16,0x68($s0)
/*  f00dcd0:	2403ffff */ 	addiu	$v1,$zero,-1
/*  f00dcd4:	ae02009c */ 	sw	$v0,0x9c($s0)
/*  f00dcd8:	a0430000 */ 	sb	$v1,0x0($v0)
/*  f00dcdc:	8604005c */ 	lh	$a0,0x5c($s0)
/*  f00dce0:	44800000 */ 	mtc1	$zero,$f0
/*  f00dce4:	240800ff */ 	addiu	$t0,$zero,0xff
/*  f00dce8:	a200005e */ 	sb	$zero,0x5e($s0)
/*  f00dcec:	a20800a9 */ 	sb	$t0,0xa9($s0)
/*  f00dcf0:	0480001f */ 	bltz	$a0,.L0f00dd70
/*  f00dcf4:	e60000a0 */ 	swc1	$f0,0xa0($s0)
/*  f00dcf8:	24050002 */ 	addiu	$a1,$zero,0x2
/*  f00dcfc:	0fc456ac */ 	jal	padUnpack
/*  f00dd00:	27a60028 */ 	addiu	$a2,$sp,0x28
/*  f00dd04:	8e020014 */ 	lw	$v0,0x14($s0)
/*  f00dd08:	c7a6002c */ 	lwc1	$f6,0x2c($sp)
/*  f00dd0c:	c7b20028 */ 	lwc1	$f18,0x28($sp)
/*  f00dd10:	c448000c */ 	lwc1	$f8,0xc($v0)
/*  f00dd14:	c4440008 */ 	lwc1	$f4,0x8($v0)
/*  f00dd18:	c7b00030 */ 	lwc1	$f16,0x30($sp)
/*  f00dd1c:	46083281 */ 	sub.s	$f10,$f6,$f8
/*  f00dd20:	46049301 */ 	sub.s	$f12,$f18,$f4
/*  f00dd24:	e7aa0084 */ 	swc1	$f10,0x84($sp)
/*  f00dd28:	c4520010 */ 	lwc1	$f18,0x10($v0)
/*  f00dd2c:	e7ac0088 */ 	swc1	$f12,0x88($sp)
/*  f00dd30:	46128381 */ 	sub.s	$f14,$f16,$f18
/*  f00dd34:	0fc259d4 */ 	jal	func0f096750
/*  f00dd38:	e7ae0080 */ 	swc1	$f14,0x80($sp)
/*  f00dd3c:	c7a20088 */ 	lwc1	$f2,0x88($sp)
/*  f00dd40:	c7ae0080 */ 	lwc1	$f14,0x80($sp)
/*  f00dd44:	e6000060 */ 	swc1	$f0,0x60($s0)
/*  f00dd48:	46021102 */ 	mul.s	$f4,$f2,$f2
/*  f00dd4c:	00000000 */ 	nop
/*  f00dd50:	460e7182 */ 	mul.s	$f6,$f14,$f14
/*  f00dd54:	0c012974 */ 	jal	sqrtf
/*  f00dd58:	46062300 */ 	add.s	$f12,$f4,$f6
/*  f00dd5c:	c7ac0084 */ 	lwc1	$f12,0x84($sp)
/*  f00dd60:	0fc259d4 */ 	jal	func0f096750
/*  f00dd64:	46000386 */ 	mov.s	$f14,$f0
/*  f00dd68:	10000007 */ 	b	.L0f00dd88
/*  f00dd6c:	e6000074 */ 	swc1	$f0,0x74($s0)
.L0f00dd70:
/*  f00dd70:	86090004 */ 	lh	$t1,0x4($s0)
/*  f00dd74:	24010144 */ 	addiu	$at,$zero,0x144
/*  f00dd78:	15210003 */ 	bne	$t1,$at,.L0f00dd88
/*  f00dd7c:	3c017f1b */ 	lui	$at,%hi(var7f1a8054)
/*  f00dd80:	c4288054 */ 	lwc1	$f8,%lo(var7f1a8054)($at)
/*  f00dd84:	e6080074 */ 	swc1	$f8,0x74($s0)
.L0f00dd88:
/*  f00dd88:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f00dd8c:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f00dd90:	27bd0090 */ 	addiu	$sp,$sp,0x90
/*  f00dd94:	03e00008 */ 	jr	$ra
/*  f00dd98:	00000000 */ 	nop
);

void setupHangingMonitors(struct hangingmonitorsobj *monitors, s32 cmdindex)
{
	setupGenericObject(&monitors->base, cmdindex);
}

GLOBAL_ASM(
glabel setupSingleMonitor
.late_rodata
glabel var7f1a8058
.word 0x3ebba0c0
.text
/*  f00ddbc:	27bdff38 */ 	addiu	$sp,$sp,-200
/*  f00ddc0:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f00ddc4:	00808025 */ 	or	$s0,$a0,$zero
/*  f00ddc8:	3c0e800a */ 	lui	$t6,%hi(var8009ce98)
/*  f00ddcc:	25cece98 */ 	addiu	$t6,$t6,%lo(var8009ce98)
/*  f00ddd0:	2484005c */ 	addiu	$a0,$a0,0x5c
/*  f00ddd4:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f00ddd8:	afa500cc */ 	sw	$a1,0xcc($sp)
/*  f00dddc:	00804025 */ 	or	$t0,$a0,$zero
/*  f00dde0:	25d9006c */ 	addiu	$t9,$t6,0x6c
.L0f00dde4:
/*  f00dde4:	8dc10000 */ 	lw	$at,0x0($t6)
/*  f00dde8:	25ce000c */ 	addiu	$t6,$t6,0xc
/*  f00ddec:	2508000c */ 	addiu	$t0,$t0,0xc
/*  f00ddf0:	ad01fff4 */ 	sw	$at,-0xc($t0)
/*  f00ddf4:	8dc1fff8 */ 	lw	$at,-0x8($t6)
/*  f00ddf8:	ad01fff8 */ 	sw	$at,-0x8($t0)
/*  f00ddfc:	8dc1fffc */ 	lw	$at,-0x4($t6)
/*  f00de00:	15d9fff8 */ 	bne	$t6,$t9,.L0f00dde4
/*  f00de04:	ad01fffc */ 	sw	$at,-0x4($t0)
/*  f00de08:	8dc10000 */ 	lw	$at,0x0($t6)
/*  f00de0c:	ad010000 */ 	sw	$at,0x0($t0)
/*  f00de10:	8dd90004 */ 	lw	$t9,0x4($t6)
/*  f00de14:	ad190004 */ 	sw	$t9,0x4($t0)
/*  f00de18:	0fc1fe49 */ 	jal	imageSlotSetImage
/*  f00de1c:	920500d3 */ 	lbu	$a1,0xd3($s0)
/*  f00de20:	86090006 */ 	lh	$t1,0x6($s0)
/*  f00de24:	8fa500cc */ 	lw	$a1,0xcc($sp)
/*  f00de28:	05210085 */ 	bgez	$t1,.L0f00e040
/*  f00de2c:	00000000 */ 	nop
/*  f00de30:	8e0a0008 */ 	lw	$t2,0x8($s0)
/*  f00de34:	314b8000 */ 	andi	$t3,$t2,0x8000
/*  f00de38:	15600081 */ 	bnez	$t3,.L0f00e040
/*  f00de3c:	00000000 */ 	nop
/*  f00de40:	860c0004 */ 	lh	$t4,0x4($s0)
/*  f00de44:	afac00bc */ 	sw	$t4,0xbc($sp)
/*  f00de48:	860d00d0 */ 	lh	$t5,0xd0($s0)
/*  f00de4c:	0fc24801 */ 	jal	setupGetPtrToCommandByIndex
/*  f00de50:	01a52021 */ 	addu	$a0,$t5,$a1
/*  f00de54:	afa200b8 */ 	sw	$v0,0xb8($sp)
/*  f00de58:	0fc2486d */ 	jal	propLoad
/*  f00de5c:	8fa400bc */ 	lw	$a0,0xbc($sp)
/*  f00de60:	96180000 */ 	lhu	$t8,0x0($s0)
/*  f00de64:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f00de68:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f00de6c:	44982000 */ 	mtc1	$t8,$f4
/*  f00de70:	3c014f80 */ 	lui	$at,0x4f80
/*  f00de74:	07010004 */ 	bgez	$t8,.L0f00de88
/*  f00de78:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f00de7c:	44814000 */ 	mtc1	$at,$f8
/*  f00de80:	00000000 */ 	nop
/*  f00de84:	46083180 */ 	add.s	$f6,$f6,$f8
.L0f00de88:
/*  f00de88:	3c013b80 */ 	lui	$at,0x3b80
/*  f00de8c:	44815000 */ 	mtc1	$at,$f10
/*  f00de90:	8c6f0318 */ 	lw	$t7,0x318($v1)
/*  f00de94:	460a3402 */ 	mul.s	$f16,$f6,$f10
/*  f00de98:	15e00004 */ 	bnez	$t7,.L0f00deac
/*  f00de9c:	e7b000b0 */ 	swc1	$f16,0xb0($sp)
/*  f00dea0:	8c79031c */ 	lw	$t9,0x31c($v1)
/*  f00dea4:	13200004 */ 	beqz	$t9,.L0f00deb8
/*  f00dea8:	00000000 */ 	nop
.L0f00deac:
/*  f00deac:	920e0002 */ 	lbu	$t6,0x2($s0)
/*  f00deb0:	35c80004 */ 	ori	$t0,$t6,0x4
/*  f00deb4:	a2080002 */ 	sb	$t0,0x2($s0)
.L0f00deb8:
/*  f00deb8:	0fc1a954 */ 	jal	func0f06a550
/*  f00debc:	02002025 */ 	or	$a0,$s0,$zero
/*  f00dec0:	0fc1a1bc */ 	jal	func0f0686f0
/*  f00dec4:	afa200b4 */ 	sw	$v0,0xb4($sp)
/*  f00dec8:	ae020048 */ 	sw	$v0,0x48($s0)
/*  f00decc:	8fa900b4 */ 	lw	$t1,0xb4($sp)
/*  f00ded0:	5120005e */ 	beqzl	$t1,.L0f00e04c
/*  f00ded4:	8e020014 */ 	lw	$v0,0x14($s0)
/*  f00ded8:	5040005c */ 	beqzl	$v0,.L0f00e04c
/*  f00dedc:	8e020014 */ 	lw	$v0,0x14($s0)
/*  f00dee0:	8e0b0040 */ 	lw	$t3,0x40($s0)
/*  f00dee4:	8e040018 */ 	lw	$a0,0x18($s0)
/*  f00dee8:	356c0040 */ 	ori	$t4,$t3,0x40
/*  f00deec:	ae0c0040 */ 	sw	$t4,0x40($s0)
/*  f00def0:	c7a400b0 */ 	lwc1	$f4,0xb0($sp)
/*  f00def4:	c4920014 */ 	lwc1	$f18,0x14($a0)
/*  f00def8:	46049202 */ 	mul.s	$f8,$f18,$f4
/*  f00defc:	44054000 */ 	mfc1	$a1,$f8
/*  f00df00:	0c006bd6 */ 	jal	modelSetUnk14
/*  f00df04:	00000000 */ 	nop
/*  f00df08:	8fa300b8 */ 	lw	$v1,0xb8($sp)
/*  f00df0c:	8e180018 */ 	lw	$t8,0x18($s0)
/*  f00df10:	24010001 */ 	addiu	$at,$zero,0x1
/*  f00df14:	8c6d0018 */ 	lw	$t5,0x18($v1)
/*  f00df18:	af0d0018 */ 	sw	$t5,0x18($t8)
/*  f00df1c:	820200d2 */ 	lb	$v0,0xd2($s0)
/*  f00df20:	14400008 */ 	bnez	$v0,.L0f00df44
/*  f00df24:	00000000 */ 	nop
/*  f00df28:	8c6f0018 */ 	lw	$t7,0x18($v1)
/*  f00df2c:	00002825 */ 	or	$a1,$zero,$zero
/*  f00df30:	0c006a47 */ 	jal	modelGetPart
/*  f00df34:	8de40008 */ 	lw	$a0,0x8($t7)
/*  f00df38:	8e190018 */ 	lw	$t9,0x18($s0)
/*  f00df3c:	1000001a */ 	b	.L0f00dfa8
/*  f00df40:	af22001c */ 	sw	$v0,0x1c($t9)
.L0f00df44:
/*  f00df44:	54410009 */ 	bnel	$v0,$at,.L0f00df6c
/*  f00df48:	24010002 */ 	addiu	$at,$zero,0x2
/*  f00df4c:	8c6e0018 */ 	lw	$t6,0x18($v1)
/*  f00df50:	24050001 */ 	addiu	$a1,$zero,0x1
/*  f00df54:	0c006a47 */ 	jal	modelGetPart
/*  f00df58:	8dc40008 */ 	lw	$a0,0x8($t6)
/*  f00df5c:	8e080018 */ 	lw	$t0,0x18($s0)
/*  f00df60:	10000011 */ 	b	.L0f00dfa8
/*  f00df64:	ad02001c */ 	sw	$v0,0x1c($t0)
/*  f00df68:	24010002 */ 	addiu	$at,$zero,0x2
.L0f00df6c:
/*  f00df6c:	54410009 */ 	bnel	$v0,$at,.L0f00df94
/*  f00df70:	8c6b0018 */ 	lw	$t3,0x18($v1)
/*  f00df74:	8c690018 */ 	lw	$t1,0x18($v1)
/*  f00df78:	24050002 */ 	addiu	$a1,$zero,0x2
/*  f00df7c:	0c006a47 */ 	jal	modelGetPart
/*  f00df80:	8d240008 */ 	lw	$a0,0x8($t1)
/*  f00df84:	8e0a0018 */ 	lw	$t2,0x18($s0)
/*  f00df88:	10000007 */ 	b	.L0f00dfa8
/*  f00df8c:	ad42001c */ 	sw	$v0,0x1c($t2)
/*  f00df90:	8c6b0018 */ 	lw	$t3,0x18($v1)
.L0f00df94:
/*  f00df94:	24050003 */ 	addiu	$a1,$zero,0x3
/*  f00df98:	0c006a47 */ 	jal	modelGetPart
/*  f00df9c:	8d640008 */ 	lw	$a0,0x8($t3)
/*  f00dfa0:	8e0c0018 */ 	lw	$t4,0x18($s0)
/*  f00dfa4:	ad82001c */ 	sw	$v0,0x1c($t4)
.L0f00dfa8:
/*  f00dfa8:	8fad00b8 */ 	lw	$t5,0xb8($sp)
/*  f00dfac:	8fa400b4 */ 	lw	$a0,0xb4($sp)
/*  f00dfb0:	0fc181a6 */ 	jal	propReparent
/*  f00dfb4:	8da50014 */ 	lw	$a1,0x14($t5)
/*  f00dfb8:	3c017f1b */ 	lui	$at,%hi(var7f1a8058)
/*  f00dfbc:	c42c8058 */ 	lwc1	$f12,%lo(var7f1a8058)($at)
/*  f00dfc0:	0c0058ba */ 	jal	func000162e8
/*  f00dfc4:	27a50064 */ 	addiu	$a1,$sp,0x64
/*  f00dfc8:	8faf00b8 */ 	lw	$t7,0xb8($sp)
/*  f00dfcc:	8e180018 */ 	lw	$t8,0x18($s0)
/*  f00dfd0:	27a50064 */ 	addiu	$a1,$sp,0x64
/*  f00dfd4:	8df90018 */ 	lw	$t9,0x18($t7)
/*  f00dfd8:	c7060014 */ 	lwc1	$f6,0x14($t8)
/*  f00dfdc:	c72a0014 */ 	lwc1	$f10,0x14($t9)
/*  f00dfe0:	0c0057c1 */ 	jal	func00015f04
/*  f00dfe4:	460a3303 */ 	div.s	$f12,$f6,$f10
/*  f00dfe8:	8e040018 */ 	lw	$a0,0x18($s0)
/*  f00dfec:	0c006b43 */ 	jal	modelGetRootPosition
/*  f00dff0:	27a500a4 */ 	addiu	$a1,$sp,0xa4
/*  f00dff4:	c7b000a4 */ 	lwc1	$f16,0xa4($sp)
/*  f00dff8:	c7a400a8 */ 	lwc1	$f4,0xa8($sp)
/*  f00dffc:	c7a600ac */ 	lwc1	$f6,0xac($sp)
/*  f00e000:	46008487 */ 	neg.s	$f18,$f16
/*  f00e004:	46002207 */ 	neg.s	$f8,$f4
/*  f00e008:	46003287 */ 	neg.s	$f10,$f6
/*  f00e00c:	e7b200a4 */ 	swc1	$f18,0xa4($sp)
/*  f00e010:	e7a800a8 */ 	swc1	$f8,0xa8($sp)
/*  f00e014:	e7aa00ac */ 	swc1	$f10,0xac($sp)
/*  f00e018:	27a400a4 */ 	addiu	$a0,$sp,0xa4
/*  f00e01c:	0c0059b7 */ 	jal	func000166dc
/*  f00e020:	27a50024 */ 	addiu	$a1,$sp,0x24
/*  f00e024:	8e060048 */ 	lw	$a2,0x48($s0)
/*  f00e028:	27a40064 */ 	addiu	$a0,$sp,0x64
/*  f00e02c:	27a50024 */ 	addiu	$a1,$sp,0x24
/*  f00e030:	0c0056f9 */ 	jal	func00015be4
/*  f00e034:	24c60004 */ 	addiu	$a2,$a2,0x4
/*  f00e038:	10000004 */ 	b	.L0f00e04c
/*  f00e03c:	8e020014 */ 	lw	$v0,0x14($s0)
.L0f00e040:
/*  f00e040:	0fc033b9 */ 	jal	setupGenericObject
/*  f00e044:	02002025 */ 	or	$a0,$s0,$zero
/*  f00e048:	8e020014 */ 	lw	$v0,0x14($s0)
.L0f00e04c:
/*  f00e04c:	50400009 */ 	beqzl	$v0,.L0f00e074
/*  f00e050:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f00e054:	8e0e0008 */ 	lw	$t6,0x8($s0)
/*  f00e058:	000e4040 */ 	sll	$t0,$t6,0x1
/*  f00e05c:	05030005 */ 	bgezl	$t0,.L0f00e074
/*  f00e060:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f00e064:	90490001 */ 	lbu	$t1,0x1($v0)
/*  f00e068:	352a0001 */ 	ori	$t2,$t1,0x1
/*  f00e06c:	a04a0001 */ 	sb	$t2,0x1($v0)
/*  f00e070:	8fbf001c */ 	lw	$ra,0x1c($sp)
.L0f00e074:
/*  f00e074:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f00e078:	27bd00c8 */ 	addiu	$sp,$sp,0xc8
/*  f00e07c:	03e00008 */ 	jr	$ra
/*  f00e080:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel setupMultiMonitor
/*  f00e084:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f00e088:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f00e08c:	00808025 */ 	or	$s0,$a0,$zero
/*  f00e090:	3c0e800a */ 	lui	$t6,%hi(var8009ce98)
/*  f00e094:	25cece98 */ 	addiu	$t6,$t6,%lo(var8009ce98)
/*  f00e098:	2484005c */ 	addiu	$a0,$a0,0x5c
/*  f00e09c:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f00e0a0:	afa50024 */ 	sw	$a1,0x24($sp)
/*  f00e0a4:	00804025 */ 	or	$t0,$a0,$zero
/*  f00e0a8:	25d9006c */ 	addiu	$t9,$t6,0x6c
.L0f00e0ac:
/*  f00e0ac:	8dc10000 */ 	lw	$at,0x0($t6)
/*  f00e0b0:	25ce000c */ 	addiu	$t6,$t6,0xc
/*  f00e0b4:	2508000c */ 	addiu	$t0,$t0,0xc
/*  f00e0b8:	ad01fff4 */ 	sw	$at,-0xc($t0)
/*  f00e0bc:	8dc1fff8 */ 	lw	$at,-0x8($t6)
/*  f00e0c0:	ad01fff8 */ 	sw	$at,-0x8($t0)
/*  f00e0c4:	8dc1fffc */ 	lw	$at,-0x4($t6)
/*  f00e0c8:	15d9fff8 */ 	bne	$t6,$t9,.L0f00e0ac
/*  f00e0cc:	ad01fffc */ 	sw	$at,-0x4($t0)
/*  f00e0d0:	8dc10000 */ 	lw	$at,0x0($t6)
/*  f00e0d4:	ad010000 */ 	sw	$at,0x0($t0)
/*  f00e0d8:	8dd90004 */ 	lw	$t9,0x4($t6)
/*  f00e0dc:	ad190004 */ 	sw	$t9,0x4($t0)
/*  f00e0e0:	0fc1fe49 */ 	jal	imageSlotSetImage
/*  f00e0e4:	9205022c */ 	lbu	$a1,0x22c($s0)
/*  f00e0e8:	3c09800a */ 	lui	$t1,%hi(var8009ce98)
/*  f00e0ec:	2529ce98 */ 	addiu	$t1,$t1,%lo(var8009ce98)
/*  f00e0f0:	260400d0 */ 	addiu	$a0,$s0,0xd0
/*  f00e0f4:	00806825 */ 	or	$t5,$a0,$zero
/*  f00e0f8:	252c006c */ 	addiu	$t4,$t1,0x6c
.L0f00e0fc:
/*  f00e0fc:	8d210000 */ 	lw	$at,0x0($t1)
/*  f00e100:	2529000c */ 	addiu	$t1,$t1,0xc
/*  f00e104:	25ad000c */ 	addiu	$t5,$t5,0xc
/*  f00e108:	ada1fff4 */ 	sw	$at,-0xc($t5)
/*  f00e10c:	8d21fff8 */ 	lw	$at,-0x8($t1)
/*  f00e110:	ada1fff8 */ 	sw	$at,-0x8($t5)
/*  f00e114:	8d21fffc */ 	lw	$at,-0x4($t1)
/*  f00e118:	152cfff8 */ 	bne	$t1,$t4,.L0f00e0fc
/*  f00e11c:	ada1fffc */ 	sw	$at,-0x4($t5)
/*  f00e120:	8d210000 */ 	lw	$at,0x0($t1)
/*  f00e124:	ada10000 */ 	sw	$at,0x0($t5)
/*  f00e128:	8d2c0004 */ 	lw	$t4,0x4($t1)
/*  f00e12c:	adac0004 */ 	sw	$t4,0x4($t5)
/*  f00e130:	0fc1fe49 */ 	jal	imageSlotSetImage
/*  f00e134:	9205022d */ 	lbu	$a1,0x22d($s0)
/*  f00e138:	3c18800a */ 	lui	$t8,%hi(var8009ce98)
/*  f00e13c:	2718ce98 */ 	addiu	$t8,$t8,%lo(var8009ce98)
/*  f00e140:	26040144 */ 	addiu	$a0,$s0,0x144
/*  f00e144:	00804025 */ 	or	$t0,$a0,$zero
/*  f00e148:	270e006c */ 	addiu	$t6,$t8,0x6c
.L0f00e14c:
/*  f00e14c:	8f010000 */ 	lw	$at,0x0($t8)
/*  f00e150:	2718000c */ 	addiu	$t8,$t8,0xc
/*  f00e154:	2508000c */ 	addiu	$t0,$t0,0xc
/*  f00e158:	ad01fff4 */ 	sw	$at,-0xc($t0)
/*  f00e15c:	8f01fff8 */ 	lw	$at,-0x8($t8)
/*  f00e160:	ad01fff8 */ 	sw	$at,-0x8($t0)
/*  f00e164:	8f01fffc */ 	lw	$at,-0x4($t8)
/*  f00e168:	170efff8 */ 	bne	$t8,$t6,.L0f00e14c
/*  f00e16c:	ad01fffc */ 	sw	$at,-0x4($t0)
/*  f00e170:	8f010000 */ 	lw	$at,0x0($t8)
/*  f00e174:	ad010000 */ 	sw	$at,0x0($t0)
/*  f00e178:	8f0e0004 */ 	lw	$t6,0x4($t8)
/*  f00e17c:	ad0e0004 */ 	sw	$t6,0x4($t0)
/*  f00e180:	0fc1fe49 */ 	jal	imageSlotSetImage
/*  f00e184:	9205022e */ 	lbu	$a1,0x22e($s0)
/*  f00e188:	3c0b800a */ 	lui	$t3,%hi(var8009ce98)
/*  f00e18c:	256bce98 */ 	addiu	$t3,$t3,%lo(var8009ce98)
/*  f00e190:	260401b8 */ 	addiu	$a0,$s0,0x1b8
/*  f00e194:	00806825 */ 	or	$t5,$a0,$zero
/*  f00e198:	2569006c */ 	addiu	$t1,$t3,0x6c
.L0f00e19c:
/*  f00e19c:	8d610000 */ 	lw	$at,0x0($t3)
/*  f00e1a0:	256b000c */ 	addiu	$t3,$t3,0xc
/*  f00e1a4:	25ad000c */ 	addiu	$t5,$t5,0xc
/*  f00e1a8:	ada1fff4 */ 	sw	$at,-0xc($t5)
/*  f00e1ac:	8d61fff8 */ 	lw	$at,-0x8($t3)
/*  f00e1b0:	ada1fff8 */ 	sw	$at,-0x8($t5)
/*  f00e1b4:	8d61fffc */ 	lw	$at,-0x4($t3)
/*  f00e1b8:	1569fff8 */ 	bne	$t3,$t1,.L0f00e19c
/*  f00e1bc:	ada1fffc */ 	sw	$at,-0x4($t5)
/*  f00e1c0:	8d610000 */ 	lw	$at,0x0($t3)
/*  f00e1c4:	ada10000 */ 	sw	$at,0x0($t5)
/*  f00e1c8:	8d690004 */ 	lw	$t1,0x4($t3)
/*  f00e1cc:	ada90004 */ 	sw	$t1,0x4($t5)
/*  f00e1d0:	0fc1fe49 */ 	jal	imageSlotSetImage
/*  f00e1d4:	9205022f */ 	lbu	$a1,0x22f($s0)
/*  f00e1d8:	02002025 */ 	or	$a0,$s0,$zero
/*  f00e1dc:	0fc033b9 */ 	jal	setupGenericObject
/*  f00e1e0:	8fa50024 */ 	lw	$a1,0x24($sp)
/*  f00e1e4:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f00e1e8:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f00e1ec:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f00e1f0:	03e00008 */ 	jr	$ra
/*  f00e1f4:	00000000 */ 	nop
);

s32 func0f00e1f8(s32 padnum)
{
	f32 mult;
	struct coord centre;
	struct coord coord;
	u32 stack;
	struct pad pad;

	padGetCentre(padnum, &centre);
	padUnpack(padnum, PADFIELD_BBOX | PADFIELD_UP, &pad);

	mult = (pad.bbox.ymax - pad.bbox.ymin) * 0.5f + 10;

	coord.x = pad.up.x * mult + centre.x;
	coord.y = pad.up.y * mult + centre.y;
	coord.z = pad.up.z * mult + centre.z;

	centre.x = centre.x - pad.up.x * mult;
	centre.y = centre.y - pad.up.y * mult;
	centre.z = centre.z - pad.up.z * mult;

	return func0f164e8c(&centre, &coord);
}

s32 func0f00e2b0(s32 padnum)
{
	f32 mult;
	struct coord centre;
	struct coord coord;
	u32 stack;
	struct pad pad;

	padGetCentre(padnum, &centre);
	padUnpack(padnum, PADFIELD_BBOX | PADFIELD_NORMAL, &pad);

	mult = (pad.bbox.xmax - pad.bbox.xmin) * 0.5f + 10;

	coord.x = pad.normal.x * mult + centre.x;
	coord.y = pad.normal.y * mult + centre.y;
	coord.z = pad.normal.z * mult + centre.z;

	centre.x = centre.x - pad.normal.x * mult;
	centre.y = centre.y - pad.normal.y * mult;
	centre.z = centre.z - pad.normal.z * mult;

	return func0f164e8c(&centre, &coord);
}

GLOBAL_ASM(
glabel setupDoor
.late_rodata
glabel var7f1a805c
.word 0x3fc907a9
glabel var7f1a8060
.word 0x3fc907a9
glabel var7f1a8064
.word 0x358637bd
.text
/*  f00e368:	27bdfe38 */ 	addiu	$sp,$sp,-456
/*  f00e36c:	afb00030 */ 	sw	$s0,0x30($sp)
/*  f00e370:	00808025 */ 	or	$s0,$a0,$zero
/*  f00e374:	afbf0034 */ 	sw	$ra,0x34($sp)
/*  f00e378:	afa501cc */ 	sw	$a1,0x1cc($sp)
/*  f00e37c:	84840004 */ 	lh	$a0,0x4($a0)
/*  f00e380:	240effff */ 	addiu	$t6,$zero,-1
/*  f00e384:	afae01bc */ 	sw	$t6,0x1bc($sp)
/*  f00e388:	0fc2486d */ 	jal	propLoad
/*  f00e38c:	afa401c0 */ 	sw	$a0,0x1c0($sp)
/*  f00e390:	960f0070 */ 	lhu	$t7,0x70($s0)
/*  f00e394:	31f80040 */ 	andi	$t8,$t7,0x40
/*  f00e398:	53000004 */ 	beqzl	$t8,.L0f00e3ac
/*  f00e39c:	8e190008 */ 	lw	$t9,0x8($s0)
/*  f00e3a0:	0fc4581a */ 	jal	func0f116068
/*  f00e3a4:	86040006 */ 	lh	$a0,0x6($s0)
/*  f00e3a8:	8e190008 */ 	lw	$t9,0x8($s0)
.L0f00e3ac:
/*  f00e3ac:	001940c0 */ 	sll	$t0,$t9,0x3
/*  f00e3b0:	05030005 */ 	bgezl	$t0,.L0f00e3c8
/*  f00e3b4:	86040006 */ 	lh	$a0,0x6($s0)
/*  f00e3b8:	0fc038ac */ 	jal	func0f00e2b0
/*  f00e3bc:	86040006 */ 	lh	$a0,0x6($s0)
/*  f00e3c0:	afa201bc */ 	sw	$v0,0x1bc($sp)
/*  f00e3c4:	86040006 */ 	lh	$a0,0x6($s0)
.L0f00e3c8:
/*  f00e3c8:	2405007e */ 	addiu	$a1,$zero,0x7e
/*  f00e3cc:	0fc456ac */ 	jal	padUnpack
/*  f00e3d0:	27a60168 */ 	addiu	$a2,$sp,0x168
/*  f00e3d4:	3c018006 */ 	lui	$at,%hi(g_DoorScale)
/*  f00e3d8:	c42c1be0 */ 	lwc1	$f12,%lo(g_DoorScale)($at)
/*  f00e3dc:	3c013f80 */ 	lui	$at,0x3f80
/*  f00e3e0:	44812000 */ 	mtc1	$at,$f4
/*  f00e3e4:	c7a60198 */ 	lwc1	$f6,0x198($sp)
/*  f00e3e8:	27a50168 */ 	addiu	$a1,$sp,0x168
/*  f00e3ec:	460c2032 */ 	c.eq.s	$f4,$f12
/*  f00e3f0:	00000000 */ 	nop
/*  f00e3f4:	4503005b */ 	bc1tl	.L0f00e564
/*  f00e3f8:	8fab01b0 */ 	lw	$t3,0x1b0($sp)
/*  f00e3fc:	460c3202 */ 	mul.s	$f8,$f6,$f12
/*  f00e400:	c7aa019c */ 	lwc1	$f10,0x19c($sp)
/*  f00e404:	8fa301bc */ 	lw	$v1,0x1bc($sp)
/*  f00e408:	3c0a800a */ 	lui	$t2,%hi(var800a4ccc)
/*  f00e40c:	460c5402 */ 	mul.s	$f16,$f10,$f12
/*  f00e410:	00034880 */ 	sll	$t1,$v1,0x2
/*  f00e414:	01234821 */ 	addu	$t1,$t1,$v1
/*  f00e418:	e7a80198 */ 	swc1	$f8,0x198($sp)
/*  f00e41c:	0460004e */ 	bltz	$v1,.L0f00e558
/*  f00e420:	e7b0019c */ 	swc1	$f16,0x19c($sp)
/*  f00e424:	8d4a4ccc */ 	lw	$t2,%lo(var800a4ccc)($t2)
/*  f00e428:	00094880 */ 	sll	$t1,$t1,0x2
/*  f00e42c:	c7a40170 */ 	lwc1	$f4,0x170($sp)
/*  f00e430:	012a1021 */ 	addu	$v0,$t1,$t2
/*  f00e434:	c4520008 */ 	lwc1	$f18,0x8($v0)
/*  f00e438:	c7aa016c */ 	lwc1	$f10,0x16c($sp)
/*  f00e43c:	c4420000 */ 	lwc1	$f2,0x0($v0)
/*  f00e440:	46049182 */ 	mul.s	$f6,$f18,$f4
/*  f00e444:	c4520004 */ 	lwc1	$f18,0x4($v0)
/*  f00e448:	3c013f80 */ 	lui	$at,0x3f80
/*  f00e44c:	c44e000c */ 	lwc1	$f14,0xc($v0)
/*  f00e450:	46125102 */ 	mul.s	$f4,$f10,$f18
/*  f00e454:	c7aa0168 */ 	lwc1	$f10,0x168($sp)
/*  f00e458:	46025482 */ 	mul.s	$f18,$f10,$f2
/*  f00e45c:	46049280 */ 	add.s	$f10,$f18,$f4
/*  f00e460:	44812000 */ 	mtc1	$at,$f4
/*  f00e464:	460a3000 */ 	add.s	$f0,$f6,$f10
/*  f00e468:	46046181 */ 	sub.s	$f6,$f12,$f4
/*  f00e46c:	460e0481 */ 	sub.s	$f18,$f0,$f14
/*  f00e470:	46069002 */ 	mul.s	$f0,$f18,$f6
/*  f00e474:	00000000 */ 	nop
/*  f00e478:	46001282 */ 	mul.s	$f10,$f2,$f0
/*  f00e47c:	e7aa0150 */ 	swc1	$f10,0x150($sp)
/*  f00e480:	c4440004 */ 	lwc1	$f4,0x4($v0)
/*  f00e484:	46002482 */ 	mul.s	$f18,$f4,$f0
/*  f00e488:	c7a40150 */ 	lwc1	$f4,0x150($sp)
/*  f00e48c:	e7b20154 */ 	swc1	$f18,0x154($sp)
/*  f00e490:	c4460008 */ 	lwc1	$f6,0x8($v0)
/*  f00e494:	c7b2018c */ 	lwc1	$f18,0x18c($sp)
/*  f00e498:	46003282 */ 	mul.s	$f10,$f6,$f0
/*  f00e49c:	e7aa0158 */ 	swc1	$f10,0x158($sp)
/*  f00e4a0:	46122182 */ 	mul.s	$f6,$f4,$f18
/*  f00e4a4:	c7a40190 */ 	lwc1	$f4,0x190($sp)
/*  f00e4a8:	c7aa0154 */ 	lwc1	$f10,0x154($sp)
/*  f00e4ac:	46045482 */ 	mul.s	$f18,$f10,$f4
/*  f00e4b0:	c7a40194 */ 	lwc1	$f4,0x194($sp)
/*  f00e4b4:	46123280 */ 	add.s	$f10,$f6,$f18
/*  f00e4b8:	c7a60158 */ 	lwc1	$f6,0x158($sp)
/*  f00e4bc:	46062482 */ 	mul.s	$f18,$f4,$f6
/*  f00e4c0:	460a9000 */ 	add.s	$f0,$f18,$f10
/*  f00e4c4:	c7aa0150 */ 	lwc1	$f10,0x150($sp)
/*  f00e4c8:	46004100 */ 	add.s	$f4,$f8,$f0
/*  f00e4cc:	c7a80180 */ 	lwc1	$f8,0x180($sp)
/*  f00e4d0:	46008480 */ 	add.s	$f18,$f16,$f0
/*  f00e4d4:	e7a40198 */ 	swc1	$f4,0x198($sp)
/*  f00e4d8:	46085102 */ 	mul.s	$f4,$f10,$f8
/*  f00e4dc:	c7b00154 */ 	lwc1	$f16,0x154($sp)
/*  f00e4e0:	e7b2019c */ 	swc1	$f18,0x19c($sp)
/*  f00e4e4:	c7b20184 */ 	lwc1	$f18,0x184($sp)
/*  f00e4e8:	46128282 */ 	mul.s	$f10,$f16,$f18
/*  f00e4ec:	c7b00188 */ 	lwc1	$f16,0x188($sp)
/*  f00e4f0:	46068482 */ 	mul.s	$f18,$f16,$f6
/*  f00e4f4:	c7b001a4 */ 	lwc1	$f16,0x1a4($sp)
/*  f00e4f8:	460a2200 */ 	add.s	$f8,$f4,$f10
/*  f00e4fc:	c7a401a0 */ 	lwc1	$f4,0x1a0($sp)
/*  f00e500:	46089000 */ 	add.s	$f0,$f18,$f8
/*  f00e504:	c7a80150 */ 	lwc1	$f8,0x150($sp)
/*  f00e508:	46008480 */ 	add.s	$f18,$f16,$f0
/*  f00e50c:	c7b00154 */ 	lwc1	$f16,0x154($sp)
/*  f00e510:	46002280 */ 	add.s	$f10,$f4,$f0
/*  f00e514:	c7a40174 */ 	lwc1	$f4,0x174($sp)
/*  f00e518:	e7b201a4 */ 	swc1	$f18,0x1a4($sp)
/*  f00e51c:	c7b20178 */ 	lwc1	$f18,0x178($sp)
/*  f00e520:	e7aa01a0 */ 	swc1	$f10,0x1a0($sp)
/*  f00e524:	46044282 */ 	mul.s	$f10,$f8,$f4
/*  f00e528:	00000000 */ 	nop
/*  f00e52c:	46128202 */ 	mul.s	$f8,$f16,$f18
/*  f00e530:	c7b0017c */ 	lwc1	$f16,0x17c($sp)
/*  f00e534:	46068482 */ 	mul.s	$f18,$f16,$f6
/*  f00e538:	c7b001ac */ 	lwc1	$f16,0x1ac($sp)
/*  f00e53c:	46085100 */ 	add.s	$f4,$f10,$f8
/*  f00e540:	c7aa01a8 */ 	lwc1	$f10,0x1a8($sp)
/*  f00e544:	46049000 */ 	add.s	$f0,$f18,$f4
/*  f00e548:	46008180 */ 	add.s	$f6,$f16,$f0
/*  f00e54c:	46005200 */ 	add.s	$f8,$f10,$f0
/*  f00e550:	e7a601ac */ 	swc1	$f6,0x1ac($sp)
/*  f00e554:	e7a801a8 */ 	swc1	$f8,0x1a8($sp)
.L0f00e558:
/*  f00e558:	0fc45864 */ 	jal	padCopyBboxFromPad
/*  f00e55c:	86040006 */ 	lh	$a0,0x6($s0)
/*  f00e560:	8fab01b0 */ 	lw	$t3,0x1b0($sp)
.L0f00e564:
/*  f00e564:	8fac01c0 */ 	lw	$t4,0x1c0($sp)
/*  f00e568:	3c048008 */ 	lui	$a0,%hi(g_Props)
/*  f00e56c:	196000e1 */ 	blez	$t3,.L0f00e8f4
/*  f00e570:	000c68c0 */ 	sll	$t5,$t4,0x3
/*  f00e574:	008d2021 */ 	addu	$a0,$a0,$t5
/*  f00e578:	0fc1a25b */ 	jal	func0f06896c
/*  f00e57c:	8c84b06c */ 	lw	$a0,%lo(g_Props)($a0)
/*  f00e580:	c7b20174 */ 	lwc1	$f18,0x174($sp)
/*  f00e584:	44800000 */ 	mtc1	$zero,$f0
/*  f00e588:	c7aa0178 */ 	lwc1	$f10,0x178($sp)
/*  f00e58c:	46009107 */ 	neg.s	$f4,$f18
/*  f00e590:	c7b0017c */ 	lwc1	$f16,0x17c($sp)
/*  f00e594:	46005207 */ 	neg.s	$f8,$f10
/*  f00e598:	e7a40010 */ 	swc1	$f4,0x10($sp)
/*  f00e59c:	c7a40184 */ 	lwc1	$f4,0x184($sp)
/*  f00e5a0:	c7aa0188 */ 	lwc1	$f10,0x188($sp)
/*  f00e5a4:	c7b20180 */ 	lwc1	$f18,0x180($sp)
/*  f00e5a8:	46008187 */ 	neg.s	$f6,$f16
/*  f00e5ac:	44050000 */ 	mfc1	$a1,$f0
/*  f00e5b0:	44060000 */ 	mfc1	$a2,$f0
/*  f00e5b4:	44070000 */ 	mfc1	$a3,$f0
/*  f00e5b8:	afa20044 */ 	sw	$v0,0x44($sp)
/*  f00e5bc:	e7a60018 */ 	swc1	$f6,0x18($sp)
/*  f00e5c0:	e7a80014 */ 	swc1	$f8,0x14($sp)
/*  f00e5c4:	27a40110 */ 	addiu	$a0,$sp,0x110
/*  f00e5c8:	e7a40020 */ 	swc1	$f4,0x20($sp)
/*  f00e5cc:	e7aa0024 */ 	swc1	$f10,0x24($sp)
/*  f00e5d0:	0c005b56 */ 	jal	func00016d58
/*  f00e5d4:	e7b2001c */ 	swc1	$f18,0x1c($sp)
/*  f00e5d8:	3c017f1b */ 	lui	$at,%hi(var7f1a805c)
/*  f00e5dc:	c42c805c */ 	lwc1	$f12,%lo(var7f1a805c)($at)
/*  f00e5e0:	0c0058ba */ 	jal	func000162e8
/*  f00e5e4:	27a500ac */ 	addiu	$a1,$sp,0xac
/*  f00e5e8:	3c017f1b */ 	lui	$at,%hi(var7f1a8060)
/*  f00e5ec:	c42c8060 */ 	lwc1	$f12,%lo(var7f1a8060)($at)
/*  f00e5f0:	0c005900 */ 	jal	func00016400
/*  f00e5f4:	27a50060 */ 	addiu	$a1,$sp,0x60
/*  f00e5f8:	27a40060 */ 	addiu	$a0,$sp,0x60
/*  f00e5fc:	0c00567f */ 	jal	func000159fc
/*  f00e600:	27a500ac */ 	addiu	$a1,$sp,0xac
/*  f00e604:	27a40110 */ 	addiu	$a0,$sp,0x110
/*  f00e608:	0c00567f */ 	jal	func000159fc
/*  f00e60c:	27a500ac */ 	addiu	$a1,$sp,0xac
/*  f00e610:	86040006 */ 	lh	$a0,0x6($s0)
/*  f00e614:	0fc457cd */ 	jal	padGetCentre
/*  f00e618:	27a500a0 */ 	addiu	$a1,$sp,0xa0
/*  f00e61c:	8fa20044 */ 	lw	$v0,0x44($sp)
/*  f00e620:	c7a801a4 */ 	lwc1	$f8,0x1a4($sp)
/*  f00e624:	c7b001a0 */ 	lwc1	$f16,0x1a0($sp)
/*  f00e628:	c4520008 */ 	lwc1	$f18,0x8($v0)
/*  f00e62c:	c4440004 */ 	lwc1	$f4,0x4($v0)
/*  f00e630:	46104181 */ 	sub.s	$f6,$f8,$f16
/*  f00e634:	c7b001a8 */ 	lwc1	$f16,0x1a8($sp)
/*  f00e638:	c7a801ac */ 	lwc1	$f8,0x1ac($sp)
/*  f00e63c:	46049281 */ 	sub.s	$f10,$f18,$f4
/*  f00e640:	c4440010 */ 	lwc1	$f4,0x10($v0)
/*  f00e644:	3c017f1b */ 	lui	$at,%hi(var7f1a8064)
/*  f00e648:	46104481 */ 	sub.s	$f18,$f8,$f16
/*  f00e64c:	c4208064 */ 	lwc1	$f0,%lo(var7f1a8064)($at)
/*  f00e650:	c7b00198 */ 	lwc1	$f16,0x198($sp)
/*  f00e654:	460a3303 */ 	div.s	$f12,$f6,$f10
/*  f00e658:	c446000c */ 	lwc1	$f6,0xc($v0)
/*  f00e65c:	c7a8019c */ 	lwc1	$f8,0x19c($sp)
/*  f00e660:	27a500ac */ 	addiu	$a1,$sp,0xac
/*  f00e664:	46062281 */ 	sub.s	$f10,$f4,$f6
/*  f00e668:	c4460018 */ 	lwc1	$f6,0x18($v0)
/*  f00e66c:	46104101 */ 	sub.s	$f4,$f8,$f16
/*  f00e670:	460a9083 */ 	div.s	$f2,$f18,$f10
/*  f00e674:	c4520014 */ 	lwc1	$f18,0x14($v0)
/*  f00e678:	4600603e */ 	c.le.s	$f12,$f0
/*  f00e67c:	46123281 */ 	sub.s	$f10,$f6,$f18
/*  f00e680:	45010008 */ 	bc1t	.L0f00e6a4
/*  f00e684:	460a2383 */ 	div.s	$f14,$f4,$f10
/*  f00e688:	4600103e */ 	c.le.s	$f2,$f0
/*  f00e68c:	00000000 */ 	nop
/*  f00e690:	45030005 */ 	bc1tl	.L0f00e6a8
/*  f00e694:	3c013f80 */ 	lui	$at,0x3f80
/*  f00e698:	4600703e */ 	c.le.s	$f14,$f0
/*  f00e69c:	00000000 */ 	nop
/*  f00e6a0:	45000005 */ 	bc1f	.L0f00e6b8
.L0f00e6a4:
/*  f00e6a4:	3c013f80 */ 	lui	$at,0x3f80
.L0f00e6a8:
/*  f00e6a8:	44816000 */ 	mtc1	$at,$f12
/*  f00e6ac:	00000000 */ 	nop
/*  f00e6b0:	46006386 */ 	mov.s	$f14,$f12
/*  f00e6b4:	46006086 */ 	mov.s	$f2,$f12
.L0f00e6b8:
/*  f00e6b8:	e7a2004c */ 	swc1	$f2,0x4c($sp)
/*  f00e6bc:	e7ac0050 */ 	swc1	$f12,0x50($sp)
/*  f00e6c0:	0c005789 */ 	jal	func00015e24
/*  f00e6c4:	e7ae0048 */ 	swc1	$f14,0x48($sp)
/*  f00e6c8:	c7ac004c */ 	lwc1	$f12,0x4c($sp)
/*  f00e6cc:	0c0057a0 */ 	jal	func00015e80
/*  f00e6d0:	27a500ac */ 	addiu	$a1,$sp,0xac
/*  f00e6d4:	c7ac0048 */ 	lwc1	$f12,0x48($sp)
/*  f00e6d8:	0c0057b7 */ 	jal	func00015edc
/*  f00e6dc:	27a500ac */ 	addiu	$a1,$sp,0xac
/*  f00e6e0:	c7a80168 */ 	lwc1	$f8,0x168($sp)
/*  f00e6e4:	c7b0016c */ 	lwc1	$f16,0x16c($sp)
/*  f00e6e8:	c7a60170 */ 	lwc1	$f6,0x170($sp)
/*  f00e6ec:	8fae01b0 */ 	lw	$t6,0x1b0($sp)
/*  f00e6f0:	240fffff */ 	addiu	$t7,$zero,-1
/*  f00e6f4:	a7af00ee */ 	sh	$t7,0xee($sp)
/*  f00e6f8:	e7a800fc */ 	swc1	$f8,0xfc($sp)
/*  f00e6fc:	e7b00100 */ 	swc1	$f16,0x100($sp)
/*  f00e700:	e7a60104 */ 	swc1	$f6,0x104($sp)
/*  f00e704:	a7ae00ec */ 	sh	$t6,0xec($sp)
/*  f00e708:	96020072 */ 	lhu	$v0,0x72($s0)
/*  f00e70c:	24010004 */ 	addiu	$at,$zero,0x4
/*  f00e710:	c7b201ac */ 	lwc1	$f18,0x1ac($sp)
/*  f00e714:	10410004 */ 	beq	$v0,$at,.L0f00e728
/*  f00e718:	c7a401a8 */ 	lwc1	$f4,0x1a8($sp)
/*  f00e71c:	24010008 */ 	addiu	$at,$zero,0x8
/*  f00e720:	1441000e */ 	bne	$v0,$at,.L0f00e75c
/*  f00e724:	c7aa01a0 */ 	lwc1	$f10,0x1a0($sp)
.L0f00e728:
/*  f00e728:	46049001 */ 	sub.s	$f0,$f18,$f4
/*  f00e72c:	c7aa0174 */ 	lwc1	$f10,0x174($sp)
/*  f00e730:	c7b00178 */ 	lwc1	$f16,0x178($sp)
/*  f00e734:	c7b2017c */ 	lwc1	$f18,0x17c($sp)
/*  f00e738:	46005202 */ 	mul.s	$f8,$f10,$f0
/*  f00e73c:	00000000 */ 	nop
/*  f00e740:	46008182 */ 	mul.s	$f6,$f16,$f0
/*  f00e744:	00000000 */ 	nop
/*  f00e748:	46009102 */ 	mul.s	$f4,$f18,$f0
/*  f00e74c:	e7a80054 */ 	swc1	$f8,0x54($sp)
/*  f00e750:	e7a60058 */ 	swc1	$f6,0x58($sp)
/*  f00e754:	1000000e */ 	b	.L0f00e790
/*  f00e758:	e7a4005c */ 	swc1	$f4,0x5c($sp)
.L0f00e75c:
/*  f00e75c:	c7a801a4 */ 	lwc1	$f8,0x1a4($sp)
/*  f00e760:	c7b00180 */ 	lwc1	$f16,0x180($sp)
/*  f00e764:	c7b20184 */ 	lwc1	$f18,0x184($sp)
/*  f00e768:	46085001 */ 	sub.s	$f0,$f10,$f8
/*  f00e76c:	c7aa0188 */ 	lwc1	$f10,0x188($sp)
/*  f00e770:	46008182 */ 	mul.s	$f6,$f16,$f0
/*  f00e774:	00000000 */ 	nop
/*  f00e778:	46009102 */ 	mul.s	$f4,$f18,$f0
/*  f00e77c:	00000000 */ 	nop
/*  f00e780:	46005202 */ 	mul.s	$f8,$f10,$f0
/*  f00e784:	e7a60054 */ 	swc1	$f6,0x54($sp)
/*  f00e788:	e7a40058 */ 	swc1	$f4,0x58($sp)
/*  f00e78c:	e7a8005c */ 	swc1	$f8,0x5c($sp)
.L0f00e790:
/*  f00e790:	8e18005c */ 	lw	$t8,0x5c($s0)
/*  f00e794:	3c014780 */ 	lui	$at,0x4780
/*  f00e798:	44810000 */ 	mtc1	$at,$f0
/*  f00e79c:	44988000 */ 	mtc1	$t8,$f16
/*  f00e7a0:	8e190060 */ 	lw	$t9,0x60($s0)
/*  f00e7a4:	8e080064 */ 	lw	$t0,0x64($s0)
/*  f00e7a8:	468081a0 */ 	cvt.s.w	$f6,$f16
/*  f00e7ac:	44992000 */ 	mtc1	$t9,$f4
/*  f00e7b0:	44888000 */ 	mtc1	$t0,$f16
/*  f00e7b4:	3c014c7a */ 	lui	$at,0x4c7a
/*  f00e7b8:	44811000 */ 	mtc1	$at,$f2
/*  f00e7bc:	468022a0 */ 	cvt.s.w	$f10,$f4
/*  f00e7c0:	8e090068 */ 	lw	$t1,0x68($s0)
/*  f00e7c4:	8e0a006c */ 	lw	$t2,0x6c($s0)
/*  f00e7c8:	8e0b00bc */ 	lw	$t3,0xbc($s0)
/*  f00e7cc:	44892000 */ 	mtc1	$t1,$f4
/*  f00e7d0:	46003483 */ 	div.s	$f18,$f6,$f0
/*  f00e7d4:	468081a0 */ 	cvt.s.w	$f6,$f16
/*  f00e7d8:	448a8000 */ 	mtc1	$t2,$f16
/*  f00e7dc:	46005203 */ 	div.s	$f8,$f10,$f0
/*  f00e7e0:	e612005c */ 	swc1	$f18,0x5c($s0)
/*  f00e7e4:	468022a0 */ 	cvt.s.w	$f10,$f4
/*  f00e7e8:	46023483 */ 	div.s	$f18,$f6,$f2
/*  f00e7ec:	e6080060 */ 	swc1	$f8,0x60($s0)
/*  f00e7f0:	468081a0 */ 	cvt.s.w	$f6,$f16
/*  f00e7f4:	46025203 */ 	div.s	$f8,$f10,$f2
/*  f00e7f8:	e6120064 */ 	swc1	$f18,0x64($s0)
/*  f00e7fc:	46003483 */ 	div.s	$f18,$f6,$f0
/*  f00e800:	e6080068 */ 	swc1	$f8,0x68($s0)
/*  f00e804:	11600006 */ 	beqz	$t3,.L0f00e820
/*  f00e808:	e612006c */ 	swc1	$f18,0x6c($s0)
/*  f00e80c:	8e0c00bc */ 	lw	$t4,0xbc($s0)
/*  f00e810:	8fad01cc */ 	lw	$t5,0x1cc($sp)
/*  f00e814:	0fc24801 */ 	jal	setupGetPtrToCommandByIndex
/*  f00e818:	018d2021 */ 	addu	$a0,$t4,$t5
/*  f00e81c:	ae0200bc */ 	sw	$v0,0xbc($s0)
.L0f00e820:
/*  f00e820:	27ae0054 */ 	addiu	$t6,$sp,0x54
/*  f00e824:	27af00a0 */ 	addiu	$t7,$sp,0xa0
/*  f00e828:	afaf0014 */ 	sw	$t7,0x14($sp)
/*  f00e82c:	afae0010 */ 	sw	$t6,0x10($sp)
/*  f00e830:	02002025 */ 	or	$a0,$s0,$zero
/*  f00e834:	27a500fc */ 	addiu	$a1,$sp,0xfc
/*  f00e838:	27a600ac */ 	addiu	$a2,$sp,0xac
/*  f00e83c:	0fc23550 */ 	jal	func0f08d540
/*  f00e840:	27a700ec */ 	addiu	$a3,$sp,0xec
/*  f00e844:	afa2010c */ 	sw	$v0,0x10c($sp)
/*  f00e848:	8e180008 */ 	lw	$t8,0x8($s0)
/*  f00e84c:	8fa801bc */ 	lw	$t0,0x1bc($sp)
/*  f00e850:	0018c8c0 */ 	sll	$t9,$t8,0x3
/*  f00e854:	0723000e */ 	bgezl	$t9,.L0f00e890
/*  f00e858:	8e040018 */ 	lw	$a0,0x18($s0)
/*  f00e85c:	a60800c4 */ 	sh	$t0,0xc4($s0)
/*  f00e860:	860900c4 */ 	lh	$t1,0xc4($s0)
/*  f00e864:	0522000a */ 	bltzl	$t1,.L0f00e890
/*  f00e868:	8e040018 */ 	lw	$a0,0x18($s0)
/*  f00e86c:	44802000 */ 	mtc1	$zero,$f4
/*  f00e870:	c60a007c */ 	lwc1	$f10,0x7c($s0)
/*  f00e874:	460a2032 */ 	c.eq.s	$f4,$f10
/*  f00e878:	00000000 */ 	nop
/*  f00e87c:	45020004 */ 	bc1fl	.L0f00e890
/*  f00e880:	8e040018 */ 	lw	$a0,0x18($s0)
/*  f00e884:	0fc23545 */ 	jal	doorDeactivatePortal
/*  f00e888:	02002025 */ 	or	$a0,$s0,$zero
/*  f00e88c:	8e040018 */ 	lw	$a0,0x18($s0)
.L0f00e890:
/*  f00e890:	c7a00050 */ 	lwc1	$f0,0x50($sp)
/*  f00e894:	c7ac004c */ 	lwc1	$f12,0x4c($sp)
/*  f00e898:	10800010 */ 	beqz	$a0,.L0f00e8dc
/*  f00e89c:	c7a80048 */ 	lwc1	$f8,0x48($sp)
/*  f00e8a0:	460c003c */ 	c.lt.s	$f0,$f12
/*  f00e8a4:	00000000 */ 	nop
/*  f00e8a8:	45020003 */ 	bc1fl	.L0f00e8b8
/*  f00e8ac:	4608003c */ 	c.lt.s	$f0,$f8
/*  f00e8b0:	46006006 */ 	mov.s	$f0,$f12
/*  f00e8b4:	4608003c */ 	c.lt.s	$f0,$f8
.L0f00e8b8:
/*  f00e8b8:	00000000 */ 	nop
/*  f00e8bc:	45020003 */ 	bc1fl	.L0f00e8cc
/*  f00e8c0:	c4900014 */ 	lwc1	$f16,0x14($a0)
/*  f00e8c4:	46004006 */ 	mov.s	$f0,$f8
/*  f00e8c8:	c4900014 */ 	lwc1	$f16,0x14($a0)
.L0f00e8cc:
/*  f00e8cc:	46008182 */ 	mul.s	$f6,$f16,$f0
/*  f00e8d0:	44053000 */ 	mfc1	$a1,$f6
/*  f00e8d4:	0c006bd6 */ 	jal	modelSetUnk14
/*  f00e8d8:	00000000 */ 	nop
.L0f00e8dc:
/*  f00e8dc:	0fc1812f */ 	jal	func0f0604bc
/*  f00e8e0:	8fa4010c */ 	lw	$a0,0x10c($sp)
/*  f00e8e4:	0fc180bc */ 	jal	propShow
/*  f00e8e8:	8fa4010c */ 	lw	$a0,0x10c($sp)
/*  f00e8ec:	10000003 */ 	b	.L0f00e8fc
/*  f00e8f0:	8fbf0034 */ 	lw	$ra,0x34($sp)
.L0f00e8f4:
/*  f00e8f4:	ae000014 */ 	sw	$zero,0x14($s0)
/*  f00e8f8:	8fbf0034 */ 	lw	$ra,0x34($sp)
.L0f00e8fc:
/*  f00e8fc:	8fb00030 */ 	lw	$s0,0x30($sp)
/*  f00e900:	27bd01c8 */ 	addiu	$sp,$sp,0x1c8
/*  f00e904:	03e00008 */ 	jr	$ra
/*  f00e908:	00000000 */ 	nop
);

void setupHov(struct defaultobj *obj, struct hov *hov)
{
	hov->unk04 = 0;
	hov->unk08 = 0;
	hov->unk0c = 0;
	hov->unk10 = func0f096750(obj->realrot[6], obj->realrot[8]);
	hov->unk14 = 0;
	hov->unk18 = 0;
	hov->unk1c = 0;
	hov->unk20 = 0;
	hov->unk24 = 0;
	hov->unk28 = 0;
	hov->unk2c = 0;
	hov->unk30 = 0;
	hov->unk34 = 0;
	hov->unk38 = -1;
	hov->unk3c = -1;
}

GLOBAL_ASM(
glabel func0f00e980
/*  f00e980:	27bdffc8 */ 	addiu	$sp,$sp,-56
/*  f00e984:	afb5002c */ 	sw	$s5,0x2c($sp)
/*  f00e988:	afb30024 */ 	sw	$s3,0x24($sp)
/*  f00e98c:	afb20020 */ 	sw	$s2,0x20($sp)
/*  f00e990:	afb1001c */ 	sw	$s1,0x1c($sp)
/*  f00e994:	2881005a */ 	slti	$at,$a0,0x5a
/*  f00e998:	00e08825 */ 	or	$s1,$a3,$zero
/*  f00e99c:	00a09025 */ 	or	$s2,$a1,$zero
/*  f00e9a0:	00809825 */ 	or	$s3,$a0,$zero
/*  f00e9a4:	00c0a825 */ 	or	$s5,$a2,$zero
/*  f00e9a8:	afbf0034 */ 	sw	$ra,0x34($sp)
/*  f00e9ac:	afb60030 */ 	sw	$s6,0x30($sp)
/*  f00e9b0:	afb40028 */ 	sw	$s4,0x28($sp)
/*  f00e9b4:	10200061 */ 	beqz	$at,.L0f00eb3c
/*  f00e9b8:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f00e9bc:	0fc59585 */ 	jal	stageGetIndex
/*  f00e9c0:	00000000 */ 	nop
/*  f00e9c4:	04410002 */ 	bgez	$v0,.L0f00e9d0
/*  f00e9c8:	00401825 */ 	or	$v1,$v0,$zero
/*  f00e9cc:	00001825 */ 	or	$v1,$zero,$zero
.L0f00e9d0:
/*  f00e9d0:	000370c0 */ 	sll	$t6,$v1,0x3
/*  f00e9d4:	01c37023 */ 	subu	$t6,$t6,$v1
/*  f00e9d8:	000e70c0 */ 	sll	$t6,$t6,0x3
/*  f00e9dc:	3c028008 */ 	lui	$v0,%hi(g_Stages+0xe)
/*  f00e9e0:	004e1021 */ 	addu	$v0,$v0,$t6
/*  f00e9e4:	9444fcce */ 	lhu	$a0,%lo(g_Stages+0xe)($v0)
/*  f00e9e8:	240f0003 */ 	addiu	$t7,$zero,0x3
/*  f00e9ec:	3c018006 */ 	lui	$at,%hi(var8005d9a0)
/*  f00e9f0:	a02fd9a0 */ 	sb	$t7,%lo(var8005d9a0)($at)
/*  f00e9f4:	24050022 */ 	addiu	$a1,$zero,0x22
/*  f00e9f8:	02403025 */ 	or	$a2,$s2,$zero
/*  f00e9fc:	02a03825 */ 	or	$a3,$s5,$zero
/*  f00ea00:	0fc59c80 */ 	jal	func0f167200
/*  f00ea04:	00808025 */ 	or	$s0,$a0,$zero
/*  f00ea08:	0fc59ca0 */ 	jal	fileGetSize
/*  f00ea0c:	02002025 */ 	or	$a0,$s0,$zero
/*  f00ea10:	02428021 */ 	addu	$s0,$s2,$v0
/*  f00ea14:	02a2a023 */ 	subu	$s4,$s5,$v0
/*  f00ea18:	0fc5b878 */ 	jal	langGetLangBankIndexFromStagenum
/*  f00ea1c:	02602025 */ 	or	$a0,$s3,$zero
/*  f00ea20:	a622001a */ 	sh	$v0,0x1a($s1)
/*  f00ea24:	3044ffff */ 	andi	$a0,$v0,0xffff
/*  f00ea28:	02002825 */ 	or	$a1,$s0,$zero
/*  f00ea2c:	0fc5b9d9 */ 	jal	langSetBank
/*  f00ea30:	02803025 */ 	or	$a2,$s4,$zero
/*  f00ea34:	8e580010 */ 	lw	$t8,0x10($s2)
/*  f00ea38:	02589821 */ 	addu	$s3,$s2,$t8
/*  f00ea3c:	52600040 */ 	beqzl	$s3,.L0f00eb40
/*  f00ea40:	8fbf0034 */ 	lw	$ra,0x34($sp)
/*  f00ea44:	0fc5b367 */ 	jal	getDifficulty
/*  f00ea48:	24160001 */ 	addiu	$s6,$zero,0x1
/*  f00ea4c:	14400002 */ 	bnez	$v0,.L0f00ea58
/*  f00ea50:	00000000 */ 	nop
/*  f00ea54:	24160003 */ 	addiu	$s6,$zero,0x3
.L0f00ea58:
/*  f00ea58:	0fc5b367 */ 	jal	getDifficulty
/*  f00ea5c:	00000000 */ 	nop
/*  f00ea60:	24010001 */ 	addiu	$at,$zero,0x1
/*  f00ea64:	14410002 */ 	bne	$v0,$at,.L0f00ea70
/*  f00ea68:	02201825 */ 	or	$v1,$s1,$zero
/*  f00ea6c:	24160002 */ 	addiu	$s6,$zero,0x2
.L0f00ea70:
/*  f00ea70:	00001025 */ 	or	$v0,$zero,$zero
.L0f00ea74:
/*  f00ea74:	24420001 */ 	addiu	$v0,$v0,0x1
/*  f00ea78:	28410006 */ 	slti	$at,$v0,0x6
/*  f00ea7c:	24630002 */ 	addiu	$v1,$v1,0x2
/*  f00ea80:	1420fffc */ 	bnez	$at,.L0f00ea74
/*  f00ea84:	a4600000 */ 	sh	$zero,0x0($v1)
/*  f00ea88:	2419582a */ 	addiu	$t9,$zero,0x582a
/*  f00ea8c:	a6390000 */ 	sh	$t9,0x0($s1)
/*  f00ea90:	92680003 */ 	lbu	$t0,0x3($s3)
/*  f00ea94:	24120034 */ 	addiu	$s2,$zero,0x34
/*  f00ea98:	02608025 */ 	or	$s0,$s3,$zero
/*  f00ea9c:	12480027 */ 	beq	$s2,$t0,.L0f00eb3c
/*  f00eaa0:	310300ff */ 	andi	$v1,$t0,0xff
/*  f00eaa4:	24150001 */ 	addiu	$s5,$zero,0x1
/*  f00eaa8:	24140023 */ 	addiu	$s4,$zero,0x23
/*  f00eaac:	24130017 */ 	addiu	$s3,$zero,0x17
.L0f00eab0:
/*  f00eab0:	5073000f */ 	beql	$v1,$s3,.L0f00eaf0
/*  f00eab4:	8e020004 */ 	lw	$v0,0x4($s0)
/*  f00eab8:	14740019 */ 	bne	$v1,$s4,.L0f00eb20
/*  f00eabc:	00000000 */ 	nop
/*  f00eac0:	8e020004 */ 	lw	$v0,0x4($s0)
/*  f00eac4:	16a20004 */ 	bne	$s5,$v0,.L0f00ead8
/*  f00eac8:	00000000 */ 	nop
/*  f00eacc:	8e090008 */ 	lw	$t1,0x8($s0)
/*  f00ead0:	a6290000 */ 	sh	$t1,0x0($s1)
/*  f00ead4:	8e020004 */ 	lw	$v0,0x4($s0)
.L0f00ead8:
/*  f00ead8:	16c20011 */ 	bne	$s6,$v0,.L0f00eb20
/*  f00eadc:	00000000 */ 	nop
/*  f00eae0:	8e0a0008 */ 	lw	$t2,0x8($s0)
/*  f00eae4:	1000000e */ 	b	.L0f00eb20
/*  f00eae8:	a62a0000 */ 	sh	$t2,0x0($s1)
/*  f00eaec:	8e020004 */ 	lw	$v0,0x4($s0)
.L0f00eaf0:
/*  f00eaf0:	2c410007 */ 	sltiu	$at,$v0,0x7
/*  f00eaf4:	1020000a */ 	beqz	$at,.L0f00eb20
/*  f00eaf8:	00000000 */ 	nop
/*  f00eafc:	8e0b0008 */ 	lw	$t3,0x8($s0)
/*  f00eb00:	00026040 */ 	sll	$t4,$v0,0x1
/*  f00eb04:	022c6821 */ 	addu	$t5,$s1,$t4
/*  f00eb08:	a5ab0002 */ 	sh	$t3,0x2($t5)
/*  f00eb0c:	8e0f0004 */ 	lw	$t7,0x4($s0)
/*  f00eb10:	820e000f */ 	lb	$t6,0xf($s0)
/*  f00eb14:	000fc040 */ 	sll	$t8,$t7,0x1
/*  f00eb18:	0238c821 */ 	addu	$t9,$s1,$t8
/*  f00eb1c:	a72e000e */ 	sh	$t6,0xe($t9)
.L0f00eb20:
/*  f00eb20:	0fc24784 */ 	jal	setupGetCommandLength
/*  f00eb24:	02002025 */ 	or	$a0,$s0,$zero
/*  f00eb28:	00024080 */ 	sll	$t0,$v0,0x2
/*  f00eb2c:	01108021 */ 	addu	$s0,$t0,$s0
/*  f00eb30:	92030003 */ 	lbu	$v1,0x3($s0)
/*  f00eb34:	1643ffde */ 	bne	$s2,$v1,.L0f00eab0
/*  f00eb38:	00000000 */ 	nop
.L0f00eb3c:
/*  f00eb3c:	8fbf0034 */ 	lw	$ra,0x34($sp)
.L0f00eb40:
/*  f00eb40:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f00eb44:	8fb1001c */ 	lw	$s1,0x1c($sp)
/*  f00eb48:	8fb20020 */ 	lw	$s2,0x20($sp)
/*  f00eb4c:	8fb30024 */ 	lw	$s3,0x24($sp)
/*  f00eb50:	8fb40028 */ 	lw	$s4,0x28($sp)
/*  f00eb54:	8fb5002c */ 	lw	$s5,0x2c($sp)
/*  f00eb58:	8fb60030 */ 	lw	$s6,0x30($sp)
/*  f00eb5c:	03e00008 */ 	jr	$ra
/*  f00eb60:	27bd0038 */ 	addiu	$sp,$sp,0x38
);

GLOBAL_ASM(
glabel func0f00eb64
/*  f00eb64:	3c018007 */ 	lui	$at,%hi(var80069960)
/*  f00eb68:	ac209960 */ 	sw	$zero,%lo(var80069960)($at)
/*  f00eb6c:	3c018007 */ 	lui	$at,%hi(var80069964)
/*  f00eb70:	240effff */ 	addiu	$t6,$zero,-1
/*  f00eb74:	ac2e9964 */ 	sw	$t6,%lo(var80069964)($at)
/*  f00eb78:	3c013f80 */ 	lui	$at,0x3f80
/*  f00eb7c:	44812000 */ 	mtc1	$at,$f4
/*  f00eb80:	27bdffa0 */ 	addiu	$sp,$sp,-96
/*  f00eb84:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f00eb88:	3c018006 */ 	lui	$at,%hi(g_DoorScale)
/*  f00eb8c:	3c028008 */ 	lui	$v0,%hi(g_Props)
/*  f00eb90:	3c038008 */ 	lui	$v1,%hi(propexplosiontypes)
/*  f00eb94:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f00eb98:	00803025 */ 	or	$a2,$a0,$zero
/*  f00eb9c:	afa0004c */ 	sw	$zero,0x4c($sp)
/*  f00eba0:	00008025 */ 	or	$s0,$zero,$zero
/*  f00eba4:	2463be34 */ 	addiu	$v1,$v1,%lo(propexplosiontypes)
/*  f00eba8:	2442b06c */ 	addiu	$v0,$v0,%lo(g_Props)
/*  f00ebac:	e4241be0 */ 	swc1	$f4,%lo(g_DoorScale)($at)
.L0f00ebb0:
/*  f00ebb0:	24420008 */ 	addiu	$v0,$v0,0x8
/*  f00ebb4:	0043082b */ 	sltu	$at,$v0,$v1
/*  f00ebb8:	1420fffd */ 	bnez	$at,.L0f00ebb0
/*  f00ebbc:	ac40fff8 */ 	sw	$zero,-0x8($v0)
/*  f00ebc0:	28c1005a */ 	slti	$at,$a2,0x5a
/*  f00ebc4:	1020014f */ 	beqz	$at,.L0f00f104
/*  f00ebc8:	3c07800a */ 	lui	$a3,%hi(g_StageSetup)
/*  f00ebcc:	3c0f800a */ 	lui	$t7,%hi(g_Vars+0x318)
/*  f00ebd0:	8defa2d8 */ 	lw	$t7,%lo(g_Vars+0x318)($t7)
/*  f00ebd4:	240c0004 */ 	addiu	$t4,$zero,0x4
/*  f00ebd8:	3c018006 */ 	lui	$at,%hi(var8005d9a0)
/*  f00ebdc:	11e0000a */ 	beqz	$t7,.L0f00ec08
/*  f00ebe0:	24050022 */ 	addiu	$a1,$zero,0x22
/*  f00ebe4:	3c188008 */ 	lui	$t8,%hi(g_StageIndex)
/*  f00ebe8:	8f18fc00 */ 	lw	$t8,%lo(g_StageIndex)($t8)
/*  f00ebec:	3c028008 */ 	lui	$v0,%hi(g_Stages+0x10)
/*  f00ebf0:	0018c8c0 */ 	sll	$t9,$t8,0x3
/*  f00ebf4:	0338c823 */ 	subu	$t9,$t9,$t8
/*  f00ebf8:	0019c8c0 */ 	sll	$t9,$t9,0x3
/*  f00ebfc:	00591021 */ 	addu	$v0,$v0,$t9
/*  f00ec00:	10000009 */ 	b	.L0f00ec28
/*  f00ec04:	9442fcd0 */ 	lhu	$v0,%lo(g_Stages+0x10)($v0)
.L0f00ec08:
/*  f00ec08:	3c0a8008 */ 	lui	$t2,%hi(g_StageIndex)
/*  f00ec0c:	8d4afc00 */ 	lw	$t2,%lo(g_StageIndex)($t2)
/*  f00ec10:	3c028008 */ 	lui	$v0,%hi(g_Stages+0xe)
/*  f00ec14:	000a58c0 */ 	sll	$t3,$t2,0x3
/*  f00ec18:	016a5823 */ 	subu	$t3,$t3,$t2
/*  f00ec1c:	000b58c0 */ 	sll	$t3,$t3,0x3
/*  f00ec20:	004b1021 */ 	addu	$v0,$v0,$t3
/*  f00ec24:	9442fcce */ 	lhu	$v0,%lo(g_Stages+0xe)($v0)
.L0f00ec28:
/*  f00ec28:	a02cd9a0 */ 	sb	$t4,%lo(var8005d9a0)($at)
/*  f00ec2c:	00402025 */ 	or	$a0,$v0,$zero
/*  f00ec30:	0fc59c3f */ 	jal	func0f1670fc
/*  f00ec34:	afa60060 */ 	sw	$a2,0x60($sp)
/*  f00ec38:	3c03800a */ 	lui	$v1,%hi(g_GeCreditsData)
/*  f00ec3c:	2463d050 */ 	addiu	$v1,$v1,%lo(g_GeCreditsData)
/*  f00ec40:	ac620000 */ 	sw	$v0,0x0($v1)
/*  f00ec44:	8fa40060 */ 	lw	$a0,0x60($sp)
/*  f00ec48:	0fc5b878 */ 	jal	langGetLangBankIndexFromStagenum
/*  f00ec4c:	afa20040 */ 	sw	$v0,0x40($sp)
/*  f00ec50:	0fc5b9ca */ 	jal	langSetBankSimple
/*  f00ec54:	00402025 */ 	or	$a0,$v0,$zero
/*  f00ec58:	8fa90040 */ 	lw	$t1,0x40($sp)
/*  f00ec5c:	3c07800a */ 	lui	$a3,%hi(g_StageSetup)
/*  f00ec60:	24e7d030 */ 	addiu	$a3,$a3,%lo(g_StageSetup)
/*  f00ec64:	8d2d000c */ 	lw	$t5,0xc($t1)
/*  f00ec68:	3c048008 */ 	lui	$a0,%hi(g_Stages+0xc)
/*  f00ec6c:	3c018006 */ 	lui	$at,%hi(var8005d9a0)
/*  f00ec70:	012d7021 */ 	addu	$t6,$t1,$t5
/*  f00ec74:	acee000c */ 	sw	$t6,0xc($a3)
/*  f00ec78:	8d2f0010 */ 	lw	$t7,0x10($t1)
/*  f00ec7c:	3c0e8008 */ 	lui	$t6,%hi(g_StageIndex)
/*  f00ec80:	240d0005 */ 	addiu	$t5,$zero,0x5
/*  f00ec84:	012fc021 */ 	addu	$t8,$t1,$t7
/*  f00ec88:	acf80010 */ 	sw	$t8,0x10($a3)
/*  f00ec8c:	8d390014 */ 	lw	$t9,0x14($t1)
/*  f00ec90:	24050022 */ 	addiu	$a1,$zero,0x22
/*  f00ec94:	01395021 */ 	addu	$t2,$t1,$t9
/*  f00ec98:	acea0014 */ 	sw	$t2,0x14($a3)
/*  f00ec9c:	8d2b0018 */ 	lw	$t3,0x18($t1)
/*  f00eca0:	012b6021 */ 	addu	$t4,$t1,$t3
/*  f00eca4:	acec0018 */ 	sw	$t4,0x18($a3)
/*  f00eca8:	8dcefc00 */ 	lw	$t6,%lo(g_StageIndex)($t6)
/*  f00ecac:	a02dd9a0 */ 	sb	$t5,%lo(var8005d9a0)($at)
/*  f00ecb0:	000e78c0 */ 	sll	$t7,$t6,0x3
/*  f00ecb4:	01ee7823 */ 	subu	$t7,$t7,$t6
/*  f00ecb8:	000f78c0 */ 	sll	$t7,$t7,0x3
/*  f00ecbc:	008f2021 */ 	addu	$a0,$a0,$t7
/*  f00ecc0:	0fc59c3f */ 	jal	func0f1670fc
/*  f00ecc4:	9484fccc */ 	lhu	$a0,%lo(g_Stages+0xc)($a0)
/*  f00ecc8:	3c07800a */ 	lui	$a3,%hi(g_StageSetup)
/*  f00eccc:	24e7d030 */ 	addiu	$a3,$a3,%lo(g_StageSetup)
/*  f00ecd0:	8ce60018 */ 	lw	$a2,0x18($a3)
/*  f00ecd4:	ace2001c */ 	sw	$v0,0x1c($a3)
/*  f00ecd8:	8fa90040 */ 	lw	$t1,0x40($sp)
/*  f00ecdc:	ace00000 */ 	sw	$zero,0x0($a3)
/*  f00ece0:	ace00004 */ 	sw	$zero,0x4($a3)
/*  f00ece4:	10c0000f */ 	beqz	$a2,.L0f00ed24
/*  f00ece8:	ace00008 */ 	sw	$zero,0x8($a3)
/*  f00ecec:	8cd80000 */ 	lw	$t8,0x0($a2)
/*  f00ecf0:	00001825 */ 	or	$v1,$zero,$zero
/*  f00ecf4:	00c01025 */ 	or	$v0,$a2,$zero
/*  f00ecf8:	1300000a */ 	beqz	$t8,.L0f00ed24
/*  f00ecfc:	00000000 */ 	nop
/*  f00ed00:	8cc40000 */ 	lw	$a0,0x0($a2)
/*  f00ed04:	0089c821 */ 	addu	$t9,$a0,$t1
.L0f00ed08:
/*  f00ed08:	ac590000 */ 	sw	$t9,0x0($v0)
/*  f00ed0c:	8ce60018 */ 	lw	$a2,0x18($a3)
/*  f00ed10:	24630008 */ 	addiu	$v1,$v1,0x8
/*  f00ed14:	00c31021 */ 	addu	$v0,$a2,$v1
/*  f00ed18:	8c440000 */ 	lw	$a0,0x0($v0)
/*  f00ed1c:	5480fffa */ 	bnezl	$a0,.L0f00ed08
/*  f00ed20:	0089c821 */ 	addu	$t9,$a0,$t1
.L0f00ed24:
/*  f00ed24:	3c088008 */ 	lui	$t0,%hi(g_GlobalAilists)
/*  f00ed28:	2508ac58 */ 	addiu	$t0,$t0,%lo(g_GlobalAilists)
/*  f00ed2c:	27a40050 */ 	addiu	$a0,$sp,0x50
/*  f00ed30:	8d0a0008 */ 	lw	$t2,0x8($t0)
.L0f00ed34:
/*  f00ed34:	3c028008 */ 	lui	$v0,%hi(g_GlobalAilists)
/*  f00ed38:	00002825 */ 	or	$a1,$zero,$zero
/*  f00ed3c:	11400017 */ 	beqz	$t2,.L0f00ed9c
/*  f00ed40:	2442ac58 */ 	addiu	$v0,$v0,%lo(g_GlobalAilists)
/*  f00ed44:	8c4b000c */ 	lw	$t3,0xc($v0)
.L0f00ed48:
/*  f00ed48:	8c4c0004 */ 	lw	$t4,0x4($v0)
/*  f00ed4c:	016c082a */ 	slt	$at,$t3,$t4
/*  f00ed50:	5020000f */ 	beqzl	$at,.L0f00ed90
/*  f00ed54:	8c4b0010 */ 	lw	$t3,0x10($v0)
/*  f00ed58:	8c410000 */ 	lw	$at,0x0($v0)
/*  f00ed5c:	24430008 */ 	addiu	$v1,$v0,0x8
/*  f00ed60:	8c4e0004 */ 	lw	$t6,0x4($v0)
/*  f00ed64:	ac810000 */ 	sw	$at,0x0($a0)
/*  f00ed68:	8c610000 */ 	lw	$at,0x0($v1)
/*  f00ed6c:	24050001 */ 	addiu	$a1,$zero,0x1
/*  f00ed70:	ac8e0004 */ 	sw	$t6,0x4($a0)
/*  f00ed74:	ac410000 */ 	sw	$at,0x0($v0)
/*  f00ed78:	8c780004 */ 	lw	$t8,0x4($v1)
/*  f00ed7c:	8c810000 */ 	lw	$at,0x0($a0)
/*  f00ed80:	ac580004 */ 	sw	$t8,0x4($v0)
/*  f00ed84:	ac6e0004 */ 	sw	$t6,0x4($v1)
/*  f00ed88:	ac610000 */ 	sw	$at,0x0($v1)
/*  f00ed8c:	8c4b0010 */ 	lw	$t3,0x10($v0)
.L0f00ed90:
/*  f00ed90:	24420008 */ 	addiu	$v0,$v0,0x8
/*  f00ed94:	5560ffec */ 	bnezl	$t3,.L0f00ed48
/*  f00ed98:	8c4b000c */ 	lw	$t3,0xc($v0)
.L0f00ed9c:
/*  f00ed9c:	54a0ffe5 */ 	bnezl	$a1,.L0f00ed34
/*  f00eda0:	8d0a0008 */ 	lw	$t2,0x8($t0)
/*  f00eda4:	8ccc0008 */ 	lw	$t4,0x8($a2)
.L0f00eda8:
/*  f00eda8:	00002825 */ 	or	$a1,$zero,$zero
/*  f00edac:	00001825 */ 	or	$v1,$zero,$zero
/*  f00edb0:	1180001c */ 	beqz	$t4,.L0f00ee24
/*  f00edb4:	00c01025 */ 	or	$v0,$a2,$zero
/*  f00edb8:	8c4d000c */ 	lw	$t5,0xc($v0)
.L0f00edbc:
/*  f00edbc:	8c4e0004 */ 	lw	$t6,0x4($v0)
/*  f00edc0:	01ae082a */ 	slt	$at,$t5,$t6
/*  f00edc4:	50200013 */ 	beqzl	$at,.L0f00ee14
/*  f00edc8:	8c4f0010 */ 	lw	$t7,0x10($v0)
/*  f00edcc:	8c410000 */ 	lw	$at,0x0($v0)
/*  f00edd0:	24050001 */ 	addiu	$a1,$zero,0x1
/*  f00edd4:	ac810000 */ 	sw	$at,0x0($a0)
/*  f00edd8:	8c580004 */ 	lw	$t8,0x4($v0)
/*  f00eddc:	ac980004 */ 	sw	$t8,0x4($a0)
/*  f00ede0:	8c4a000c */ 	lw	$t2,0xc($v0)
/*  f00ede4:	8c410008 */ 	lw	$at,0x8($v0)
/*  f00ede8:	ac4a0004 */ 	sw	$t2,0x4($v0)
/*  f00edec:	ac410000 */ 	sw	$at,0x0($v0)
/*  f00edf0:	8ceb0018 */ 	lw	$t3,0x18($a3)
/*  f00edf4:	8c810000 */ 	lw	$at,0x0($a0)
/*  f00edf8:	01636021 */ 	addu	$t4,$t3,$v1
/*  f00edfc:	ad810008 */ 	sw	$at,0x8($t4)
/*  f00ee00:	8c8e0004 */ 	lw	$t6,0x4($a0)
/*  f00ee04:	ad8e000c */ 	sw	$t6,0xc($t4)
/*  f00ee08:	8ce60018 */ 	lw	$a2,0x18($a3)
/*  f00ee0c:	00c31021 */ 	addu	$v0,$a2,$v1
/*  f00ee10:	8c4f0010 */ 	lw	$t7,0x10($v0)
.L0f00ee14:
/*  f00ee14:	24630008 */ 	addiu	$v1,$v1,0x8
/*  f00ee18:	24420008 */ 	addiu	$v0,$v0,0x8
/*  f00ee1c:	55e0ffe7 */ 	bnezl	$t7,.L0f00edbc
/*  f00ee20:	8c4d000c */ 	lw	$t5,0xc($v0)
.L0f00ee24:
/*  f00ee24:	54a0ffe0 */ 	bnezl	$a1,.L0f00eda8
/*  f00ee28:	8ccc0008 */ 	lw	$t4,0x8($a2)
/*  f00ee2c:	0000c0c0 */ 	sll	$t8,$zero,0x3
/*  f00ee30:	0118c821 */ 	addu	$t9,$t0,$t8
/*  f00ee34:	8f2a0000 */ 	lw	$t2,0x0($t9)
/*  f00ee38:	3c038006 */ 	lui	$v1,%hi(g_NumGlobalAilists)
/*  f00ee3c:	2463ef30 */ 	addiu	$v1,$v1,%lo(g_NumGlobalAilists)
/*  f00ee40:	ac600000 */ 	sw	$zero,0x0($v1)
/*  f00ee44:	11400009 */ 	beqz	$t2,.L0f00ee6c
/*  f00ee48:	00001025 */ 	or	$v0,$zero,$zero
/*  f00ee4c:	244b0001 */ 	addiu	$t3,$v0,0x1
.L0f00ee50:
/*  f00ee50:	000b68c0 */ 	sll	$t5,$t3,0x3
/*  f00ee54:	010d6021 */ 	addu	$t4,$t0,$t5
/*  f00ee58:	8d8e0000 */ 	lw	$t6,0x0($t4)
/*  f00ee5c:	ac6b0000 */ 	sw	$t3,0x0($v1)
/*  f00ee60:	01601025 */ 	or	$v0,$t3,$zero
/*  f00ee64:	55c0fffa */ 	bnezl	$t6,.L0f00ee50
/*  f00ee68:	244b0001 */ 	addiu	$t3,$v0,0x1
.L0f00ee6c:
/*  f00ee6c:	3c038006 */ 	lui	$v1,%hi(g_NumLvAilists)
/*  f00ee70:	2463ef34 */ 	addiu	$v1,$v1,%lo(g_NumLvAilists)
/*  f00ee74:	000078c0 */ 	sll	$t7,$zero,0x3
/*  f00ee78:	00cfc021 */ 	addu	$t8,$a2,$t7
/*  f00ee7c:	ac600000 */ 	sw	$zero,0x0($v1)
/*  f00ee80:	8f190000 */ 	lw	$t9,0x0($t8)
/*  f00ee84:	00001025 */ 	or	$v0,$zero,$zero
/*  f00ee88:	13200008 */ 	beqz	$t9,.L0f00eeac
/*  f00ee8c:	244a0001 */ 	addiu	$t2,$v0,0x1
.L0f00ee90:
/*  f00ee90:	000a58c0 */ 	sll	$t3,$t2,0x3
/*  f00ee94:	00cb6821 */ 	addu	$t5,$a2,$t3
/*  f00ee98:	ac6a0000 */ 	sw	$t2,0x0($v1)
/*  f00ee9c:	8dac0000 */ 	lw	$t4,0x0($t5)
/*  f00eea0:	01401025 */ 	or	$v0,$t2,$zero
/*  f00eea4:	5580fffa */ 	bnezl	$t4,.L0f00ee90
/*  f00eea8:	244a0001 */ 	addiu	$t2,$v0,0x1
.L0f00eeac:
/*  f00eeac:	8ce20014 */ 	lw	$v0,0x14($a3)
/*  f00eeb0:	1040001d */ 	beqz	$v0,.L0f00ef28
/*  f00eeb4:	00000000 */ 	nop
/*  f00eeb8:	8c4e0000 */ 	lw	$t6,0x0($v0)
/*  f00eebc:	00001825 */ 	or	$v1,$zero,$zero
/*  f00eec0:	00403025 */ 	or	$a2,$v0,$zero
/*  f00eec4:	11c00018 */ 	beqz	$t6,.L0f00ef28
/*  f00eec8:	00000000 */ 	nop
/*  f00eecc:	8c450000 */ 	lw	$a1,0x0($v0)
/*  f00eed0:	00a97821 */ 	addu	$t7,$a1,$t1
.L0f00eed4:
/*  f00eed4:	accf0000 */ 	sw	$t7,0x0($a2)
/*  f00eed8:	8cf80014 */ 	lw	$t8,0x14($a3)
/*  f00eedc:	00002025 */ 	or	$a0,$zero,$zero
/*  f00eee0:	03033021 */ 	addu	$a2,$t8,$v1
/*  f00eee4:	8cc50000 */ 	lw	$a1,0x0($a2)
/*  f00eee8:	8cb90000 */ 	lw	$t9,0x0($a1)
/*  f00eeec:	00a01025 */ 	or	$v0,$a1,$zero
/*  f00eef0:	07220007 */ 	bltzl	$t9,.L0f00ef10
/*  f00eef4:	a4c40006 */ 	sh	$a0,0x6($a2)
/*  f00eef8:	8c4a0004 */ 	lw	$t2,0x4($v0)
.L0f00eefc:
/*  f00eefc:	24840001 */ 	addiu	$a0,$a0,0x1
/*  f00ef00:	24420004 */ 	addiu	$v0,$v0,0x4
/*  f00ef04:	0543fffd */ 	bgezl	$t2,.L0f00eefc
/*  f00ef08:	8c4a0004 */ 	lw	$t2,0x4($v0)
/*  f00ef0c:	a4c40006 */ 	sh	$a0,0x6($a2)
.L0f00ef10:
/*  f00ef10:	8ceb0014 */ 	lw	$t3,0x14($a3)
/*  f00ef14:	24630008 */ 	addiu	$v1,$v1,0x8
/*  f00ef18:	01633021 */ 	addu	$a2,$t3,$v1
/*  f00ef1c:	8cc50000 */ 	lw	$a1,0x0($a2)
/*  f00ef20:	54a0ffec */ 	bnezl	$a1,.L0f00eed4
/*  f00ef24:	00a97821 */ 	addu	$t7,$a1,$t1
.L0f00ef28:
/*  f00ef28:	0fc03398 */ 	jal	setupCountCommandType
/*  f00ef2c:	24040009 */ 	addiu	$a0,$zero,0x9
/*  f00ef30:	3c05800a */ 	lui	$a1,%hi(g_Vars)
/*  f00ef34:	24a59fc0 */ 	addiu	$a1,$a1,%lo(g_Vars)
/*  f00ef38:	8cad0318 */ 	lw	$t5,0x318($a1)
/*  f00ef3c:	00401825 */ 	or	$v1,$v0,$zero
/*  f00ef40:	24040008 */ 	addiu	$a0,$zero,0x8
/*  f00ef44:	15a00009 */ 	bnez	$t5,.L0f00ef6c
/*  f00ef48:	3c0c800a */ 	lui	$t4,%hi(g_MissionConfig+0x3)
/*  f00ef4c:	818edfeb */ 	lb	$t6,%lo(g_MissionConfig+0x3)($t4)
/*  f00ef50:	05c10006 */ 	bgez	$t6,.L0f00ef6c
/*  f00ef54:	00000000 */ 	nop
/*  f00ef58:	8ca20474 */ 	lw	$v0,0x474($a1)
/*  f00ef5c:	18400003 */ 	blez	$v0,.L0f00ef6c
/*  f00ef60:	00000000 */ 	nop
/*  f00ef64:	00621821 */ 	addu	$v1,$v1,$v0
/*  f00ef68:	00408025 */ 	or	$s0,$v0,$zero
.L0f00ef6c:
/*  f00ef6c:	0fc03398 */ 	jal	setupCountCommandType
/*  f00ef70:	afa3004c */ 	sw	$v1,0x4c($sp)
/*  f00ef74:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00ef78:	0fc03398 */ 	jal	setupCountCommandType
/*  f00ef7c:	24040004 */ 	addiu	$a0,$zero,0x4
/*  f00ef80:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00ef84:	0fc03398 */ 	jal	setupCountCommandType
/*  f00ef88:	24040011 */ 	addiu	$a0,$zero,0x11
/*  f00ef8c:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00ef90:	0fc03398 */ 	jal	setupCountCommandType
/*  f00ef94:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f00ef98:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00ef9c:	0fc03398 */ 	jal	setupCountCommandType
/*  f00efa0:	24040006 */ 	addiu	$a0,$zero,0x6
/*  f00efa4:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00efa8:	0fc03398 */ 	jal	setupCountCommandType
/*  f00efac:	2404000d */ 	addiu	$a0,$zero,0xd
/*  f00efb0:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00efb4:	0fc03398 */ 	jal	setupCountCommandType
/*  f00efb8:	2404000c */ 	addiu	$a0,$zero,0xc
/*  f00efbc:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00efc0:	0fc03398 */ 	jal	setupCountCommandType
/*  f00efc4:	2404000a */ 	addiu	$a0,$zero,0xa
/*  f00efc8:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00efcc:	0fc03398 */ 	jal	setupCountCommandType
/*  f00efd0:	2404000b */ 	addiu	$a0,$zero,0xb
/*  f00efd4:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00efd8:	0fc03398 */ 	jal	setupCountCommandType
/*  f00efdc:	24040015 */ 	addiu	$a0,$zero,0x15
/*  f00efe0:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00efe4:	0fc03398 */ 	jal	setupCountCommandType
/*  f00efe8:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f00efec:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00eff0:	0fc03398 */ 	jal	setupCountCommandType
/*  f00eff4:	2404000f */ 	addiu	$a0,$zero,0xf
/*  f00eff8:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00effc:	0fc03398 */ 	jal	setupCountCommandType
/*  f00f000:	2404002a */ 	addiu	$a0,$zero,0x2a
/*  f00f004:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00f008:	0fc03398 */ 	jal	setupCountCommandType
/*  f00f00c:	2404002f */ 	addiu	$a0,$zero,0x2f
/*  f00f010:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00f014:	0fc03398 */ 	jal	setupCountCommandType
/*  f00f018:	2404002b */ 	addiu	$a0,$zero,0x2b
/*  f00f01c:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00f020:	0fc03398 */ 	jal	setupCountCommandType
/*  f00f024:	24040029 */ 	addiu	$a0,$zero,0x29
/*  f00f028:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00f02c:	0fc03398 */ 	jal	setupCountCommandType
/*  f00f030:	24040024 */ 	addiu	$a0,$zero,0x24
/*  f00f034:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00f038:	0fc03398 */ 	jal	setupCountCommandType
/*  f00f03c:	24040005 */ 	addiu	$a0,$zero,0x5
/*  f00f040:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00f044:	0fc03398 */ 	jal	setupCountCommandType
/*  f00f048:	24040007 */ 	addiu	$a0,$zero,0x7
/*  f00f04c:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00f050:	0fc03398 */ 	jal	setupCountCommandType
/*  f00f054:	24040014 */ 	addiu	$a0,$zero,0x14
/*  f00f058:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00f05c:	0fc03398 */ 	jal	setupCountCommandType
/*  f00f060:	24040027 */ 	addiu	$a0,$zero,0x27
/*  f00f064:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00f068:	0fc03398 */ 	jal	setupCountCommandType
/*  f00f06c:	2404002d */ 	addiu	$a0,$zero,0x2d
/*  f00f070:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00f074:	0fc03398 */ 	jal	setupCountCommandType
/*  f00f078:	24040030 */ 	addiu	$a0,$zero,0x30
/*  f00f07c:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00f080:	0fc03398 */ 	jal	setupCountCommandType
/*  f00f084:	24040033 */ 	addiu	$a0,$zero,0x33
/*  f00f088:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00f08c:	0fc03398 */ 	jal	setupCountCommandType
/*  f00f090:	24040035 */ 	addiu	$a0,$zero,0x35
/*  f00f094:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00f098:	0fc03398 */ 	jal	setupCountCommandType
/*  f00f09c:	24040036 */ 	addiu	$a0,$zero,0x36
/*  f00f0a0:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00f0a4:	0fc03398 */ 	jal	setupCountCommandType
/*  f00f0a8:	24040037 */ 	addiu	$a0,$zero,0x37
/*  f00f0ac:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00f0b0:	0fc03398 */ 	jal	setupCountCommandType
/*  f00f0b4:	24040039 */ 	addiu	$a0,$zero,0x39
/*  f00f0b8:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00f0bc:	0fc03398 */ 	jal	setupCountCommandType
/*  f00f0c0:	24040028 */ 	addiu	$a0,$zero,0x28
/*  f00f0c4:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00f0c8:	0fc03398 */ 	jal	setupCountCommandType
/*  f00f0cc:	2404003b */ 	addiu	$a0,$zero,0x3b
/*  f00f0d0:	3c0f800a */ 	lui	$t7,%hi(g_Vars+0x318)
/*  f00f0d4:	8defa2d8 */ 	lw	$t7,%lo(g_Vars+0x318)($t7)
/*  f00f0d8:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00f0dc:	51e00005 */ 	beqzl	$t7,.L0f00f0f4
/*  f00f0e0:	02002025 */ 	or	$a0,$s0,$zero
/*  f00f0e4:	0fc61533 */ 	jal	scenarioCallback08
/*  f00f0e8:	00000000 */ 	nop
/*  f00f0ec:	02028021 */ 	addu	$s0,$s0,$v0
/*  f00f0f0:	02002025 */ 	or	$a0,$s0,$zero
.L0f00f0f4:
/*  f00f0f4:	0fc0444c */ 	jal	func0f011130
/*  f00f0f8:	8fa5004c */ 	lw	$a1,0x4c($sp)
/*  f00f0fc:	1000000c */ 	b	.L0f00f130
/*  f00f100:	00000000 */ 	nop
.L0f00f104:
/*  f00f104:	24e7d030 */ 	addiu	$a3,$a3,%lo(g_StageSetup)
/*  f00f108:	ace00000 */ 	sw	$zero,0x0($a3)
/*  f00f10c:	ace00004 */ 	sw	$zero,0x4($a3)
/*  f00f110:	ace0000c */ 	sw	$zero,0xc($a3)
/*  f00f114:	ace00010 */ 	sw	$zero,0x10($a3)
/*  f00f118:	ace00014 */ 	sw	$zero,0x14($a3)
/*  f00f11c:	ace00018 */ 	sw	$zero,0x18($a3)
/*  f00f120:	ace0001c */ 	sw	$zero,0x1c($a3)
/*  f00f124:	00002025 */ 	or	$a0,$zero,$zero
/*  f00f128:	0fc0444c */ 	jal	func0f011130
/*  f00f12c:	00002825 */ 	or	$a1,$zero,$zero
.L0f00f130:
/*  f00f130:	3c028009 */ 	lui	$v0,%hi(g_Is4Mb)
/*  f00f134:	90420af0 */ 	lbu	$v0,%lo(g_Is4Mb)($v0)
/*  f00f138:	8fb8004c */ 	lw	$t8,0x4c($sp)
/*  f00f13c:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f00f140:	14820003 */ 	bne	$a0,$v0,.L0f00f150
/*  f00f144:	0218c821 */ 	addu	$t9,$s0,$t8
/*  f00f148:	10000002 */ 	b	.L0f00f154
/*  f00f14c:	24030028 */ 	addiu	$v1,$zero,0x28
.L0f00f150:
/*  f00f150:	2403003c */ 	addiu	$v1,$zero,0x3c
.L0f00f154:
/*  f00f154:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f00f158:	03235021 */ 	addu	$t2,$t9,$v1
/*  f00f15c:	254b0028 */ 	addiu	$t3,$t2,0x28
/*  f00f160:	3c01800a */ 	lui	$at,%hi(g_Vars+0x334)
/*  f00f164:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f00f168:	ac2ba2f4 */ 	sw	$t3,%lo(g_Vars+0x334)($at)
/*  f00f16c:	03e00008 */ 	jr	$ra
/*  f00f170:	27bd0060 */ 	addiu	$sp,$sp,0x60
);

void setupParseObjects(s32 stagenum)
{
	s32 withchrs = !func00013010(1, "-nochr") && !func00013010(1, "-noprop");
	s32 withobjs = !func00013010(1, "-noobj") && !func00013010(1, "-noprop");
	s32 withhovercars;
	s32 escstepx;
	s32 escstepy;
	struct defaultobj *obj;
	s32 i;
	s32 j;

	withhovercars = !(stagenum == STAGE_EXTRACTION || stagenum == STAGE_DEFECTION)
		|| !(g_Vars.coopplayernum >= 0 || g_Vars.antiplayernum >= 0);

	escstepx = 0;
	escstepy = 0;
	g_Vars.textoverrides = NULL;

	for (j = 0; j != 6; j++) {
		g_Briefing.objectivenames[j] = 0;
		g_Briefing.objectivedifficulties[j] = 0;
	}

	g_Briefing.briefingtextnum = L_MISC(42); // "No briefing for this mission"

	if (stagenum < STAGE_TITLE) {
		if (g_StageSetup.padfiledata) {
			func0f012aa0();
		}

		func0f012d50();

		if (withchrs) {
			s32 numchrs = 0;

			numchrs += setupCountCommandType(OBJTYPE_CHR);

			if (g_Vars.normmplayerisrunning == false
					&& g_MissionConfig.iscoop
					&& g_Vars.numaibuddies > 0) {
				numchrs += g_Vars.numaibuddies;
			}

			func0f00b62c(numchrs);
		} else {
			func0f00b62c(0);
		}

		for (j = 0; j < PLAYERCOUNT(); j++) {
			setCurrentPlayerNum(j);
			func0f012530(setupCountCommandType(OBJTYPE_LINKGUNS));
		}

		if (g_StageSetup.props) {
			u32 diffflag = 0;
			s32 index;

			diffflag |= 1 << (getDifficulty() + 4);

			if (g_Vars.mplayerisrunning) {
				if (PLAYERCOUNT() == 2) {
					diffflag |= OBJFLAG2_EXCLUDE_2P;
				} else if (PLAYERCOUNT() == 3) {
					diffflag |= OBJFLAG2_EXCLUDE_3P;
				} else if (PLAYERCOUNT() == 4) {
					diffflag |= OBJFLAG2_EXCLUDE_4P;
				}
			}

			mpRemoveAllSimulants();
			index = 0;

			obj = (struct defaultobj *)g_StageSetup.props;

			while (obj->type != OBJTYPE_END) {
				switch (obj->type) {
				case OBJTYPE_GRENADEPROB:
					{
						struct grenadeprobobj *grenadeprob = (struct grenadeprobobj *)obj;
						u8 probability = grenadeprob->probability;
						struct chrdata *chr = chrFindByLiteralId(grenadeprob->chrnum);

						if (chr && chr->prop && chr->model) {
							chr->grenadeprob = probability;
						}
					}
					break;
				case OBJTYPE_CHR:
					if (withchrs) {
						chrUnpack(stagenum, obj, index);
					}
					break;
				case OBJTYPE_DOOR:
					if (withobjs && (obj->flags2 & diffflag) == 0) {
						setupDoor((struct doorobj *)obj, index);
					}
					break;
				case OBJTYPE_DOORSCALE:
					{
						struct doorscaleobj *scale = (struct doorscaleobj *)obj;
						g_DoorScale = scale->scale / 65536.0f;
					}
					break;
				case OBJTYPE_WEAPON:
					if (withchrs && (obj->flags2 & diffflag) == 0) {
						weaponAssignToHome((struct weaponobj *)obj, index);
					}
					break;
				case OBJTYPE_KEY:
					if (withchrs && (obj->flags2 & diffflag) == 0) {
						setupKey((struct keyobj *)obj, index);
					}
					break;
				case OBJTYPE_HAT:
					if (withchrs && (obj->flags2 & diffflag) == 0) {
						setupHat((struct hatobj *)obj, index);
					}
					break;
				case OBJTYPE_CAMERA:
					if (withobjs && (obj->flags2 & diffflag) == 0) {
						setupCamera((struct cameraobj *)obj, index);
					}
					break;
				case OBJTYPE_AUTOGUN:
					if (withobjs && (obj->flags2 & diffflag) == 0) {
						setupAutogun((struct autogunobj *)obj, index);
					}
					break;
				case OBJTYPE_HANGINGMONITORS:
					if (withobjs && (obj->flags2 & diffflag) == 0) {
						setupHangingMonitors((struct hangingmonitorsobj *)obj, index);
					}
					break;
				case OBJTYPE_SINGLEMONITOR:
					if (withobjs && (obj->flags2 & diffflag) == 0) {
						setupSingleMonitor((struct singlemonitorobj *)obj, index);
					}
					break;
				case OBJTYPE_MULTIMONITOR:
					if (withobjs && (obj->flags2 & diffflag) == 0) {
						setupMultiMonitor((struct multimonitorobj *)obj, index);
					}
					break;
				case OBJTYPE_SHIELD:
					if (withobjs) {
						if ((obj->flags2 & diffflag) == 0 || g_LanguageId != LANGUAGE_ENGLISH) {
							struct shieldobj *shield = (struct shieldobj *)obj;
							shield->initialamount = *(s32 *)&shield->initialamount / 65536.0f;
							shield->amount = shield->initialamount;
							setupGenericObject(obj, index);
						}
					}
					break;
				case OBJTYPE_TINTEDGLASS:
					if (withobjs && (obj->flags2 & diffflag) == 0) {
						if (obj->flags & OBJFLAG_DEACTIVATED) {
							struct tintedglassobj *glass = (struct tintedglassobj *)obj;
							glass->portalnum = func0f00e1f8(obj->pad);
							glass->unk64 = *(s32 *)&glass->unk64 / 65536.0f;
						}

						setupGenericObject(obj, index);
					}
					break;
				case OBJTYPE_LIFT:
					if (withobjs && (obj->flags2 & diffflag) == 0) {
						struct liftobj *lift = (struct liftobj *)obj;
						struct propdefinition *propdef;
						s32 modelnum = obj->modelnum;
						struct prop *prop;
						s32 i;

						lift->dist = 0;
						lift->speed = 0;
						lift->levelcur = 0;
						lift->levelaim = 0;
						lift->accel = *(s32 *)&lift->accel / 65536.0f;
						lift->maxspeed = *(s32 *)&lift->maxspeed / 65536.0f;

						for (i = 0; i < 4; i++) {
							if (lift->doors[i]) {
								lift->doors[i] = (struct doorobj *)setupGetPtrToCommandByIndex(index + *(s32*)&lift->doors[i]);
							}
						}

						obj->numtiles = 1;
						propLoad(modelnum);
						propdef = &g_Props[modelnum];

						if (propdef->filedata) {
							if (modelGetPartNodeData(propdef->filedata, 1)) {
								obj->numtiles++;
							}
							if (modelGetPartNodeData(propdef->filedata, 2)) {
								obj->numtiles++;
							}
							if (modelGetPartNodeData(propdef->filedata, 3)) {
								obj->numtiles++;
							}
							if (modelGetPartNodeData(propdef->filedata, 4)) {
								obj->numtiles++;
							}
							if (modelGetPartNodeData(propdef->filedata, 6)) {
								obj->numtiles++;
							}
						}

						obj->flags &= ~OBJFLAG_00000100;

						setupGenericObject(obj, index);

						prop = obj->prop;

						if (prop) {
							lift->prevpos.x = prop->pos.x;
							lift->prevpos.y = prop->pos.y;
							lift->prevpos.z = prop->pos.z;

							func0f070f08(lift, true);
						}
					}
					break;
				case OBJTYPE_HOVERPROP:
					if (withobjs && (obj->flags2 & diffflag) == 0) {
						struct hoverpropobj *hoverprop = (struct hoverpropobj *)obj;

						setupGenericObject(obj, index);
						setupHov(obj, &hoverprop->hov);
					}
					break;
				case OBJTYPE_HOVERBIKE:
					if (withobjs && (obj->flags2 & diffflag) == 0) {
						struct hoverbikeobj *bike = (struct hoverbikeobj *)obj;

						setupGenericObject(obj, index);
						setupHov(obj, &bike->hov);

						bike->speed[0] = 0;
						bike->speed[1] = 0;
						bike->w = 0;
						bike->rels[0] = 0;
						bike->rels[1] = 0;
						bike->exreal = 0;
						bike->ezreal = 0;
						bike->ezreal2 = 0;
						bike->leanspeed = 0;
						bike->leandiff = 0;
						bike->maxspeedtime240 = 0;
						bike->speedabs[0] = 0;
						bike->speedabs[1] = 0;
						bike->speedrel[0] = 0;
						bike->speedrel[1] = 0;
					}
					break;
				case OBJTYPE_FAN:
					if (withobjs && (obj->flags2 & diffflag) == 0) {
						struct fanobj *fan = (struct fanobj *)obj;

						fan->yrot = 0;
						fan->ymaxspeed = *(s32 *)&fan->ymaxspeed / 65536.0f;
						fan->yaccel = *(s32 *)&fan->yaccel / 65536.0f;

						setupGenericObject(obj, index);
					}
					break;
				case OBJTYPE_GLASS:
					if (withobjs && (obj->flags2 & diffflag) == 0) {
						if (obj->flags & OBJFLAG_DEACTIVATED) {
							struct glassobj *glass = (struct glassobj *)obj;
							glass->portalnum = func0f00e1f8(obj->pad);
						}

						setupGenericObject(obj, index);
					}
					break;
				case OBJTYPE_ESCALATOR:
					if (withobjs && (obj->flags2 & diffflag) == 0) {
						struct escalatorobj *step = (struct escalatorobj *)obj;
						struct prop *prop;
						f32 sp1a8[12];
						f32 sp184[9];

						setupGenericObject(obj, index);

						prop = obj->prop;

						if (prop) {
							step->prevpos.x = prop->pos.x;
							step->prevpos.y = prop->pos.y;
							step->prevpos.z = prop->pos.z;
						}

						if (obj->flags & OBJFLAG_DEACTIVATED) {
							step->frame = escstepy;
							escstepy += 40;
							func00016374(4.7116389274597f, sp1a8);
							func00015da0(sp1a8, sp184);
							func00016110(sp184, obj->realrot);
						} else {
							step->frame = escstepx;
							escstepx += 40;
							func00016374(M_BADPI, sp1a8);
							func00015da0(sp1a8, sp184);
							func00016110(sp184, obj->realrot);
						}
					}
					break;
				case OBJTYPE_BASIC:
				case OBJTYPE_ALARM:
				case OBJTYPE_AMMOCRATE:
				case OBJTYPE_DEBRIS:
				case OBJTYPE_24:
				case OBJTYPE_29:
				case OBJTYPE_SAFE:
					if (withobjs && (obj->flags2 & diffflag) == 0) {
						setupGenericObject(obj, index);
					}
					break;
				case OBJTYPE_MULTIAMMOCRATE:
					{
						struct multiammocrateobj *crate = (struct multiammocrateobj *)obj;
						s32 ammoqty = 1;
						s32 i;

						if (g_Vars.normmplayerisrunning && var8009cc30 >= 0) {
							struct mpweapon *mpweapon = func0f188e24(var8009cc30);
							ammoqty = mpweapon->weapon1ammoqty;

							if (mpweapon->weapon1ammotypeminusone > 0 && mpweapon->weapon1ammotypeminusone < 20) {
								crate->quantities[mpweapon->weapon1ammotypeminusone - 1].unk02 = ammoqty;
							}

							if (mpweapon->weapon2ammotypeminusone > 0 && mpweapon->weapon2ammotypeminusone < 20) {
								crate->quantities[mpweapon->weapon2ammotypeminusone - 1].unk02 = mpweapon->weapon2ammoqty;
							}
						}

						if (ammoqty > 0 && withobjs && (obj->flags2 & diffflag) == 0) {
							for (i = 0; i < 19; i++) {
								if (crate->quantities[i].unk02 > 0 && crate->quantities[i].unk00 != 0xffff) {
									propLoad(crate->quantities[i].unk00);
								}
							}

							setupGenericObject(obj, index);
						}
					}
					break;
				case OBJTYPE_TRUCK:
					if (withobjs && (obj->flags2 & diffflag) == 0) {
						struct truckobj *truck = (struct truckobj *)obj;

						setupGenericObject(obj, index);

						if (obj->model) {
							struct modelnode *node = modelGetPart(obj->model->unk08, 5);

							if (node) {
								struct modeldata_05 *data = modelGetNodeData(obj->model, node);
								data->unk00 = ((obj->flags & OBJFLAG_DEACTIVATED) == 0);
							}
						}

						truck->speed = 0;
						truck->wheelxrot = 0;
						truck->wheelyrot = 0;
						truck->speedaim = 0;
						truck->speedtime60 = -1;
						truck->turnrot60 = 0;
						truck->roty = 0;
						truck->ailist = ailistFindById((u32)truck->ailist);
						truck->aioffset = 0;
						truck->aireturnlist = -1;
						truck->path = NULL;
						truck->nextstep = 0;
					}
					break;
				case OBJTYPE_HOVERCAR:
					if (withhovercars && withobjs && (obj->flags2 & diffflag) == 0) {
						struct hovercarobj *car = (struct hovercarobj *)obj;
						struct prop *prop;

						setupGenericObject(obj, index);

						prop = obj->prop;

						car->speed = 0;
						car->speedaim = 0;
						car->turnrot60 = 0;
						car->roty = 0;
						car->rotx = 0;
						car->speedtime60 = -1;
						car->ailist = ailistFindById((s32)car->ailist);
						car->aioffset = 0;
						car->aireturnlist = -1;
						car->path = NULL;
						car->nextstep = 0;

						if (obj->flags & OBJFLAG_CHOPPER_INACTIVE) {
							prop->pos.y = func0002a36c(&prop->pos, prop->rooms, NULL, 0) + 30;
						}

						prop->unk3f_02 = true;
					}
					break;
				case OBJTYPE_CHOPPER:
					if (withobjs && (obj->flags2 & diffflag) == 0) {
						struct chopperobj *chopper = (struct chopperobj *)obj;

						setupGenericObject(obj, index);

						obj->flags |= OBJFLAG_20000000;
						obj->prop->unk3f_02 = true;

						chopper->turnrot60 = 0;
						chopper->roty = 0;
						chopper->rotx = 0;
						chopper->gunroty = 0;
						chopper->gunrotx = 0;
						chopper->barrelrot = 0;
						chopper->barrelrotspeed = 0;
						chopper->ailist = ailistFindById((u32)chopper->ailist);
						chopper->aioffset = 0;
						chopper->aireturnlist = -1;
						chopper->path = NULL;
						chopper->nextstep = 0;
						chopper->target = -1;
						chopper->targetvisible = false;
						chopper->attackmode = 0;
						chopper->vz = 0;
						chopper->vy = 0;
						chopper->vx = 0;
						chopper->otz = 0;
						chopper->oty = 0;
						chopper->otx = 0;
						chopper->power = 0;
						chopper->bob = 0;
						chopper->bobstrength = 0.05f;
						chopper->timer60 = 0;
						chopper->patroltimer60 = 0;
						chopper->cw = 0;
						chopper->weaponsarmed = true;
						chopper->fireslotthing = malloc(sizeof(struct fireslotthing), 4);
						chopper->fireslotthing->bullettail = malloc(ALIGN16(sizeof(struct bullettail)), 4);
						chopper->fireslotthing->bullettail->age = -1;
						chopper->fireslotthing->unk08 = -1;
						chopper->fireslotthing->unk00 = 0;
						chopper->fireslotthing->unk01 = 0;
						chopper->fireslotthing->unk0c = 0.85f;
						chopper->fireslotthing->unk10 = 0.2f;
						chopper->fireslotthing->unk14 = 0;
						chopper->dead = false;
					}
					break;
				case OBJTYPE_HELI:
					if (withobjs && (obj->flags2 & diffflag) == 0) {
						struct heliobj *heli = (struct heliobj *)obj;

						setupGenericObject(obj, index);

						heli->speed = 0;
						heli->speedaim = 0;
						heli->rotoryrot = 0;
						heli->rotoryspeed = 0;
						heli->rotoryspeedaim = 0;
						heli->yrot = 0;
						heli->speedtime60 = -1;
						heli->rotoryspeedtime = -1;
						heli->ailist = ailistFindById((u32)heli->ailist);
						heli->aioffset = 0;
						heli->aireturnlist = -1;
						heli->path = NULL;
						heli->nextstep = 0;
					}
					break;
				case OBJTYPE_TAG:
					{
						struct tag *tag = (struct tag *)obj;
						struct defaultobj *taggedobj = setupCommandGetObject(index + tag->cmdoffset);
						tag->obj = taggedobj;

						if (taggedobj) {
							taggedobj->hidden |= OBJHFLAG_TAGGED;
						}

						tagInsert(tag);
					}
					break;
				case OBJTYPE_RENAMEOBJ:
					{
						struct textoverride *override = (struct textoverride *)obj;
						struct defaultobj *targetobj = setupCommandGetObject(override->objoffset + index);
						override->obj = targetobj;

						if (targetobj) {
							targetobj->hidden |= OBJHFLAG_HASTEXTOVERRIDE;
						}

						textoverrideInsert(override);
					}
					break;
				case OBJTYPE_BRIEFING:
					{
						struct briefingobj *briefing = (struct briefingobj *)obj;
						s32 wanttype = BRIEFINGTYPE_TEXT_PA;

						briefingInsert(briefing);

						if (getDifficulty() == DIFF_A) {
							wanttype = BRIEFINGTYPE_TEXT_A;
						}

						if (getDifficulty() == DIFF_SA) {
							wanttype = BRIEFINGTYPE_TEXT_SA;
						}

						if (briefing->type == wanttype) {
							g_Briefing.briefingtextnum = briefing->text;
						}
					}
					break;
				case OBJTYPE_CAMERA2:
					{
						struct camera2obj *camera = (struct camera2obj *)obj;
						camera->unk04 = *(s32 *)&camera->unk04 / 100.0f;
						camera->unk08 = *(s32 *)&camera->unk08 / 100.0f;
						camera->unk0c = *(s32 *)&camera->unk0c / 100.0f;
						camera->unk10 = *(s32 *)&camera->unk10 / 65536.0f;
						camera->unk14 = *(s32 *)&camera->unk14 / 65536.0f;
					}
					break;
				case OBJTYPE_BEGINOBJECTIVE:
					{
						struct beginobjectiveobj *objective = (struct beginobjectiveobj *)obj;

						func0f010a98(obj);

						if (objective->index < 7) {
							g_Briefing.objectivenames[objective->index] = objective->text;
							g_Briefing.objectivedifficulties[objective->index] = (s8)objective->difficulty;
						}
					}
					break;
				case OBJECTIVETYPE_ENTERROOM:
					objectiveAddRoomEnteredCriteria((struct criteria_roomentered *)obj);
					break;
				case OBJECTIVETYPE_ATTACHOBJ:
					objectiveAddMultiroomEnteredCriteria((struct criteria_multiroomentered *)obj);
					break;
				case OBJECTIVETYPE_HOLOGRAPH:
					objectiveAddHolographCriteria((struct criteria_holograph *)obj);
					break;
				case OBJTYPE_PADEFFECT:
					{
						struct padeffectobj *padeffect = (struct padeffectobj *)obj;
						if (var80069964 == -1) {
							var80069960 = padeffect;
						}
						var80069964++;
					}
					break;
				case OBJTYPE_MINE:
					if (withobjs && (obj->flags2 & diffflag) == 0) {
						setupMine((struct mineobj *)obj, index);
					}
					break;
				}

				obj = (struct defaultobj *)((u32 *)obj + setupGetCommandLength((u32 *)obj));
				index++;
			}

			index = 0;

			if (g_Vars.normmplayerisrunning && mpHasSimulants()) {
				u32 stack[4];
				s32 i;
				s32 slotsdone[8];
				s32 someindex = 0;
				s32 maxsimulants;
				s32 slotnum;

				if (mpIsChallengeComplete(CHALLENGE_UNK64)) {
					maxsimulants = 8;
				} else {
					maxsimulants = 4;
				}

				for (i = 0; i < 8; i++) {
					slotsdone[i] = false;
				}

				for (i = 0; i < maxsimulants; i++) {
					slotnum = random() % maxsimulants;

					while (slotsdone[slotnum]) {
						slotnum = (slotnum + 1) % maxsimulants;
					}

					if ((g_MpSetup.chrslots & (1 << (slotnum + 4)))
							&& mpIsSimSlotEnabled(slotnum)) {
						func0f014848(someindex, slotnum);
						someindex++;
					}

					slotsdone[slotnum] = true;
				}
			}

			if (g_Vars.normmplayerisrunning) {
				scenarioReset();
			}

			obj = (struct defaultobj *)g_StageSetup.props;

			while (obj->type != OBJTYPE_END) {
				switch (obj->type) {
				case OBJTYPE_BASIC:
				case OBJTYPE_KEY:
				case OBJTYPE_AMMOCRATE:
				case OBJTYPE_WEAPON:
				case OBJTYPE_SINGLEMONITOR:
				case OBJTYPE_DEBRIS:
				case OBJTYPE_MULTIAMMOCRATE:
				case OBJTYPE_SHIELD:
				case OBJTYPE_24:
				case OBJTYPE_29:
				case OBJTYPE_GLASS:
				case OBJTYPE_SAFE:
				case OBJTYPE_TINTEDGLASS:
					if (obj->prop && (obj->flags & OBJFLAG_00008000)) {
						s32 offset = obj->pad;
						struct defaultobj *owner = setupCommandGetObject(index + offset);

						if (owner && owner->prop) {
							obj->hidden |= OBJHFLAG_HASOWNER;
							modelSetUnk14(obj->model, obj->model->unk14);
							propReparent(obj->prop, owner->prop);
						}
					}
					break;
				case OBJTYPE_LINKGUNS:
					{
						struct linkgunsobj *link = (struct linkgunsobj *)obj;
						struct weaponobj *gun1 = (struct weaponobj *)setupGetPtrToCommandByIndex(link->offset1 + index);
						struct weaponobj *gun2 = (struct weaponobj *)setupGetPtrToCommandByIndex(link->offset2 + index);

						if (gun1 && gun2
								&& gun1->base.type == OBJTYPE_WEAPON
								&& gun2->base.type == OBJTYPE_WEAPON) {
							propweaponSetDual(gun1, gun2);
						}
					}
					break;
				case OBJTYPE_LINKLIFTDOOR:
					{
						struct linkliftdoorobj *link = (struct linkliftdoorobj *)obj;
						s32 dooroffset = (s32)link->door;
						s32 liftoffset = (s32)link->lift;
						struct defaultobj *door = setupCommandGetObject(index + dooroffset);
						struct defaultobj *lift = setupCommandGetObject(index + liftoffset);

						if (door && door->prop && lift && lift->prop) {
							link->door = door->prop;
							link->lift = lift->prop;

							addLiftDoor(link);

							door->hidden |= OBJHFLAG_LIFTDOOR;
						}
					}
					break;
				case OBJTYPE_SAFEITEM:
					{
						struct safeitemobj *link = (struct safeitemobj *)obj;
						s32 itemoffset = (s32)link->item;
						s32 safeoffset = (s32)link->safe;
						s32 dooroffset = (s32)link->door;
						struct defaultobj *item = setupCommandGetObject(index + itemoffset);
						struct defaultobj *safe = setupCommandGetObject(index + safeoffset);
						struct defaultobj *door = setupCommandGetObject(index + dooroffset);

						if (item && item->prop
								&& safe && safe->prop && safe->type == OBJTYPE_SAFE
								&& door && door->prop && door->type == OBJTYPE_DOOR) {
							link->item = item;
							link->safe = (struct safeobj *)safe;
							link->door = (struct doorobj *)door;

							addSafeItem(link);

							item->flags2 |= OBJFLAG2_LINKEDTOSAFE;
							door->flags2 |= OBJFLAG2_LINKEDTOSAFE;
						}
					}
					break;
				case OBJTYPE_PADLOCKEDDOOR:
					{
						struct padlockeddoorobj *link = (struct padlockeddoorobj *)obj;
						s32 dooroffset = (s32)link->door;
						s32 lockoffset = (s32)link->lock;
						struct defaultobj *door = setupCommandGetObject(index + dooroffset);
						struct defaultobj *lock = setupCommandGetObject(index + lockoffset);

						if (door && door->prop && lock && lock->prop
								&& door->type == OBJTYPE_DOOR) {
							link->door = (struct doorobj *)door;
							link->lock = lock;

							addPadlockedDoor(link);

							door->hidden |= OBJHFLAG_PADLOCKEDDOOR;
						}
					}
					break;
				case OBJTYPE_CONDITIONALSCENERY:
					{
						struct linksceneryobj *link = (struct linksceneryobj *)obj;
						s32 triggeroffset = (s32)link->trigger;
						s32 unexpoffset = (s32)link->unexp;
						s32 expoffset = (s32)link->exp;
						struct defaultobj *trigger = setupCommandGetObject(index + triggeroffset);
						struct defaultobj *unexp = NULL;
						struct defaultobj *exp = NULL;
						s32 alwayszero = 0;

						if (unexpoffset) {
							unexp = setupCommandGetObject(index + unexpoffset);
						}

						if (expoffset) {
							exp = setupCommandGetObject(index + expoffset);
						}

						if (trigger && trigger->prop
								&& (unexpoffset == 0 || (unexp && unexp->prop))
								&& (expoffset == 0 || (exp && exp->prop))) {
							link->trigger = trigger;
							link->unexp = unexp;
							link->exp = exp;

							addConditionalScenery(link);

							trigger->hidden |= OBJHFLAG_01000000;

							if (unexpoffset) {
								unexp->hidden |= OBJHFLAG_01000000;
							}

							// This gets optimised out but makes v0 unavailable
							// for storing OBJHFLAG_01000000, which is required
							// for a match. Any function call would work; I just
							// copied the one above.
							if (alwayszero) {
								addConditionalScenery(link);
							}

							if (expoffset) {
								exp->hidden |= OBJHFLAG_01000000;
								exp->flags2 |= OBJFLAG2_INVISIBLE;
							}

							if (trigger->hidden & OBJHFLAG_02000000) {
								func000185d0(trigger, false);
							}
						}
					}
					break;
				case OBJTYPE_BLOCKEDPATH:
					{
						struct blockedpathobj *blockedpath = (struct blockedpathobj *)obj;
						s32 objoffset = (s32)blockedpath->blocker;
						struct defaultobj *blocker = setupCommandGetObject(index + objoffset);

						if (blocker && blocker->prop) {
							blockedpath->blocker = blocker;

							addBlockedPath(blockedpath);

							blocker->hidden |= OBJHFLAG_02000000;

							if (blocker->hidden & OBJHFLAG_01000000) {
								func000185d0(blocker, false);
							}
						}
					}
					break;
				}

				obj = (struct defaultobj *)((u32 *)obj + setupGetCommandLength((u32 *)obj));
				index++;
			}
		}
	} else {
		func0f00b62c(0);
	}

	func0f00bbc8();
}
