/*****************************************************
** Author: James Meehan
** Date: 05/24/17
** Description: This is the class specification file
** for the RegularProject class.  The RegularProject
** class inherits from the CustomerProject class.  It has
** a constructor and will override the pure virtual function
** billAmount from the CustomerProject class.
********************************************************/

#include <iostream>
#include "CustomerProject.hpp"

#ifndef REGULARPROJECT_HPP
#define REGULARPROJECT_HPP

class RegularProject : public CustomerProject
{

public:
	RegularProject(double, double, double);
	virtual double billAmount();
};
#endif