#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Person
{
private:
	std::string name;
	double age;

public:
	std::string getName();
	double getAge();
	Person();
	Person(std::string, double);
};


#endif 
