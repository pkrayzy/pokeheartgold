#include "constants/scrcmd.h"
#include "fielddata/script/scr_seq/event_0163.h"
#include "msgdata/msg/msg_0266.h"
	.include "asm/macros/script.inc"

	.rodata

	scrdef scr_seq_0163_000
	scrdef_end

scr_seq_0163_000:
	play_se SEQ_SE_DP_SELECT
	lockall
	follow_poke_face_player
	follow_poke_interact
	goto _00F0

_0016:
	get_party_lead_alive VAR_TEMP_x4000
	get_partymon_species VAR_TEMP_x4000, VAR_TEMP_x4001
	random VAR_SPECIAL_RESULT, 3
	copyvar VAR_SPECIAL_x8008, VAR_SPECIAL_RESULT
	compare_var_to_value VAR_SPECIAL_x8008, 0
	goto_if_eq _0060
	compare_var_to_value VAR_SPECIAL_x8008, 1
	goto_if_eq _0060
	goto _0060

_004C:
	play_cry VAR_TEMP_x4001, 0
	goto _00F0

_0058:
	scrcmd_597
	goto _00F0

_0060:
	play_cry VAR_TEMP_x4001, 0
	scrcmd_622 obj_partner_poke, VAR_SPECIAL_RESULT
	compare_var_to_value VAR_SPECIAL_RESULT, DIR_NORTH
	call_if_eq _00F4
	compare_var_to_value VAR_SPECIAL_RESULT, DIR_SOUTH
	call_if_eq _00FE
	compare_var_to_value VAR_SPECIAL_RESULT, DIR_WEST
	call_if_eq _0108
	compare_var_to_value VAR_SPECIAL_RESULT, DIR_EAST
	call_if_eq _0112
	wait_movement
	scrcmd_597
	goto _00F0

_00AA:
	play_cry VAR_TEMP_x4001, 0
	get_player_facing VAR_SPECIAL_RESULT
	compare_var_to_value VAR_SPECIAL_RESULT, DIR_NORTH
	call_if_eq _011C
	compare_var_to_value VAR_SPECIAL_RESULT, DIR_SOUTH
	call_if_eq _0126
	compare_var_to_value VAR_SPECIAL_RESULT, DIR_WEST
	call_if_eq _0130
	compare_var_to_value VAR_SPECIAL_RESULT, DIR_EAST
	call_if_eq _013A
	wait_movement
	goto _00F0

_00F0:
	releaseall
	end

_00F4:
	apply_movement obj_partner_poke, _016C
	return

_00FE:
	apply_movement obj_partner_poke, _0158
	return

_0108:
	apply_movement obj_partner_poke, _0194
	return

_0112:
	apply_movement obj_partner_poke, _0180
	return

_011C:
	apply_movement obj_partner_poke, _01A8
	return

_0126:
	apply_movement obj_partner_poke, _01C8
	return

_0130:
	apply_movement obj_partner_poke, _01E8
	return

_013A:
	apply_movement obj_partner_poke, _0208
	return

	.balign 4, 0
_0144:
	step 73, 1
	step 75, 1
	step 61, 1
	step 74, 1
	step_end

	.balign 4, 0
_0158:
	step 73, 1
	step 49, 1
	step 62, 1
	step 74, 1
	step_end

	.balign 4, 0
_016C:
	step 73, 1
	step 48, 1
	step 62, 1
	step 74, 1
	step_end

	.balign 4, 0
_0180:
	step 73, 1
	step 51, 1
	step 62, 1
	step 74, 1
	step_end

	.balign 4, 0
_0194:
	step 73, 1
	step 50, 1
	step 62, 1
	step 74, 1
	step_end

	.balign 4, 0
_01A8:
	step 73, 1
	step 41, 1
	step 42, 1
	step 40, 1
	step 43, 1
	step 41, 1
	step 74, 1
	step_end

	.balign 4, 0
_01C8:
	step 73, 1
	step 40, 1
	step 43, 1
	step 41, 1
	step 42, 1
	step 40, 1
	step 74, 1
	step_end

	.balign 4, 0
_01E8:
	step 73, 1
	step 43, 1
	step 41, 1
	step 42, 1
	step 40, 1
	step 43, 1
	step 74, 1
	step_end

	.balign 4, 0
_0208:
	step 73, 1
	step 42, 1
	step 40, 1
	step 43, 1
	step 41, 1
	step 42, 1
	step 74, 1
	step_end
	.balign 4, 0
