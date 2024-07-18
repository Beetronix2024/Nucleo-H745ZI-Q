/**************************************************************
** 	NUCLEO-H755ZI-Q
**  Keil uVision 5

**  created : Ehsan Kolahkaj
**  7/18/2024
***************************************************************/ 

#include "stm32h745xx.h"
#include "LED.h"



// Delay using SysTick ****************************************

volatile unsigned long SysTickCnt;

void SysTick_Handler(void){
 SysTickCnt++;
}

void Delay_ms(unsigned long tick){
  unsigned long systickcnt;
	systickcnt = SysTickCnt;
	while((SysTickCnt - systickcnt)<tick);
}
// *************************************************************

int main(void){
	
	LED1_init();
	LED2_init();
	LED3_init();
	
	SystemInit();
	
	SysTick_Config((SystemCoreClock/1000)*1); // SysTick interrupt every 1 ms 
	
	LED2_ON;
	
	
	while(1){
		
	// LED1 and LED2 Blink every 1s
		
	LED1_ON;        
	LED3_OFF;
	Delay_ms(1000); // wait for 1s
	LED1_OFF;
	LED3_ON;
	Delay_ms(1000); // wait for 1s

}
}

