/************************************************************************
** Author: James Meehan
** Date: 05/10/2017
** Description:  converter.cpp has two recursive functions. the binToDec 
** function converts a binary number to a decimal number and the decToBin 
** function converts a decimal number to a binary number.  
************************************************************************/

#include <iostream>
#include <string>
#include <cmath>

using std::string;

/***********************************************************
** Description:: the binToDec function takes a C++ style
** string that is a binary number as a parameter and returns
** the equivalent decimal value.
************************************************************/
int binToDec(string s, int pos)
{
	// Base case - when we get to the end of the string
	if (pos + 1 == s.length())
	{
		if (s[pos] == '1')
			return 1;
		else
			return 0;
	}
	else
	{
		if (s[pos] == '1')
			return pow(2, s.length() - pos - 1) + binToDec(s, pos + 1);
		else
			return 0 + binToDec(s, pos + 1);
	}
}

// Helper function for binToDec. Defaults positon to zero.
int binToDec(string s)
{
	return binToDec(s, 0);
}

/***********************************************************
** Description:: the decToBin function takes a positive 
** integer as a parameter and returns a C++ style string 
** that represents its value in binary format.
************************************************************/
string decToBin(int decNumber)
{
	// Base case is when decNumber eventually equals 1.
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
	int num, key;
	do {
		std::cout << "Enter 1 to convert decimal to binary or 2 to convert binary to decimal" << std::endl;
		std::cin >> num;
		while (num != 1 &&  num != 2) {
			std::cout << "Invalid value entered. Please enter 1 to convert decimal to binary or 2 to convert binary to decimal" << std::endl;
			std::cin >> num; 
		}

		if (num == 2) {
			string binary;
			std::cout << "Enter the binary number: " << std::endl;
			std::cin >> binary;
			std::cout << "the decimal number is: " << binToDec(binary) << std::endl;
		}	

		if (num == 1) {
			int x;
			std::cout << "Enter the decimal number: " << std::endl;
			std::cin >> x;
			std::cout << "the binary number is: " << decToBin(x) << std::endl;
		}

		std::cout << "Press 1 to do another conversion of any other key to exit." << std::endl;
		std::cin >> key;
	} while (key == 1);

	return 0;
}
