
// File: SHIFT_REGISTER.hpp
// SW Layer:   ECUAL
// Created on: Oct 20, 2024
// Author:     Adit Raditya Mekka
// -------------------------------------------
// Migrated to C++ and optimized

#ifndef SHIFT_REGISTER_HPP_
#define SHIFT_REGISTER_HPP_

#include "SHIFT_REGISTER_cfg.hpp"
#include "stdint.h"

class ShiftRegister {
public:
    // Constructor to initialize the configuration
    ShiftRegister(const shiftReg_CfgType& cfg) : config(cfg) {}

    // Method to shift data out to the shift register
    void shiftOut(uint64_t data);

private:
    const shiftReg_CfgType& config;
};

#endif /* SHIFT_REGISTER_HPP_ */
