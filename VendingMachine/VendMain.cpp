#include <iostream>
#include "Snack.hpp"
#include "VendSlot.hpp"
#include "MiniVend.hpp"

using namespace std;

int main()
{

	Snack s1("corn chips", 0.75, 200);
	Snack s2("candy bar", 1.25, 300);
	Snack s3("root beer", 2.00, 450);

	VendSlot vs1(s1, 2);
	VendSlot vs2(s2, 1);
	VendSlot vs3(s3, 0);
	VendSlot vs4;  // five bottles of water

	cout << "Snack 1 is: " << s1.getName() << "  Price is: " << s1.getPrice() << "  Calories: " << s1.getNumCalories() << endl;
	cout << "There are " << vs1.getAmount() << " of these snacks in the machine" << endl << endl;
	cout << "Snack 2 is: " << s2.getName() << "  Price is: " << s2.getPrice() << "  Calories: " << s2.getNumCalories() << endl;
	cout << "There are " << vs2.getAmount() << " these snacks in the machine" << endl << endl;
	cout << "Snack 3 is: " << s3.getName() << "  Price is: " << s3.getPrice() << "  Calories: " << s3.getNumCalories() << endl;
	cout << "There are " << vs3.getAmount() << " these snacks in the machine" << endl << endl;

	MiniVend machine(vs1, vs2, vs3, vs4, 0);

	cout << "Money in the machine at the start is: " << machine.getMoney() << endl;


	cout << "Starting number of empty slots is: " << machine.numEmptySlots() << endl;


	cout << "Starting value of snacks is: " << machine.valueOfSnacks() << endl;


	machine.buySnack(3);
	machine.buySnack(3);
	machine.buySnack(3);
	machine.buySnack(3);
	machine.buySnack(3);
	machine.buySnack(3);
	machine.buySnack(1);
	machine.buySnack(0);
	machine.buySnack(0);
	machine.buySnack(0);
	machine.buySnack(1);
	machine.buySnack(2);


	cout << "There are now this many number of empty slots: " << machine.numEmptySlots() << endl;
	cout << "The value of the snacks is now: " << machine.valueOfSnacks() << endl;
	cout << "The money in the machine is now: " << machine.getMoney() << endl;


	cout << "Press any key to exit." << endl;
	cin.ignore();

	return 0;
}