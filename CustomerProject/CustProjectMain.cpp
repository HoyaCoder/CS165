#include <iostream>
#include "CustomerProject.hpp"
#include "RegularProject.hpp"
#include "PreferredProject.hpp"

using namespace std;

int main()
{
	int hours, materials, transportation;
	cout << "Let's create your project." << endl;
	cout << "How many hours will the project take? " << endl;
	cin >> hours;
	cout << "How much will the materials cost? " << endl;
	cin >> materials;
	cout << "How much will transporation cost? " << endl;
	cin >> transportation;

	RegularProject test(hours, materials, transportation);
	cout << endl << "Regular project details" << endl;
	cout << "The hours are " << test.getHours() << endl;
	cout << "The material cost is " << test.getMaterials() << endl;
	cout << "The transportation cost is " << test.getTransportation() << endl;
	cout << "The total cost is: " << test.billAmount() << endl << endl;

	cout << "Changing hours to 150" << endl;
	test.setHours(150);

	cout << "The hours are " << test.getHours() << endl;
	cout << "The material cost is " << test.getMaterials() << endl;
	cout << "The transportation cost is " << test.getTransportation() << endl;
	cout << "The total cost is: " << test.billAmount() << endl << endl;

	cout << "Creating preferred project with same initial parameters" << endl;
	PreferredProject test2(hours, materials, transportation);
	cout << "The hours are " << test2.getHours() << endl;
	cout << "The material cost is " << test2.getMaterials() << endl;
	cout << "The transportation cost is " << test2.getTransportation() << endl;
	cout << "The total cost is: " << test2.billAmount() << endl << endl;

	cout << "Changing hours to 50" << endl;
	test2.setHours(50);

	cout << "The hours are " << test2.getHours() << endl;
	cout << "The material cost is " << test2.getMaterials() << endl;
	cout << "The transportation cost is " << test2.getTransportation() << endl;
	cout << "The total cost is: " << test2.billAmount() << endl;

}