/*************************************************
** Author: James Meehan
** Date: 04/11/2017
** Description: This program prompts the user for integers
** and displays the largest and smallest integers.
*************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int numberOfInts, bothMaxMin, min, max, temp;

	//Prompt user for number of integers
	cout << "How many integers would you like to enter?" << endl;
	cin >> numberOfInts;

	//Prompt user for integer values
	cout << "Please enter " << numberOfInts << " integers." << endl;

	//If user is only entering one integer, output integer as min and max
	if (numberOfInts == 1)
		{
		cin >> bothMaxMin;
		cout << "min: " << bothMaxMin << endl;
		cout << "max: " << bothMaxMin << endl;
		return 0;
		}

	//Else initialize first value as min and second as max 
	//compare to ensure min is lowest integer and max is highest, switch if necessary
	else
		{
		cin >> min >> max;
			if (min > max)
				{
				temp = min;
				min = max;
				max = temp;
				}
		}

	//If user only enters two integers, output min and max
	if (numberOfInts == 2)
		{
		cout << "min: " << min << endl;
		cout << "max: " << max << endl;
		return 0;
		}

	//initialize counter variable for cases where integers entered is greater than 3
	//counter starts at 2 since first two integer values have already been entered
	int counter = 2;

	//go through each user input and compare to min and max and adjust accordingly
	while (counter < numberOfInts)
		{
		cin >> temp;
		
		if (temp < min)
			min = temp;
		else if (temp > max)
			max = temp;

		counter++;
		}

	//output min and max
	cout << "min: " << min << endl;
	cout << "max: " << max << endl;

	return 0;

}