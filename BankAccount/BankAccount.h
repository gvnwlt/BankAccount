#pragma once
#include <string>

class BankAccount
{
public:
	BankAccount(int dep);
	BankAccount()=default; // use this instead of just 'BankAccount()' to define the body without using .cpp
	~BankAccount();
private:
	int BalanceInPennies;
//TODO: finish writing this class
public:
	//std::string GetHolderName() { return "NotImplemented"; }
	int GetHolderName() { return BalanceInPennies; }
	bool operator<(BankAccount const& ba) const;
};