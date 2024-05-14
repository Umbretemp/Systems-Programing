#include "BaseAccount.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include <iostream>

int main()
{
	
	CheckingAccount Test(5000, 0);
	SavingsAccount TESTER(5000, 0);

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
}
