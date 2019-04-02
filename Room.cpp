/************************************************************************************
** Author:       Alonso Torres-Hotrum
** Date:         12/2/18
** Assignment:   CS 162 Final Project
** Description:  This is the source file for the Room class.
************************************************************************************/

#include "Room.hpp"
#include <stdio.h>
#include <stdlib.h>

/******************************************************
Default constructor
*******************************************************/

Room::Room()
{
	name = "Your Room";
	itemUnlocked = false;
}

/*************************************************************
Method to get name
**************************************************************/
std::string Room::getName()
{
	return name;
}

/*************************************************************
Method to get item
**************************************************************/
std::string Room::getItem()
{
	return item;
}

/*************************************************************
Method to see if item has been unlocked
**************************************************************/
bool Room::getItemUnlocked()
{
	return itemUnlocked;
}

/*************************************************************
Method to unlock an item
**************************************************************/
void Room::setItemUnlocked()
{
	itemUnlocked = true;
}

/*************************************************************
Method to display introduction to room
**************************************************************/
void Room::getIntro()
{
	std::cout << "You are resting in your room aboard the USS Titanic, when suddenly "
		<< "you hear a loud bang!\nYou jump out of bed to find that there is water all "
		<< "over the floor, and it is steadily rising...\n\nYour goal is to escape from the "
		"Titanic. \nBe smart about your choices, the water rises with every passing decision!\n\n";
}

/*************************************************************
Method to display menu for room
**************************************************************/
void Room::getMenu()
{
	std::cout << "\nCurrent Location: Your Room.\nWhat would you like to do?\n";
	std::cout << "1: Look in your dresser\n2: Look under your bed\n3: Go to the hallway\n";
}

/*************************************************************
Method to see if room has been entered
**************************************************************/
bool Room::getFirstEntry()
{
	return firstEntry;
}

/*************************************************************
Method to see if room has been unlocked
**************************************************************/
bool Room::getRoomUnlocked()
{
	return roomUnlocked;
}

/*************************************************************
Method to unlock an room
**************************************************************/
void Room::setRoomUnlocked()
{
	roomUnlocked = true;
}

/*************************************************************
Method to set that the room has been entered before
**************************************************************/
void Room::setFirstEntry()
{
	firstEntry = false;
}