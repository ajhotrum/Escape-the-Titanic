/************************************************************************************
** Author:       Alonso Torres-Hotrum
** Date:         12/3/18
** Assignment:   CS 162 Final Project
** Description:  This is the source file for the Queue class.
************************************************************************************/

#include <iostream>
#include "Queue.hpp"


/******************************************************
Default constructor, sets head pointer to NULL
*******************************************************/
Queue::Queue()
{
	//create nodes for every room
	Space * room = new Room;
	Space *ballroom = new Ballroom;
	Space * hallway = new Hallway;
	Space *engine = new EngineRoom;
	Space *captain = new CaptainsQuarters;
	Space *deck1 = new Deck1;

	//set current and first to your room
	current = new QueueNode(room);
	start = current;

	//Hallway is to the right of room
	current->right = new QueueNode(hallway);
	//Room is to the left of hallway
	current->right->left = current;
	//Ballroom is to the right of hallway
	current->right->right = new QueueNode(ballroom);
	//Hallway is to the left of ballroom
	current->right->right->left = current->right;
	//Engine room is below hallway
	current->right->bottom = new QueueNode(engine);
	//Hallway is above engine room
	current->right->bottom->top = current->right;
	//Deck is above the ballroom
	current->right->right->top = new QueueNode(deck1);
	//Ballroom is below deck
	current->right->right->top->bottom = current->right->right;
	//Captain's Quarters are above hallway
	current->right->top = new QueueNode(captain);
	//Hallway is below Captain's Quarters
	current->right->top->bottom = current->right;

}

/******************************************************
Destructor
*******************************************************/
Queue::~Queue()
{
	//delete Captain's Quarters
	delete start->right->top->space1;
	delete start->right->top;
	//delete deck
	delete start->right->right->top->space1;
	delete start->right->right->top;
	//delete ballroom
	delete start->right->right->space1;
	delete start->right->right;
	//delete engine room
	delete start->right->bottom->space1;
	delete start->right->bottom;
	//delete hallway
	delete start->right->space1;
	delete start->right;
	//delete your room
	delete start->space1;
	delete start;
}
