#include "Game.h"


Game::Game()
{

}

void Game::AddPlayer(string name)
{
	Player player(name);
	players.push_back(player);
}

Player Game::getPlayer(int playerNumber)
{
	return players.at(playerNumber);
}

void Game::getCard(Card card)
{
	discardPile.push_back(card);
}