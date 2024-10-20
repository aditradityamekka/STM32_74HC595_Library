
// File: SHIFT_REGISTER.cpp
// SW Layer:   ECUAL
// Created on: Oct 20, 2024
// Author:     Adit Raditya Mekka
// -------------------------------------------
// Migrated to C++ and optimized with direct register access

#include "SHIFT_REGISTER.hpp"
#include "stm32f1xx_hal.h"

// Direct register access for faster GPIO manipulation
#define GPIO_SET(GPIOx, GPIO_Pin)   ((GPIOx)->BSRR = (GPIO_Pin))
#define GPIO_RESET(GPIOx, GPIO_Pin) ((GPIOx)->BRR = (GPIO_Pin))

void ShiftRegister::shiftOut(uint64_t data) {
    uint8_t numBits = config.numRegister * 8;
    
    for(uint16_t i = 0; i < numBits; i++) {
        // Write the bit value directly to the data pin
        if ((data >> i) & 0x01) {
            GPIO_SET(config.DATA_GPIO_Port, config.DATA_Pin);  // Set data pin high
        } else {
            GPIO_RESET(config.DATA_GPIO_Port, config.DATA_Pin); // Set data pin low
        }

        // Toggle the clock pin to shift the bit
        GPIO_SET(config.CLOCK_GPIO_Port, config.CLOCK_Pin);   // Clock high
        GPIO_RESET(config.CLOCK_GPIO_Port, config.CLOCK_Pin); // Clock low
    }
    
    // Latch the data by toggling the latch pin
    GPIO_RESET(config.LATCH_GPIO_Port, config.LATCH_Pin); // Latch low
    GPIO_SET(config.LATCH_GPIO_Port, config.LATCH_Pin);   // Latch high
}
