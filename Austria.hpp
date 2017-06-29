#pragma once
#ifndef AUSTRIA_HPP
#define AUSTRIA_HPP
#include "Country.hpp"

/*************************************************************************
*						class Austria
*	This is a derived class from Country. 
*************************************************************************/

class Austria :	public Country
{
private:
	bool ticketFound; 
	bool opera; 
	bool stephansDom;
	bool moveOn; 

public:
	Austria();
	~Austria();
	virtual void explore(Player *p);
	char menu1();
	char menu2(); 
	virtual void hostel(Player *p);
};

#endif
