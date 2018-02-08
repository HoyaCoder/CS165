#include <iostream>
#include "Box.hpp"

using std::endl;
using std::cin;
using std::cout;


int main()
{
	double height, width, length;
	cout << "Please enter the height of the box: ";
	cin >> height;
	cout << endl << "Please enter the width of the box: ";
	cin >> width;
	cout << endl << "Please enter the length of the box: " << endl;
	cin >> length;
	cout << endl;
	
	Box box1(height, width, length);
	
	//default constructor used
	Box box2;

	double volume1 = box1.calcVolume();
	double surfaceArea1 = box1.calcSurfaceArea();
	double volume2 = box2.calcVolume();
	double surfaceArea2 = box2.calcSurfaceArea();

	cout << "Box 1 Volume is: " << volume1 << endl;
	cout << "Box 1 Surface Area is: " << surfaceArea1 << endl;
	cout << endl << "Box 2 used the default constructor" << endl;
	cout << "Box 2 Volume is: " << volume2 << endl;
	cout << "Box 2 Surface Area is: " << surfaceArea2 << endl;
}