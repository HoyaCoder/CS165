/*******************************************************
** Author: James Meehan  
** Date: 04/03/2017
** Description: Project 1.a, Output your favorite animal
******************************************************/

#include <iostream>
#include <string>

//a simple example program
int main()
{
	std::string faveAnimal;
	std::cout << "Please enter your favorite animal." << std::endl;
	std::cin >> faveAnimal;
	std::cout << "Your favorite animal is the " << faveAnimal;
	std::cout << "." << std::endl;

	return 0;
} 
