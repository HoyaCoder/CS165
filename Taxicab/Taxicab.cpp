/*******************************************************
** Author: James Meehan
** Date: 04/19/2017
** Description: This is the Taxicab class implementation file.
** The Taxicab class stores the cabs current x- and y-
** coordinates and distance traveled and can return its
** coordinates and distance traveled.
*******************************************************/

#include <iostream>
#include <cmath>
#include "Taxicab.hpp"

/*******************************************************
** Description: Default constructor for Taxicab class with 
** each field initialized to 0.
********************************************************/
Taxicab::Taxicab()
{
	xcoord = 0;
	ycoord = 0;
	distanceTraveled = 0;
}

Taxicab::Taxicab(int x, int y)
{
	xcoord = x;
	ycoord = y;
	distanceTraveled = 0;
}

/*******************************************************
** Description: Takes an integer parameter and adds the 
** parameter to the x coordinate to update its position and 
** adds the absolute value of the parameter to distance traveled
********************************************************/
void Taxicab::moveX(int x)
{
	xcoord += x;
	distanceTraveled += std::abs(x);
}

/*******************************************************
** Description: Takes an integer parameter and adds the
** parameter to the y coordinate to update its position and
** adds the absolute value of the parameter to distance traveled
********************************************************/
void Taxicab::moveY(int y)
{
	ycoord += y;
	distanceTraveled += std::abs(y);
}

int Taxicab::getY()
{
	return ycoord;
}

int Taxicab::getX()
{
	return xcoord;
}

int Taxicab::getDistanceTraveled()
{
	return distanceTraveled;
}
