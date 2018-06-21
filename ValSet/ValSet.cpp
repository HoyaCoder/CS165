#include <iostream>
#include "ValSet.hpp"

template <class T>
ValSet<T>::ValSet()
{
	numberOfValues = 0;
	arraySize = 10;
	ptr = new double[arraySize];
	for (int index = 0; index < arraySize; index++)
		ptr[index] = 7;
	
}

/*template <class T>
ValSet<T>::ValSet(const ValSet &obj)
{
	numberOfValues = obj.numberOfValues;
	arraySize = obj.arraySize;
	ptr = new T[arraySize];
	for (int index = 0; index < arraySize; index++)
		ptr[index] = obj.ptr[index];
}

template<class T>
int ValSet<T>::size()
{
	return numberOfValues;
}

template<class T>
bool ValSet<T>::contains(T)
{
	{
		bool flag = false;
		for (int index = 0; index < numberOfValues; index++)
		{
			if (aPtr[index] == T)
				flag = true;
		}

		if (flag)
			return true;
		else
			return false;
	}
} */


/*ValSet& ValSet<T>::operator=(const ValSet & obj)
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
	}

	numberOfValues = obj.numberOfValues;
	return *this;
} */





/* template<class T>
bool ValSet<T>::isEmpty()
{
	if (numberOfValues == 0)
		return true;
	else
		return false;
} */



/*
template<class T>
void ValSet<T>::add(T)
{
	if (!contains(value))
	{
		numberOfValues++;
		if (numberOfValues <= arraySize)
		{
			aPtr[numberOfValues - 1] = value;
		}
		else
		{
			arraySize = arraySize * 2;
			double *temp_ptr = new double[arraySize];
			for (int index = 0; index < arraySize; index++)
			{
				temp_ptr[index] = aPtr[index];
			}
			delete[] aPtr;
			aPtr = temp_ptr;
			aPtr[numberOfValues - 1] = value;
		}
	}
}
*/
template <class T>
void ValSet<T>::print() const
{
	for (int index = 0; index < arraySize; index++)
	{
		std::cout << ptr[index] << "  ";
	}
} 
