#include <iostream>
#include <string>

#include "person.hpp"

using std::string;


Person::Person()
{
	name = name;
	age = 0;
}
Person::Person(std::string n, double a)
{
	name = n;
	age = a;
}

std::string Person::getName()
{
	return name;
}

double Person::getAge()
{
	return age;
}

