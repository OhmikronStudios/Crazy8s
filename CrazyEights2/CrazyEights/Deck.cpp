#ifndef DECK_CPP
#define DECK_CPP

#include "Deck.h"
#include <sstream>
#include <algorithm>
#include <random> 
#include <chrono>


Deck::Deck() {
    for (int suit = 0; suit < 4; suit++) {
        for (int value = 0; value < 13; value++) {
	   char s;
           switch (suit)
            {
            case 0: s = 'S'; break;
            case 1: s = 'C'; break;
            case 2: s = 'H'; break;
            case 3: s = 'D'; break;
            }

            Card card(value, s);
            c_deck.push_back(card);
        }
    }
}

string Deck::toString() const
{
	stringstream ss;
    for (int i = 0; i < 52; ++i)
    {
        ss << ", " << c_deck[i].toString();
    }
	return ss.str();
}

void Deck::Shuffle()
{
    unsigned seed = chrono::system_clock::now()
        .time_since_epoch()
        .count();

    shuffle(c_deck.begin(), c_deck.end(), default_random_engine(seed));
    return;
}

Card Deck::getTopCard()
{
    Card topCard = c_deck.back();
    return topCard;
}

void Deck::removeCard()
{
    c_deck.pop_back();
}



#endif
