#ifndef Card_H
#define Card_H

#include <iostream>
#include <string>
using namespace std;


class Card
{
public:
	Card();
	Card(int v, char s);
	int getValue() const;
	char getSuit() const;
	string toString() const;

protected:

private:
	int value;
	char suit;


};

#endif
