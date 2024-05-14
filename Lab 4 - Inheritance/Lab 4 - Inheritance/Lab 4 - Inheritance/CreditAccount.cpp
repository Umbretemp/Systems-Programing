#include "CreditAccount.h"
#include <iostream>

void CreditAccount::Withdraw(float amount)
{
	ammountSpent_ += amount;
	if (ammountSpent_ > 40)
	{
		amount += 5000;
		std::cout << "$5000.00 fee added to each transaction after you exceed your $40.00 credit limit. \n";
	}
	BaseAccount::Withdraw(amount);
}
