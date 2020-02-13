#pragma once

#include <vector>
#include "Card.h"


class Player
{
private:
	const string name;
	vector<Card> hand;

public:
	Player();
	Player(string name);
	//string getName() const;

};



