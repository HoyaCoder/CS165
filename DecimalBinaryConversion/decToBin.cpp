/**************************************
 * Author: James Meehan
 * Description: decToBin() converts a 
 * decimal number to binary
****************************************/

#include <iostream>
#include <string>
#include <cmath>

using std::string;

string decToBin(int decNumber)
{

	if (decNumber == 1)
	{
		return "1";
	}
	else
	{
		if (decNumber % 2 == 0)
			return decToBin(decNumber / 2) + "0";
		else
			return decToBin(decNumber / 2) + "1";
	}
}




int main()
{
	int x, key;

	do {
	std::cout << "Enter the decimal number: " << std::endl;
	std::cin >> x;
	std::cout << "the binary number is: " << decToBin(x) << std::endl;
	std::cout << "Press 1 to convert another decimal number or press any other key to exit" << std::endl;
	std::cin >> key;
	} while (key == 1);

	return 0;
}
