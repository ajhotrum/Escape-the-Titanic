/************************************************************************************
** Author:       Alonso Torres-Hotrum
** Date:         12/4/18
** Assignment:   CS 162 Project 4
** Description:  This is the source file for the game class.
************************************************************************************/

#include "Game.hpp"
#include "Queue.hpp"
#include "Items.hpp"

/******************************************************
Default constructor
*******************************************************/

Game::Game()
{
	//Introduction
	std::cout << "Titanic Escape Game\nby Alonso Torres-Hotrum\n\n";

	//Instantiate the queue
	Queue q1;
	//Display intro to room
	q1.current->space1->getIntro();
	
	//Instantiate item bag
	Items i;

	//Game counter
	int x = 0;

	while (x < counter && !finished && !dead)
	{
		//If you are in your room
		if (q1.current->space1->getName() == "Your Room")
		{
			//Display room menu
			q1.current->space1->getMenu();

			//validate user input
			int decision = this->check(1, 3);

			//if check drawer is selected
			if (decision == 1)
			{
				//check if the user has the key already
				if (!q1.current->space1->getItemUnlocked())
				{
					std::cout << "\nYou have found a key!\n\n";
					i.addItem(1);
					q1.current->space1->setItemUnlocked();
					q1.current->right->right->space1->setRoomUnlocked();
				}
				else
				{
					std::cout << "\nThe drawer is now empty.\n\n";
				}
			}

			//if "check under bed" is selected
			else if (decision == 2)
			{
				std::cout << "\nThere's nothing there.\n\n";
			}
			//if move to hallway is selected
			else
			{
				// move current to hallway
				q1.current = q1.current->right;
			}

		}

		//If you are in the hallway
		else if (q1.current->space1->getName() == "Hallway")
		{
			//Check if the hallway has been entered before
			if (q1.current->space1->getFirstEntry())
			{
				//set first entry to false and display the intro
				q1.current->space1->setFirstEntry();
				q1.current->space1->getIntro();
			}
			//Display menu and validate user input
			q1.current->space1->getMenu();
			int decision = this->check(1, 4);

			//Check decision
			if (decision == 1)
			{
				//change current to engine room
				if (q1.current->bottom->space1->getRoomUnlocked())
				{
					q1.current = q1.current->bottom;
				}
				else
				{
					std::cout << "\nThe engine room is completely flooded, you cannot go in!\n";
				}
			}
			else if (decision == 2)
			{
				//change current room to Captain's Quarters if it is unlocked	
				if (q1.current->top->space1->getRoomUnlocked())
				{
					q1.current = q1.current->top;
				}
				else
				{
					std::cout << "\nThe Captain's quarters are blocked off, you need something "
						"that can remove it!\n";
				}
			}
			else if (decision == 3)
			{
				//change current room to Captain's Quarters if it is unlocked	
				if (q1.current->right->space1->getRoomUnlocked())
				{
					q1.current = q1.current->right;
				}
				else
				{
					std::cout << "\nThere is a gate in your way! It looks like you need a key.\n";
				}
			}
			else
			{
				//move back to room
				q1.current = q1.current->left;
			}
		}

		//If you are in the engine room
		else if (q1.current->space1->getName() == "Engine Room")
		{
			//Check if the engine room has been entered before
			if (q1.current->space1->getFirstEntry())
			{
				//set first entry to false and display the intro
				q1.current->space1->setFirstEntry();
				q1.current->space1->getIntro();
			}
			//Display menu and validate user input
			q1.current->space1->getMenu();
			int decision = this->check(1, 3);

			//Check decision
			if (decision == 1)
			{
				//move back to hallway
				q1.current = q1.current->top;
			}
			else if (decision == 2)
			{
				//check the furnace
				std::cout << "\nThe furnace is empty.\n";
			}
			else
			{
				//check the toolbox
				if (!q1.current->space1->getItemUnlocked())
				{
					//find crowbar and set to found
					std::cout << "\nYou found a crowbar!\n";
					q1.current->space1->setItemUnlocked();
					q1.current->top->right->top->space1->setRoomUnlocked();
					i.addItem(4);
				}
				else
				{
					std::cout << "\nNothing else useful in the toolbox\n";
				}
			}
		}



		//If you are in the ballroom
		else if (q1.current->space1->getName() == "Ballroom")
		{
			//Check if the ballroom has been entered before
			if (q1.current->space1->getFirstEntry())
			{
				//set first entry to false and display the intro
				q1.current->space1->setFirstEntry();
				q1.current->space1->getIntro();
			}
			//Display menu and validate user input
			q1.current->space1->getMenu();
			int decision = this->check(1, 4);

			//Check decision
			if (decision == 1)
			{
				//move back to upper deck
				if (!q1.current->top->space1->getRoomUnlocked())
				{
					std::cout << "\nThe door is locked. You'll need something to pry it open.\n";
				}
				else
				{
					//move to the deck
					q1.current = q1.current->top;
				}

			}
			else if (decision == 2)
			{
				//go to hallway
				q1.current = q1.current->left;
			}
			//rummage through debris
			else if (decision == 3)
			{
				if (!q1.current->space1->getItemUnlocked())
				{
					//set item to unlocked and unlock captain's quarters
					q1.current->space1->setItemUnlocked();
					q1.current->left->top->space1->setRoomUnlocked();
					i.addItem(2);
					std::cout << "\nYou found explosives! You may be able to use these to get into the Captain's Quarters!\n";
				}
				else
				{
					std::cout << "\nNothing left to find in the debris.\n";
				}
			}
			//call for help
			else
			{
				std::cout << "\nNobody can hear you.\n";
			}
		}



		//If you are in the Captain's Quarters
		else if (q1.current->space1->getName() == "CaptainsQuarters")
		{
			//Check if the Captain's Quarters have been entered before
			if (q1.current->space1->getFirstEntry())
			{
				//set first entry to false and display the intro
				q1.current->space1->setFirstEntry();
				q1.current->space1->getIntro();
			}
			//Display menu and validate user input
			q1.current->space1->getMenu();
			int decision = this->check(1, 4);

			//Check decision
			if (decision == 1)
			{
				//go to hallway
				q1.current = q1.current->bottom;
			}
			else if (decision == 2)
			{
				if (!q1.current->space1->getItemUnlocked())
				{
					//set item to unlocked and unlock engine room
					q1.current->space1->setItemUnlocked();
					q1.current->bottom->bottom->space1->setRoomUnlocked();
					i.addItem(3);
					std::cout << "\nYou found a scuba tank!\n";
				}
				else
				{
					std::cout << "\nNothing left to find in the safe.\n";
				}
			}
			//rummage through debris
			else if (decision == 3)
			{
				std::cout << "\nNothing found under the water.\n";
			}
			//call for help
			else
			{
				std::cout << "\nYou can't punch through the ceiling!\n";
			}
		}

		//If you are in the main deck
		else if (q1.current->space1->getName() == "Deck1")
		{
			//Check if the Captain's Quarters have been entered before
			if (q1.current->space1->getFirstEntry())
			{
				//set first entry to false and display the intro
				q1.current->space1->setFirstEntry();
				q1.current->space1->getIntro();
			}
			//Display menu and validate user input
			q1.current->space1->getMenu();
			int decision = this->check(1, 4);

			//Check decision
			if (decision == 1)
			{
				//go to hallway
				q1.current = q1.current->bottom;
			}
			else if (decision == 2)
			{
				std::cout << "\nYou would surely die! Choose something else.\n";
			}
			//rummage through debris
			else if (decision == 3)
			{
				std::cout << "\nYou would surely die! Choose something else.\n";
			}
			//call for help
			else
			{
				//end game
				finished = true;
				std::cout << "\nYou found a plank, but your bag is full! You must replace one item "
					"to fit the plank.\nWhich item would you like to replace? \n1: " << i.bag[0] 
					<< "\n2: " << i.bag[1] << "\n3: " << i.bag[2] << "\n4: " << i.bag[3] << std::endl;

				//Get user input
				int decision = this->check(1, 4);

				//replace that item and output bag contents
				i.replaceItem(decision);
					
				std::cout << "You use the plank to bridge the gap to "
					"the other side and run onto a life raft.";
			}
		}

		//increment counter
		x++;
		if (x == counter)
		{
			dead = true;
		}
	}

	if (dead == true)
	{
		std::cout << "You drowned before you could escape! You lose.\n";
	}
	else
	{
		std::cout << "\n\nCongratulations! You win!!\n";
	}
}

/*************************************************************
Method to set counter
**************************************************************/
void Game::setCounter(int a)
{
	counter = a;
}

/*************************************************************
Method to set counter
**************************************************************/
int Game::getCounter()
{
	return counter;
}

/*************************************************************
Method to validate user input
**************************************************************/
int Game::check(int a, int b)
{

	int decision;

	while (!(std::cin >> decision) || std::cin.get() != '\n' || ((decision < a) || (decision > b))) {
		std::cout << "Error. Please enter a number between " << a << " and " << b << ":" << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
	}

	//return user input
	return decision;

}

/*************************************************************
Destructor
**************************************************************/
Game::~Game()
{

}
