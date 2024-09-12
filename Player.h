#pragma once
#include <string>
#include <vector>
#include "Die.h"

class Player
{
public:
	Player(std::string const name, int noDices);
	void rollDice();
	int getTotalValue();
	void increaseScore();
	void addDie(int sides);
	std::string getName();
	int getScore() const;


private:
	std::string name;
	int points;
	std::vector<Die> dices;

};

