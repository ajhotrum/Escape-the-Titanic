/************************************************************************************
** Author:       Alonso Torres-Hotrum
** Date:         12/4/18
** Assignment:   CS 162 Final Project
** Description:  This is the source file for the Ballroom class.
************************************************************************************/

#include "Ballroom.hpp"
#include <stdio.h>
#include <stdlib.h>

/******************************************************
Default constructor
*******************************************************/

Ballroom::Ballroom()
{
	name = "Ballroom";
	itemUnlocked = false;
}

/*************************************************************
Method to get name
**************************************************************/
std::string Ballroom::getName()
{
	return name;
}

/*************************************************************
Method to get item
**************************************************************/
std::string Ballroom::getItem()
{
	return item;
}

/*************************************************************
Method to see if item has been unlocked
**************************************************************/
bool Ballroom::getItemUnlocked()
{
	return itemUnlocked;
}

/*************************************************************
Method to unlock an item
**************************************************************/
void Ballroom::setItemUnlocked()
{
	itemUnlocked = true;
}

/*************************************************************
Method to see if room has been unlocked
**************************************************************/
bool Ballroom::getRoomUnlocked()
{
	return roomUnlocked;
}

/*************************************************************
Method to unlock an room
**************************************************************/
void Ballroom::setRoomUnlocked()
{
	roomUnlocked = true;
}

/*************************************************************
Method to see if room has been entered
**************************************************************/
bool Ballroom::getFirstEntry()
{
	return firstEntry;
}

/*************************************************************
Method to set that the room has been entered before
**************************************************************/
void Ballroom::setFirstEntry()
{
	firstEntry = false;
}

/*************************************************************
Method to display introduction to Ballroom
**************************************************************/
void Ballroom::getIntro()
{
	std::cout << "\nThe key you found unlocks the gate and you find yourself in the Grand Ballroom. "
		"\nThere is debris everywhere, and water is rapidly filling the room."
		"\nYou know that you need to get to higher ground, and you spot the door to the main deck!\n\n";
}

/*************************************************************
Method to display menu for the Ballroom
**************************************************************/
void Ballroom::getMenu()
{
	std::cout << "\nCurrent Location: Ballroom. What would you like to do?\n";
	std::cout << "1: Go to the main deck\n2: Go to the hallway \n3: Look through debris for something to help\n4: Call for help\n";
}
