#include<iostream>

#ifndef VALSET_HPP
#define VALSET_HPP

template <class T>
class ValSet
{
private:
	T *ptr;
	int arraySize;
	int numberOfValues;
public:
	ValSet();
	//ValSet(const ValSet &);
	//ValSet& operator= (const ValSet &obj);
	// ~ValSet();
	//int size();
	//bool isEmpty();
	//bool contains(T);
	//void add(T);
	//void remove();
	// getAsVector();
	void print() const;


};
#endif



