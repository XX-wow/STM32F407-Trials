/**
  ******************************************************************************
  * @file       main.c
	* @author			sxx
  * @brief      main function
  * @note       
  * @history
  *  Version    Date            Modification
  *  V1.0.0     Dec-1-2021     1. 
  * @todo				1. 
	*
  ******************************************************************************
  */
	
#include "stm32f4xx.h"

int main(void)
{
	/* open the clock of GPIOF */
	RCC_AHB1ENR |= (1<<5);
	
	/*** clear the ports and then set them with target values ***/
	// clear 2 bits: move '11b' to target digits and reverse it, then do 'and' operation with origin value; 0b11 = 3 = 0x03
	// write 2 bits: do 'and' operation with target value moving to target digits
	
	/** PF6 - LED_R */
	/* MODER */
	GPIOF_MODER &= ~(0x03 << (2*6));
	// general purpose output mode = 0b01
	GPIOF_MODER |= (1 << (2*6));
	
	/* OTYPER */
	// 1 bit
	GPIOF_OTYPER &= ~(0x01 << (1*6));
	GPIOF_OTYPER |= (0 << (1*6));
	
	/* OSPEEDER */
	GPIOF_OSPEEDER &= ~(0x03 << (2*6));
	GPIOF_OSPEEDER |= (0 << (2*6));
	
	/* PUPDR */
	GPIOF_PUPDR &= ~(0x03 << (2*6));
	GPIOF_PUPDR |= (0x01 << (2*6));
	
	/* BSRR */
	// move 16 to BSy, set low-level
	GPIOF_BSRR |= (1 <<16 <<6);
	// set high-level
	//GPIOF_BSRR |= (1 <<6);
	
	
	/** PF7 - LED_G */
	/* MODER */
	GPIOF_MODER &= ~(0x03 << (2*7));
	// general purpose output mode = 0b01
	GPIOF_MODER |= (1 << (2*7));
	
	/* OTYPER */
	// 1 bit
	GPIOF_OTYPER &= ~(0x01 << (1*7));
	GPIOF_OTYPER |= (0 << (1*7));
	
	/* OSPEEDER */
	GPIOF_OSPEEDER &= ~(0x03 << (2*7));
	GPIOF_OSPEEDER |= (0 << (2*7));
	
	/* PUPDR */
	GPIOF_PUPDR &= ~(0x03 << (2*7));
	GPIOF_PUPDR |= (0x01 << (2*7));
	
	/* BSRR */
	// move 16 to BSy, set low-level
	GPIOF_BSRR |= (1 <<16 <<7);
	// set high-level
	//GPIOF_BSRR |= (1 <<7);
	
	
	
	/** PF8 - LED_B */
	/* MODER */
	GPIOF_MODER &= ~(0x03 << (2*8));
	// general purpose output mode = 0b01
	GPIOF_MODER |= (1 << (2*8));
	
	/* OTYPER */
	// 1 bit
	GPIOF_OTYPER &= ~(0x01 << (1*8));
	GPIOF_OTYPER |= (0 << (1*8));
	
	/* OSPEEDER */
	GPIOF_OSPEEDER &= ~(0x03 << (2*8));
	GPIOF_OSPEEDER |= (0 << (2*8));
	
	/* PUPDR */
	GPIOF_PUPDR &= ~(0x03 << (2*8));
	GPIOF_PUPDR |= (0x01 << (2*8));
	
	/* BSRR */
	// move 16 to BSy, set low-level
	GPIOF_BSRR |= (1 <<16 <<8);
	// set high-level
	//GPIOF_BSRR |= (1 <<8);
	
	
	
	while(1)
	{
		/* add codes here */
	}
}

void SystemInit(void)
{
	/* temporarily empty, just for a success build */
}
