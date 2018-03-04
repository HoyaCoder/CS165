#include <iostream>
#include "Rectangle.hpp"
#include "Square.hpp"

using namespace std;

int main()
{
	cout << "Fun with inheritance. The square clas inherits from the rectangle class."  << endl << endl;
	Rectangle r(10, 5);
	cout << "Rectangle r with length 10 and width 5" << endl;
	cout << "The area is " << r.area() << endl;
	cout << "THe perimeter is " << r.perimeter() << endl << endl;

	Square s(5);
	cout << "Square with side length of 5" << endl;
	cout << "The square's area is " << s.area() << endl;
	cout << "The square's perimeter is " << s.perimeter() << endl << endl;

	s.setLength(10);
	cout << "Set square side length to 10" << endl;
	cout << "The square's area is " << s.area() << endl;
	cout << "The square's perimeter is " << s.perimeter() << endl << endl;

	s.setWidth(5);
	cout << "Set square side width to 5" << endl;
	cout << "The square's area is " << s.area() << endl;
	cout << "The square's perimeter is " << s.perimeter() << endl << endl;


	r.setLength(15);
	cout << "Set rectangle length to 15" << endl;
	cout << "Rectangle r area is now" << r.area() << endl;
	cout << "Rectangle r perimeter is now" << r.perimeter() << endl << endl;

	r.setWidth(50);
	cout << "Set rectangle width to 50" << endl;
	cout << "Rectangle r area is now" << r.area() << endl;
	cout << "Rectangle r perimeter  is now" << r.perimeter() << endl << endl;


	cout << "The square's area is " << s.area() << endl;
	cout << "The square's perimeter is " << s. perimeter() << endl;

	return 0;
}
