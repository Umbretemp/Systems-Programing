#include <iostream>
#include <bitset>

unsigned int bitField = 17; //Global variable
void Turnon(int& bit); //decleration

void Print(const unsigned int _x); //decleration

int main()
{
    Print(bitField);

}

void Print(const unsigned int _x) //definition
{
    std::cout << "BITFIELD: " << _x << "\t";
    std::cout << std::hex << "HEX: " << _x << std::dec << "\t";
    std::cout << "BIN: " << std::bitset<32>(_x) << "\n";
}

void Turnon(int& bit)
{
    // bitfield 0001 0011 - current value
    // user passed in 3 as bit to turn on
    // figure out what operator to use and what value
    bitField = bitField | bit;
    // --------------------
    // bitfield 0001 1011
}

void TurnOff(int& bit)
{
    // bitfield 0001 0011 - current value
    // user passed in X as bit to turn off
    // figure out what operator to use and what value
    bitField = bitField & ~bit;
    // --------------------
    // bitfield 
}

void Toggle(int& bit)
{
    bitField = bitField ^ bit;
}