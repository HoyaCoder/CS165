/*******************************************************
** Author: James Meehan
** Date: 04/19/2017
** Description: This is the Box class specification file.
** The Box class takes height, width, and length as parameters 
** and can return the box's volume and surface area.
*******************************************************/

#ifndef BOX_HPP
#define BOX_HPP

// Box class declaration
class Box
{
private:
	double height;
	double width;
	double length;

public:
	Box();
	Box(double, double, double);
	void setHeight(double);
	void setWidth(double);
	void setLength(double);
	double calcVolume();
	double calcSurfaceArea();
};
#endif
