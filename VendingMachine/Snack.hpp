/**************************************************************
** Author: James Meehan
** Date: 04/19/2017
** Description: Snack.hpp is the Snack class specification file.
** The Snack class holds the name, price and number
** calories of a snack and can return those variables.
*************************************************************/

#ifndef SNACK_HPP
#define SNACK_HPP

#include <string>

// Snack class declaration
class Snack
{
private:
	std::string name;
	double price;
	int numCalories;

public:
	Snack();
	Snack(std::string, double, int);
	std::string getName();
	double getPrice();
	int getNumCalories();
};
#endif
