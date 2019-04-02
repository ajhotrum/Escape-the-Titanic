/************************************************************************************
** Author:       Alonso Torres-Hotrum
** Date:         12/2/18
** Assignment:   CS 162 Final Project
** Description:  This is the header file for the Hallway class.
************************************************************************************/

#ifndef HALLWAY_HPP
#define HALLWAY_HPP

#include <iostream>
#include <string>
#include "Space.hpp"

class Hallway : public Space
{
protected:
	std::string name;
	std::string item = "none";
	bool roomUnlocked = true;
	bool itemUnlocked;
	bool firstEntry = true;
public:
	Hallway();
	std::string getName();
	std::string getItem();
	bool getItemUnlocked();
	void setItemUnlocked();
	bool getRoomUnlocked();
	void setRoomUnlocked();
	void getIntro();
	bool getFirstEntry();
	void setFirstEntry();
	void getMenu();
};
#endif
