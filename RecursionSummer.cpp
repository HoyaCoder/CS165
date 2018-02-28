/**************************************************
** Author: James Meehan
** Description:  The summer() function takes an array 
** of doubles and recursively finds the sum of the 
** numbers in the array
***************************************************/

#include <iostream>
#include <string>
using namespace std;

double summer(double[], int size);


int main()
{
	double numbers[] = { 1.1, 2.1, 3.1, 4.1, 10.1 };
	cout << "The sum of the numbers in the array is: " << summer(numbers, 5) << endl;
	
	return 0;

}

double summer (double array[], int size)
{
	if (size == 1) 
		return array[0];
	else
		return array[size-1] + summer(array, size - 1);
}