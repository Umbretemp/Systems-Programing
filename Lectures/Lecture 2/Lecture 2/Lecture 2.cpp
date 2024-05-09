#include <iostream>
#include <vector>

void PassbyValue(int y);
void PassbyRef(int& y);
void PassbyPtr(int* yptr);

struct Person
{
	char name[32] = "Jason";
	int age = 35;
};

void PassbyValue(Person p);
void PassbyRef(Person& p);
void PassbyPtr(Person* ptr);

int main()
{

	//// references
	//int x = 10;
	////int& xref; // can't have another name for nothing
	////int& xref = 6; // can't have another name for a constant
	//int& xref = x;
	//std::cout << "x=" << x << " xref=" << xref << std::endl;
	//std::cout << "&x=" << &x << " &xref=" << &xref << std::endl;
	//xref = 20;
	//std::cout << "x=" << x << " xref=" << xref << std::endl;

	// pointers
	int x = 2000;
	////int* xptr = 0x3000; // can't assign constant to pointer
	////int* xptr = nullptr; // can assign to nullptr - ie points to nothing
	////int* xptr = x;
	//int* xptr = &x;
	//std::cout << "x=" << x << " xptr=" << xptr << std::endl;
	//std::cout << "*xptr = " << *xptr << std::endl;
	//// std::cout << "*x = " << *x << std::endl; // can't dereference a non pointer

	//PassbyValue(x);
	//std::cout << "x = " << x << std::endl; // x did not change

	//PassbyRef(x);
	//std::cout << "x = " << x << std::endl; // x changes

	//PassbyPtr(&x);
	//std::cout << "x = " << x << std::endl; // x changes

	//// name of an array is the memory address of the first element of the array
	//int array1[3] = { 0,1,2 };
	//// array1 = &array1[0]
	//std::cout << "array1 = " << array1 << std::endl; // x changes

	//char name[6] = "Jason";
	//// name[5] = 'H'; // replace null terminator \0
	//std::cout << name << std::endl;


	Person person;
	std::cout << person.name << "\t" << person.age << std::endl; // char[] get treated special by << >>

	/*PassbyValue(person);
	std::cout << person.name << "\t" << person.age << std::endl;*//*
	PassbyRef(person);
	std::cout << person.name << "\t" << person.age << std::endl;*/
	/*PassbyPtr(&person);
	std::cout << person.name << "\t" << person.age << std::endl;*/

	//int size = 10;
	//int array2[size]; // can't have variable size array on stack

	//std::vector<int&> ints; // can't have pointer to references
	//int& array3[5];  // can't have pointer to references


	int z;
	std::cin >> z;
	if (std::cin.fail()) // entered non integer
	{
		std::cin.clear(); // clears any errors in cin
		std::cin.ignore(INT_MAX, '\n'); // flush INT_MAX chars until it sees '\n'
	}



}

void PassbyValue(int y)
{
	y = y + 3;
}
void PassbyRef(int& y)
{
	y = y + 3;
}
void PassbyPtr(int* yptr)
{
	*yptr = *yptr + 3;
}

void PassbyValue(Person p)
{
	// p.name = "Tom"; can't assign to an array
	strcpy_s(p.name, "Tom"); // copies "Tom" to p.name
	p.age = 25;

}
void PassbyRef(Person& p)
{
	strcpy_s(p.name, "Tom"); // copies "Tom" to p.name
	p.age = 25;
}
void PassbyPtr(Person* ptr)
{
	strcpy_s((*ptr).name, "Tom");
	(*ptr).age = 25;
	ptr->age = 25; // indirect membership operator - does same as above
}
