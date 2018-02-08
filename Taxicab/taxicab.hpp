/*******************************************************
** Author: James Meehan
** Date: 04/19/2017
** Description: This is the Taxicab class specification file.
** The Taxicab class stores the cabs current x- and y-
** coordinates and distance traveled of Taxicab objects and 
** can return their coordinates and distance traveled. 
*******************************************************/

// Taxicab class declaration
#ifndef TAXICAB_HPP
#define TAXICAB_HPP

class Taxicab
{
private:
	int xcoord;
	int ycoord;
	int distanceTraveled;

public:
	Taxicab();
	Taxicab(int, int);
	int getX();
	int getY();
	int getDistanceTraveled();
	void moveX(int);
	void moveY(int);

};
#endif
