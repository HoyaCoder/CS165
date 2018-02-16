/**************************************************************
** Author: James Meehan
** Date: 04/19/2017
** Description: VendSlot.hpp is the VendSlot class specification file.
** The VendSlot class holds a Snack class object and the amount of
** that Snack that is currently in the slot and can return the
** Snack object and the amount of the Snack.  It can also decrement
** the amount of the Snack by 1.
*************************************************************/

#ifndef VENDSLOT_HPP
#define VENDSLOT_HPP

#include "Snack.hpp"

// VendSlot class declaration
class VendSlot
{
private:
	Snack vendSnack;
	int amount;

public:
	VendSlot();
	VendSlot(Snack, int);
	Snack getSnack();
	int getAmount();
	void decrementAmount();
};
#endif