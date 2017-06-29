#include "CzechRepublic.hpp"

/*****************************************************************
*						default constructor
*	The default constructor initializes the name to the country and the
*	checkpoint variables to false.
******************************************************************/

CzechRepublic::CzechRepublic()
{
	name = "Czech Republic";
	moveOn = false; 
	optionA = optionB = optionC = false; 
	telescopeFound = bike = bikeSpotted = false; 
}


CzechRepublic::~CzechRepublic()
{
}

/***************************************************************
*					explore()
*	This is a virtual function from Country. It takes the player
*	through the city and send him to the next country.
***************************************************************/

void CzechRepublic::explore(Player *p)
{
	cout << "\nIt's great to be back in Prague! What a beautiful city." << endl;

	char c = menu1(); 

	while (moveOn == false)
	{	
		if (c == 'a' || c == 'A')
		{

			if (telescopeFound == true && bike == false && bikeSpotted == true)
			{
				cout << "\nNope. It's just a collapsable bike. " << endl;
				cout << "\na. Take it. " << endl;
				cout << "\nb. Leave it. " << endl;
				optionA = true;

				InputValidation i;
				char b = i.getChar2ab();

				if (b == 'a' || b == 'A')
				{
					cout << "Great. This can save me some money. " << endl;
					p->checkSize("Bike");
					p->setBike(true);
					bike = true;
				}

				if (b == 'b' || b == 'B')
				{
					cout << "I'm not even in shape anyway. " << endl;
					cout << endl << "Inventory: ";
					p->printInventory();
				}
			}


			if (telescopeFound == false) {

				cout << "\nThere are too many tourists! I can't see a thing. " << endl;
				cout << "Hey, is that a telescope on the ground, cool!" << endl;
				cout << "\na. Pick up telescope. " << endl;
				cout << "b. Leave it. " << endl;

				InputValidation i;
				char a = i.getChar2ab();

				if (a == 'a' || a == 'A')
				{
					p->checkSize("Telescope");
					telescopeFound = true;
				}

				if (a == 'b' || a == 'B')
				{
					cout << "Oh well, it probably didn't work anyway." << endl;
				}
			}
		}
			if (c == 'b' || c == 'B')
			{
				if (telescopeFound == false)
				{
					cout << "\nIt's too high up, I can't see anything!" << endl;
				}

				if (telescopeFound == true)
				{
					optionB = true; 
					cout << "\nWow, it's so high up. Good thing I have this telescope!" << endl; 
					cout << "Might as well try it out..." << endl;
					cout << "I see something shining by the St. Charles Bridge!";
					cout << " Maybe it's my laptop!" << endl; 
					bikeSpotted = true; 
				}
			}

			if (c == 'c' || c == 'C')
			{

				optionC = true; 
				if (bike == false)
				{
					cout << "\nOh, no! The train costs $20. " << endl;
					p->withdraw(20);
					hostel(p); 
				}

				if (bike == true)
				{
					cout << "\nCool! I can save money by riding the bike there. " << endl; 
					hostel(p);
					hostelConvo = true; 
				}
			}

			if (optionA == true && optionB == true && optionC == true)
			{
				moveOn = true; 
			}

			if (p->getMoney() <= 0)
			{
				return;
			}

			if (moveOn == false)
			{
				c = menu1();
			}
				
	}

	moveOn = false;
 

	c = menu2(); 

	if (c == 'a' || c == 'A')
	{
		p->setCountry(west->getName());
		cout << "To " << p->getCountry() << "?" << endl;
		cout << "That'll be $20. " << endl;
		p->withdraw(20);
	}

	if (c == 'b' || c == 'B')
	{
		p->setCountry(south->getName());
		cout << "To " << p->getCountry() << "?" << endl;
		cout << "That'll be $20. " << endl;
		p->withdraw(20);
	}

	if (c == 'c' || c == 'C')
	{
		p->setCountry(east->getName());
		cout << "To " << p->getCountry() << "?" << endl;
		cout << "That'll be $20. " << endl;
		p->withdraw(20);
	}
	
}

/***************************************************************
*					hostel()
*	This is a virtual function from Country. It simulates
*	a conversation with a hostel employee.
***************************************************************/

void CzechRepublic::hostel(Player *p)
{
	if (hostelConvo == true)
	{
		cout << "\nI told you already, there's no laptop here!" << endl; 
	}

	if (hostelConvo == false) {

		cout << "\nEmployee: Hello, how can I help you?" << endl;

		cout << "\na. I lost my laptop. Can you check if it's here?" << endl;

		InputValidation i;
		i.getChar1();
		cout << "\nNothing here, sorry. " << endl;
	}
	
}


/***************************************************************
*					menu1()
*	The first menu is for things to do in the city.
***************************************************************/

char CzechRepublic::menu1()
{
	cout << "Where to now?" << endl;
	cout << "\na. St. Charles Bridge. " << endl;
	cout << "b. Prague Castle. " << endl;
	cout << "c. The hostel. " << endl;

	InputValidation i;
	char c = i.getChar4();

	return c; 
}

/***************************************************************
*					menu2()
*	The second menu is for selecting the next country.
***************************************************************/

char CzechRepublic::menu2()
{
	if (bike == true)
	{
		cout << "\nWell, that didn't help. But at least I have this bike now. " << endl;
	}

	cout << "\nWhere should I go next?" << endl; 
	cout << "\na. Germany. " << endl;
	cout << "b. Austria. " << endl;
	cout << "c. Slovakia. " << endl;

	InputValidation i;
	char c = i.getChar3();

	return c; 

} 
