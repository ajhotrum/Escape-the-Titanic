/************************************************************************************
** Author:       Alonso Torres-Hotrum
** Date:         12/2/18
** Assignment:   CS 162 Final Project
** Description:  This is the header file for the Room class.
************************************************************************************/

#ifndef ROOM_HPP
#define ROOM_HPP

#include <iostream>
#include <string>
#include "Space.hpp"

class Room : public Space
{
protected:
	std::string name;
	std::string item = "key";
	bool roomUnlocked = true;
	bool itemUnlocked;
	bool firstEntry = false;
public:
	Room();
	std::string getName();
	std::string getItem();
	bool getItemUnlocked();
	void setItemUnlocked();
	void getIntro();
	bool getRoomUnlocked();
	void setRoomUnlocked();
	bool getFirstEntry();
	void setFirstEntry();
	void getMenu();
};
#endif
