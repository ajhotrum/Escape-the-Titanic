/************************************************************************************
** Author:       Alonso Torres-Hotrum
** Date:         12/2/18
** Assignment:   CS 162 Project 4
** Description:  This is the header file for the Queue class.
************************************************************************************/

#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <iostream>
#include <string>
#include "Game.hpp"
#include "Space.hpp"
#include "Room.hpp"
#include "Hallway.hpp"
#include "Ballroom.hpp"
#include "Deck1.hpp"
#include "CaptainsQuarters.hpp"
#include "EngineRoom.hpp"


class Queue
{
protected:
	//QueueNode struct definition
	struct QueueNode
	{
		Space* space1;
		QueueNode *top;
		QueueNode *left;
		QueueNode *right;
		QueueNode *bottom;

		//QueueNode object definition
		QueueNode(Space *area, QueueNode *top1 = NULL, QueueNode *left1 = NULL, 
			QueueNode *right1 = NULL, QueueNode *bottom1 = NULL)
		{
			space1 = area;
			top = top1;
			left = left1;
			right = right1;
			bottom = bottom1;
		}
	};

	//pointers to the head
	QueueNode *items;
public:
	//Constructor and destructor
	QueueNode * current;
	QueueNode * start;
	Queue();
	~Queue();
};
#endif