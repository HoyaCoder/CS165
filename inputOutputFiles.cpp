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
	cout << "Enter the name of the file to read from: ";
	cin >> fileName;

	// Open the input file
	inputFile.open(fileName);

	// Check to make sure file opened correctly
	if (inputFile)
	{
		// Add up each integer in file 
		while (inputFile >> value)
		{
			sum += value;
		}

		//************DEBUG  REMOVE BEFORE SUBMIT
		cout << sum << endl;
		//************DEBUG REMOVE BEFORE SUBMIT


		// Create output file and write the sum to that file
		ofstream outputFile("sum.txt");
		outputFile << sum;

		// Close input and output files
		outputFile.close();
		inputFile.close();
	}
	else
	{
		// Display an error message if file could not be opened
		cout << "could not access file" << endl;
	}

	return 0;

}