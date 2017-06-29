#pragma once
#ifndef SWITZERLAND_HPP
#define SWITZERLAND_HPP
#include "Country.hpp"

/*************************************************************************
*						class Switzerland
*	This is a derived class from Country.
*************************************************************************/

class Switzerland :	public Country
{
private: 
	bool optionA;
	bool optionB; 
	bool moveOn; 
	bool watchFound; 

public:
	Switzerland();
	~Switzerland();
	virtual void explore(Player *p);
	virtual void hostel(Player *p);
	char menu1(); 
	char menu2(); 

};
#endif

