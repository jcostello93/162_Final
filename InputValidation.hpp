/***********************************************************************************
* Name: John Costello
* Date: 5/11/2017
* Project 3
* Description: This program lets two Creatures battle.
***********************************************************************************/


#ifndef INPUTVALIDATION_HPP
#define INPUTVALIDATION_HPP
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class InputValidation
{
private:

public:
	InputValidation();
	int getIntMenu(int);
	char getChar1(); 
	char getChar2();
	char getChar2ab();
	char getChar3();
	char getChar4();
	char getChar5(); 
	char getChar6(); 
	char getChar7(); 
	char getChar9(); 
	int getInt();
	string getString();
	int getInt2();

};

#endif
