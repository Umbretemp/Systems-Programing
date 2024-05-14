#include "SavingsAccount.h"

void SavingsAccount::Withdraw(float amount)
{
	if (withdrawals_ < 3)
	{
		BaseAccount::Withdraw(amount);
		std::cout << "Savings Account\n";
	}
	else
		std::cout << "Too many withdawls from this account\n";
}
