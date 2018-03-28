/*****************************************************
** Author: James Meehan
** Date: 05/24/17
** Description: This is the class implementation file
** for the CustomerProject class.  The CustomerProject
** class has double fields for hours, cost of materials,
** and cost of transportation.  It has get and set functions
** for each field and also has a pure virtual function
** called billAmount.
********************************************************/

#include <iostream>
#include "CustomerProject.hpp"

/******************************************************************
** Description:  This is the constructor for the CusomterProject class.
** It uses the set methods to initialize the parameters to hours,
** materials, and transportation.
*********************************************************************/
CustomerProject::CustomerProject(double hours, double materials, double transportation)
{
	setHours(hours);
	setMaterials(materials);
	setTransportation(transportation);
}

void CustomerProject::setHours(double hours)
{
	this->hours = hours;
}

void CustomerProject::setMaterials(double materials)
{
	this->materials = materials;
}

void CustomerProject::setTransportation(double transportation)
{
	this->transportation = transportation;
}

double CustomerProject::getHours()
{
	return hours;
}

double CustomerProject::getMaterials()
{
	return materials;
}

double CustomerProject::getTransportation()
{
	return transportation;
}