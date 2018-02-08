#include <iostream>
#include "Box.hpp"

using std::endl;
using std::cin;
using std::cout;

//sort boxes by volume
void boxSort(Box array[], int size)
{
	Box tempBox;
	bool swapMade;

	do
	{
		swapMade = false;

		for (int i = 0; i < (size - 1); i++)
		{
			if (array[i].calcVolume() < array[i + 1].calcVolume())
			{
				tempBox = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tempBox;
				swapMade = true;
			}
		}
	} while (swapMade);

}

int main()
{
	const int size = 4;
	Box box1(1, 5, 5);
	Box box2(2, 5, 5);
	Box box3(3, 5, 5);
	Box box4(4, 5, 5);
	Box boxes[size] = { box1, box2, box3, box4 };

	
	cout << "The boxes sorted by volume (highest first) are: " << endl;
	boxSort(boxes, size);

	for (int i = 0; i < size; i++)
	{
		cout << boxes[i].calcVolume() << endl;
	}

	cout << endl << "Press any key to exit." << endl;
	cin.ignore();

	return 0;
}


