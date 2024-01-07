#include "stm32f4xx_hal.h"
#include "uart.h"

extern UART_HandleTypeDef huart4, huart5, huart7, huart8;
char message [20] = "Hello from STM32 \r\n";

int main (void)
{
	HAL_Init();

	while(1)
	{

		HAL_UART_Transmit (&huart4, (uint8_t *) message, 100);
		HAL_Delay(10);

	}
}

void SysTick_Handler (void)
{
	HAL_IncTick();
}
