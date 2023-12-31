#include "utils.h"
#include "peripherals/mini_uart.h"
#include "peripherals/gpio.h"

void uart_send ( char c ){
	while(1) {
		if(get32(AUX_MU_LSR_REG)&0x20) 
			break;
	}
	put32(AUX_MU_IO_REG,c);
}

char uart_recv(void){
	while(1){
		if(get32(AUX_MU_LSR_REG)&0x01)
			break;
	}
	return(get32(AUX_MU_IO_REG)&0xff);
}

void uart_send_string(char* str){
	for(int i = 0; str[i] != '\0'; i++){
		uart_send((char)str[i]);
	}
}

void uart_init( void ) {
	u32 selector;
	selector = get32(GPFSEL1);
	selector &= ~(7 << 12);  // clean gpio14 bits
	selector |= 2 << 12;     // set alt5 to gpio14 = TXD1

	selector &= ~(7 << 15);  // clean gpio15 bits
	selector |= 2 << 15;     // set alt5 to gpio15 = RXD1

	put32(GPFSEL1, selector);

	put32(GPPUD, 0);
	delay(150);
	put32(GPPUDCLK0, (1<<14)|(1<<15));
	delay(150);
	put32(GPPUDCLK0, 0);

	put32(AUX_ENABLES, 1); // enable mini uart
	put32(AUX_MU_CNTL_REG, 0);  // disable auto flow control and disable receiver and transmitter(for now)
	put32(AUX_MU_IER_REG,0);    // disable recieve and transmitt interrupts
	put32(AUX_MU_LCR_REG, 3);   // enable 8 but mode
	put32(AUX_MU_MCR_REG, 0);   // set RTS line to be always high
	put32(AUX_MU_BAUD_REG, 541);  // set baud rate to 115200 500MHz sys clock

	put32(AUX_MU_CNTL_REG, 3); // enable transmitter and reciever
}

