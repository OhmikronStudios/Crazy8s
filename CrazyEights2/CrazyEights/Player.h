#pragma once

#include <vector>
#include "Card.h"


class Player
{
private:
	string c_name;
	vector<Card> c_hand;

public:
	Player();
	Player(string name);
	void AddCard(Card);
	void showCard(int cardNumber);
	const string GetName() const;
	void removeCard(int);
	int getSize();
};



