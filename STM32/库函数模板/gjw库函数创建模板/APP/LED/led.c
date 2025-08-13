#include "led.h"

void LED_Init(void){
	  //打开GPIOB控制器时钟
	  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	  //配置PB5推挽输出，50MHz
		GPIO_InitTypeDef GPIO_Config;
	  GPIO_Config.GPIO_Pin=GPIO_Pin_5;
		GPIO_Config.GPIO_Speed=GPIO_Speed_50MHz;
	  GPIO_Config.GPIO_Mode  = GPIO_Mode_Out_PP;
	
		GPIO_Init(GPIOB, &GPIO_Config);
	  //配置PB5高电平
		GPIO_SetBits(GPIOB,GPIO_Pin_5);
}

void LED_On(void){
	GPIO_ResetBits(GPIOB, GPIO_Pin_5);
}
void LED_Off(void){
	GPIO_SetBits(GPIOB, GPIO_Pin_5);
}

void Delay(unsigned int n){
	while(n--);
}

