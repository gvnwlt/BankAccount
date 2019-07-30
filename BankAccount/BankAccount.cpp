// BankAccount.cpp : Defines the entry point for the console application.
//
#include "BankAccount.h"

BankAccount::BankAccount(int deposit) : BalanceInPennies(deposit)
{

}

BankAccount::~BankAccount()
{

}

bool BankAccount::operator<(BankAccount const& ba) const
{
	return BalanceInPennies < ba.BalanceInPennies;
}

