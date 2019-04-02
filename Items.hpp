/************************************************************************************
** Author:       Alonso Torres-Hotrum
** Date:         12/4/18
** Assignment:   CS 162 Project 4
** Description:  This is the header file for the Items class.
************************************************************************************/

#ifndef ITEMS_HPP
#define ITEMS_HPP

#include <iostream>
#include <string>
#include "Game.hpp"


class Items
{
protected:
	//QueueNode struct definition
	struct ItemNode
	{
		int bagCount;

		//QueueNode object definition
		ItemNode()
		{
			bagCount = 0;
		}
	};

public:
	//pointer to the head
	ItemNode * head;
	void addItem(int a);
	void replaceItem(int b);
	std::string bag[4];
	Items();
	~Items();
};
#endif