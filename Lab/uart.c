#include "uart.h"
//uart registers
#define UARTODR * ((volatile unsigned int* const) ((unsigned int *)0x101f1000)) 

void Uart_Send_string (unsigned char *P_tx_string)
{
while (*P_tx_string != '\0')
{ 
/* Loop until end of string */
UARTODR = (unsigned int) (*P_tx_string); /* Transmit char */ 
P_tx_string++; /* Next char */
}
}