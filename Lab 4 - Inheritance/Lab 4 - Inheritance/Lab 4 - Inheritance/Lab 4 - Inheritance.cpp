#include "BaseAccount.h"
#include "CheckingAccount.h"
#include <iostream>

int main()
{
	
	CheckingAccount Test(5000, 0);
	
	for (size_t i = 0; i < 12; i++)
	{
		Test.Withdraw(5);
		std::cout << Test.GetBalance() << "\n";
	}
	
}
