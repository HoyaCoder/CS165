/********************************************************************************
** Author: James Meehan
** Date: 04/05/2017
** Description: Project 1.d, Provide change with the fewest total number of coins
********************************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	const int QUARTERS = 25;
	const int DIMES = 10;
	const int NICKELS = 5;
		
	int changeNeeded, Q, D, N, P;

	cout << "Please enter an amount in cents less than a dollar." << endl;
	cin >> changeNeeded;

	Q = changeNeeded / QUARTERS;
	D = (changeNeeded % QUARTERS) / DIMES;
	N = ((changeNeeded % QUARTERS) % DIMES) / NICKELS;
	P = ((changeNeeded % QUARTERS) % DIMES) % NICKELS;
	
	cout << "Your change will be:" << endl;
	cout << "Q: " << Q << endl;
	cout << "D: " << D << endl;
	cout << "N: " << N << endl;
	cout << "P: " << P << endl;


	return 0;
}
