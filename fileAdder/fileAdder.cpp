/***************i*************************************
** Author: James Meehan
** Date: 04/04/2017 
** Description:  This program opens and reads a file
** and sums the integers in the file. An output file
** and the sum is written to the output file.
****************************************************/

#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;

int main()
{
	ifstream inputFile;
	string fileName;
	double sum = 0.0;
	double value;

	// Prompt the user for the name of the file to open
	cout << "This program will sum all of the numbers in an input file." << endl;
	cout << "Enter the name of the file to read from: ";
	cin >> fileName;

	// Open the input file
	inputFile.open(fileName);

	if (inputFile)  // Check to make sure file opened correctly
	{
		// Add up each integer in file 
		while (inputFile >> value)
		{
			sum += value;
		}

		cout << "Please check the output file to see the sum of the numbers." << endl;

		// Create output file and write the sum to that file
		ofstream outputFile("sum.txt");
		outputFile << "The sum of the numbers in the input file is:" << endl;
		outputFile << sum;

		// Close input and output files
		outputFile.close();
		inputFile.close();
	}
	else  // Display an error message if file could not be opened  
	{
		cout << "could not access file" << endl;
	}

	return 0;

}
