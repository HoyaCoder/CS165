#include <iostream>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int theNumber,
		guess,
		counter = 1;

	//get the random number
	srand(time(NULL));
	theNumber = (rand() % 100) + 1;

	cout << "Guess a number between 1 and 100. " << endl;
	

	do
	{
		cin >> guess;
		if (guess < theNumber)
		{
			cout << "Too low - try again" << endl;
			counter++;
		}
		else if (guess > theNumber)
		{
			cout << "Too high - try again" << endl;
			counter++;
		} 
	} while (guess != theNumber);

	cout << "You guessed the number in " << counter << " tries!" << endl;

	return 0;
}