/**
  ******************************************************************************
  * @file       stm32f4xx.h
	* @author			sxx
  * @brief      Register base addresses
  * @note       
  * @history
  *  Version    Date            Modification
  *  V1.0.0     Jan-07-2022     1. done
	*
  ******************************************************************************
  */
	
/* On-chip peripherals */
#define PERIPH_BASE			((unsigned int) 0x40000000)
/* AHB1 bus for GPIO */
#define AHB1PERIPH_BASE	(PERIPH_BASE + 0x00020000)

/* GPIO peripherals */
#define GPIOF_BASE			(AHB1PERIPH_BASE + 0x1400)

/* Registers of GPIOF*/
#define GPIOF_MODER 		*(unsigned int*)(GPIOF_BASE + 0x00)
#define GPIOF_OTYPER 		*(unsigned int*)(GPIOF_BASE + 0x04)
#define GPIOF_OSPEEDER 	*(unsigned int*)(GPIOF_BASE + 0x08)
#define GPIOF_PUPDR 		*(unsigned int*)(GPIOF_BASE + 0x0C)
#define GPIOF_IDR 			*(unsigned int*)(GPIOF_BASE + 0x10)
#define GPIOF_ODR 			*(unsigned int*)(GPIOF_BASE + 0x14)
#define GPIOF_BSRR 			*(unsigned int*)(GPIOF_BASE + 0x18)
#define GPIOF_LCKR 			*(unsigned int*)(GPIOF_BASE + 0x1C)
#define GPIOF_AFRL 			*(unsigned int*)(GPIOF_BASE + 0x20)
#define GPIOF_AFRH 			*(unsigned int*)(GPIOF_BASE + 0x24)

/* RCC */
#define RCC_BASE				(AHB1PERIPH_BASE + 0x3800)
/* RCC AHB1 enabler*/
#define RCC_AHB1ENR			*(unsigned int*)(RCC_BASE + 0x30)
