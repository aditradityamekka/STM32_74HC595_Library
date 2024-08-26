/*
 * File: SHIFT_REGISTER.c
 * SW Layer:   ECUAL
 * Created on: Aug 26, 2024
 * Author:     Adit Raditya Mekka
 * -------------------------------------------
 * For More Information, Visit:
 * https://github.com/aditmekka/STM32_74HC595_Library
 */

#include "SHIFT_REGISTER.h"

void shiftRegister(uint8_t data){
	const shiftReg_CfgType* config = &shiftReg_CfgParam;
	uint8_t numBits = config->numRegister * 8;
	for(uint8_t i = 0; i < numBits; i++){
		HAL_GPIO_WritePin(config->DATA_GPIO_Port, config->DATA_Pin, (data >> i) & 0x01);
        HAL_GPIO_WritePin(config->CLOCK_GPIO_Port, config->CLOCK_Pin, GPIO_PIN_SET);
        HAL_GPIO_WritePin(config->CLOCK_GPIO_Port, config->CLOCK_Pin, GPIO_PIN_RESET);
	}
    HAL_GPIO_WritePin(config->LATCH_GPIO_Port, config->LATCH_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(config->LATCH_GPIO_Port, config->LATCH_Pin, GPIO_PIN_SET);
}
