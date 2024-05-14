#include "BaseAccount.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include "CreditAccount.h"
#include "Input.h"
#include "Console.h"
#include <iostream>

int main()
{
	// include memory leak detection ( needs to be at top of main )
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	_CrtSetBreakAlloc(-1); // set block of memory to find memory leak
	_CrtDumpMemoryLeaks();

	CheckingAccount* CheckingPTR = new CheckingAccount(5000);
	SavingsAccount* SavingsPTR = new SavingsAccount(2000);
	CreditAccount* CreditPTR = new CreditAccount(50000);

	//CheckingAccount Test(5000, 0);
	//SavingsAccount TESTER(5000, 0);
	//CreditAccount TESTING(50000, 0);
	//std::cout << "CHECKINGS\n";
	//for (size_t i = 0; i < 12; i++)
	//{
	//	Test.Withdraw(5);
	//	std::cout << Test.GetBalance() << "\n";
	//}
	//
	//std::cout << "SAVINGS\n";
	//for (size_t i = 0; i < 6; i++)
	//{
	//	TESTER.Withdraw(50);
	//	std::cout << TESTER.GetBalance() << "\n";
	//}
	//	std::cout << "CREDIT\n";
	//for (size_t i = 0; i < 6; i++)
	//{
	//	TESTING.Withdraw(10);
	//	std::cout << TESTING.GetBalance() << "\n";
	//}
}
