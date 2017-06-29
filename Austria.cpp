#include "Austria.hpp"

/*****************************************************************
 *						default constructor
 *	The default constructor initializes the name to the country and the 
 *	checkpoint variables to false. 
 ******************************************************************/

Austria::Austria()
{
	name = "Austria";
	ticketFound = false; 
	hostelConvo = false; 
	opera = false; 
	stephansDom = false; 
	moveOn = false; 
}


Austria::~Austria()
{
}

/***************************************************************
 *					explore()
 *	This is a virtual function from Country. It takes the player
 *	through the city and send him to the next country.
 ***************************************************************/

void Austria::explore(Player *p)
{
	char c = menu1(); 

	while (moveOn == false) {

		if (c == 'c' && ticketFound == false)
		{
			cout << "\nHmmm. The hostel is too far away." << endl;
			cout << "Better get a metro ticket first. " << endl;
		}

		if (c == 'c' && ticketFound == true)
		{
			p->removeItem("Vienna metro ticket");
			ticketFound = false; 
			p->printInventory();
			hostel(p); 
		}

		if (c == 'a')
		{
			if (ticketFound == false) {

				cout << "\nWow, the Stephansdom is so nice. " << endl;
				cout << "Hey ... is that a valid metro ticket? Awesome!" << endl;
				cout << "\na. Take it." << endl;
				cout << "b. Leave it. " << endl; 
				
				InputValidation i; 
				char z = i.getChar2ab(); 

				if (z == 'a' || z == 'A') {

					p->checkSize("Vienna metro ticket");
					stephansDom = true; 
					ticketFound = true; 
				}

				if (z == 'b' || z == 'B')
				{
					stephansDom = true; 
					cout << endl << "Inventory: ";
					p->printInventory();
				}
			}
		}

		if (c == 'b')
		{
			cout << "\nThis Opera building is so incredible." << endl;
			cout << "Reminds me of Mission Impossible for some reason ... " << endl;
			cout << "No laptop here, though. Oh well. " << endl; 
			opera = true; 
		}

		if (p->getMoney() <= 0)
		{
			return;
		}

		if (opera == true && hostelConvo == true && stephansDom == true)
		{
			moveOn = true; 
		}

		if (moveOn == false)
			c = menu1();
	}

	c = menu2();

	
	if (c == 'a')
	{
		p->setCountry(south->getName());
		cout << "To " << p->getCountry() << "?" << endl;
		cout << "That'll be $20. " << endl; 
		p->withdraw(20);
	}

	if (c == 'b')
	{
		p->setCountry(west->getName());
		cout << "To " << p->getCountry() << "?" << endl;
		cout << "That'll be $25. " << endl;
		p->withdraw(25);

	}

	if (c == 'c')
	{
		p->setCountry(north->getName());
		cout << "To " << p->getCountry() << "?" << endl;
		cout << "That'll be $20. " << endl;
		p->withdraw(20);
	}

	if (c == 'd')
	{
		p->setCountry(east->getName());
		cout << "To " << p->getCountry() << "?" << endl;
		cout << "That'll be $20. " << endl; 
		p->withdraw(20);
	}

	if (c == 'e')
	{
		p->setCountry(fifth->getName());
		cout << "To " << p->getCountry() << "?" << endl;
		cout << "That'll be $20. " << endl; 
		p->withdraw(20);
	}

}

/***************************************************************
*					menu1()
*	The first menu is for things to do in the city. 
***************************************************************/

char Austria::menu1()
{
	cout << "What would you like to do?" << endl;
	cout << "\na. Go to Stephansdom." << endl;
	cout << "b. Go to the Opera. " << endl;
	cout << "c. Go to the hostel. " << endl;

	InputValidation i;
	char c = i.getChar3();
	return c;
}

/***************************************************************
*					hostel()
*	This is a virtual function from Country. It simulates
*	a conversation with a hostel employee. 
***************************************************************/

void Austria::hostel(Player* p)
{

	if (hostelConvo == true)
	{
		cout << "\nEmployee: Aren't you the one looking for the laptop? Sorry";
		cout << " I told you I can't help you. " << endl;
	}

	if (hostelConvo == false) {
		cout << "\nEmployee: Welcome! How can I help you? " << endl;
		cout << "\na. I lost my laptop. Do you have it?" << endl;

		InputValidation i;
		i.getChar1();

		cout << "\nEmployee: Sorry. Don't have anything for you. " << endl;
		cout << "\na.Ok. Thanks for your help. " << endl;
		i.getChar1();
		hostelConvo = true; 
	}
	
}


/***************************************************************
*					menu2()
*	The second menu is for selecting the next country. 
***************************************************************/

char Austria::menu2()
{

	cout << "\nWell, it's nowhere in Vienna. Time to move on. " << endl;

	cout << "\na. Go to Switzerland. " << endl; 
	cout << "b. Go to Germany. " << endl; 
	cout << "c. Go to the Czech Republic. " << endl; 
	cout << "d. Go to Slovakia. " << endl;
	cout << "e. Go to Hungary. " << endl; 

	InputValidation i;

	cin.clear();
	char c = i.getChar5();

	cout << "Ok, but that'll cost you. " << endl; 

	return c;
}
