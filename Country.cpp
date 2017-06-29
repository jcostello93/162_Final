#include "Country.hpp"


Country::Country()
{

}


Country::~Country()
{
}

void Country::setDirections(Country* n, Country* s, Country* e, Country* w, Country* f)
{
	north = n;
	south = s;
	east = e;
	west = w;
	fifth = f;
}

string Country::getName()
{
	return name; 
}


