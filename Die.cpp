#include "Die.h"
#include <ctime>
#include <cstdlib>


Die::Die(int noSides) : sides(noSides), value(1) {
	srand(time(NULL));
};



void Die::roll() {
	value = rand() % sides + 1;
};

int Die::getValue() {
	return value;
};

