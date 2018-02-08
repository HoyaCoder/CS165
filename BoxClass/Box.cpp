/*******************************************************
** Author: James Meehan
** Date: 04/19/2017
** Description: This is the Box class specification file.
** The Box class takes height, width, and length as parameters
** and can return the box's volume and surface area.
*******************************************************/

#include <iostream>
#include "Box.hpp"


/*******************************************************
** Description: Default constructor for Box class with each
** field initialized to 1.
********************************************************/
Box::Box()
{
	setHeight(1);
	setWidth(1);
	setLength(1);
}

Box::Box(double h, double w, double l)
{
	setHeight(h);
	setWidth(w);
	setLength(l);
}

void Box::setHeight(double h)
{
	height = h;
}

void Box::setWidth(double w)
{
	width = w;
}

void Box::setLength(double l)
{
	length = l;
}

double Box::calcVolume()
{
	return length * width * height;
}

double Box::calcSurfaceArea()
{
	return (2 * length * width) + (2 * width * height) + (2 * length * height);
}
