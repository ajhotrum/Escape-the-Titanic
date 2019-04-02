/************************************************************************************
** Author:       Alonso Torres-Hotrum
** Date:         12/2/18
** Assignment:   CS 162 Final Project
** Description:  This is the header file for the Deck1 class.
************************************************************************************/

#ifndef DECK1_HPP
#define DECK1_HPP

#include <iostream>
#include <string>
#include "Space.hpp"

class Deck1 : public Space
{
protected:
	std::string name;
	std::string item = "plank";
	bool roomUnlocked = false;
	bool itemUnlocked;
	bool firstEntry = true;
public:
	Deck1();
	std::string getName();
	std::string getItem();
	bool getRoomUnlocked();
	void setRoomUnlocked();
	bool getItemUnlocked();
	void setItemUnlocked();
	void getIntro();
	bool getFirstEntry();
	void setFirstEntry();
	void getMenu();
};
#endif
