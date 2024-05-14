#include "CreditAccount.h"
#include <iostream>

void CreditAccount::Withdraw(float amount)
{
	ammountSpent_ += amount;
	if (ammountSpent_ > 40)
		amount += 5000;
	else
		BaseAccount::Withdraw(amount);
}
