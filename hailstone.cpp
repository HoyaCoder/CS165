#include <iostream>

int hailstone(int start);

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int fire;

	cout << "Enter your hailstone integer!" << endl;
	cin >> fire;
	cout << "It took " << hailstone(fire) << " steps to the first 4, 2, 1 sequence." <<  endl;
	return 0;
}

int hailstone(int start)
{
	int counter = 0;

	cout << "Here is your hailstone sequence: " << start << " ";

	while (start != 1)
	{
		if (start % 2 == 0)
		{
			start /= 2;
			counter++;
		}
		else
		{
			start = (start * 3) + 1;
			counter++;
		}

		cout << start << " ";
	}

	cout << endl;
	return counter;
}
