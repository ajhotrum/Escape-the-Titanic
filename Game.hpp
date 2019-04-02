/************************************************************************************
** Author:       Alonso Torres-Hotrum
** Date:         12/4/18
** Assignment:   CS 162 Project 4
** Description:  This is the header file for the game class.
************************************************************************************/

#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include "Space.hpp"

class Game
{
protected:
	int counter = 35;		//NOTE: This is the number of decisions you get to make before you die!
	bool finished = false;
	bool dead= false;
public:
	Game();
	int check(int a, int b);
	int getCounter();
	void setCounter(int a);
	~Game();
};
#endif
