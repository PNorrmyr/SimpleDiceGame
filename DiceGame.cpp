#include "DiceGame.h"
#include "Player.h"
#include "Die.h"
#include <iostream>


void DiceGame::initialize(int noPlayers) {
	players.clear();
	int noDices;
	std::cout << "Enter how many dices the game should have: " << std::endl;
	std::cin >> noDices;
	for (int i = 0; i < noPlayers; i++) {
		std::string playerName;
		std::cout << "Enter name of player " << (i+1) << " :" << std::endl;
		std::cin >> playerName;
		players.push_back(Player(playerName, noDices));
	};
}

void DiceGame::takeTurn() {
	for (Player& player : players) {
		player.rollDice();
		std::cout << player.getName() << " rolls a total of: " << player.getTotalValue() << std::endl;
		if (player.getTotalValue() > 20) {
			player.increaseScore();
			std::cout << player.getName() << " has increased their score" << std::endl;
		}
		else {
			std::cout << "No player has received points." << std::endl;
		}
	}
}


std::vector<Player> DiceGame::getWinners() const {
	std::vector<Player> winners; 
	
	if (players.empty()) {
		return winners;
	}

	for (const Player& player : players) {
		if (player.getScore() >= 1) {
			winners.push_back(player);
		}
	}
	
	for (Player& winner : winners) {
		std::cout << winner.getName() << " is a winner!" << std::endl;
	}
	return winners;
}


