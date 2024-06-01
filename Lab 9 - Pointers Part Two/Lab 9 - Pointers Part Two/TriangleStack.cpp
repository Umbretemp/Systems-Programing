#include "TriangleStack.h"

float TriangleStack::GetArea()
{
    //area is base * height / 2
    float result;

    result = mBase * mHeight / 2;

    return result;
}
