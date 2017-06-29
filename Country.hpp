#pragma once
#ifndef COUNTRY_HPP
#define COUNTRY_HPP
#include <string>
#include <iostream>
#include "InputValidation.hpp"
#include "Player.hpp"
class Player;
using std::endl; 
using std::cout;
using std::cin; 
using std::string; 

/*************************************************************************
 *						class Country
 *	This is the parent class. It has 2 pure virtual functions. 
 *************************************************************************/

class Country
{
protected:
	Country* north; 
	Country* south;
	Country* east; 
	Country* west;
	Country* fifth; 
	Player p; 
	string name; 
	bool hostelConvo;


public:
	Country();
	virtual ~Country();
	void setDirections(Country*, Country*, Country*, Country*, Country*);
	string getName(); 
	virtual void explore(Player*) = 0; 
	virtual void hostel(Player*) = 0;
};

#endif
