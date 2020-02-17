#include "Game.h"


Game::Game()
{

}

void Game::AddPlayer(string name)
{
	Player player(name);
	c_players.push_back(player);
}

Player& Game::getPlayer(int playerNumber)
{
	return c_players[playerNumber];
}

void Game::addToDiscard(Card& card)
{
	c_discardPile.push_back(card);
}

Card Game::getTopCardOfDiscard()
{
	Card topCard = c_discardPile.back();
	return topCard;
}

int Game::getPlayerCount()
{
	return c_players.size();
}

bool Game::isGameWon()
{
	bool result = false;
	for (int i = 0; i < getPlayerCount(); ++i)
	{
		if (c_players[i].getSize() == 0)
		{
			result = true;
			break;
		}
	}
	return result;
}

