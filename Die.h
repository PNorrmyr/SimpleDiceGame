#pragma once

class Die
{
public:
	Die(int NoSides);
	void roll();
	int getValue();



private:
	int sides;
	int value;
};

