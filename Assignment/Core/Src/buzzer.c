/*
 * buzzer.c
 *
 *  Created on: Dec 6, 2022
 *      Author: ADMIN
 */
#include "buzzer.h"

//uint8_t value = 0;

void buzzer_run(){
	HAL_GPIO_TogglePin(D12_GPIO_Port, D12_Pin);
	HAL_Delay(500);
}

