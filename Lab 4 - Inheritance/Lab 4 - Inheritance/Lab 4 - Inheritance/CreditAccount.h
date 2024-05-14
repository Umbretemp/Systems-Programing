#pragma once
#include "BaseAccount.h"
class CreditAccount : public BaseAccount
{
public:
	CreditAccount(float accountBalance_, int withdrawals_)
		: BaseAccount(accountBalance_, withdrawals_)
	{

	}

	void Withdraw(float amount) override;

private:
	int ammountSpent_;
};

