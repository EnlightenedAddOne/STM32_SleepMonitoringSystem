#ifndef _USART_H_
#define _USART_H_


#include "stm32f10x.h"


#define USART_DEBUG		USART3		//���Դ�ӡ��ʹ�õĴ�����


void Usart1_Init(unsigned int baud);		//��˯�ߴ����ڳ�ͻ��������˯�ߴ�ʱ��Ҫ���ô˴���

void Usart2_Init(unsigned int baud);

void Usart3_Init(unsigned int baud);

void Usart_SendString(USART_TypeDef *USARTx, unsigned char *str, unsigned short len);

void UsartPrintf(USART_TypeDef *USARTx, char *fmt,...);

#endif