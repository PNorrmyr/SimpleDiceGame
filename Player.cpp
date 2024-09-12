#include "Player.h"
#include "Die.h"
#include <string>
#include <vector>


Player::Player(std::string const name, int noDices) : name(name), points(0)
{
	for (int i = 0; i < noDices; i++) {
		dices.push_back(Die(6));
	}
};

void Player::rollDice() {
	for (Die dice : dices) {
		dice.roll();
	}
}

int Player::getTotalValue() {
	int total = 0;
	for (Die dice : dices) {
		total += dice.getValue();
	}
	return total;
}

void Player::increaseScore() {
	points += 1;
}

void Player::addDie(int sides) {
	dices.push_back(Die(sides));
}

std::string Player::getName() {
	return name;
}

int Player::getScore() const{
	return points;
}