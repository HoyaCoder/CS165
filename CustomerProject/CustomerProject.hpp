/*****************************************************
** Author: James Meehan
** Date: 05/24/17
** Description: This is the class specification file
** for the CustomerProject class.  The CustomerProject
** class has double fields for hours, cost of materials,
** and cost of transportation.  It has get and set functions
** for each field and also has a pure virtual function
** called billAmount.
********************************************************/

#include <iostream>

#ifndef CUSTOMERPROJECT_HPP
#define CUSTOMERPROJECT_HPP

using std::cout;
using std::endl;

class CustomerProject
{
private:
	double hours;
	double materials;
	double transportation;
public:
	CustomerProject(double, double, double);
	void setHours(double);
	void setMaterials(double);
	void setTransportation(double);
	double getHours();
	double getMaterials();
	double getTransportation();
	virtual double billAmount() = 0;
};
#endif

