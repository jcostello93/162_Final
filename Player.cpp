#include "Player.hpp"
#include "InputValidation.hpp"
#include <algorithm>

/*****************************************************************
*						default constructor
*	The default constructor starts the player off in Austria
*	and initializes checkpoint variables to false, money to 500
*	and invSize to 0. 
******************************************************************/

Player::Player()
{
	country = "Austria";
	gameOver = false; 
	money = 500; 
	busTicket = false; 
	invSize = 0; 
}


Player::~Player()
{
	inventory.clear(); 
}

string Player::getCountry()
{
	return country; 
}

void Player::setCountry(string c)
{
	country = c; 
}

bool Player::getGameOver()
{
	return gameOver; 
}

void Player::setGameOver(bool g)
{
	gameOver = g;
}

/*****************************************************************
*						withdraw()
*	This function withdraws the parameter from the money variable.
******************************************************************/

void Player::withdraw(int m)
{
	cout << "Previous budget: " << money << endl; 
	money = money - m; 
	cout << "Current budget: " << money << endl;
	
}

void Player::addItem(string i)
{
	inventory.push_back(i);
}

void Player::removeItem(string s)
{
	list<string>::iterator findIter = std::find(inventory.begin(), inventory.end(), s);
	inventory.erase(findIter);
	invSize--;
}

void Player::printInventory()
{
	list<string>::iterator i; 

	
	for (i = inventory.begin(); i != inventory.end(); i++)
	{
		cout << *i << endl; 
	}
}

void Player::setBusTicket(bool b)
{
	busTicket = b; 
}

bool Player::getBusTicket()
{
	return busTicket;
}

void Player::setBike(bool b)
{
	bike = b; 
}

bool Player::getBike()
{
	return bike;
}

bool Player::searchItem(string s)
{
	list<string>::iterator findIter = std::find(inventory.begin(), inventory.end(), s);

	if (findIter != inventory.end()) {
		return *findIter == s;
	}

	return false;

}

int Player::getInvSize()
{
	return invSize;
}

void Player::removeFront()
{
	inventory.pop_front();
	invSize--;

}

void Player::removeBack()
{
	inventory.pop_back();
	invSize--;

}

/*****************************************************************
*						checkSize
*	If invSize < 4, the function calls addItem().
*	If invSize >=4, the function removes an item and then calls
*	additem()
******************************************************************/

void Player::checkSize(string s)
{
	if (invSize < 4) {
		addItem(s);
		invSize++;
		cout << "Inventory: " << endl; 
		printInventory();
	}
	else
	{
		cout << "invSize: " << invSize << endl; 
		cout << "\nYou can only carry 4 items at a time. " << endl;
		cout << "You can either drop the front or back item. " << endl;
		cout << "Inventory: " << endl; 
		printInventory();
		cout << "\na. Front. " << endl;
		cout << "b. Back. " << endl;

		InputValidation i;

		char q = i.getChar2ab();

		if (q == 'a' || q == 'A')
		{
			removeFront();
		}

		if (q == 'b' || q == 'B')
		{
			removeBack();
		}

		addItem(s);
		invSize++;
		cout << "Inventory: ";
		printInventory();
	}

}

int Player::getMoney()
{
	return money; 
}
