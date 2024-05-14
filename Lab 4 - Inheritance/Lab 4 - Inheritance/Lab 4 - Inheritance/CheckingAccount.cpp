#include "CheckingAccount.h"

void CheckingAccount::Withdraw(float amount)
{
	if (withdrawals_ >= 10)
		amount += 5;
	BaseAccount::Withdraw(amount);
}
