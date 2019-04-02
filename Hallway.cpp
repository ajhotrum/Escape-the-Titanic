/************************************************************************************
** Author:       Alonso Torres-Hotrum
** Date:         12/2/18
** Assignment:   CS 162 Final Project
** Description:  This is the source file for the Hallway class.
************************************************************************************/

#include "Hallway.hpp"
#include <stdio.h>
#include <stdlib.h>

/******************************************************
Default constructor
*******************************************************/

Hallway::Hallway()
{ 
	name = "Hallway";
}

/*************************************************************
Method to get name
**************************************************************/
std::string Hallway::getName()
{
	return name;
}

/*************************************************************
Method to get item
**************************************************************/
std::string Hallway::getItem()
{
	return item;
}

/*************************************************************
Method to see if item has been unlocked
**************************************************************/
bool Hallway::getItemUnlocked()
{
	return itemUnlocked;
}

/*************************************************************
Method to unlock an item
**************************************************************/
void Hallway::setItemUnlocked()
{
	itemUnlocked = true;
}

/*************************************************************
Method to see if room has been entered
**************************************************************/
bool Hallway::getFirstEntry()
{
	return firstEntry;
}

/*************************************************************
Method to see if room has been unlocked
**************************************************************/
bool Hallway::getRoomUnlocked()
{
	return roomUnlocked;
}

/*************************************************************
Method to unlock an room
**************************************************************/
void Hallway::setRoomUnlocked()
{
	roomUnlocked = true;
}

/*************************************************************
Method to set that the room has been entered before
**************************************************************/
void Hallway::setFirstEntry()
{
	firstEntry = false;
}

/*************************************************************
Method to display introduction to Hallway
**************************************************************/
void Hallway::getIntro()
{
	std::cout << "\nYou are in the hallway. Water is pouring in from all directions. "
		<<"There is a locked gate that is prohibiting you getting to the ballroom."
		<<" The water is now past your ankles.\n\n";
}

/*************************************************************
Method to display menu for the Hallway
**************************************************************/
void Hallway::getMenu()
{
	std::cout << "\nCurrent Location: Hallway. What would you like to do?\n";
	std::cout << "1: Go to the engine room\n2: Go to the Captain's quarters \n3: Go to the ballroom\n4: Go to your room\n";
}
