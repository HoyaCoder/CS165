#include <iostream>
#include "PreferredProject.hpp"

/******************************************************************
** Description:  This is the constructor for the PreferredProject class.
** It passes its parameters to the base class constructor.
*********************************************************************/
PreferredProject::PreferredProject(double h, double m , double t) : CustomerProject(h, m, t)
{

}

/******************************************************************
** Description:  This is the billAmount() function for the PreferredProject
** class. It overrides the pure virtual function billAmount from the
** CustomerProject class.  It sums the 85% of the cost of materials, 90%
** of the cost of transportation and the amount of hours times $80 (up to
** a max of 100 hours).
*********************************************************************/
double PreferredProject::billAmount()
{
	double labor;
	if (this->getHours() >= 100)
		labor = 100 * 80;
	else
		labor = this->getHours() * 80;

	return labor + (.85 * this->getMaterials() + (.9 * this->getTransportation()));
}
