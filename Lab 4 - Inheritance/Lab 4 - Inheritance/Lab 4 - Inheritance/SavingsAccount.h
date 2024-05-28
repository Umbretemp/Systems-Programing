#pragma once
#include "BaseAccount.h"
class SavingsAccount : public BaseAccount
{
public:
	SavingsAccount(float accountBalance_ = 0, int withdrawals_ = 0)
		: BaseAccount(accountBalance_, withdrawals_)
	{

	}

	void Withdraw(float amount) override;

private:
};

