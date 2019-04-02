/************************************************************************************
** Author:       Alonso Torres-Hotrum
** Date:         12/4/18
** Assignment:   CS 162 Final Project
** Description:  This is the source file for the Deck1 class.
************************************************************************************/

#include "Deck1.hpp"
#include <stdio.h>
#include <stdlib.h>

/******************************************************
Default constructor
*******************************************************/

Deck1::Deck1()
{
	name = "Deck1";
	itemUnlocked = false;
}

/*************************************************************
Method to get name
**************************************************************/
std::string Deck1::getName()
{
	return name;
}

/*************************************************************
Method to get item
**************************************************************/
std::string Deck1::getItem()
{
	return item;
}

/*************************************************************
Method to see if item has been unlocked
**************************************************************/
bool Deck1::getItemUnlocked()
{
	return itemUnlocked;
}

/*************************************************************
Method to unlock an item
**************************************************************/
void Deck1::setItemUnlocked()
{
	itemUnlocked = true;
}

/*************************************************************
Method to see if room has been entered
**************************************************************/
bool Deck1::getFirstEntry()
{
	return firstEntry;
}

/*************************************************************
Method to set that the room has been entered before
**************************************************************/
void Deck1::setFirstEntry()
{
	firstEntry = false;
}

/*************************************************************
Method to see if room has been unlocked
**************************************************************/
bool Deck1::getRoomUnlocked()
{
	return roomUnlocked;
}

/*************************************************************
Method to unlock an room
**************************************************************/
void Deck1::setRoomUnlocked()
{
	roomUnlocked = true;
}

/*************************************************************
Method to display introduction to Engine Room
**************************************************************/
void Deck1::getIntro()
{
	std::cout << "\nYou reach the deck, but it is severely damaged!\nYou need to get to the "
		"other side of a massive hole in order to board a life raft.\n\n";
}

/*************************************************************
Method to display menu for the Engine Room
**************************************************************/
void Deck1::getMenu()
{
	std::cout << "\nCurrent Location: Deck. What would you like to do?\n";
	std::cout << "1: Go to the ballroom\n2: Dive overboard  \n3: Jump to the other side"
		"\n4: Look through the scrap wood\n";
}
