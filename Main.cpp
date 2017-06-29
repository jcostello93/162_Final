/********************************************************************************
 * Name: John Costello
 * Date: 6/13/2017
 * Final Project
 * This program simulates a game where a player needs to travel through Central
 * Europe to retreive his laptop and submit his HW. 
 ********************************************************************************/

#include <iostream>
#include "Country.hpp"
#include "Austria.hpp"
#include "Switzerland.hpp"
#include "Germany.hpp"
#include "CzechRepublic.hpp"
#include "Slovakia.hpp"
#include "Hungary.hpp"
#include "Menu.hpp"
#include "InputValidation.hpp"
#include "Player.hpp"

int main ()
{
	Menu m; 
	m.menuStart();

	Player *p = new Player; 

	Country* austria = new Austria;
	Country* germany = new Germany;
	Country* switzerland = new Switzerland;
	Country* czech = new CzechRepublic;
	Country* slovakia = new Slovakia;
	Country* hungary = new Hungary;

	austria->setDirections(czech, switzerland, slovakia, germany, hungary);
	germany->setDirections(NULL, austria, czech, switzerland, NULL);
	switzerland->setDirections(germany, NULL, austria, NULL, NULL);
	czech->setDirections(NULL, austria, slovakia, germany, NULL);
	slovakia->setDirections(czech, hungary, NULL, austria, NULL);
	hungary->setDirections(slovakia, NULL, NULL, austria, NULL);

	while (!p->getGameOver() && p->getMoney() > 0)
	{
		if (p->getCountry() == "Austria" && p->getMoney() > 0)
		{
			austria->explore(p);
		}

		if (p->getCountry() == "Switzerland" && p->getMoney() > 0)
		{
			switzerland->explore(p);
		}

		if (p->getCountry() == "Germany" && p->getMoney() > 0)
		{
			germany->explore(p);
		}

		if (p->getCountry() == "Czech Republic" && p->getMoney() > 0)
		{
			czech->explore(p);
		}

		if (p->getCountry() == "Slovakia" && p->getMoney() > 0)
		{
			slovakia->explore(p);
		}

		if (p->getCountry() == "Hungary" && p->getMoney() > 0)
		{
			hungary->explore(p);
		}	

	}

	if (p->getMoney() <= 0)
	{
		cout << "Oh no! You ran out of money!" << endl;
		cout << "Your professor will never believe this ..." << endl;
	}

	if (p->getMoney() > 0)
	{
		cout << "\n\nCongratulations! You found your laptop!!!! " << endl;
		cout << "Now go and turn your assignment in!" << endl; 
	}

	delete austria;
	delete switzerland;
	delete germany;
	delete czech;
	delete slovakia;
	delete hungary; 
	delete p;


	system("pause");
	return 0;
}
