#include "BaseAccount.h"

/// <summary>
/// decreases balance by amount. Does NOT “move” the money anywhere, simply reduces the balance and adds 1 to number of withdrawals
/// </summary>
/// <param name="amount"></param>
void BaseAccount::Withdraw(float amount)
{
	accountBalance_ -= amount;
	withdrawals_++;
	std::cout << "\n$" << amount << ".00 was taken out of your ";
}

/// <summary>
/// increases balance by amount
/// </summary>
/// <param name="amount"></param>
void BaseAccount::Deposit(float amount)
{
	accountBalance_ += amount;
	std::cout << "\n$" << amount << ".00 was deposited into your account.\n";
}



