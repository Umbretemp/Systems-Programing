#include <iostream>
#include "TriangleHeap.h"
#include "TriangleStack.h"
#include <vector>

int AddNumbersReturnInt(int* a, int* b);
void AddNumbersReturnVoid(int a, int b, int* sum);
void SwapValues(int* a, int* b);

int main()
{
    TriangleStack Tri1;
    Tri1.setBase(3.6);
    Tri1.setHeight(7.1);
    TriangleStack Tri2;
    Tri2.setBase(1.6);
    Tri2.setHeight(5.9);
    std::vector<TriangleStack> triVect;
    triVect.push_back(Tri1);
    triVect.push_back(Tri2);
    for (auto i = 0; i < triVect.size(); i++)
    {
        std::cout << "TriangleStack#" << i << " " << triVect[i].GetArea() << "\n";
    }



}

int AddNumbersReturnInt(int* a, int* b)
{
    int result;

    result = *a + *b;

    return result;
}

void AddNumbersReturnVoid(int a, int b, int* sum)
{
    int result;

    result = a + b;

    *sum = result;
}

void SwapValues(int* a, int* b)
{
    int tempA = *a;
    int tempB = *b;
    *a = tempB;
    *b = tempA;
}
