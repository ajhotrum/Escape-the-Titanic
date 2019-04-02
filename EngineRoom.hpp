/************************************************************************************
** Author:       Alonso Torres-Hotrum
** Date:         12/2/18
** Assignment:   CS 162 Final Project
** Description:  This is the header file for the EngineRoom class.
************************************************************************************/

#ifndef ENGINEROOM_HPP
#define ENGINEROOM_HPP

#include <iostream>
#include <string>
#include "Space.hpp"

class EngineRoom : public Space
{
protected:
	std::string name;
	std::string item = "crowbar";
	bool roomUnlocked = false;
	bool itemUnlocked;
	bool firstEntry = true;
public:
	EngineRoom();
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
