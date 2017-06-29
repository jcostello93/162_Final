#pragma once
#ifndef SLOVAKIA_HPP
#define SLOVAKIA_HPP
#include "Country.hpp"

/*************************************************************************
*						class Slovakia
*	This is a derived class from Country.
*************************************************************************/

class Slovakia :	public Country
{

private:
	bool moveOn;
	bool optionA, optionB; 

public:
	Slovakia();
	~Slovakia();
	virtual void explore(Player *p);
	virtual void hostel(Player *p);
	char menu1();
	char menu2(); 

};
#endif

