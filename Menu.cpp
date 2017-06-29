/***********************************************************************************
* Name: John Costello
* Date: 5/11/2017
* Project 3
* Description: This program lets two Creatures battle.
***********************************************************************************/

#include "Menu.hpp"
#include "InputValidation.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;



Menu::Menu()
{
}


/***********************************************************************************
*						char Menu::menuStart()
* This function contains the second start menu with the play again option
* It returns 'a' or 'b.'
***********************************************************************************/
char Menu::menuStart()
{
	char start;

	cout << "\n\n************************************************************************" << endl;
	cout << "Note to TA: Here's how you solve the game in as few steps as possible. " << endl;
	cout << "\nIn Austria: " << endl;
	cout << "1. go to Stephansdom, get ticket. " << endl;
	cout << "2. go to opera." << endl;
	cout << "3. go to hostel. " << endl;
	cout << "4. go to Czech Republic. " << endl;
	cout << "\nIn Czech Republic: " << endl;
	cout << "1. go to St. Charles bridge, take telescope. " << endl;
	cout << "2. go to Prague Castle. " << endl;
	cout << "3. go back to St. Charles bridge, take bike. " << endl;
	cout << "4. got to Germany. " << endl;
	cout << "\nIn Germany: " << endl;
	cout << "1. go to Hofbraeuhaus. " << endl;
	cout << "2. go to the Frauenkirche. " << endl;
	cout << "3. go to the hostel, don't pay the employee. " << endl;
	cout << "4. go to Switzerland. " << endl;
	cout << "\nIn Switzerland:" << endl;
	cout << "1. Go to the old town. " << endl;
	cout << "2. Take the watch. " << endl;
	cout << "3. Go to the hostel, don't take the knife. " << endl;
	cout << "4. Go to Austria. " << endl;
	cout << "\nIn Austria: " << endl;
	cout << "1. Go to the opera. " << endl;
	cout << "2. Go to Slovakia. " << endl;
	cout << "\nIn Slovakia: " << endl;
	cout << "1. Go to the old town. " << endl;
	cout << "2. Go to the hostel, don't take the tip. " << endl;
	cout << "3. Go to Hungary. " << endl;
	cout << "\nIn Hungary: " << endl;
	cout << "1. Go to Turkish baths, don't take fortune. " << endl;
	cout << "2. Go to hostel, exchange Swiss watch for laptop. " << endl;
	cout << "\nYou win!" << endl;
	cout << "***************************************************************************" << endl;

	cout << "June 12 at 12:43pm at the Vienna International Airport in Austria. " << endl;
	cout << "\nYour Eurotrip is over and you're about to board the plane back to the U.S." << endl;
	cout << "\nYou've got your phone..." << endl;
	cout << "\nwallet..." << endl;
	cout << "\nkeys..." << endl;
	cout << "\n\n\n\n\nUh oh! You don't have your laptop, which has all of your files for";
	cout << " your CS final project! ";
	cout << "\n\nNow you have to retrace your steps through Central Europe.";
	cout << "\n\nHere are the rules!: " << endl; 
	cout << "\n1. You only have $500, so spend your money wisely!" << endl; 
	cout << "2. Planes are out of the question. You can";
	cout << " only go to a neighboring country. No skipping!" << endl; 
	cout << "3. You can only hold up to 4 items at a time. " << endl;
	cout << "4. You're allowed to revisit countries as long as you have money. " << endl; 
	cout << "\nRemember: Some people are helpful and some aren't. Don't just assume";
	cout << " you'll get your laptop back out of altruism. " << endl; 

	
	start = 'b'; 
	return start;

}

char Menu::menuPlayAgain()
{

	char start;

	cout << "Please select an option. " << endl;
	cout << "a. Play again.  " << endl;
	cout << "b. Quit.  " << endl;

	InputValidation startChar;
	start = startChar.getChar2ab();

	cin.ignore(1, '\n');

	return start;
	
}


