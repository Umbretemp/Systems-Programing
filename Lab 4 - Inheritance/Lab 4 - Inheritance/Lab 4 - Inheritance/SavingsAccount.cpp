#include "SavingsAccount.h"
#include <iostream>

void SavingsAccount::Withdraw(float amount)
{
	if (withdrawals_ < 3)
		BaseAccount::Withdraw(amount);
	else
		std::cout << "Too many withdawls from this account\n";
}
