/**********************************************
** Author: James Meehan
** Taxicab Class 
** Provides the location (x, y coordinates) and 
**distance traveled of taxicab objects
***********************************************/

#include <iostream>

using std::endl;
using std::cout;

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
