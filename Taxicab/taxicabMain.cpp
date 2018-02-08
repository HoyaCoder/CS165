#include <iostream>
#include "taxicab.hpp"

int main()
{
	Taxicab cab1;
	Taxicab cab2(5, -8);
	cab1.moveX(3);
	cab1.moveY(-4);
	cab1.moveX(-1);
	cout << "Cab 1 has traveled a distance of " << cab1.getDistanceTraveled() << endl;
	cout << "Cab 1 y: " << cab1.getY() << endl;
	cab2.moveY(7);
	cout << "Cab 2 y: " << cab2.getY() << endl;
	cout << "Cab 2 x: " << cab2.getX() << endl;
}