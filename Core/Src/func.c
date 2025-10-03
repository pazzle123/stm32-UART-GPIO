/*
 * func.c
 *
 *  Created on: Sep 27, 2025
 *      Author: yaros
 */
#include <stdio.h>
#include "stm32h5xx_hal.h"
#include "string.h"
#include "func.h"
extern UART_HandleTypeDef huart1;

void Send_Massage(uint8_t *data){
	HAL_UART_Transmit(&huart1, data, strlen((char*)data)-1, 100);
}




