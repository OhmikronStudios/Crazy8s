#ifndef Card_H
#define Card_H

#include <iostream>
#include <string>
using namespace std;


class Card
{
public:
	Card(int v, char s);
	int getValue() const;
	char getSuit() const;
	//static int values[13];
	//static char suits[4];
	string toString() const;

protected:

private:
	int value;
	char suit;


};

#endif
