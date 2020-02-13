#include <iostream>
#include <sstream>
#include "Card.h"



Card::Card(int v, char s)
{
	value = v;
	suit = s;
}



int Card::getValue() const
{
	return value;
}
char Card::getSuit() const
{
	return suit;
}

string Card::toString() const
{
	stringstream ss;
	ss << "Card: " << getValue() << " of " << getSuit() << "";
	return ss.str();
}
