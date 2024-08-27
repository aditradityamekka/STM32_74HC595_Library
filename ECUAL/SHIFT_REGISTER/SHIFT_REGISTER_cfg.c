/*
 * File: SHIFT_REGISTER_cfg.c
 * SW Layer:   ECUAL
 * Created on: Aug 26, 2024
 * Author:     Adit Raditya Mekka
 * -------------------------------------------
 * For More Information, Visit:
 * https://github.com/aditmekka/STM32_74HC595_Library
 */

#include "SHIFT_REGISTER_cfg.h"

const shiftReg_CfgType shiftReg_CfgParam = {
	GPIOB, GPIO_PIN_8,	//Data pin config
	GPIOB, GPIO_PIN_6,	//Clock pin ocnfig
	GPIOB, GPIO_PIN_7,	//Latch pin config
	2					//Number of register or daisy chained registers
};
