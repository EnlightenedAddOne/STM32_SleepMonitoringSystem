#ifndef DHT11_H
#define DHT11_H



//PA11
#define DHT11_IO_IN()  {GPIOA->CRL&=0XFFFFFFF0;GPIOA->CRL|=8;}
#define DHT11_IO_OUT() {GPIOA->CRL&=0XFFFFFFF0;GPIOA->CRL|=3;} 
//IO��������   
#define	DHT11_DQ_OUT(X)  GPIO_WriteBit(GPIOA, GPIO_Pin_0, X)
#define	DHT11_DQ_IN  GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_0)

uint8_t DHT11_Init(void);//��ʼ��DHT11
uint8_t DHT11_Read_Data(u8 *temp,u8 *humi);//��ȡ����
uint8_t DHT11_Read_Byte(void);//��ȡһ���ֽ�
uint8_t DHT11_Read_Bit(void);//��ȡһλ
uint8_t DHT11_Check(void);//���DHT11
void DHT11_Rst(void);//��λDHT11   

#endif