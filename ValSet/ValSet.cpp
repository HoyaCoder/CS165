/*******************************************************
** Author: James Meehan
** Date: 05/24/2017
** Description: This is the ValSet class implementation file.
** The ValSet class is a template class which stores 
** mathematical values and will dynamically grow if it 
** gets full.
*******************************************************/

#include <iostream>
#include <vector>
#include <string>
#include "ValSet.hpp"


using std::cout;

/************************************************************
** Description:  This is the default constructor for the ValSet
** class.  It sets array size to 10 and number of Values to 0.
** The default constructor also assigns the pointer to a new 
** array of size 10.
**************************************************************/
template <class T>
ValSet<T>::ValSet()
{
	numberOfValues = 0;
	arraySize = 10;
	ptr = new T[arraySize];
}

template <class T>
void ValSet<T>::print()
{
	for (int index = 0; index < numberOfValues; index++)
	{
		std::cout << ptr[index] << "  ";
	}
}

/************************************************************
** Description:  The contains() function takes a parameter 
** and returns true if the value is in the ValSet and false
** otherwise.
**************************************************************/
template<class T>
bool ValSet<T>::contains(T value)
{
	{
		bool flag = false;
		for (int index = 0; index < numberOfValues; index++)
		{
			if (ptr[index] == value)
				flag = true;
		}

		if (flag)
			return true;
		else
			return false;
	}
}

/************************************************************
** Description:  The add() function takes a parameter
** and adds that value to the ValSet as long as that value does
** not already exist in the ValSet.  If the array is currently 
** full then the size of the array is doubled before the parameter
** value is added.
**************************************************************/
template<class T>
void ValSet<T>::add(T value)
{
	if (!contains(value))
	{
		numberOfValues++;
		if (numberOfValues <= arraySize)
		{
			ptr[numberOfValues - 1] = value;
		}
		else
		{
			arraySize = arraySize * 2;
			T *temp_ptr = new T[arraySize];
			for (int index = 0; index < arraySize; index++)
			{
				temp_ptr[index] = ptr[index];
			}
			delete[] ptr;
			ptr = temp_ptr;
			ptr[numberOfValues - 1] = value;
		}
	}
}

/*****************************************************************
** Description:  This is the copy constructor for the ValSet class.
*****************************************************************/
template <class T>
ValSet<T>::ValSet(const ValSet &obj)
{
	numberOfValues = obj.numberOfValues;
	arraySize = obj.arraySize;
	ptr = new T[arraySize];
	for (int index = 0; index < arraySize; index++)
		ptr[index] = obj.ptr[index];
}

/************************************************************
** Description:  The size() function returns the number of 
** values that are currently stored in the array.
**************************************************************/
template<class T>
int ValSet<T>::size()
{
	return numberOfValues;
}

/************************************************************
** Description:  The isEmpty() function returns true if the 
** ValSet contains no values and returns false otherwise.
**************************************************************/
template<class T>
bool ValSet<T>::isEmpty()
{
	if (numberOfValues == 0)
		return true;
	else
		return false;
}

/************************************************************
** Description:  This is the destructor for the ValSet class.
**************************************************************/
template<class T>
ValSet<T>::~ValSet()
{
	delete ptr;
}

/************************************************************
** Description:  There remove() function removes its parameter
** value from the ValSet as long as it exists in the ValSet.
**************************************************************/
template<class T>
void ValSet<T>::remove(T remove)
{
	int location;
	if (contains(remove))
	{
		for (int index = 0; index < numberOfValues; index++)
		{
			if (ptr[index] == remove)
				location = index;
		}
		numberOfValues--;
		for (int i = location; i < numberOfValues; i++)
		{
			ptr[i] = ptr[i + 1];
		}
	}
}

/************************************************************
** Description:  This is the overloaded assignment operator
** for the ValSet class.
**************************************************************/
template<class T>
ValSet<T>& ValSet<T>::operator= (const ValSet &obj)
{
	if (this != &obj)
	{
		if (arraySize > 0)
		{
			delete[] ptr;
		}
		arraySize = obj.arraySize;
		ptr = new T[arraySize];
		for (int index = 0; index < arraySize; index++)
		{
			ptr[index] = obj.ptr[index];
		}
		numberOfValues = obj.numberOfValues;
	}


	return *this;
}

/**************************************************************
** Description:  The getAsVector() function returns a vector that
** contains all of the values in the ValSet (and only those values).
**************************************************************/
template<class T>
vector<T> ValSet<T>::getAsVector()
{
	std::vector<T> vec(ptr, ptr + numberOfValues);
	return vec;
}

template class ValSet<int>;
template class ValSet<char>;
template class ValSet<std::string>;