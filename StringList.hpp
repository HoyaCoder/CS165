/*******************************************************
** Author: James Meehan
** Date: 06/02/2017
** Description: This is the StringList class specification file.
** The StringList class has a structure named ListNode that allows
** for the creation of a linked list of strings.  The member
** functions allows elements to be added and replaced.  It also
** can also return the position of an element or return the
** complete list as a vector.
*******************************************************/

#ifndef STRINGLIST_HPP
#define STRINGLIST_HPP
#include <string>
#include <vector>

// StringList class declaration
class StringList
{
protected:
	struct ListNode
	{
		std::string word;
		ListNode *next;
		ListNode(std::string word1, ListNode *next1 = nullptr)
		{
			word = word1;
			next = next1;
		}
	};
	ListNode *head;
public:
	StringList();
	StringList(const StringList &obj);
	~StringList();
	void add(std::string);
	int positionOf(std::string);
	bool setNodeVal(int, std::string);
	std::vector<std::string>getAsVector();
	// void displayList() const;
};
#endif
