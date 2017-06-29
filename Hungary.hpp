#pragma once
#ifndef HUNGARY_HPP
#define HUNGARY_HPP
#include "Country.hpp"

/*************************************************************************
*						class Hungary
*	This is a derived class from Country.
*************************************************************************/

class Hungary :	public Country
{
private:
	bool moveOn; 
	bool optionA, optionB; 

public:
	Hungary();
	~Hungary();
	virtual void explore(Player *p);
	virtual void hostel(Player *p);
	char menu1(); 
	char menu2(); 
};
#endif

