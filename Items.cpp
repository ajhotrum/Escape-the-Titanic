/************************************************************************************
** Author:       Alonso Torres-Hotrum
** Date:         12/3/18
** Assignment:   CS 162 Final Project
** Description:  This is the source file for the Items class.
************************************************************************************/

#include <iostream>
#include "Items.hpp"


/******************************************************
Default constructor
*******************************************************/
Items::Items()
{
	//set current and first to your room
	head = new ItemNode();



}

/******************************************************
Destructor
*******************************************************/
Items::~Items()
{
	delete head;
}

/******************************************************
Method to add item
*******************************************************/
void Items::addItem(int a)
{
	if (a == 1)
	{
		bag[0] = "key";
	}
	if (a == 2)
	{
		bag[1] = "explosives";
	}
	if (a == 3)
	{
		bag[2] = "scuba tank";
	}
	if (a == 4)
	{
		bag[3] = "crowbar";
	}
}

/******************************************************
Method to replace item
*******************************************************/
void Items::replaceItem(int a)
{
	bag[a - 1] = "plank";

	//Display bag contents
	std::cout << "Your bag now consists of a ";
	for (int y = 0; y < 3; y++)
	{
		std::cout << bag[y] << ", ";
	}
	std::cout <<"and "<< bag[3] << ".\n";
}