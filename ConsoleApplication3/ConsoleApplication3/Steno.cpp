#include <cstdint>
#include <bitset>
#include <iostream>


bool GetBit(std::uint8_t value, unsigned int index) {

	return (value >> index) & 1u ; 
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
		std::cout << (GetBit (value, i) ? '1' : '0');
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

int main()
{
	std::uint8_t value_decimal = 1234;
	std::uint8_t value_binary = 0b01010101;
	std::uint8_t value_hex = 0x12AF;

	std::uint8_t value = 0b01010101;
	std::uint8_t value2 = 0b11111111;

	std::uint8_t result_and = value & value2; // 0b01010101
	std::uint8_t result_or = value | value2; // 0b11111111
	std::uint8_t result_xor = value ^ value2; // 0b10101010
	std::uint8_t result_not = ~value; // 0b10101010 invert the bits of value
	std::uint8_t result_shift = value << 1; // 0b10101010 change the bits of value to the left by 1 position
	std::uint8_t result_mask = 1 << 6; // 0b01000000 create a mask with the 6th bit set to 1

	std::uint8_t value_255 = 255;


	std::cout << "Decimal: " << std::dec << +result_and << std::endl;
	std::cout << "Hexadecimal: " << std::hex << +result_and << std::endl;
	std::cout << "Binary: " << std::bitset<8>(result_and) << std::endl;
	std::cout << "Binary custom: "; PrintBits(result_and); std::cout << std::endl;

}

