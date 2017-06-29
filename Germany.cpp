#include "Germany.hpp"

/*****************************************************************
*						default constructor
*	The default constructor initializes the name to the country and the
*	checkpoint variables to false.
******************************************************************/

Germany::Germany()
{
	name = "Germany";
	optionA = optionB = optionC = beer = false;
}


Germany::~Germany()
{
}

/***************************************************************
*					explore()
*	This is a virtual function from Country. It takes the player
*	through the city and send him to the next country.
***************************************************************/

void Germany::explore(Player *p)
{

	cout << "\nAhhh Munich ... I had a great time here." << endl;
	cout << "...but I cant really remember the city. " << endl;

	char c = menu1();

	while (moveOn == false)
	{
		if (beer == true)
		{
			if (c == 'a')
			{
				cout << "\nOk, starting to remember now. " << endl;
				cout << "\nWell, it's beautiful, but I don't see my laptop. " << endl;
				cout << "\nHey, this promotion gives me a free bus rise to Prague. Cool!" << endl;
				cout << "\na. Add promotion to inventory. " << endl;
				cout << "b. Leave it. " << endl;

				InputValidation i; 
				char z = i.getChar2ab();

				if (z == 'a' || z == 'A')
				{
					p->checkSize("Ticket to Prague");
					p->setBusTicket(true);
				}

				if (z == 'b' || z == 'B')
				{
					cout << "Well, I can only carry so much anyway." << endl; 
				}

				optionA = true;
			}
			if (c == 'b')
			{
				cout << "\nI should hold back. Got a long journey ahead of me. " << endl;
			}

			if (c == 'c')
			{
				hostel(p);
				optionC = true;
			}

		}
		if (beer == false)
		{
			if (c == 'a')
			{
				cout << "\nNope, don't remember any of this. " << endl;
			}

			if (c == 'b')
			{
				cout << "\nAhh, I love this Augistiner Beer. " << endl;
				cout << "\nYou know... I'm starting to recognize these streets. " << endl; 
				optionB = true;
				beer = true;
			}

			if (c == 'c')
			{
				cout << "\nNot sure where the hostel is..." << endl;
			}
					
		}

		if (optionA == true && optionB == true && optionC == true && beer == true)
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

		c = menu2(p); 

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

			if (p->getBusTicket() == false) {
				cout << "That'll be $25. " << endl;
				p->withdraw(25);
			}
			else
			{
				cout << "Cool, free ride!" << endl; 
				p->removeItem("Ticket to Prague");
			}
		}


	

}

/***************************************************************
*					hostel()
*	This is a virtual function from Country. It simulates
*	a conversation with a hostel employee.
***************************************************************/

void Germany::hostel(Player *p)
{

	InputValidation i; 


	cout << "\nEmployee: Hi. " << endl;
	cout << "\na. Hi, I've lost my laptop. Can you please check if it's here?" << endl;
	i.getChar1();

	cout << "\nEmployee: Ehh. What's in it for me?" << endl;
	cout << "\na.Well, here's what I have" << endl;
	char c = i.getChar1();
	cout << "Inventory: " << endl; 
	p->printInventory();

	cout << "\nThat's nice, but I'll settle for $100. " << endl;
	cout << "\na. Ok, fine. ";
	cout << "\nb. You're asking money just to check? Get lost." << endl;

	c = i.getChar2ab();

	if (c == 'a')
	{
		p->withdraw(100);
		cout << "\nSorry, nothing there. " << endl;
	}


	
}


/***************************************************************
*					menu1()
*	The first menu is for things to do in the city.
***************************************************************/

char Germany::menu1()
{

	cout << "\nWhat did I do here, again?" << endl;
	cout << "\na. Go to the Frauenkirche. " << endl;
	cout << "\nb. Go to the Hofbraeuhaus. " << endl;
	cout << "\nc. Go to the hostel. " << endl;

	InputValidation i; 
	char c = i.getChar3();

	return c; 
}

/***************************************************************
*					menu2()
*	The second menu is for selecting the next country.
***************************************************************/

char Germany::menu2(Player* p)
{
	cout << "\nWell that was frustrating. At least the beer was good. " << endl; 

	if (p->getBusTicket())
	{
		cout << "\nAnd I've got a free bus ticket from Munich to Prague!" << endl;
	}

	cout << "\nSo, where will it be?" << endl;
	cout << "\na. Switzerland." << endl;
	cout << "b. Austria. " << endl;
	cout << "c. Czech Republic. " << endl;

	InputValidation i; 

	char c = i.getChar3();

	return c; 

}


