/************************************************************************************
** Author:       Alonso Torres-Hotrum
** Date:         12/2/18
** Assignment:   CS 162 Final Project
** Description:  This is the header file for the CaptainsQuarters class.
************************************************************************************/

#ifndef CAPTAINSQUARTERS_HPP
#define CAPTAINSQUARTERS_HPP

#include <iostream>
#include <string>
#include "Space.hpp"

class CaptainsQuarters : public Space
{
protected:
	std::string name;
	std::string item = "scuba tank";
	bool roomUnlocked = false;
	bool itemUnlocked;
	bool firstEntry = true;
public:
	CaptainsQuarters();
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
