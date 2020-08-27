#ifndef IN_GAME_DATA_02A0E0_H
#define IN_GAME_DATA_02A0E0_H
#include <ultra64.h>

extern s32 g_AudioCurrentBgMusicNum;
extern u32 var800840c4;
extern s32 var800840c8;
extern s32 var800840cc;
extern u32 var800840d4;
extern u32 var800840d8;
extern s32 var800840dc;
extern u32 var800840e0;
extern u32 var800840f0;
extern u32 var800840f4;
extern u32 var800840fc;
extern u32 g_LanguageId;
extern u16 g_LangFiles[];
extern u32 var800841b8;
extern u32 var80084220;
extern struct something *somethings[];
extern u32 var800844d0;
extern u32 var800844f0;
extern s32 var800845d8;
extern u32 var800845dc;
extern u32 var800845f4;
extern struct menudialog g_MpPausePlayerRankingMenuDialog;
extern struct menudialog g_MpPauseTeamRankingMenuDialog;
extern u16 g_OrdinalSuffixes[12];
extern struct menudialog g_MpEndscreenIndividualGameOverMenuDialog;
extern struct menudialog g_MpEndscreenTeamGameOverMenuDialog;
extern struct menudialog g_MpEndscreenChallengeCompletedMenuDialog;
extern struct menudialog g_MpEndscreenChallengeCheatedMenuDialog;
extern struct menudialog g_MpEndscreenChallengeFailedMenuDialog;
extern struct menudialog g_MpEndscreenSavePlayerMenuDialog;
extern struct menudialog menudialog_2aba0;
extern struct mparena g_MpArenas[17];
extern u32 var80084bf8;
extern u32 var80084c00[];
extern u16 g_MpControlStyleLabels[4];
extern u16 g_MpAimModeLabels[2];
extern struct menudialog g_MpSaveChrMenuDialog;
extern struct menudialog menudialog_mpsavesetupname;
extern struct menudialog menudialog_mpsavesetup;
extern u32 var800851bc;
extern u32 var800851cc;
extern u32 var80085448;
extern struct menuitem menuitems_mpcharacter[];
extern u32 var800857d0;
extern struct menudialog g_MpAddSimulantMenuDialog;
extern struct menudialog g_MpChangeSimulantMenuDialog;
extern struct menudialog g_MpEditSimulantMenuDialog;
extern u32 var80085a74;
extern u8 g_TeamIdsForPairing[4];
extern struct menudialog g_MpChangeTeamNameMenuDialog;
extern struct menudialog menudialog_2bfa8;
extern struct menudialog menudialog_mpchallengedetails2;
extern struct menudialog menudialog_2c0cc;
extern u16 mplockoptions[4];
extern struct menudialog menudialog_mpgamesetup3;
extern struct menudialog g_MpQuickGoMenuDialog;
extern struct menudialog g_MpQuickTeamGameSetupMenuDialog;
extern struct menudialog g_CombatSimulatorMenuDialog;
extern u16 mpslowmotionoptions[];
extern struct menudialog menudialog_mpcombatoptions;
extern struct menudialog menudialog_mpbriefcaseoptions;
extern struct defaultobj *var800869ec;
extern u32 var800869f0;
extern struct menudialog menudialog_mpcaptureoptions;
extern u32 var80086b60;
extern struct menudialog menudialog_mphilloptions;
extern struct menudialog menudialog_mphackeroptions;
extern u32 var80086e14;
extern struct menudialog menudialog_mppopacapoptions;
extern struct mpscenario g_MpScenarios[];
extern struct mpscenariooverview g_MpScenarioOverviews[];
extern u32 var8008716c;
extern u32 var800871fc;
extern u32 var80087264;
extern struct mpweapon mpweaponstable[];
extern struct mpweaponset g_MpWeaponSets[12];
extern u32 var800874c8;
extern u32 var800874cc;
extern u32 var800874f0;
extern struct mphead g_MpBeauHeads[NUM_MPBEAUHEADS];
extern struct mphead g_MpHeads[75];
extern u32 table_0x2d678[];
extern struct mpsimulant g_MpGeneralSimulants[];
extern struct mpsimulant mpspecialsimulants[];
extern struct mpbody g_MpBodies[NUM_MPBODIES];
extern u32 g_MpMaleHeads[44];
extern u32 g_MpFemaleHeads[7];

#endif
