#include <iostream>
#include "taxicab.hpp"

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

void Taxicab::moveX(int x)
{
	xcoord += x;
	distanceTraveled += abs(x);
}

void Taxicab::moveY(int y)
{
	ycoord += y;
	distanceTraveled += abs(y);
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