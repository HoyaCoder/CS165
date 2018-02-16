/*******************************************
** Author: James Meehan
** Date: 04/19/2017
** Description: This is the Snack class function
** implementation file. The Snack class provides
** the name, price, & number of calories of a snack
** and can return those values.
********************************************/

#include <iostream>
#include <string>
#include "Snack.hpp"

/*******************************************************
** Description: Default constructor for Snack class with name
** initialized to bottled water, price to 1.75 and calories
** to 0.
********************************************************/
Snack::Snack()
{
	name = "bottled water";
	price = 1.75;
	numCalories = 0;
}

Snack::Snack(std::string s, double p, int c)
{
	name = s;
	price = p;
	numCalories = c;
}

std::string Snack::getName()
{
	return name;
}

double Snack::getPrice()
{
	return price;
}

int Snack::getNumCalories()
{
	return numCalories;
}