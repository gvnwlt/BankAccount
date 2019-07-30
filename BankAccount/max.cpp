// max.cpp
//
#include "BankAccount.h"

#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;
#include "Person.h"
#include "BankAccount.h"

template <class T>
T max(T const& t1, T const& t2)
{
	return t1 < t2 ? t2 : t1; 
}

int main()
{
	cout << "max of 33 and 44 is " << max(33, 44) << endl;
	string s1 = "hello";
	string s2 = "world";
	cout << "max of " << s1 << " and " << s2 <<
		" is " << max(s1, s2) << endl;
	Person p1("Gavin", "Walters", 123); 
	Person p2("Someone", "Else", 456); 
	cout << "max of " << p1.getName() << " and " << p2.getName() <<
		" is " << max(p1, p2).getName() << endl;
	BankAccount b1(100000); 
	BankAccount b2(5000); 
	cout << "max of " << b1.GetHolderName() << " and " << b2.GetHolderName() << 
		" is " << max(b1, b2).GetHolderName() << endl;

	while (true);
	return 0;
}