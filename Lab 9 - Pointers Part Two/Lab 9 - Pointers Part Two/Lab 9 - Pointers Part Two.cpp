#include <iostream>

int AddNumbersReturnInt(int* a, int* b);
void AddNumbersReturnVoid(int a, int b, int* sum);
void SwapValues(int* a, int* b);

int main()
{
    std::cout << "Hello World!\n";
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
