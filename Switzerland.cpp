#include "Switzerland.hpp"

/*****************************************************************
*						default constructor
*	The default constructor initializes the name to the country and the
*	checkpoint variables to false.
******************************************************************/

Switzerland::Switzerland()
{
	name = "Switzerland";
	moveOn = false; 
	optionA = false;
	optionB = false; 
	watchFound = false; 
}


Switzerland::~Switzerland()
{
}

/***************************************************************
*					explore()
*	This is a virtual function from Country. It takes the player
*	through the city and send him to the next country.
***************************************************************/

void Switzerland::explore(Player *p)
{

	char c = menu1(); 

	while (moveOn == false)
	{
		if (c == 'a')
		{
			cout << "\nThe exchange rate hurts. That'll be $25." << endl;
			p->withdraw(25);
			cout << "\nWell, at least the old town is nice..." << endl;

			if (p->searchItem("Swiss watch") == false) {
				cout << "\nHey, what's that behind the Fraumünster Cathedral?" << endl;
				cout << "\nA watch?! No way! I've heard these are very valuable. " << endl;

				cout << "\na. Take it." << endl;
				cout << "b. Leave it. " << endl;

				InputValidation i;
				char z = i.getChar2ab();

				if (z == 'a' || z == 'A') {
					p->checkSize("Swiss watch");
					watchFound = true; 					
				}

				if (z == 'b' || z == 'B')
				{
					cout << endl << "Inventory: ";
					p->printInventory();
				}

			}

			optionA = true;

		}

		if (c == 'b')
		{
			cout << "\nThe exchange rate hurts. That'll be $25." << endl;
			p->withdraw(25);
			hostel(p); 
			optionB = true; 
		}

		if (optionA == true && optionB == true)
		{
			moveOn = true;
		}

		if (p->getMoney() <= 0)
		{
			return;
		}

		if (moveOn == false) {
			c = menu1();
		}

	}

	moveOn = false;
	c = menu2(); 

	if (c == 'a' || c == 'A')
	{
		p->setCountry(this->north->getName());
		cout << "To " << p->getCountry() << "?" << endl;
		cout << "That'll be $20. " << endl;
		p->withdraw(20);
	}

	if (c == 'b' || c == 'B')
	{
		p->setCountry(this->east->getName());
		cout << "To " << p->getCountry() << "?" << endl;
		cout << "That'll be $20. " << endl;
		p->withdraw(25);		
	}
	
}

/***************************************************************
*					hostel()
*	This is a virtual function from Country. It simulates
*	a conversation with a hostel employee.
***************************************************************/

void Switzerland::hostel(Player *p)
{
	cout << "\nHi, how can I help you?" << endl;
	cout << "\na. I think I lost my laptop, can you check for me?" << endl;
	InputValidation i; 
	char c = i.getChar1(); 
	cout << "\nSure, what's your first name?" << endl;

	string name;
	cin >> name; 

	cout << "\nSorry " << name << ". No laptop. But I did find the Swiss army knife under your name. " << endl;

	
	cout << "\na. Thanks, I was looking for that! " << endl; 
	cout << "b. Oh, that's not mine. " << endl; 

	c = i.getChar2ab(); 

	if (c == 'a')
	{
		cout << "\nSure thing. " << endl;
		p->checkSize("Swiss army knife");
	}

	if (c == 'b')
	{
		cout << "\nOh, ok. Thanks for your honesty!" << endl; 
	}

}


/***************************************************************
*					menu1()
*	The first menu is for things to do in the city.
***************************************************************/

char Switzerland::menu1()
{
	cout << "\nBack to Switzerland. I can't stay long here, it's too expensive! " << endl;
	cout << "Let me think, where was I in Zurich?..." << endl;
	cout << "\na. Go to the old town. " << endl;
	cout << "\nb. Go to the hostel. " << endl;

	InputValidation i; 
	char c = i.getChar2ab();
	return c; 
}

/***************************************************************
*					menu2()
*	The second menu is for selecting the next country.
***************************************************************/

char Switzerland::menu2()
{
	cout << "\nThe laptop isn't in Zurich, but I'm not giving up. " << endl;

	cout << "a. Go to Germany. " << endl;
	cout << "b. Go to Austria. " << endl;

	InputValidation i; 
	char c = i.getChar2ab();

	return c; 

}



