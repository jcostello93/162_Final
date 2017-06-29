#pragma once
#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <string>
#include <iostream>
#include <list>
#include <algorithm>
using std::string;
using std::endl;
using std::cin; 
using std::cout; 
using std::list;

/*************************************************************************
*						class Player
*	A Player instance has a country, money, and inventory. 
*************************************************************************/

class Player
{
private: 
	string country; 
	bool gameOver; 
	int money; 
	list<string> inventory;
	bool busTicket; 
	bool bike;
	int invSize; 

public:
	Player();
	~Player();
	string getCountry(); 
	void setCountry(string); 
	bool getGameOver(); 
	void setGameOver(bool); 
	void withdraw(int); 
	void addItem(string);
	void removeItem(string);
	void printInventory();
	void setBusTicket(bool); 
	bool getBusTicket(); 
	void setBike(bool); 
	bool getBike(); 
	bool searchItem(string);
	int getInvSize();
	void removeFront(); 
	void removeBack(); 
	void checkSize(string);
	int getMoney(); 
};
#endif

