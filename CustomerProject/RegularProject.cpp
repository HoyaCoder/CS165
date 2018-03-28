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
#include "RegularProject.hpp"

/******************************************************************
** Description:  This is the constructor for the RegularProject class.
** It passes its parameters to the base class constructor.
*********************************************************************/
RegularProject::RegularProject(double h, double m, double t) : CustomerProject(h, m, t)
{

}

/******************************************************************
** Description:  This is the billAmount() function for the RegularProject 
** class. It overrides the pure virtual function billAmount from the 
** CustomerProject class.  It sums the cost of material, cost of 
** transportation and the amount of hours times $80.
*********************************************************************/
double RegularProject::billAmount()
{
	return (80 * this->getHours()) + this->getMaterials() + this->getTransportation();
}
