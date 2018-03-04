/*************************************************************
** Author: James Meehan
** Date: 05/17/2017
** Description: This is the Rectangle class implementation file.
** The Rectangle class takes width, and length as parameters
** and can return the box's volume and surface area.
**************************************************************/

#include <iostream>
#include "Rectangle.hpp"


/**************************************************************
** Description: Default constructor for Rectangle class with each
** field initialized to 1 using the set methods.
*************************************************************/
Rectangle::Rectangle()
{
	setWidth(1);
	setLength(1);
}

/**************************************************************
** Description: Constructor for Rectangle class that takes two
** doubles as parameters and passes them to the setWidth and 
** setLength functions.
*************************************************************/
Rectangle::Rectangle(double w, double l)
{
	setWidth(w);
	setLength(l);
}

/**************************************************************
** Description: the setWidth function takes a double as a 
** paramter and initliazes the width variable with it.
*************************************************************/
void Rectangle::setWidth(double w)
{
	width = w;
}

/**************************************************************
** Description: the setLength function takes a double as a
** paramter and initliazes the length variable with it.
*************************************************************/
void Rectangle::setLength(double l)
{
	length = l;
}

/*****************************************************************
** Description: the area function returns the area of the rectangle.
***************************************************************/
double Rectangle::area()
{
	return length * width;
}

/**************************************************************
** Description: the perimeter function returns the perimeter of 
**the rectangle.
*************************************************************/
double Rectangle::perimeter()
{
	return (2 * length) + (2 * width);
}
