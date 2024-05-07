#include <iostream>
#include <bitset>

unsigned int bitField = 17; //Global variable
void Turnon(int& bit); //decleration

void Print(const unsigned int _x); //decleration

int main()
{


    // NOT (~)
    //int z = 167;
    //Print(z);
    //z = ~z;
    //Print(z);
    //int a = UINT_MAX;
    //Print(a);
    //a = ~a;
    //Print(a);

    // AND (&)
    //int f = 187;
    //Print(f);
    //int g = 243;
    //Print(g);
    //int h = f & g;
    //Print(h);

    // OR (|)
    //int f = 187;
    //Print(f);
    //int g = 243;
    //Print(g);
    //int h = f | g;
    //Print(h);
}

void Print(const unsigned int _x) //definition
{
    std::cout << "DEC: " << _x << "\t";
    std::cout << std::hex << "HEX: " << _x << std::dec << "\t";
    std::cout << "BIN: " << std::bitset<32>(_x) << "\n";
}

void Turnon(int& bit)
{
    // bitfield 0001 0011 - current value
    // user passed in 3 as bit to turn on
    // figure out what operator to use and what value
    // --------------------
    // bitfield 0001 1011
}