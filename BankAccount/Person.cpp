#include "Person.h"

Person::Person(std::string first, std::string last, int arbitrary) : firstname(first), lastname(last), arbitrarynumber(arbitrary)
{
	std::cout << "constructing " << firstname << " " << lastname << std::endl;
}

Person::Person() : arbitrarynumber(0)
{
	std::cout << "constructing " << firstname << " " << lastname << std::endl;
}

Person::~Person()
{
	std::cout << "destructing " << firstname << " " << lastname << std::endl;
}

std::string Person::getName() const
{
	return firstname + " " + lastname;
}

bool Person::operator<(Person const& p) const
{
	return arbitrarynumber < p.arbitrarynumber;
}

bool Person::operator<(int i) const
{
	return arbitrarynumber < i;
}

//bool operator<(int i, Person const& p)
//{
//	return i < p.GetNumber();
//}

bool operator<(int i, Person const& p)
{
	return i < p.arbitrarynumber; // using 'friend' designation in header private members
}
