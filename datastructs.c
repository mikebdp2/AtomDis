/*
 * Copyright 2007 Matthias Hopf <mhopf@suse.de>
 *
 * AtomBIOS disassembler + data structure dumper
 *
 * datastructs.c:
 * Data structure dumpers (actual dumper code autogenerated from _factory.pl).
 *
 * License: GPL Version 2.0
 */

#include <stdio.h>
#include <stdint.h>

#include "datastructs.h"
#include "atombios_types.h"

#ifdef USE_ATOMBIOS_RELATED_STUFF
#  include "atombios_rev.h"
#endif


const char *space = "                                                  ";
#define IND(x)  (&space[50-2*((x)>25?25:(x))])
#define FILL(x) (&space[((x)>50?50:(x))])


#ifdef USE_ATOMBIOS_RELATED_STUFF
#include "datastructs_gen.c"
#endif

typedef struct {
    int id, vers, rev;
    data_dumper_t *dumper;
    const char *comment;
} data_dumper_struct_t;

data_dumper_struct_t data_dumpers[] = {
#ifdef USE_ATOMBIOS_RELATED_STUFF
    { 1,   0, 0,  ATOM_MULTIMEDIA_CAPABILITY_INFO_dumper, NULL },
    { 2,   0, 0,  ATOM_MULTIMEDIA_CONFIG_INFO_dumper, NULL },
    { 3,   0, 0,  ATOM_STANDARD_VESA_TIMING_dumper, "Apparently broken" },
    { 4,   1, 1,  ATOM_FIRMWARE_INFO_dumper, NULL },
    { 4,   1, 2,  ATOM_FIRMWARE_INFO_V1_2_dumper, NULL },
    { 4,   1, 3,  ATOM_FIRMWARE_INFO_V1_3_dumper, NULL },
    { 4,   1, 4,  ATOM_FIRMWARE_INFO_V1_4_dumper, NULL },
    { 4,   2, 1,  ATOM_FIRMWARE_INFO_V2_1_dumper, NULL },
    { 4,   2, 2,  ATOM_FIRMWARE_INFO_V2_2_dumper, NULL },
    { 5,   0, 0,  ATOM_DAC_INFO_dumper, NULL },
    { 6,   1, 1,  ATOM_LVDS_INFO_dumper, NULL },
    { 6,   1, 2,  ATOM_LVDS_INFO_V12_dumper, NULL },
    { 7,   0, 0,  ATOM_TMDS_INFO_dumper, NULL },
    { 8,   0, 0,  ATOM_ANALOG_TV_INFO_dumper, NULL },
    { 9,   1, 0,  ATOM_SUPPORTED_DEVICES_INFO_dumper, NULL },
    { 9,   2, 0,  ATOM_SUPPORTED_DEVICES_INFO_2_dumper, NULL },
    { 9,   2, 1,  ATOM_SUPPORTED_DEVICES_INFO_2d1_dumper, NULL },
    { 10,  0, 0,  ATOM_GPIO_I2C_INFO_dumper, NULL },
    { 11,  1, 1,  ATOM_VRAM_USAGE_BY_FIRMWARE_dumper, NULL },
    { 11,  1, 2,  ATOM_VRAM_USAGE_BY_FIRMWARE_dumper, NULL },
    { 11,  1, 3,  ATOM_VRAM_USAGE_BY_FIRMWARE_dumper, NULL },
    { 11,  1, 4,  ATOM_VRAM_USAGE_BY_FIRMWARE_dumper, NULL },
    { 11,  1, 5,  ATOM_VRAM_USAGE_BY_FIRMWARE_V1_5_dumper, NULL },
    { 12,  0, 0,  ATOM_GPIO_PIN_LUT_dumper, NULL },
    { 13,  0, 0,  ATOM_VESA_TO_INTENAL_MODE_LUT_dumper /* Typo */, NULL },
    { 14,  1, 0,  ATOM_COMPONENT_VIDEO_INFO_dumper, NULL },
    { 14,  2, 1,  ATOM_COMPONENT_VIDEO_INFO_V21_dumper, NULL },
    { 15,  1, 0,  ATOM_POWERPLAY_INFO_dumper, NULL },
    { 15,  2, 1,  ATOM_POWERPLAY_INFO_V2_dumper, NULL },
    { 15,  2, 2,  ATOM_POWERPLAY_INFO_V3_dumper, NULL },
    { 15,  4, 1,  ATOM_PPLIB_POWERPLAYTABLE_dumper, NULL },
    { 15,  5, 1,  ATOM_PPLIB_POWERPLAYTABLE_dumper, NULL },
    { 16,  0, 0,  COMPASSIONATE_DATA_dumper, NULL },
    { 17,  0, 0,  NULL /*ATOM_SAVE_RESTORE_INFO_dumper*/, NULL },
    { 18,  0, 0,  ATOM_SPREAD_SPECTRUM_INFO_dumper, NULL },
    { 19,  0, 0,  ATOM_OEM_INFO_dumper, NULL },
    { 20,  0, 0,  ATOM_XTMDS_INFO_dumper, NULL },
    { 21,  0, 0,  NULL /*ATOM_MCLK_SS_INFO_dumper*/, NULL },
    { 22,  0, 0,  ATOM_OBJECT_HEADER_dumper, "Data part see radeonhd" },
    { 23,  0, 0,  INDIRECT_IO_ACCESS_dumper, "Binary data part skipped" },
    { 24,  0, 0,  NULL /*ATOM_MC_INIT_PARAMETER_dumper*/, NULL },
    { 25,  0, 0,  NULL /*ATOM_ASIC_VDDC_INFO_dumper*/, NULL },
    { 26,  0, 0,  ATOM_ASIC_INTERNAL_SS_INFO_dumper, NULL },
    { 27,  0, 0,  NULL /*ATOM_TV_VIDEO_MODE_dumper*/, NULL },
    { 28,  1, 2,  ATOM_VRAM_INFO_V2_dumper, "Completely untested" },
    { 28,  1, 3,  ATOM_VRAM_INFO_V3_dumper, "Only partially supported" },
    { 28,  1, 4,  ATOM_VRAM_INFO_V4_dumper, "Only partially supported" },
    { 28,  2, 1,  ATOM_VRAM_INFO_HEADER_V2_1_dumper, "Only partially supported" },
    { 29,  0, 0,  ATOM_MEMORY_TRAINING_INFO_dumper, "No dynamic dumper yet" },
    { 30,  1, 1,  ATOM_INTEGRATED_SYSTEM_INFO_dumper, NULL },
    { 30,  1, 2,  ATOM_INTEGRATED_SYSTEM_INFO_V2_dumper, NULL },
    { 30,  1, 5,  ATOM_INTEGRATED_SYSTEM_INFO_V5_dumper, NULL },
    { 30,  1, 6,  ATOM_INTEGRATED_SYSTEM_INFO_V6_dumper, NULL },
    { 31,  0, 0,  ATOM_ASIC_PROFILING_INFO_dumper, "Partially unknown" },
    { 32,  0, 0,  ATOM_VOLTAGE_OBJECT_INFO_dumper, NULL },
    { 33,  0, 0,  ATOM_POWER_SOURCE_INFO_dumper, NULL },
    { -1,  0, 0,  NULL }
#endif
} ;

void init_data_dumpers (void)
{
}

data_dumper_t *get_data_dumper (int ind, int *version, int *revision,
				const char **comment)
{
    data_dumper_struct_t *dt, *found = NULL;
    for (dt = data_dumpers; dt->id >= 0 && dt->id <= ind; dt++) {
	if (dt->id != ind)
	    continue;
	if (dt->vers != *version && dt->vers > 0)
	    continue;
	if (dt->rev > *revision)
	    continue;
	found     = dt;
    }
    if (found) {
	*version  = found->vers;
	*revision = found->rev;
	if (comment)
	    *comment = found->comment;
	return found->dumper;
    }
    return NULL;
}
