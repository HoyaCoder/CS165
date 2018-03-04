/******************************************************************
** Author: James Meehan
** Date: 05/17/2017
** Description: This is the MyInteger class specification file.
** The MyInteger class has a pointer to an integer and can
** dynamically allocate memory for an int.
******************************************************************/


#ifndef MYINTEGER_HPP
#define MYINTEGER_HPP

// MyInteger class declaration
class MyInteger
{
private:
	int *pInteger;

public:
	MyInteger& operator= (const MyInteger &obj);
	MyInteger(const MyInteger &);
	MyInteger(int);
	~MyInteger();
	void setMyInt(int);
	int getMyInt();

};
#endif
