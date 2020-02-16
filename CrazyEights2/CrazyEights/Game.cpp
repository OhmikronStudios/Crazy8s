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

void Game::getCard(Card card)
{
	c_discardPile.push_back(card);
}