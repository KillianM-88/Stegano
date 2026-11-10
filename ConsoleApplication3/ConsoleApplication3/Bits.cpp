#include <cstdint>
#include <bitset>
#include <iostream>
#include "Bits.h"


bool GetBit(std::uint8_t value, unsigned int index) {

	return (value >> index) & 1u;
}
// Getbit(0b01010101, 2) -> true/1

std::uint8_t SetBit(std::uint8_t value, unsigned int index) {

	return value | (1u << index); // 0b01011101 set the bit at index 2 of value to 1
}

std::uint8_t ClearBit(std::uint8_t value, unsigned int index) {

	return value & ~(1u << index); // 0b01010101 clear the bit at index 2 of value to 0
}

void PrintBits(std::uint8_t value) {

	for (int i = 7; i >= 0; --i) {
		std::cout << (GetBit(value, i) ? '1' : '0');
	}
	//std::bitset<8> bits(value);
	//std::cout << bits << std::endl;
}

std::uint8_t ToggleBit(std::uint8_t value = 0b00101101, unsigned int index = 3)
{
	std::uint8_t mask = 1u << index; // 0b00001000 

	std::uint8_t result = value ^ mask; // 0b00100101 toggle the bit at index 3 of value

	return result;
}


std::uint8_t ToggleBitShort(std::uint8_t value, unsigned int index)
{
	return static_cast<std::uint8_t>(value ^ (1u << index));
}

