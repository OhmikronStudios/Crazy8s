#ifndef DECK_H
#define DECK_H

#include <vector>
#include "Card.h"

class Deck 
{
private:
	vector<Card> deck;
	Card topCard;


public:
	Deck();
	string toString() const;
	void Shuffle();
	Card getTopCard();
	void removeCard();
};





#endif
