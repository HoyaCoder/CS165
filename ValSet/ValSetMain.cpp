#include<iostream>
#include<vector>
#include "ValSet.hpp"

int main()
{
	ValSet<char> mySet;
	mySet.add('A');
	mySet.add('j');
	mySet.add('&');
	mySet.remove('j');
	mySet.add('#');
	int size = mySet.size();
	ValSet<char> mySet2 = mySet;
	bool check1 = mySet2.contains('&');
	bool check2 = mySet2.contains('j');

	if (check1)
		cout << "tis true" << endl;
	else
		cout << "& is not in here" << endl;
	if (check2)
		cout << "tis true";
	else
		cout << "j is not in here" << endl;

	mySet.print();
	cout << endl;
	mySet2.print();

	mySet.remove('A');
	mySet.add('Z');
	cout << endl;
	vector<char> myVector = mySet.getAsVector();
	for (char i : myVector)
		cout << "vector is " << i << "  ";
	vector<char> myVector2 = mySet2.getAsVector();
	for (char i : myVector2)
		cout << "vector is " << i << "  ";

}