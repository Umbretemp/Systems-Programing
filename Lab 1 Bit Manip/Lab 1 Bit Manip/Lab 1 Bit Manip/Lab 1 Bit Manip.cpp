#include <iostream>
#include <bitset>
#include "../../../Misc/Input/Input.h"
#include "../../../Misc/Console/Console.h"

unsigned int bitField = 17; //Global variable
void Turnon(int& bit); //decleration

void Print(const unsigned int _x); //decleration

int main()
{
    int menuselection = 0;
    std::vector<std::string> menuOptions{ "1. Turn On", "2. Turn Off", "3. Toggle", "4. Negate", "5. Left Shift", "6. Right Shift", "7. Exit"};

    do
    {
        Print(bitField);
        menuselection = Input::GetMenuSelection(menuOptions);
        Console::Clear();

        switch (menuselection)
        {
        case 1: // Turn on
        {

        }
        case 2: // Turn off
        {

        }
        case 3: // Toggle
        {

        }
        case 4: // Negate
        {

        }
        case 5: // Left Shift
        {

        }
        case 6: // Right Shift
        {

        }
        default:
            break;
        }

    } while (menuselection != menuOptions.size());

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