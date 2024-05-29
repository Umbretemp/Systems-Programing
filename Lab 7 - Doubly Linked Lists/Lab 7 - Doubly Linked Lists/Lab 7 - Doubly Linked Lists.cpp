#include "Dlist.h"
#define MEMORY_LEAK_LINE -1

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	_CrtSetBreakAlloc(MEMORY_LEAK_LINE); // DO NOT COMMENT OUT THIS LINE
	_CrtDumpMemoryLeaks();
	
	DList<int> testing;
	
	testing.push_back(89); 
	testing.push_back(75); 

	testing.push_back(1); 
	testing.Print();
	testing.Erase(0);

	testing.push_front(5);
	testing.push_front(2); 
	testing.Erase(2);
	testing.Print();
	// I'm completely unsure about how to check for edge cases on this one
}
