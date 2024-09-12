#include <iostream>
#include "Die.h"
#include "Player.h"
#include "DiceGame.h"
#include <string>
#include <vector>



int main()
{	
	DiceGame game1;


	int noPlayers;
	std::cout << "Enter amount of players: " << std::endl;
	std::cin >> noPlayers;

	game1.initialize(noPlayers);
	game1.takeTurn();
	game1.getWinners();


	return 0;
}


