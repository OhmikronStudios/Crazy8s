#include "Player.h"



Player::Player(string name)
{
	c_name = name;
	return;
}

void Player::AddCard(Card card)
{
	c_hand.push_back(card);
}

string Player::showCard(int cardNumber)
{

	return c_hand.at(cardNumber).toString();
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


Card Player::removeCard(int index)
{
	
	vector<Card>::iterator it = c_hand.begin();
	for (int i = 0; i < index; ++i)
	{
		++it;
	}
	Card card = (*it);
	c_hand.erase(it);
	return card;
}

