/***********************************************************************************
* Name: John Costello
* Date: 5/11/2017
* Project 3
* Description: This program lets two Creatures battle.
***********************************************************************************/

#ifndef MENU_HPP
#define MENU_HPP
#include <vector>
using std::vector;

class Menu
{
private: 
	int choice;
public:
	Menu();
	char menuStart();
	char menuPlayAgain();
};

#endif
