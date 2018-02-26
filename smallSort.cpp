/************************************************************
** Author: James Meehan
** Date: 04/27/2017
** Description: the smallSort2 function takes the addresses of 
** three integer variables as parameters and sorts the integers 
** at those addresses into ascending order.
*************************************************************/

#include <iostream>

using namespace std;

void smallSort2(int* a, int* b, int* c)
{
	if (*a > *b && *a > *c)
	{
		int temp = *a;
		*a = *c;
		*c = temp;

		if (*a > *b)
		{
			temp = *a;
			*a = *b;
			*b = temp;

		}
	}
	else if ((*a > *b && *a < *c) || (*a < *b && *a > *c))
	{
		int temp = *a;
		*a = *b;
		*b = temp;

		if (*a > *c)
		{
			int temp = *a;
			*a = *c;
			*c = temp;
		}
	}
	else
	{
		if (*b > *c)
		{
			int temp = *b;
			*b = *c;
			*c = temp;
		}
	}
}

int main()
{
	int a = 300;
	int b = 20;
	int c = 1;
	smallSort2(&a, &b, &c);
	cout << a << ", " << b << ", " << c << endl;
}
