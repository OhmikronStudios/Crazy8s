#ifndef DECK_H
#define DECK_H

#include <vector>
#include "Card.h"

class Deck 
{
private:
	vector<Card> deck;


public:
	Deck();
	string toString() const;
	void Shuffle();
};





#endif
