#include "Slovakia.hpp"

/*****************************************************************
*						default constructor
*	The default constructor initializes the name to the country and the
*	checkpoint variables to false.
******************************************************************/

Slovakia::Slovakia()
{
	name = "Slovakia";
	hostelConvo = false; 
	moveOn = false; 
	optionA = optionB = false; 
}


Slovakia::~Slovakia()
{
}

/***************************************************************
*					explore()
*	This is a virtual function from Country. It takes the player
*	through the city and send him to the next country.
***************************************************************/

void Slovakia::explore(Player *p)
{
	cout << "\nBratislava is small. I was only here for a 2 days." << endl;

	char c = menu1();

	while (moveOn == false)
	{
		if (c == 'a' || c == 'A')
		{
			cout << "\nOh, no! Something feels lighter...." << endl;
			cout << "\nI got pickpocketed! Luckily I split up my money." << endl;
			p->withdraw(50);
			optionA = true; 
		}

		if (c == 'b' || c == 'B')
		{
			optionB = true; 

			if (hostelConvo == true)
			{
				cout << "\nEmployee: It hasn't magically appeared ..." << endl; 
			}


			if (hostelConvo == false) {
				hostel(p);
				hostelConvo = true; 
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

	while (c != 'd') {

		if (c == 'a' || c == 'A')
		{
			p->setCountry(north->getName());
			cout << "To " << p->getCountry() << "?" << endl;
			cout << "That'll be $20. " << endl;
			p->withdraw(25);
			c = 'd';
		}

		if (c == 'b' || c == 'B')
		{
			p->setCountry(west->getName());
			cout << "To " << p->getCountry() << "?" << endl;
			cout << "That'll be $20. " << endl;
			c = 'd';
			p->withdraw(25);
		}

		if (c == 'c' || c == 'C')
		{
			cout << "Oh no! All trains to Budapest are sold out." << endl;

			if (p->searchItem("Bike") == true)
			{
				cout << "Thank God I have this bike!" << endl;
				c = 'd';
				p->setCountry(south->getName());
			}
			else
			{
				c = menu2();
			}
		}
	}
	

}

/***************************************************************
*					hostel()
*	This is a virtual function from Country. It simulates
*	a conversation with a hostel employee.
***************************************************************/

void Slovakia::hostel(Player *p)
{
	cout << "\nHello, how can I help you?" << endl; 
	cout << "\na. I've lost my laptop and I can't find it!" << endl;

	InputValidation i; 
	char c = i.getChar1();

	cout << "\nEmployee: Well I'll tell you what. It's not here. I saw you leave with it." << endl;
	cout << "\na. That helps a lot, thanks!" << endl;
	cout << "b. Uhhh. Care to explain?" << endl;

	c = i.getChar2ab();

	if (c == 'a' || c == 'A')
	{
		cout << "\nEmployee: No problem. Good luck!" << endl;
	}

	if (c == 'b' || c == 'B')
	{
		cout << "\nEmployee: Well, you said you were going east, didn't you?" << endl;
	}


}


/***************************************************************
*					menu1()
*	The first menu is for things to do in the city.
***************************************************************/

char Slovakia::menu1()
{
	cout << "\nWhere was I again?..." << endl;
	cout << "\na. The old town. " << endl;
	cout << "b. The hostel. " << endl;
	
	InputValidation i;
	char c = i.getChar2ab();

	return c; 

}

/***************************************************************
*					menu2()
*	The second menu is for selecting the next country.
***************************************************************/

char Slovakia::menu2()
{
	cout << "\nWell, I'm getting closer...." << endl;
	cout << "Maybe it'll be in the next country. " << endl;
	cout << "\na. Czech Republic. " << endl;
	cout << "b. Austria. " << endl;
	cout << "c. Hungary. " << endl;

	InputValidation i; 
	char c = i.getChar3();

	return c; 	
}


