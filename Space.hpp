/************************************************************************************
** Author:       Alonso Torres-Hotrum
** Date:         12/2/18
** Assignment:   CS 162 Final Project
** Description:  This is the header file for the space class.
************************************************************************************/

#ifndef SPACE_HPP
#define SPACE_HPP

#include <iostream>
#include <string>

class Space
{
protected:
	std::string item;
	std::string name;
public:
	Space();
	virtual std::string getItem()=0;
	virtual bool getItemUnlocked()=0;
	virtual std::string getName()=0;
	virtual void setItemUnlocked()=0;
	virtual bool getRoomUnlocked()=0;
	virtual void setRoomUnlocked()=0;
	virtual void getIntro()=0;
	virtual void getMenu()=0;
	virtual	bool getFirstEntry() = 0;
	virtual	void setFirstEntry() = 0;
	virtual ~Space();
};
#endif
