#pragma once

#include "common.h"
#include "peripherals/base.h"

// struct GpioPinData {
// 	reg32 reserved;
// 	reg32 data[2];
// }
/*

struct GpioRegs {
	reg32 func_select[6];
	struct GpioPinData output_set;
	struct GpioPinData output_clear;
	struct GpioPinData level;
	struct GpioPinData ev_detect_status;
	struct GpioPinData re_detect_enable;
	struct GpioPinData fe_detect_enable;
	struct GpioPinData hi_detect_enable;
	struct GpioPinData lo_detect_enable;
	struct GpioPinData async_re_detect;
	struct GpioPinData async_fe_detect;
	reg32 reserved[22];
	reg32 pup_pdn_control_reg0;
	reg32 pup_pdn_control_reg1;
	reg32 pup_pdn_control_reg2;
	reg32 pup_pdn_control_reg3;
}
*/

#include "peripherals/base.h"

#define GPFSEL1         (PBASE+0x00200004)
#define GPSET0          (PBASE+0x0020001C)
#define GPCLR0          (PBASE+0x00200028)
#define GPPUD           (PBASE+0x00200094)
#define GPPUDCLK0       (PBASE+0x00200098)

// #define REGS_GPIO ((struct GpioRegs *)(PBASE + 0x00200000))

