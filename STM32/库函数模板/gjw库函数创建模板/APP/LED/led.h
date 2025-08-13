#ifndef __LED_H_
#define __LED_H_
#include "stm32f10x.h"

extern void LED_Init(void);
extern void LED_On(void);
extern void LED_Off(void);
extern void Delay(unsigned int n);
#endif
