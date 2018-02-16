/**************************************************************
** Author: James Meehan
** Date: 04/19/2017
** Description: MiniVend.hpp is the MiniVend class implementation file.
** The MiniVend class takes four VendSlot objects and a the initial
** money in the machine as parameters.  It keeps track of the number
** of empty slots in the machine, adjusts for the purchase of a
** snack and can return the money in the machine.
*************************************************************/

#include<iostream>
#include "Snack.hpp"
#include "VendSlot.hpp"
#include "MiniVend.hpp"

MiniVend::MiniVend(VendSlot s1, VendSlot s2, VendSlot s3, VendSlot s4, double m)
{
	slot1 = s1;
	slot2 = s2;
	slot3 = s3;
	slot4 = s4;
	money = m;
}

double MiniVend::getMoney()
{
	return money;
}

/*******************************************************
** Description: The MiniVend::numEmptySlots() function
** returns the number of slots in the machine that are empty.
********************************************************/
int MiniVend::numEmptySlots()
{
	//Initilize a counter variable to 0
	int counter = 0;

	//If amount of the Snack in the slot is 0 increment counter by 1
	//Iterate through each slot
	if (slot1.getAmount() == 0)
		counter++;
	if (slot2.getAmount() == 0)
		counter++;
	if (slot3.getAmount() == 0)
		counter++;
	if (slot4.getAmount() == 0)
		counter++;

	//Counter now stores the number of Empty Slots.  Return value of counter.
	return counter;
}


/*******************************************************
** Description: The MiniVend::valueOfSnacks() function
** returns the monetary value of all the Snacks currently
** in the machine.
********************************************************/
double MiniVend::valueOfSnacks()
{
	//Create a Snack object and store the slot's Snack in it 
	Snack snackSlot1 = slot1.getSnack();
	Snack snackSlot2 = slot2.getSnack();
	Snack snackSlot3 = slot3.getSnack();
	Snack snackSlot4 = slot4.getSnack();

	//Value of each slot is calculated (to improve readability) and then added together
	double valueSlot1 = snackSlot1.getPrice() * slot1.getAmount();
	double valueSlot2 = snackSlot2.getPrice() * slot2.getAmount();
	double valueSlot3 = snackSlot3.getPrice() * slot3.getAmount();
	double valueSlot4 = snackSlot4.getPrice() * slot4.getAmount();
	return valueSlot1 + valueSlot2 + valueSlot3 + valueSlot4;
}

/*******************************************************
** Description: The MiniVend::buySnack() function takes as
** a parameter the number of the slot from which a Snack is
** purchased (from 0-3).  If that slot is empty, no changes
** are made.  If there is a Snack in that slot, the Snack
** amount is decremented by 1 and money is increased by
** the price of the selected Snack.
********************************************************/
void MiniVend::buySnack(int slot)
{
	//switch statement using slot parameter to determine which case to use
	//If statements within the cases then determine if nothing needs to be done
	//or if Snack amount should be decremented and money increased.
	switch (slot)
	{
	case 0:
		if (slot1.getAmount() > 0)
		{
			slot1.decrementAmount();
			Snack tempSnack = slot1.getSnack();
			money += tempSnack.getPrice();
			break;
		}
		break;
	case 1:
		if (slot2.getAmount() > 0)
		{
			Snack tempSnack = slot2.getSnack();
			slot2.decrementAmount();
			money += tempSnack.getPrice();
			break;
		}
		break;
	case 2:
		if (slot3.getAmount() > 0)
		{
			Snack tempSnack = slot3.getSnack();
			slot3.decrementAmount();
			money += tempSnack.getPrice();
			break;
		}
		break;
	case 3:
		if (slot4.getAmount() > 0)
		{
			Snack tempSnack = slot4.getSnack();
			slot4.decrementAmount();
			money += tempSnack.getPrice();
			break;
		}
		break;
	}
}