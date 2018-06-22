/*******************************************************
** Author: James Meehan
** Date: 06/02/2017
** Description: This is the StringList class implementation file.
** The StringList class has a structure named ListNode that allows
** for the creation of a linked list of strings.  The member
** functions allows elements to be added and replaced.  It also
** can also return the position of an element or return the
** complete list as a vector.
*******************************************************/

#include <iostream>
#include "StringList.hpp"
#include <string>
#include <vector>

/*******************************************************
** Description: Default constructor for StringList class
** which initializes a new empty StringList object.
********************************************************/
StringList::StringList()
{
	head = nullptr;
}

/*******************************************************
** Description: Copy constructor for StringList class.
** The copy constructor creates a completely separate
** duplicate copy of a StringList object (deep copy).
********************************************************/
StringList::StringList(const StringList &obj)
{

	if (obj.head == nullptr)
	{
		head = nullptr;
	}

	head = nullptr;
	ListNode *newNode;
	ListNode *nodePtr;
	ListNode *tempPtr;

	nodePtr = obj.head;
	head = new ListNode(obj.head->word);

	head->word = nodePtr->word;

	head->next = nullptr;
	nodePtr = nodePtr->next;
	tempPtr = head;

	while (nodePtr != nullptr)

	{
		newNode = new ListNode(obj.head->word);
		newNode->word = nodePtr->word;
		newNode->next = nullptr;
		tempPtr->next = newNode;
		tempPtr = newNode;
		nodePtr = nodePtr->next;

	}
}

/*******************************************************
** Description: Destructor for the StringList class. The
** destructor deletes all memory that was dynamically
** allocated by the StringList object.
********************************************************/
StringList::~StringList()
{
	ListNode *nodePtr = head;
	while (nodePtr != nullptr)
	{
		ListNode *garbage = nodePtr;
		nodePtr = nodePtr->next;
		delete garbage;

	}
}

/*******************************************************
** Description: The add() function adds a new node containing
** the value of the parameter to the end of the list.
********************************************************/
void StringList::add(std::string word)
{
	if (head == nullptr)
		head = new ListNode(word);
	else
	{
		ListNode *nodePtr = head;
		while (nodePtr->next != nullptr)
			nodePtr = nodePtr->next;

		nodePtr->next = new ListNode(word);
	}

}

/*******************************************************
** Description: The positionOf() function returns the
** zero-based position for the first occurence
** of the parameter in the list or -1 if that value is not
** in the list.
********************************************************/
int StringList::positionOf(std::string compareWord)
{
	ListNode *nodePtr = head;
	int count = 0;
	while (nodePtr)
	{
		if (nodePtr->word == compareWord)
		{
			return count;
		}

		count++;
		nodePtr = nodePtr->next;
	}
	return -1;

}

/*******************************************************
** Description: The setNodeVal() function sets the value of
** the node at that position to the value of the string
** parameter and returns true.  If the position parameter is
** greater than the number of the nodes in the list, the
** operation returns false.
********************************************************/
bool StringList::setNodeVal(int position, std::string newWord)
{
	ListNode *nodePtr = head;
	int count = 0;
	while (nodePtr)
	{
		if (count == position)
		{
			nodePtr->word = newWord;
			return true;
		}

		count++;
		nodePtr = nodePtr->next;
	}

	return false;
}

/*******************************************************
** Description: The getAsVector() function returns a vector
** with the same size, values, and order as the StringList.
********************************************************/
std::vector<std::string> StringList::getAsVector()
{
	std::vector<std::string> vec;
	if (head == nullptr)
		return vec;
	else
	{
		ListNode *nodePtr = head;
		while (nodePtr != nullptr)
		{
			vec.push_back(nodePtr->word);
			nodePtr = nodePtr->next;
		}

	}
	return vec;
}

/*******************************************************
** Description: the displayList() function prints out the
** current values stored in the StringList.  This was included
** for debugging help and not part of the assignment.
********************************************************/
/* void StringList::displayList() const
{
	ListNode *nodePtr = head;
	while (nodePtr)
	{
		std::cout << nodePtr->word << "    ";

		nodePtr = nodePtr->next;
	}
} */
