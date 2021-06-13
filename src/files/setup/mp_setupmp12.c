//
// Fortress (MP)
//

#include "stagesetup.h"

s32 intro[];
u32 props[];
struct path paths[];
struct ailist ailists[];

struct stagesetup setup = {
	NULL,
	NULL,
	NULL,
	intro,
	props,
	paths,
	ailists,
	NULL,
};

u32 props[] = {
	weapon(0x0100, 0x0000, PAD_MP12_01A7, OBJFLAG_00000001, 0, 0, 244)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01C0, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01C1, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01A8, OBJFLAG_00000001, 0, 0, 241)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01C2, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01C3, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01A9, OBJFLAG_00000001, 0, 0, 242)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01C4, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01C5, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01AA, OBJFLAG_00000001, 0, 0, 243)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01C6, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01C7, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01AB, OBJFLAG_00000001, 0, 0, 240)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01C8, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01C9, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01AC, OBJFLAG_00000001, 0, 0, 245)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01CA, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01CB, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01AD, OBJFLAG_00000001, 0, 0, 244)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01CC, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01CD, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01AE, OBJFLAG_00000001, 0, 0, 241)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01CE, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01CF, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01AF, OBJFLAG_00000001, 0, 0, 242)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01D0, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01D1, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01B0, OBJFLAG_00000001, 0, 0, 243)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01D2, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01D3, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01B1, OBJFLAG_00000001, 0, 0, 240)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01D4, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01D5, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01B2, OBJFLAG_00000001, 0, 0, 245)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01D6, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01D7, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01B3, OBJFLAG_00000001, 0, 0, 244)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01D8, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01D9, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01B4, OBJFLAG_00000001, 0, 0, 241)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01DA, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01DB, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01B5, OBJFLAG_00000001, 0, 0, 242)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01DC, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01DD, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01B6, OBJFLAG_00000001, 0, 0, 243)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01DE, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01DF, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01B7, OBJFLAG_00000001, 0, 0, 240)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01E0, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01E1, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01B8, OBJFLAG_00000001, 0, 0, 245)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01E3, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01E2, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01B9, OBJFLAG_00000001, 0, 0, 244)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01E4, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01E5, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01BA, OBJFLAG_00000001, 0, 0, 241)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01E6, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01E7, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01BB, OBJFLAG_00000001, 0, 0, 242)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01E8, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01E9, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01BC, OBJFLAG_00000001, 0, 0, 243)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01EA, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01EB, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01BD, OBJFLAG_00000001, 0, 0, 240)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01EC, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01ED, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01BE, OBJFLAG_00000001, 0, 0, 245)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01EE, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01EF, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01BF, OBJFLAG_00000001, 0, 0, 242)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01F0, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01F1, OBJFLAG_00000001, 0, 0, 1000)
	tag(0x01, 1)
	lift(0x0100, MODEL_A51_LIFT_THINWALL, PAD_MP12_01F2, OBJFLAG_00000008 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_ILLUMINATED | OBJFLAG_INVINCIBLE | OBJFLAG_UNCOLLECTABLE | OBJFLAG_00400000 | OBJFLAG_01000000 | OBJFLAG_CANNOT_ACTIVATE | OBJFLAG_80000000, OBJFLAG2_00000100 | OBJFLAG2_00000200 | OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_00100000 | OBJFLAG2_00200000, 0, 1000, 0x01f2, 0x01f3, -1, -1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000011c7, 0x00040000, 0x00000000)
	tag(0x02, 1)
	lift(0x0100, MODEL_A51_LIFT_THINWALL, PAD_MP12_01F4, OBJFLAG_00000008 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_ILLUMINATED | OBJFLAG_INVINCIBLE | OBJFLAG_UNCOLLECTABLE | OBJFLAG_00400000 | OBJFLAG_01000000 | OBJFLAG_CANNOT_ACTIVATE | OBJFLAG_80000000, OBJFLAG2_00000100 | OBJFLAG2_00000200 | OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_00100000 | OBJFLAG2_00200000, 0, 1000, 0x01f4, 0x01f5, -1, -1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000011c7, 0x00040000, 0x00000000)
	tag(0x03, 1)
	lift(0x0100, MODEL_A51_LIFT_THINWALL, PAD_MP12_01F6, OBJFLAG_00000008 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_ILLUMINATED | OBJFLAG_INVINCIBLE | OBJFLAG_UNCOLLECTABLE | OBJFLAG_00400000 | OBJFLAG_01000000 | OBJFLAG_CANNOT_ACTIVATE | OBJFLAG_80000000, OBJFLAG2_00000100 | OBJFLAG2_00000200 | OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_00100000 | OBJFLAG2_00200000, 0, 1000, 0x01f6, 0x01f7, -1, -1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000011c7, 0x00040000, 0x00000000)
	tag(0x04, 1)
	lift(0x0100, MODEL_A51_LIFT_THINWALL, PAD_MP12_01F8, OBJFLAG_00000008 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_ILLUMINATED | OBJFLAG_INVINCIBLE | OBJFLAG_UNCOLLECTABLE | OBJFLAG_00400000 | OBJFLAG_01000000 | OBJFLAG_CANNOT_ACTIVATE | OBJFLAG_80000000, OBJFLAG2_00000100 | OBJFLAG2_00000200 | OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_00100000 | OBJFLAG2_00200000, 0, 1000, 0x01f8, 0x01f9, -1, -1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000011c7, 0x00040000, 0x00000000)
	tag(0x05, 1)
	lift(0x0100, MODEL_A51_LIFT_THINWALL, PAD_MP12_01FA, OBJFLAG_00000008 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_ILLUMINATED | OBJFLAG_INVINCIBLE | OBJFLAG_UNCOLLECTABLE | OBJFLAG_00400000 | OBJFLAG_01000000 | OBJFLAG_CANNOT_ACTIVATE | OBJFLAG_80000000, OBJFLAG2_00000100 | OBJFLAG2_00000200 | OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_00100000 | OBJFLAG2_00200000, 0, 1000, 0x01fa, 0x01fb, -1, -1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000011c7, 0x00040000, 0x00000000)
	tag(0x06, 1)
	lift(0x0100, MODEL_A51_LIFT_THINWALL, PAD_MP12_01FC, OBJFLAG_00000008 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_ILLUMINATED | OBJFLAG_INVINCIBLE | OBJFLAG_UNCOLLECTABLE | OBJFLAG_00400000 | OBJFLAG_01000000 | OBJFLAG_CANNOT_ACTIVATE | OBJFLAG_80000000, OBJFLAG2_00000100 | OBJFLAG2_00000200 | OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_00100000 | OBJFLAG2_00200000, 0, 1000, 0x01fc, 0x01fd, -1, -1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000011c7, 0x00040000, 0x00000000)
	tag(0x07, 1)
	lift(0x0100, MODEL_A51_LIFT_THINWALL, PAD_MP12_01FE, OBJFLAG_00000008 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_ILLUMINATED | OBJFLAG_INVINCIBLE | OBJFLAG_UNCOLLECTABLE | OBJFLAG_00400000 | OBJFLAG_01000000 | OBJFLAG_CANNOT_ACTIVATE | OBJFLAG_80000000, OBJFLAG2_00000100 | OBJFLAG2_00000200 | OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_00100000 | OBJFLAG2_00200000, 0, 1000, 0x01fe, 0x01ff, -1, -1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000011c7, 0x00040000, 0x00000000)
	tag(0x08, 1)
	lift(0x0100, MODEL_A51_LIFT_THINWALL, PAD_MP12_0200, OBJFLAG_00000008 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_ILLUMINATED | OBJFLAG_INVINCIBLE | OBJFLAG_UNCOLLECTABLE | OBJFLAG_00400000 | OBJFLAG_01000000 | OBJFLAG_CANNOT_ACTIVATE | OBJFLAG_80000000, OBJFLAG2_00000100 | OBJFLAG2_00000200 | OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_00100000 | OBJFLAG2_00200000, 0, 1000, 0x0200, 0x0201, -1, -1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000011c7, 0x00040000, 0x00000000)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP12_019E, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00280000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000000b4, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP12_019F, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00280000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x0000012c, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP12_01A0, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00280000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000000f0, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP12_01A1, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00280000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000000b4, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP12_01A2, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00280000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x0000012c, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP12_01A3, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00280000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000000f0, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP12_019B, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00280000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000000b4, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP12_019C, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00280000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x0000012c, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP12_019D, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00280000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000000f0, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP12_01A4, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00280000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000000b4, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP12_01A5, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00280000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x0000012c, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP12_01A6, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00280000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000000f0, 0x00000000, 0x00000000, 0x00000a00)
	endprops
};

s32 intro[] = {
	spawn(PAD_MP12_018F)
	spawn(PAD_MP12_0190)
	spawn(PAD_MP12_0191)
	spawn(PAD_MP12_0192)
	spawn(PAD_MP12_0193)
	spawn(PAD_MP12_0194)
	spawn(PAD_MP12_0195)
	spawn(PAD_MP12_0196)
	spawn(PAD_MP12_0197)
	spawn(PAD_MP12_0198)
	spawn(PAD_MP12_0199)
	spawn(PAD_MP12_019A)
	case(0, 0x0188)
	case_respawn(0, 0x0189)
	case_respawn(0, 0x018a)
	case_respawn(0, 0x018b)
	case_respawn(0, 0x018c)
	case_respawn(0, 0x018d)
	case_respawn(0, 0x018e)
	case(1, 0x0179)
	case_respawn(1, 0x0178)
	case_respawn(1, 0x0177)
	case_respawn(1, 0x0176)
	case_respawn(1, 0x0175)
	case_respawn(1, 0x0174)
	case_respawn(1, 0x0173)
	case(2, 0x017a)
	case_respawn(2, 0x017b)
	case_respawn(2, 0x017c)
	case_respawn(2, 0x017d)
	case_respawn(2, 0x017e)
	case_respawn(2, 0x017f)
	case_respawn(2, 0x0180)
	case(3, 0x0187)
	case_respawn(3, 0x0186)
	case_respawn(3, 0x0185)
	case_respawn(3, 0x0184)
	case_respawn(3, 0x0183)
	case_respawn(3, 0x0182)
	case_respawn(3, 0x0181)
	hill(0x0009)
	hill(0x0029)
	hill(0x00f8)
	hill(0x00b4)
	hill(0x009a)
	endintro
};

struct path paths[] = {
	{ NULL, 0, 0 },
};

u8 func1001_start_lifts[] = {
	activate_lift(1, 0x01)
	activate_lift(2, 0x02)
	activate_lift(3, 0x03)
	activate_lift(4, 0x04)
	activate_lift(5, 0x05)
	activate_lift(6, 0x06)
	activate_lift(7, 0x07)
	activate_lift(8, 0x08)
	set_ailist(CHR_SELF, GAILIST_IDLE)
	endlist
};

u8 func1000_3cc8[] = {
	mp_init_simulants
	rebuild_teams
	rebuild_squadrons
	set_ailist(CHR_SELF, GAILIST_IDLE)
	endlist
};

struct ailist ailists[] = {
	{ func1000_3cc8,        0x1000 },
	{ func1001_start_lifts, 0x1001 },
	{ NULL, 0 },
};





