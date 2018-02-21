#include <iostream>
#include <algorithm>

using std::cout;
using std::endl;

double findMedian(int array[], int size)
{
	double median;
	std::sort(array, array + size);

	if (size % 2 == 0)
	{
		median = (array[size / 2] + array[(size / 2)-1]) / 2.0;
	}
	else
	{
		median = (array[size / 2]);
	}
	return median;
}

int main()
{
	const int size = 9;
	int array[size] = {6, 2, 1, 3, 5, 4, 7, 8, 9 };
	cout << "The array is: ";
	for (int i = 0; i < size; i++)
		cout << array[i] << " ";
	cout << endl << endl;

	cout << "The median of the array is " << findMedian(array, size) << endl;
	

	return 0;
}