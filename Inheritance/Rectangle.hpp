/**************************************************************
** Author: James Meehan
** Date: 05/17/2017
** Description: This is the Rectangle class specification file.
** The Rectangle class takes width and length as parameters.
** The class has setWidth and setLenth functions and can return 
** the rectangle's area and perimeter. 
****************************************************************/

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

// Rectangle class declaration
class Rectangle
{
private:
	double length;
	double width;


public:
	Rectangle();
	Rectangle(double, double);
	void setWidth(double);
	void setLength(double);
	double area();
	double perimeter();
};
#endif
