#include "Player.h"


Player::Player()
{
	
}

Player::Player(string name)
{
	name = name;
	return;
}

void Player::AddCard(Card card)
{
	hand.push_back(card);
}

void Player::showCard(int cardNumber)
{
	cout << hand.at(cardNumber).toString() << "\t";
}

const string Player::GetName() 
{
	return name;
}

//void Player::playCard(int card)
//{
//	vector<Card>::const_iterator it = hand.begin(); it != hand.end(); it++)
//	for (int i = 0; i < card; ++i)
//		++it;
//	hand.erase(it);
//}

int Player::getSize()
{
	return hand.size();
	
}
void Player::playCard(vector<Card>& hand, int index)
{

	hand<Card>::const_iterator it = hand.begin();
	for (int i = 0; i < index; ++i)
	{
		+it;
	}
	hand.erase(it);
}