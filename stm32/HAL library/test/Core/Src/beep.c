#include "beep.h"
#include "main.h"
	   
//��ʱ�������Ҫ�ٵ���

/**************************************************************************
�������ܣ��������ӿڳ�ʼ��
��ڲ������� 
����  ֵ����
**************************************************************************/	    
//��������ʼ��

void BEEP_light(void)
{
   
   HAL_GPIO_WritePin(BEEP_GPIO_Port,BEEP_Pin,GPIO_PIN_RESET);
  int i=0;
    for (i=0;i<500000;i++);
   HAL_GPIO_WritePin(BEEP_GPIO_Port,BEEP_Pin,GPIO_PIN_SET);
}

void LED_light(void)
{
   
   HAL_GPIO_WritePin(LED1_GPIO_Port,LED1_Pin,GPIO_PIN_RESET);
 int i=0;
    for (i=0;i<500000;i++);
   HAL_GPIO_WritePin(LED1_GPIO_Port,LED1_Pin,GPIO_PIN_SET);
}
