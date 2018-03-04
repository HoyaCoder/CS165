/******************************************************************
** Author: James Meehan
** Date: 05/17/2017
** Description:  This is the MyInteger class declaration file.  It
** contains all of the constructors and functions related to the 
** MyInteger class.
******************************************************************/

#include <iostream>
#include "MyInteger.hpp"

using std::cout;
using std::endl;

/*********************************************************************
** Description:  This is the copy constructor for the MyInteger class
**********************************************************************/
MyInteger::MyInteger(const MyInteger &obj)
{
	//cout << "Copy constructor allocating pointer." << endl;
	pInteger = new int;
	*pInteger = *obj.pInteger;
}

/**********************************************************************
** Description: This is the constructor for the MyInteger class
***********************************************************************/
MyInteger::MyInteger(int number)
{
	//cout << "Normal constructor allocating pointer." << endl;
	setMyInt(number);
}

/***************************************************************************
** Description:  This is overload operator for the MyInteger class.  It 
** provides each of the two objects its own separate copy of the memory that
** pInteger points to.
*****************************************************************************/
MyInteger& MyInteger::operator=(const MyInteger &obj)
{
	if (this != &obj)
	{
		delete pInteger;
		pInteger = new int;
		*pInteger = *obj.pInteger;
	}

	return *this;
}


/*******************************************************************************
** Description:  The setMyInt function take an integer as a parameter and then
** dynamically allocates memory for that integer and sets Pinteger to point to 
** the integer
********************************************************************************/
void MyInteger::setMyInt(int number)
{
	pInteger = new int;
	*pInteger = number;
}

/*********************************************************************************
** Description: the getMyInt() function returns the integer that pInteger points to
***********************************************************************************/
int MyInteger::getMyInt()
{
	return *pInteger;
}


/*********************************************************************************
** Description: this is the MyInteger destructor to deallocate the memory when the
** object is destroyed.
***********************************************************************************/
MyInteger::~MyInteger()
{
	//cout << "Freeing memory!" << endl;
	delete pInteger;

}
