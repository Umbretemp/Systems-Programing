// 2405 Lecture 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int& returnRef() // returning a reference to a local variable is bad
{
	int y = 10;
	return y;
}
int* returnPtr() // returning a pointer ( memory address ) to a local variable is bad
{
	int y = 10;
	return &y;
}

int* returnPtrtoNewed() // returning a pointer ( memory address ) to a newed object is fine
{
	int* y = new int(20); // newed objects do not have local scope
	return y;
}

char* setName(const char* input)
{
	std::cout << sizeof(input) << std::endl;
	// find number of chars in passed in array
	int length = strlen(input) + 1; // add one for the null terminator
	// new an char array of that size
	char* nameptr = new char[length];
	// copy chars from input to nameptr;
	strcpy_s(nameptr, length, input);
	// return nameptr
	return nameptr;

}

int main()
{
	// include memory leak detection ( needs to be at top of main )
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	_CrtSetBreakAlloc(-1); // set block of memory to find memory leak
	_CrtDumpMemoryLeaks();

	/*int x = returnRef();
	std::cout << x << std::endl;

	int* xptr = returnPtr();
	std::cout << *xptr << std::endl;*/

	// new and delete
	//int* xptr = new int(10);
	//std::cout << *xptr << std::endl;
	//delete xptr;
	////std::cout << *xptr << std::endl; //Exception thrown: read access violation. xptr was 0x8123.
	////*xptr = 20; // Exception thrown: write access violation. xptr was 0x8123.
	//xptr = nullptr; //set ptr to nullptr so you know it doesn't point to anything valid

	// can only call delete on a pointer that points to something newed
	//int y = 10;
	////delete y; //cannot delete objects that are not pointers
	//int* yptr = &y;
	//delete yptr; //cannot delete objects that not newed ( on the stack )

	/*int* z = returnPtrtoNewed();
	std::cout << *z << std::endl;*/

	// can't have a variable size array on the stack
	/*int size = 10;
	int array1[size];*/

	// sizeof tells you how many bytes an object is
	//std::cout << sizeof(int) << std::endl;
	//std::vector<int> intvec; // vector just has "pointers" to a newed array
	//std::cout << sizeof(intvec) << std::endl;
	//for (int i = 0; i < 100; i++)
	//{
	//	intvec.push_back(i);
	//}
	//std::cout << sizeof(intvec) << std::endl;

	//char* name = setName("Jason");
	////name[7] = 'H'; // heap corruption
	//std::cout << name << std::endl;
	//delete[] name;

	//const int size = 100;
	//int array3[size];
	//int array4[size];
	//std::cout << sizeof(array3) << std::endl;
	//for(int i = 0; i < size; i++)
	//{
	//	array3[i] = i;
	//}
	//// copy from array3 to array4 - loop - slow
	////for (int i = 0; i < size; i++)
	////{
	////	array4[i] = array3[i]; // O(n) - size # of reads and writes
	////}
	//memcpy_s(array4, sizeof(array4), array3, sizeof(array3)); // O(1) - 1 read and 1 write
	//for (int i = 0; i < size; i++)
	//{
	//	std::cout << array4[i] << std::endl;
	//}

	/////// LAB ////////////

	int temp;
	std::cin >> temp;
	if (std::cin.fail()) // checks to see if an error
	{
		std::cin.clear(); // clears errors in cin
		std::cin.ignore(INT_MAX, '\n'); // flushes out remaining chars in the buffer
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
