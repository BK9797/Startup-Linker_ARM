#include "uart.h"
unsigned char string_buffer[100]= "learn-in-depth:Bishoy"; 

void main()
{
	Uart_Send_string(string_buffer);
}