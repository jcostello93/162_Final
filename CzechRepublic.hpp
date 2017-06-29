#pragma once
#ifndef CZECHREPUBLIC_HPP
#define CZECHREPUBLIC_HPP

#include "Country.hpp"

/*************************************************************************
*						class CzechRepublic
*	This is a derived class from Country.
*************************************************************************/

class CzechRepublic :	public Country
{
private:
	bool moveOn; 
	bool optionA, optionB, optionC; 
	bool telescopeFound; 
	bool bikeSpotted; 
	bool bike; 

public:
	CzechRepublic();
	~CzechRepublic();
	virtual void explore(Player *p);
	virtual void hostel(Player *p);
	char menu1();
	char menu2(); 
};
#endif
