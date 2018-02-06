#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Inventory
{
private:
	string itemCode;
	string description;
	double price;

public:
	Inventory()
	{
		itemCode = "XXX"; description = " "; price = 0.0;
	}
	
	Inventory(string c, string d, double p)
	{
		itemCode = c;
		description = d;
		price = p;
	}

	string getCode() const
	{
		return itemCode;
	}

	string getDescription() const
	{
		return description;
	}

	double getPrice() const
	{
		return price;
	}
};

int search(const Inventory[], int, string);

int main()
{
	const int SIZE = 6;

	Inventory silverware[SIZE] =
	{ Inventory("S15", "soup spoon", 2.35),
	  Inventory("S12", "teaspoon", 2.19),
	  Inventory("F15", "dinner fork", 3.19),
	  Inventory("F09", "salad fork", 2.25),
	  Inventory("K41", "steak knife", 4.15), };

	string desiredCode;
	int pos;
	char doAgain;

	do
	{
		cout << endl << "Enter an item code: ";
		cin >> desiredCode;

		pos = search(silverware, SIZE, desiredCode);

		if (pos == -1)
			cout << "That code does not exist.";
		else
			cout << "This " << silverware[pos].getDescription()
			<< " costs $" << silverware[pos].getPrice() << endl;

		cout << endl << "Look up another price (Y/N)?";
		cin >> doAgain;
	} while (toupper(doAgain) == 'Y');

	return 0;
}

int search(const Inventory object[], int size, string value)
{
	int index = 0;
	int position = -1;
	bool found = false;

	while (index < size && !found)
	{
		if (object[index].getCode() == value)
		{
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}