#include <iostream>
#include "Deck.h"

using namespace std;

int main()
{
    Deck testDeck;
    //show deck before shuffle
    cout << "Deck of cards: " << testDeck.toString() << endl;

    testDeck.Shuffle();
    cout << "Deck of cards: " << testDeck.toString() << endl;
}
