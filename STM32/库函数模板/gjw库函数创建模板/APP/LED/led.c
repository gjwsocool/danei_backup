#include "led.h"

void LED_Init(void){
	  //��GPIOB������ʱ��
	  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	  //����PB5���������50MHz
		GPIO_InitTypeDef GPIO_Config;
	  GPIO_Config.GPIO_Pin=GPIO_Pin_5;
		GPIO_Config.GPIO_Speed=GPIO_Speed_50MHz;
	  GPIO_Config.GPIO_Mode  = GPIO_Mode_Out_PP;
	
		GPIO_Init(GPIOB, &GPIO_Config);
	  //����PB5�ߵ�ƽ
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

