#include "Helper.h"
#include <iostream>
#include <string>
using namespace Helper;

int main()
{
    PrintBinary(GetValidatedInt("Please enter a number: ", 0, INT_MAX)); // defaul positive
    std::cout << "\n";

    std::cout << "You entered " << std::to_string(GetValidatedInt("Please enter a number: ")) << "\n"; // 0 values

    std::cout << "You entered " << std::to_string(GetValidatedInt("Please enter a number: ", 500, INT_MAX)) << "\n"; // min check

    PrintBinary(GetValidatedInt("Please enter a number: ", INT_MIN, 500)); // max check
    
    std::cout << "Test int value: ";
    int testInt;
    std::cin >> testInt;
    if (std::cin.fail())
        ClearInputBuffer();
    else
        ClearInputBuffer();
    PrintBinary(testInt);
}