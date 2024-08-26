/*
 * File: SHIFT_REGISTER.c
 * SW Layer:   ECUAL
 * Created on: Aug 26, 2024
 * Author:     Adit Raditya Mekka
 * -------------------------------------------
 * For More Information, Visit:
 * https://github.com/aditmekka/STM32_74HC595_Library
 */

#ifndef SHIFT_REGISTER_CFG_H_
#define SHIFT_REGISTER_CFG_H_

#include "main.h"

typedef struct{
	GPIO_TypeDef* DATA_GPIO_Port;	// Data GPIO port
	uint16_t DATA_Pin;				// Data pin
	GPIO_TypeDef* CLOCK_GPIO_Port;	// Clock GPIO port
	uint16_t CLOCK_Pin;				// CLock pin
	GPIO_TypeDef* LATCH_GPIO_Port;	// Latch GPIO port
	uint16_t LATCH_Pin;				// Latch pin
	uint8_t numRegister;			// Number of register or daisy chained registers
} shiftReg_CfgType;

extern const shiftReg_CfgType shiftReg_CfgParam;

#endif /* SHIFT_REGISTER_CFG_H_ */
