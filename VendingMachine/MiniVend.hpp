/**************************************************************
** Author: James Meehan
** Date: 04/19/2017
** Description: MiniVend.hpp is the MiniVend class specification file.
** The MiniVend class takes four VendSlot objects and a the initial
** money in the machine as parameters.  It keeps track of the number
** of empty slots in the machine, adjusts for the purchase of a
** snack and can return the money in the machine.
*************************************************************/

#ifndef MINIVEND_HPP
#define MINIVEND_HPP

// MiniVend class declaration
class MiniVend
{
private:
	VendSlot slot1;
	VendSlot slot2;
	VendSlot slot3;
	VendSlot slot4;
	double money;

public:
	MiniVend();
	MiniVend(VendSlot, VendSlot, VendSlot, VendSlot, double);
	double getMoney();
	int numEmptySlots();
	double valueOfSnacks();
	void buySnack(int);
};
#endif
