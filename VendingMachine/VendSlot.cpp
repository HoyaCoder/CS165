/**************************************************************
** Author: James Meehan
** Date: 04/19/2017
** Description: VendSlot.hpp is the VendSlot class implementation file.
** The VendSlot class holds a Snack class object and the amount of
** that Snack that is currently in the slot and can return the
** Snack object and the amount of the Snack.  It can also decrement
** the amount of the Snack by 1.
*************************************************************/

/*******************************************************
** Description: Default constructor for VendSlot class with
** the Snack oject set to the default snack and amout
** initialized to 5.
********************************************************/

#include <iostream>
#include "VendSlot.hpp"
#include "Snack.hpp"

VendSlot::VendSlot()
{
	vendSnack;
	amount = 5;
}

VendSlot::VendSlot(Snack s1, int a)
{
	vendSnack = s1;
	amount = a;
}

Snack VendSlot::getSnack()
{
	return vendSnack;
}

int VendSlot::getAmount()
{
	return amount;
}

/*******************************************************
** Description: The VendSlot::decrementAmount() function
** decreases the amount by 1.
********************************************************/
void VendSlot::decrementAmount()
{
	amount--;
}