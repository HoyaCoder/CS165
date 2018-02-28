#include <iostream>
using namespace std;

void selectionSort(int array[], int size)
{
	int startScan, minIndex, minValue;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan];
		for (int index = startScan + 1; index < size; index++)
		{
			if (array[index] < minValue)
			{
				minValue = array[index];
				minIndex = index;
			}
		}
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
	}
}

int main()
{
	const int SIZE = 6;

	int values[] = { 5, 7, 2, 8, 9, 1 };

	selectionSort(values, 6);

	cout << "The sorted array is: " << endl;
	for (int a = 0; a < SIZE; a++)
		cout << values[a] << " " << endl;

	return 0;
}