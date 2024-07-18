
/**************************************************************
** 	NUCLEO-H755ZI-Q
**  Keil uVision 5
**  These user LEDs are on when the I/O is HIGH value, and are off when the I/O is LOW 
**  created : Ehsan Kolahkaj
**  7/18/2024
***************************************************************/ 

#include "LED.h"

void LED1_init(void){
  RCC->AHB4ENR |= RCC_LED1;

  LED1_PORT->MODER &= ~(3UL<<2*LED1); //reset
	LED1_PORT->MODER |= (1UL<<2*LED1); //output mode
	
	LED1_PORT->OTYPER &= ~(1UL<<LED1); //reset : push-pull
	
	LED1_PORT->OSPEEDR &= ~(3UL<<2*LED1); //reset
	LED1_PORT->OSPEEDR |= (1UL<<2*LED1); //medium speed
	
	LED1_PORT->PUPDR &= ~(3UL<<2*LED1); //reset : no PULL UP/DOWM
}

void LED2_init(void){
  RCC->AHB4ENR |= RCC_LED2;

  LED2_PORT->MODER &= ~(3UL<<2*LED2);
	LED2_PORT->MODER |= (1UL<<2*LED2);
	
	LED2_PORT->OTYPER &= ~(1UL<<LED2); 
	LED2_PORT->OSPEEDR &= ~(3UL<<2*LED2);
	LED2_PORT->OSPEEDR |= (1UL<<2*LED2);
	
	LED2_PORT->PUPDR &= ~(3UL<<2*LED2);
}

void LED3_init(void){
  RCC->AHB4ENR |= RCC_LED3;

  LED3_PORT->MODER &= ~(3UL<<2*LED3); 
	LED3_PORT->MODER |= (1UL<<2*LED3); 
	
	LED3_PORT->OTYPER &= ~(1UL<<LED3); 
	
	LED3_PORT->OSPEEDR &= ~(3UL<<2*LED3);
	LED3_PORT->OSPEEDR |= (1UL<<2*LED3);
	
	LED3_PORT->PUPDR &= ~(3UL<<2*LED3); 
}

