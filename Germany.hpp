#pragma once
#ifndef GERMANY_HPP
#define GERMANY_HPP
#include "Country.hpp"

/*************************************************************************
*						class Germany
*	This is a derived class from Country.
*************************************************************************/

class Germany :	public Country
{
private:
	bool beer; 
	bool moveOn; 
	bool optionA; 
	bool optionB;
	bool optionC;

public:
	Germany();
	~Germany();
	virtual void explore(Player *p);
	virtual void hostel(Player *p);
	char menu1(); 
	char menu2(Player*);

};

#endif

