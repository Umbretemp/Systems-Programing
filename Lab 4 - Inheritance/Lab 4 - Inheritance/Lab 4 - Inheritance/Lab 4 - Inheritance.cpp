#include "BaseAccount.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include "CreditAccount.h"
#include "Input.h"
#include "Console.h"
#include <iostream>

int main()
{
	
	CheckingAccount Test(5000, 0);
	SavingsAccount TESTER(5000, 0);
	CreditAccount TESTING(50000, 0);

	std::cout << "CHECKINGS\n";
	for (size_t i = 0; i < 12; i++)
	{
		Test.Withdraw(5);
		std::cout << Test.GetBalance() << "\n";
	}
	
	std::cout << "SAVINGS\n";
	for (size_t i = 0; i < 6; i++)
	{
		TESTER.Withdraw(50);
		std::cout << TESTER.GetBalance() << "\n";
	}

	std::cout << "CREDIT\n";
	for (size_t i = 0; i < 6; i++)
	{
		TESTING.Withdraw(10);
		std::cout << TESTING.GetBalance() << "\n";
	}
}
