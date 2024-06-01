#include "TriangleHeap.h"

float TriangleHeap::GetArea()
{
    //area is base * height / 2
    float result;
  
    result = *mBase * *mHeight / 2;

    return result;
}
