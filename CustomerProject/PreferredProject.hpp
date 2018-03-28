/*****************************************************
** Author: James Meehan
** Date: 05/24/17
** Description: This is the class specification file
** for the PreferredProject class.  The PreferredProject
** class inherits from the CustomerProject class.  It has 
** a constructor and will override the pure virtual function
** billAmount from the CustomerProject class.
********************************************************/

#include <iostream>
#include "CustomerProject.hpp"

#ifndef PREFERREDPROJECT_HPP
#define PREFERREDPROJECT_HPP

class PreferredProject : public CustomerProject
{

public:
	PreferredProject(double, double, double);
	virtual double billAmount();
};
#endif