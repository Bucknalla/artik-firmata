#import "Serial.h"

void init(){
	  GPIO_PinModeSet(gpioPortA, 1, gpioModeInput, 0);
	  GPIO_PinModeSet(gpioPortA, 0, gpioModePushPull, 1);

	  // Initialize USART asynchronous mode and route pins
	  USART_InitAsync(USART0, &init);
	  USART0->ROUTEPEN |= USART_ROUTEPEN_TXPEN | USART_ROUTEPEN_RXPEN;
	  USART0->ROUTELOC0 = USART_ROUTELOC0_RXLOC_LOC0 | USART_ROUTELOC0_TXLOC_LOC0;
}
