// 2405 Lecture 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include "MyPair.h"
#include "DList.h"

struct Person
{
	char name[32] = "Jason";
	int age = 35;
};

template<typename MyType>
void Print(MyType data)
{
	std::cout << "Print: " << data << std::endl;
}

template<typename MyType>
MyType Add(MyType data1, MyType data2)
{
	return data1 + data2;
}

int main()
{
	// include memory leak detection ( needs to be at top of main )
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	_CrtSetBreakAlloc(-1); // set block of memory to find memory leak
	_CrtDumpMemoryLeaks();

	//Print("Jason"); // creates a Print function that takes in a const char*
	//Print(3.14f);  // creates a Print function that takes in a float
	//Person person1;
	////Print(person); // << operator not defined for Person struct, won't compile

	////std::cout << Add("Tom", "Jason"); // cannot add two pointers
	//std::cout << Add('J', 'a') << std::endl;
	//std::cout << Add(3.14f, 6.28f) << std::endl;
	////Person person2;
	////Person person3 = Add(person1, person2); // + operator not defined for Person struct

	//mypair<float> pair1(3.14f, 2.45f);
	//std::cout << pair1.getmax() << std::endl;

	//mypair<char> pair2('J', 'a');
	//std::cout << pair2.getmax() << std::endl;

	//Person person4;
	//Person person5;
	//mypair<Person> pair3(person4, person5);
	//// pair3.getmax(); // does not compile - > not defined for Person struct

	DList<int> list1;
	list1.push_back(0);
	list1.push_back(1);
	list1.push_back(2);

}