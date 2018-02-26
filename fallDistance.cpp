/***********************************
** Author: James Meehan
** Date: 04/11/2017
** Description: This function takes falling time
** as an argument and returns the distance, in
** meters, the object has fallen over that time.
***********************************/

 
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

double fallDistance(double fallingTime)
{
	double distance = 0.5 * 9.8 * fallingTime * fallingTime;
	return distance;
}
 

int main()
{
	double fallingtime;
	cout << "Enter the falling time (in seconds): " << endl;
	cin >> fallingtime; 
	cout << "The falling distance is " << fallDistance(fallingtime) << " meters." << endl;

	return 0;
}

