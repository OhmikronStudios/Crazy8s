#pragma once

#include <vector>
#include "Card.h"


class Player
{
private:
	string name;
	vector<Card> hand;

public:
	Player();
	Player(string name);
	void AddCard(Card);
	void showCard(int cardNumber);
	const string GetName();
	void removeCard(int);
	int getSize();
	/*getHand();*/
};



