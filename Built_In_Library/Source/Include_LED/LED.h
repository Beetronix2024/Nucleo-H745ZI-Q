
/**************************************************************
** 	NUCLEO-H755ZI-Q
**  Keil uVision 5
**  These user LEDs are on when the I/O is HIGH value, and are off when the I/O is LOW 
**  created : Ehsan Kolahkaj
**  7/18/2024
***************************************************************/ 


#include "stm32h745xx.h"

/***************************************************************/
/*User LD1: a green user LED is connected to the STM32H7 I/O PB0 (SB65 OFF and SB54
ON) or PA5 (SB65 ON and SB54 OFF) corresponding to the ST Zio D13.*/

#define LED1_PORT      GPIOB
#define LED1           0
#define LED1_ON        LED1_PORT->ODR |= (1UL<<LED1); //set
#define LED1_OFF       LED1_PORT->ODR &= ~(1UL<<LED1); //reset
#define RCC_LED1       RCC_AHB4ENR_GPIOBEN;

void LED1_init(void);

/***************************************************************/ 

/*User LD2: a yellow user LED is connected to PE1.*/

#define LED2_PORT      GPIOE
#define LED2           1
#define LED2_ON        LED2_PORT->ODR |= (1UL<<LED2); //set
#define LED2_OFF       LED2_PORT->ODR &= ~(1UL<<LED2); //reset
#define RCC_LED2       RCC_AHB4ENR_GPIOEEN;

void LED2_init(void);

/***************************************************************/
/*User LD3: a red user LED is connected to PB14.
Caution: LD3 cannot be used if Zio D65 is used (In this case, remove R75).*/

#define LED3_PORT   GPIOB   
#define LED3        14
#define LED3_ON     LED3_PORT->ODR |= (1UL<<LED3); //set
#define LED3_OFF    LED3_PORT->ODR &= ~(1UL<<LED3); //reset
#define RCC_LED3    RCC_AHB4ENR_GPIOBEN;

void LED3_init(void);

/***************************************************************/





