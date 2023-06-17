#include "gpio.h"

void gpio_pin_set_func(u8 pinNumber, GpioFunc func){
//	u8 reg = pinNumber / 10;
//	u8 startBit = (pinNumber * 3) % 30;
//
//	u32 selector = REGS_GPIO->func_select[reg];
//	selector &= ~(7 << startBit); // clear the register
//	selector |= (func << startBit); // set the reg to the function
//
//	REGS_GPIO->func_select[reg] = selector;
}

void gpio_pin_enable(u8 pinNumber){
	
}
