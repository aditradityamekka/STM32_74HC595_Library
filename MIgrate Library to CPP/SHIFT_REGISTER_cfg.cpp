
// File: SHIFT_REGISTER_cfg.cpp
// SW Layer:   ECUAL
// Created on: Oct 20, 2024
// Author:     Adit Raditya Mekka
// -------------------------------------------
// Migrated to C++ and optimized

#include "SHIFT_REGISTER_cfg.hpp"

const shiftReg_CfgType shiftReg_CfgParam = {
    GPIOB, GPIO_PIN_8,  // Data pin config
    GPIOB, GPIO_PIN_6,  // Clock pin config
    GPIOB, GPIO_PIN_7,  // Latch pin config
    2                   // Number of registers (daisy-chained)
};
