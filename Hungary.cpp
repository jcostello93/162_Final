#include "Hungary.hpp"

/*****************************************************************
*						default constructor
*	The default constructor initializes the name to the country and the
*	checkpoint variables to false.
******************************************************************/

Hungary::Hungary()
{
	name = "Hungary";
	moveOn = false; 
	optionA = optionB = false; 
	hostelConvo = false; 
}


Hungary::~Hungary()
{
}

/***************************************************************
*					explore()
*	This is a virtual function from Country. It takes the player
*	through the city and send him to the next country.
***************************************************************/

void Hungary::explore(Player *p)
{
	cout << "I can regonize the Parliament building from anywhere. I'm in Budapest!" << endl;

	char c = menu1(); 

	while (moveOn == false)
	{
		if (c == 'a' || c == 'A')
		{
			optionA = true; 
			cout << "\nThese are lovely, but expensive. " << endl;
			p->withdraw(25);

			cout << "\nHmm... what's this on the ground? " << endl;
			cout << "Looks like a fortune cookie. " << endl;
			cout << "\na. Take it. " << endl;
			cout << "b. Leave it. " << endl;

			InputValidation i; 
			char b = i.getChar2ab();

			if (b == 'a' || b == 'A')
			{
				p->checkSize("Fortune cookie");
							
				cout << "\na. Ok, let's read it. " << endl;
				
				i.getChar1();

				cout << "FORTUNE COOKIE: ''Only the well travelled man reaches his goals.''";

				cout << "\nWell, that's helpful... " << endl; 

			}
		}

		if (c == 'b' || c == 'B')
		{
			optionB = true; 
			hostel(p);
			hostelConvo = true; 

			if (p->getGameOver() == true)
			{
				return;
			}
		}

		if (optionA == true && optionB == true)
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
		p->setCountry(north->getName());
		cout << "To " << p->getCountry() << "?" << endl;
		cout << "That'll be $20. " << endl;
		p->withdraw(20);
	}

	if (c == 'b' || c == 'B')
	{
		p->setCountry(west->getName());
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

void Hungary::hostel(Player *p)
{

	if (hostelConvo == true)
	{
		cout << "\nEmployee: So you're back. Let's see what you've got now. " << endl;
		cout << "\na. Show inventory. " << endl;
		InputValidation i;
		i.getChar1();
		cout << "Inventory: " << endl;
		p->printInventory();

		if (p->searchItem("Swiss watch") == true)
		{
			cout << "I've been looking for a watch just like that! I'll trade you for it. " << endl;
			cout << "\na. You've got yourself a deal. " << endl;
			cout << "b. No thanks, I like this watch. " << endl;

			char z = i.getChar2ab();

			if (z == 'a' || z == 'A')
			{
				cout << "\nGood doing business with you!. " << endl;
				p->removeItem("Swiss watch");
				p->setGameOver(true);
			}
		}
	}

	if (hostelConvo == false) {
		cout << "\nHello, how can I help you? " << endl;
		cout << "\na. I've lost my laptop, can you see if it's here?";

		InputValidation i;

		char a = i.getChar1();

		cout << "\nLet me see. What's your first name? " << endl;
		string name;
		cin >> name;

		cout << "\nI might have your laptop, " << name << ". why do you ask? " << endl;
		cout << "\nIt has all my schoolwork on it and my project is due soon!" << endl;

		cout << "\nWell then you might just get it back. What can you offer me?" << endl;

		cout << "\na. Here's all I have: " << endl;
		cout << "b. Seriously? I'd rather fail. " << endl;

		a = i.getChar2ab();

		if (a == 'a' || a == 'A')
		{
			cout << "Inventory: " << endl;
			p->printInventory();

			if (p->searchItem("Swiss watch") == true)
			{
				cout << "I've been looking for a watch just like that! I'll trade you for it. " << endl;
				cout << "\na. You've got yourself a deal. " << endl;
				cout << "b. No thanks, I like this watch. " << endl;

				char z = i.getChar2ab();

				if (z == 'a' || z == 'A')
				{
					cout << "\nGood doing business with you!. " << endl;
					p->removeItem("Swiss watch");
					p->setGameOver(true);

				}
				if (z == 'b' || z == 'B')
				{
					cout << "\nWell then, better luck next semester!" << endl;
				}
			}
			else
			{
				cout << "\nSeriously? Come back when you have something valuable." << endl;
			}
		}
		if (a == 'b' || a == 'B')
		{
			cout << "Ok, better luck next semester!" << endl;
		}
	}
}


/***************************************************************
*					menu1()
*	The first menu is for things to do in the city.
***************************************************************/

char Hungary::menu1()
{
	cout << "\nLet's see ... where was I?" << endl;
	cout << "\na. Turkish baths. " << endl;
	cout << "b. The hostel. " << endl;

	InputValidation i; 

	char c = i.getChar2ab();

	return c; 

}

/***************************************************************
*					menu2()
*	The second menu is for selecting the next country.
***************************************************************/

char Hungary::menu2()
{
	cout << "Ok, looks like I have to find something valuable first. " << endl;
	cout << "\nWhere should I start looking? " << endl;
	cout << "\na. Slovakia. " << endl;
	cout << "b. Austria. " << endl;

	InputValidation i; 

	char c = i.getChar2ab();

	return c; 
}

