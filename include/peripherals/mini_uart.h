#pragma once

#include "common.h"
#include "peripherals/base.h"
/*
struct AuxMuRegs {
	reg32 irq_status;
	reg32 enables;
	reg32 reserved[14];
	reg32 mu_io;
	reg32 mu_ier;
	reg32 mu_iir;
	reg32 mu_lcr;
	reg32 mu_mcr;
	reg32 mu_lsr;
	reg32 mu_msr;
	reg32 mu_scratch;
	reg32 mu_control;
	reg32 mu_status;
	reg32 mu_baud_rate;
}
*/

#define REGS_AUX_MU ((struct AuxMuRegs *)(PBASE + 0x00215000))

#define MU_BASE (PBASE + 0x00215000)
#define AUX_IRQ (MU_BASE + 0x00)
#define AUX_ENABLES (MU_BASE + 0x04)
#define AUX_MU_IO_REG (MU_BASE + 0x40)
#define AUX_MU_IER_REG (MU_BASE + 0x44)
#define AUX_MU_IIR_REG (MU_BASE + 0x48)
#define AUX_MU_LCR_REG (MU_BASE + 0x4c)
#define AUX_MU_MCR_REG (MU_BASE + 0x50)
#define AUX_MU_LSR_REG (MU_BASE + 0x54)
#define AUX_MU_MSR_REG (MU_BASE + 0x58)
#define AUX_MU_SCRATCH (MU_BASE + 0x5c)
#define AUX_MU_CNTL_REG (MU_BASE + 0x60)
#define AUX_MU_STAT_REG (MU_BASE + 0x64)
#define AUX_MU_BAUD_REG (MU_BASE + 0x68)

