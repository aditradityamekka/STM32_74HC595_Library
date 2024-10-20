
// File: SHIFT_REGISTER_cfg.hpp
// SW Layer:   ECUAL
// Created on: Oct 20, 2024
// Author:     Adit Raditya Mekka
// -------------------------------------------
// Migrated to C++ and optimized

#ifndef SHIFT_REGISTER_CFG_HPP_
#define SHIFT_REGISTER_CFG_HPP_

#include "main.h"

typedef struct {
    GPIO_TypeDef* DATA_GPIO_Port;   // Data GPIO port
    uint16_t DATA_Pin;              // Data pin
    GPIO_TypeDef* CLOCK_GPIO_Port;  // Clock GPIO port
    uint16_t CLOCK_Pin;             // Clock pin
    GPIO_TypeDef* LATCH_GPIO_Port;  // Latch GPIO port
    uint16_t LATCH_Pin;             // Latch pin
    uint8_t numRegister;            // Number of registers (daisy-chained)
} shiftReg_CfgType;

extern const shiftReg_CfgType shiftReg_CfgParam;

#endif /* SHIFT_REGISTER_CFG_HPP_ */
