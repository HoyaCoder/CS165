/**************************************************************
** Author: James Meehan
** Date: 05/17/2017
** Description: This is the Square class specification file.
** The Square class inherits from the Rectangle class.  It has
** a constructor and setLength and setWidth functions.
****************************************************************/

#ifndef SQUARE_HPP
#define SQUARE_HPP
#include "Rectangle.hpp"

// Square class declaration
class Square : public Rectangle
{

public:
	Square(double size);
	void setLength(double);
	void setWidth(double);

};
#endif
