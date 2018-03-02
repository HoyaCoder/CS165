/*************************************************************
** Author: James Meehan
** Description: This program converts a binary number to a 
** decimal number
*************************************************************/

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

//helper function to set position to 0;
int binToDec(string s)
{
	return binToDec(s, 0);
} 





int main()
{
	int key;
	do {
		string x;
		std::cout << "Enter the binary number: " << std::endl;
		std::cin >> x;
		std::cout << "The decimal number is: " << binToDec(x) << std::endl;
		std::cout << "Press 1 to convert another binary number or any other key to exit." << std::endl;
		std::cin >> key;
	} while (key == 1);

	return 0;
}