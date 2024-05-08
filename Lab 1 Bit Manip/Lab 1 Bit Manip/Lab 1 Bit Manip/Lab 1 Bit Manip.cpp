#include <iostream>
#include <bitset>
#include "../../../Misc/Input/Input.h"
#include "../../../Misc/Console/Console.h"


unsigned int bitField = 17; //Global variable
void Turnon(int bit); //decleration
void TurnOff(int bit);
void Toggle(int bit);

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
            Turnon(Input::GetInteger("Which bit would you like to turn on? ", 0, 31));
            break;
        }
        case 2: // Turn off
        {
            TurnOff(Input::GetInteger("Which bit would you like to turn off? ", 0, 31));
            break;
        }
        case 3: // Toggle
        {
            Toggle(Input::GetInteger("Which bit would you like to toggle on/off? ", 0, 31));
            break;
        }
        case 4: // Negate
        {

            break;
        }
        case 5: // Left Shift
        {

            break;
        }
        case 6: // Right Shift
        {

            break;
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

void Turnon(int bit)
{
    // bitfield 0001 0011 - current value
    // user passed in 3 as bit to turn on
    // figure out what operator to use and what value
    unsigned int on = bitField | 1<<bit;
    // --------------------
    // bitfield 0001 1011
    Print(on);
}

void TurnOff(int bit)
{
    // bitfield 0001 0011 - current value
    // user passed in X as bit to turn off
    // figure out what operator to use and what value
    unsigned int off = bitField & ~0<< bit;
    // --------------------
    // bitfield 
    Print(off);
}

void Toggle(int bit)
{
    unsigned int Toggle = bitField ^ 1<<bit;
    Print(Toggle);
}