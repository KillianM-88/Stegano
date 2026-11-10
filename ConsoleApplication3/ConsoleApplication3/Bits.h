#pragma once

#include <cstdint>

bool GetBit(std::uint8_t value, unsigned int index);
std::uint8_t SetBit(std::uint8_t value, unsigned int index);
std::uint8_t ClearBit(std::uint8_t value, unsigned int index);
void PrintBits(std::uint8_t value);
std::uint8_t ToggleBit(std::uint8_t value, unsigned int index);
std::uint8_t ToggleBitShort(std::uint8_t value, unsigned int index);