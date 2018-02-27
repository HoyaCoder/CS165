/*****************************************************
** Author: James Meehan
** Description: The stringSort() function will take
** an array of strings and sort them in alphabetical
** order, with lowercase letter case letters taking
** precedence over upper case letters
*****************************************************/

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

void stringSort(string array[], int size)
{
	int start, minIndex;
	string minWord;



	for (start = 0; start < (size - 1); start++)
	{
		minIndex = start;
		minWord = array[start];


		for (int index = start + 1; index < size; index++)
		{
			bool nextString = false;
			int count = 0;
			int minIndexLength = array[minIndex].length();
			int indexLength = array[index].length();


			while (!nextString && count < minIndexLength && count < indexLength)
			{
				if (toupper(array[index].at(count)) < toupper(minWord.at(count)))
				{
					minWord = array[index];
					minIndex = index;
					nextString = true;
				}
				else if ((toupper(minWord.at(count)) < toupper(array[index].at(count))))
				{
					nextString = true;
				}
				else if (count + 1 == indexLength)
				{
					minWord = array[index];
					minIndex = index;
					nextString = true;
				}
				else
				{
					count++;
				}
			}
		}
		array[minIndex] = array[start];
		array[start] = minWord;
	}
}



int main()
{
	const int size = 6;
	string alphabet[] = { "dogs", "DOGS", "dad", "daddy", "doggy", "elephant" };

	cout << "The unsorted list of words is: " << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << alphabet[i] << endl;
	}

	cout << endl;

	stringSort(alphabet, 6);

	cout << "The sorted list is: " << endl;
	for (int j = 0; j < 6; j++)
	{
		cout << alphabet[j] << endl;
	}

	return 0;
}