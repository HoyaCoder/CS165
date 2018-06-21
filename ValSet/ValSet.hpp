/*******************************************************
** Author: James Meehan
** Date: 05/24/2017
** Description: This is the ValSet class specification file.
** The ValSet class is a template class which stores 
** mathematical values and will dynamically grow if it 
** gets full.
*******************************************************/

#include <iostream>
#include <vector>

#ifndef VALSET_HPP
#define VALSET_HPP


using namespace std;

template <class T>
class ValSet
{
private:
	T *ptr;
	int arraySize;
	int numberOfValues;
public:
	ValSet();
	ValSet(const ValSet &);
	ValSet<T>& operator= (const ValSet &obj);
	~ValSet();
	int size();
	bool isEmpty();
	bool contains(T);
	void add(T);
	void remove(T);
	vector<T> getAsVector();
	void print();


};
#endif