

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void smallSort(int &a, int &b, int &c);

int main()
{
	int a, b, c;
	cout << "Please provide three numbers to be sorted: " << endl;
	cin >> a >> b >> c;
	smallSort(a, b, c);
	cout << "Sorted: " << a << ", " << b << ", " << c << endl;

	return 0;
}

void smallSort(int &a, int &b, int &c)
{
	int temp;

	//sorting if a is the largest integer
	if (a > b && a > c)
	{
		temp = c;
		c = a;
		a = temp;

		if (a > b)
		{
			temp = a;
			a = b;
			b = temp;

		}
	}

	//sorting if a is the middle integer
	if ((a < b && a > c) || (a > b && a < c))
	{
		temp = a;
		a = b;
		b = temp;

		if (a > c)
		{
			temp = a;
			a = c;
			c = temp;
		}
	}

	//sorting if a is the lowest integer
	if (a < b && a < c && b > c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	
}