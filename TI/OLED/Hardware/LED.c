#include "include.h"
#include "LED.h"
 
void LED_GPIO_Config(void)
{
 
    //LED
    //ʹ��GPIOFʱ��
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
		while(!SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOF))
    {
    }
    //����RGB�Ƶ���������Ϊ���ģʽ
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_1);
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_2);
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_3);
}
