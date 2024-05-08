#include "Manip.h"

unsigned int Turnon(unsigned int bitField, int bit)
{
    return bitField = bitField | 1 << bit;
}

unsigned int TurnOff(unsigned int bitField, int bit)
{
    return bitField = bitField & ~(1 << bit);
}

unsigned int Toggle(unsigned int bitField, int bit)
{
    return bitField = bitField ^ 1 << bit;
}

unsigned int Negate(unsigned int bitField)
{
    return bitField = ~bitField;
}

unsigned int LeftShift(unsigned int bitField)
{
    return bitField = bitField << 1;
}

unsigned int RightShift(unsigned int bitField)
{
    return bitField = bitField >> 1;
}