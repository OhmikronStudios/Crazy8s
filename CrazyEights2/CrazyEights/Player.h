#pragma once

#include <vector>
#include "Card.h"


class Player
{
private:
	string c_name;
	vector<Card> c_hand;

public:

	Player(string name);
	void AddCard(Card);
	string showCard(int cardNumber);
	const string GetName() const;
	Card removeCard(int);
	int getSize();
};



