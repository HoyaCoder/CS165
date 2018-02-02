/*********************************
** Author: James Meehan
** Date: 04/04/2017
*********************************/

#include <iostream>
#include <cctype>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	double PRICE_1 = 39.00;
	double PRICE_2 = 69.00;
	double PRICE_3 = 99.00;
	double PRICE_4 = 199.00;
	double PER_TREE_DELIVERY = 20.00;
	double MAX_DELIVERY = 100.00;

	int numTrees, height;
	char planted, delivered;

	double treeCost, totalTreeCost, deliveryCost, plantingCost, totalCharges;

	cout << "How many trees were purchased?" << endl;
	cin >> numTrees;

	cout << "What is the height of the trees purchased?" << endl;
	cin >> height;

	cout << "Will the trees be planted by Green Fields? Enter Y or N" << endl;
	cin >> planted;

	cout << "Will the trees be delivered by Green Fields? Enter Y or N" << endl;
	cin >> delivered;

	if (height < 3)
	{
		treeCost = PRICE_1;
		totalTreeCost = numTrees * PRICE_1;
	}
	else if (height >= 3 && height < 6)
	{
		treeCost = PRICE_2;
		totalTreeCost = numTrees * PRICE_2;
	}
	else if (height >= 6 && height <= 8)
	{
		treeCost = PRICE_3;
		totalTreeCost = numTrees * PRICE_3;
	}
	else if (height > 8)
	{
		treeCost = PRICE_4;
		totalTreeCost = numTrees * PRICE_4;
	}
	else
	{
		cout << "ERROR: Invalid height entered";
	}

	if (delivered == 'Y' || delivered == 'y')
	{
		if (PER_TREE_DELIVERY * numTrees >= 100.00)
		{
			deliveryCost = MAX_DELIVERY;
		}
		else
		{
			deliveryCost = numTrees * PER_TREE_DELIVERY;
		}
		if (planted == 'Y' || planted == 'y')
		{
			plantingCost = totalTreeCost * .5;
		}
		else
		{
			plantingCost = 0;
		}
	}
	else
	{
		deliveryCost = 0;
		plantingCost = 0;
	}

	totalCharges = totalTreeCost + deliveryCost + plantingCost;

	cout << endl << endl << "CUSTOMER INVOICE" << endl;
	cout << "Number of Trees Purchase: " << numTrees << endl;
	cout << "Price per tree: " << treeCost << endl;
	cout << "Delivery cost: " << deliveryCost << endl;
	cout << "Planting cost: " << plantingCost << endl;
	cout << "Total charges: " << totalCharges << endl;

	/* to see command prompt output for VS empty project
	int x;
	cin >> x;
	*/

	return 0;
}