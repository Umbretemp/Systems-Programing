#include <iostream>
#include "TriangleHeap.h"
#include "TriangleStack.h"
#include <vector>

int AddNumbersReturnInt(int* a, int* b);
void AddNumbersReturnVoid(int a, int b, int* sum);
void SwapValues(int* a, int* b);

int main()
{
    // include memory leak detection ( needs to be at top of main )
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
    _CrtSetBreakAlloc(-1); // set block of memory to find memory leak
    _CrtDumpMemoryLeaks();

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
        std::cout << "TriangleStack#" << i << "'s AREA: " << triVect[i].GetArea() << "\n";
    }

    TriangleHeap TriHeap1;
    TriHeap1.setBase(2.8);
    TriHeap1.setHeight(13.4);
    TriangleHeap TriHeap2;
    TriHeap2.setBase(7.9);
    TriHeap2.setHeight(16.5);
    std::vector<TriangleHeap> HeapVect;
    HeapVect.push_back(TriHeap1);
    HeapVect.push_back(TriHeap2);
    for (auto i = 0; i < HeapVect.size(); i++)
    {
        std::cout << "TriangleHeap#" << i << "'s AREA: " << HeapVect[i].GetArea() << "\n";
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
