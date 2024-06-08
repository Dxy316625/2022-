#ifndef __LED_H
#define __LED_H

//sys.h�����˸��ֱ����ͷ�ļ�
 
#define LED_RED_ON  GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, GPIO_PIN_1)
//�Ե���LED����������к궨�壬����ʹ��
#define LED_RED_OFF  GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, 0)
 
#define LED_BLUE_ON  GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, GPIO_PIN_2)
#define LED_BLUE_OFF GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, 0)
 
#define LED_GREEN_ON  GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3, GPIO_PIN_3)
#define LED_GREEN_OFF GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3, 0)
 
 
//����������ɫ					
//Yellow					
#define LED_YELLOW	\
					LED_RED_ON;\
					LED_GREEN_ON;\
					LED_BLUE_OFF
//Purple
#define LED_PURPLE	\
					LED_RED_ON;\
					LED_GREEN_OFF;\
					LED_BLUE_ON
 
//Cyan
#define LED_CYAN \
					LED_RED_OFF;\
					LED_GREEN_ON;\
					LED_BLUE_ON
					
//����LED����ĳ�ʼ������	
void LED_GPIO_Config(void);
 
#endif
