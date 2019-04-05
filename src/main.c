/**
 * \file
 *
 * \brief Empty user application template
 *
 */

/**
 * \
 *Author: Joe Ngigi
 *Date: 03/04/2019
 The application lights up an led for 360ms, powers it off for 360 microseconds and repeats
 * \
 *
 * 
 *
 * 
 *
 * -# Include the ASF header files (through asf.h)
 * -# "Insert system clock initialization code here" comment
 * -# Minimal main function that starts with a call to board_init()
 * -# "Insert application code here" comment
 *
 */

/*
 * Include header files for all drivers that have been imported from
 * Atmel Software Framework (ASF).
 */
/*
 * Support and FAQ: visit <a href="https://www.microchip.com/support/">Microchip Support</a>
 */
#include <asf.h>
//setting clock speed
#define F_CPU 4000000UL
#include <util/delay.h>
#include <avr/io.h>


//#include "myTimer.h"


int main (void)
{
	/* Insert system clock initialization code here (sysclk_init()). */

	board_init();

	while(1){
	
	// Set all pins if port D as outputs
	DDRD =  0xFF;
	
	//set pin 5 of port D HIGH
	PORTD |= (1 << 5);
	
	//pause for 200 ms
	_delay_ms(200);
	
	//turn D5 LOW
	PORTD &= ~(1 << 5);
	
	//pause for 200 milliseconds
	_delay_ms(200);
	
	};
}
