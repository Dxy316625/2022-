#include "include.h"
#include "uart.h"
#include "uartstdio.h"
#include "LED.h"
 
 #ifdef DEBUG
void
__error__(char *pcFilename, uint32_t ui32Line)
{
}
#endif


int main(void)
{     

	//��ʼ������
   LED_GPIO_Config();
 
	
	/*OLED��ʼ��*/
	OLED_Init();

	/*��(0, 0)λ����ʾ�ַ�'A'�������СΪ8*16����*/
	OLED_ShowChar(0, 0, 'A', OLED_8X16);
	
	/*����OLED_Update��������OLED�Դ���������ݸ��µ�OLEDӲ��������ʾ*/
	OLED_Update();
	

  while(1)
  {


			
   }
}


