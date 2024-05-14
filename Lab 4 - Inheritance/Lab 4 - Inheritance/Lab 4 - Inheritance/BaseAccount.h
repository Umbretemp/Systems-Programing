#pragma once
#include <iostream>
class BaseAccount
{
public:
	// ctor
	BaseAccount(float accountBalance_, int withdrawals_ = 0) : 
		accountBalance_(accountBalance_)
		, withdrawals_(withdrawals_)
	{
	}

	// methods
	/// <summary>
	/// decreases balance by amount. Does NOT “move” the money anywhere, simply reduces the balance and adds 1 to number of withdrawals
	/// </summary>
	/// <param name="amount"></param>
	virtual void Withdraw(float amount);

	/// <summary>
	/// increases balance by amount
	/// </summary>
	/// <param name="amount"></param>
	virtual void Deposit(float amount);
	float GetBalance() const { return accountBalance_; }

protected:
	// fields
	float accountBalance_ = 0;
	int withdrawals_ = 0;

private:
};

