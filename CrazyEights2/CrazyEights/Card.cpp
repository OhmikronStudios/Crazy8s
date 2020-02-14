#include <iostream>
#include <sstream>
#include "Card.h"


Card::Card()
{

}

Card::Card(int v, char s)
{
	c_value = v;
	c_suit = s;
}



int Card::getValue() const
{
	return c_value;
}
char Card::getSuit() const
{
	return c_suit;
}

string Card::toString() const
{
	stringstream ss;
	ss << "|" << getValue() << " of " << getSuit() << "|";
	return ss.str();
}
