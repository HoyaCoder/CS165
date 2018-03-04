/*************************************************************
** Author: James Meehan
** Date: 05/17/2017
** Description: This is the Square class implementation file.
** The Square class inherits from the Rectangle class.
**************************************************************/

#include <iostream>
#include "Rectangle.hpp"
#include "Square.hpp"

/**************************************************************
** Description: Constructor for Square class that takes one
** double as a parameter and passes it to the base constructor 
** for the Rectangle class.
*************************************************************/
Square::Square(double size) : Rectangle(size, size)
{

}

/**************************************************************
** Description: the setLength function overrides the setLength 
** function of the Rectangle class to set both the length and 
** width to the value of the parameter, in order to keep the 
** object a square.
*************************************************************/
void Square::setLength(double x)
{
	Rectangle::setLength(x);
	Rectangle::setWidth(x);
}

/**************************************************************
** Description: the setWidth function overrides the setWidth
** function of the Rectangle class to set both the length and
** width to the value of the parameter, in order to keep the
** object a square.
*************************************************************/
void Square::setWidth(double x)
{
	Rectangle::setWidth(x);
	Rectangle::setLength(x);
}
