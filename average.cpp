/****************************************************************
** Author: James Meehan
** Date: 04/03/2017
** Description: Project 1.b, Take the average of five numbers
****************************************************************/

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;

//Prompt the user for five numbers and take the average
int main() 
{
	double number1, number2, number3, number4, number5;
	cout << "Please enter five numbers." << endl;
	cin >> number1 >> number2  >> number3 >> number4 >> number5;
	
	double average =(number1 + number2 + number3 + number4 + number5) / 5;
	cout << "The average of those numbers is:" << endl;
	cout << average << endl;

	return 0;

}

