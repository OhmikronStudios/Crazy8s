#include "Player.h"


Player::Player()
{
	
}

Player::Player(string name)
{
	name = c_name;
	return;
}

void Player::AddCard(Card card)
{
	c_hand.push_back(card);
}

void Player::showCard(int cardNumber)
{
	cout << c_hand.at(cardNumber).toString() << "\t";
}

const string Player::GetName() const
{
	return c_name;
}

//void Player::playCard(int card)
//{
//	Card temp = hand.at(card);
//	hand.at(card) = hand.end();
//	hand.end() = temp;
//}

int Player::getSize()
{
	return c_hand.size();
	
}
//Vector Player::getHand()
//{
//	return hand;
//}


void Player::removeCard(int index)
{
	
	vector<Card>::const_iterator it = c_hand.begin();
	for (int i = 0; i < index; ++i)
	{
		++it;
	}
	c_hand.erase(it);
}