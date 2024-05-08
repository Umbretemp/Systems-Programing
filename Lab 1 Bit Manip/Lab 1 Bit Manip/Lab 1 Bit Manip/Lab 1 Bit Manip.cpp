#include <iostream>
#include <bitset>
#include "../../../Misc/Input/Input.h"
#include "../../../Misc/Console/Console.h"


unsigned int bitField; //Global variable
void Turnon(int bit); //decleration
void TurnOff(int bit);
void Toggle(int bit);
void Negate();
void LeftShift();
void RightShift();

void Print(const unsigned int _x); //decleration

int main()
{
    srand((unsigned int)time(NULL));
    bitField = rand() % RAND_MAX;
    int menuselection = 0;
    std::vector<std::string> menuOptions{ "1. Turn On", "2. Turn Off", "3. Toggle", "4. Negate", "5. Left Shift", "6. Right Shift", "7. Exit"};
    Print(bitField);

    do
    {
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
            Negate();
            break;
        }
        case 5: // Left Shift
        {
            LeftShift();
            break;
        }
        case 6: // Right Shift
        {
            RightShift();
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
    std::cout << "BIN: ";
    for (int i = 31; i >= 0; i--)
    {
        std::cout << ((_x >> i) & 1);
        if (i % 4 == 0)
            std::cout << " ";
    }
    std::cout << "\n";
}

void Turnon(int bit)
{
    bitField = bitField | 1 << bit;
    Print(bitField);
}

void TurnOff(int bit)
{
    bitField = bitField & ~(1 << bit);
    Print(bitField);
}

void Toggle(int bit)
{
    bitField = bitField ^ 1<<bit;
    Print(bitField);
}

void Negate()
{
    bitField = ~bitField;
    Print(bitField);
}

void LeftShift()
{
    bitField = bitField << 1;
    Print(bitField);
}

void RightShift()
{
    bitField = bitField >> 1;
    Print(bitField);
}