#pragma once
#include "Die.h"
#include "Player.h"
#include <iostream>
#include <string>
#include <vector>

class DiceGame
{
public:

	void initialize(int noPlayers);
	void takeTurn();
	std::vector<Player> getWinners() const;

private:
	std::vector<Player> players;
	bool isDone;
	int turn;

};

