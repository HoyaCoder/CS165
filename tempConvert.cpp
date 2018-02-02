/*********************************
** Author: James Meehan
** Date: 04/04/2017
** Description: Assignment 1.c, Convert Celsius temperatures to Fahrenheit
*********************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	double celsiusTemp, fahrenheitTemp, multiplier;

	cout << "Please enter a Celsius temperature." << endl;
	cin >> celsiusTemp;
	
	multiplier = 9.0 / 5.0;
	fahrenheitTemp = multiplier * celsiusTemp + 32;
	cout << "The equivalent Fahrenheit temperature is:" << endl;
	cout << fahrenheitTemp << " degrees" << endl;

	return 0;
}
