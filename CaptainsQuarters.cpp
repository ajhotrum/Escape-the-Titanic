/************************************************************************************
** Author:       Alonso Torres-Hotrum
** Date:         12/4/18
** Assignment:   CS 162 Final Project
** Description:  This is the source file for the CaptainsQuarters class.
************************************************************************************/

#include "CaptainsQuarters.hpp"
#include <stdio.h>
#include <stdlib.h>

/******************************************************
Default constructor
*******************************************************/

CaptainsQuarters::CaptainsQuarters()
{
	name = "CaptainsQuarters";
	itemUnlocked = false;
}

/*************************************************************
Method to get name
**************************************************************/
std::string CaptainsQuarters::getName()
{
	return name;
}

/*************************************************************
Method to get item
**************************************************************/
std::string CaptainsQuarters::getItem()
{
	return item;
}

/*************************************************************
Method to see if item has been unlocked
**************************************************************/
bool CaptainsQuarters::getItemUnlocked()
{
	return itemUnlocked;
}

/*************************************************************
Method to unlock an item
**************************************************************/
void CaptainsQuarters::setItemUnlocked()
{
	itemUnlocked = true;
}

/*************************************************************
Method to see if room has been entered
**************************************************************/
bool CaptainsQuarters::getFirstEntry()
{
	return firstEntry;
}

/*************************************************************
Method to set that the room has been entered before
**************************************************************/
void CaptainsQuarters::setFirstEntry()
{
	firstEntry = false;
}

/*************************************************************
Method to see if room has been unlocked
**************************************************************/
bool CaptainsQuarters::getRoomUnlocked()
{
	return roomUnlocked;
}

/*************************************************************
Method to unlock an room
**************************************************************/
void CaptainsQuarters::setRoomUnlocked()
{
	roomUnlocked = true;
}

/*************************************************************
Method to display introduction to CaptainsQuarters
**************************************************************/
void CaptainsQuarters::getIntro()
{
	std::cout << "\nYou use some of the explosives to blow the debris away from the Caprtain's door!"
		"\n\nOnce in the Captain's Quarters you begin frantically looking for something that can help."
		"\nYou are now wading through knee-deep water.\n\n";
}

/*************************************************************
Method to display menu for the CaptainsQuarters
**************************************************************/
void CaptainsQuarters::getMenu()
{
	std::cout << "\nCurrent Location: Captain' s Quarters. What would you like to do?\n";
	std::cout << "1: Go to the hallway\n2: Look in the safe \n3: Look for an item under the water\n"
		"4: Break through the ceiling\n";
}
