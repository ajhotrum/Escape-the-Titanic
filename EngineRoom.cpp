/************************************************************************************
** Author:       Alonso Torres-Hotrum
** Date:         12/4/18
** Assignment:   CS 162 Final Project
** Description:  This is the source file for the EngineRoom class.
************************************************************************************/

#include "EngineRoom.hpp"
#include <stdio.h>
#include <stdlib.h>

/******************************************************
Default constructor
*******************************************************/

EngineRoom::EngineRoom()
{
	name = "Engine Room"; 
	itemUnlocked = false;
}

/*************************************************************
Method to get name
**************************************************************/
std::string EngineRoom::getName()
{
	return name;
}

/*************************************************************
Method to get item
**************************************************************/
std::string EngineRoom::getItem()
{
	return item;
}

/*************************************************************
Method to see if item has been unlocked
**************************************************************/
bool EngineRoom::getItemUnlocked()
{
	return itemUnlocked;
}

/*************************************************************
Method to unlock an item
**************************************************************/
void EngineRoom::setItemUnlocked()
{
	itemUnlocked = true;
}

/*************************************************************
Method to see if room has been entered
**************************************************************/
bool EngineRoom::getFirstEntry()
{
	return firstEntry;
}

/*************************************************************
Method to set that the room has been entered before
**************************************************************/
void EngineRoom::setFirstEntry()
{
	firstEntry = false;
}

/*************************************************************
Method to see if room has been unlocked
**************************************************************/
bool EngineRoom::getRoomUnlocked()
{
	return roomUnlocked;
}

/*************************************************************
Method to unlock an room
**************************************************************/
void EngineRoom::setRoomUnlocked()
{
	roomUnlocked = true;
}

/*************************************************************
Method to display introduction to Engine Room
**************************************************************/
void EngineRoom::getIntro()
{
	std::cout << "\nThe engine room is completely flooded. You put on your scuba gear and dive in.\n\n";
}

/*************************************************************
Method to display menu for the Engine Room
**************************************************************/
void EngineRoom::getMenu()
{
	std::cout << "\nCurrent Location: Engine Room. What would you like to do?\n";
	std::cout << "1: Go to the hallway\n2: Look in the furnace  \n3: Look in the tool box\n";
}
