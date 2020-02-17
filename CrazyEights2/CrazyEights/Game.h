#pragma once

#include <vector>
#include "Player.h"


class Game
{
private:
	vector<Player> c_players;
	vector<Card> c_discardPile;


public:
	Game();
	void AddPlayer(string name);
	Player& getPlayer(int playerNumber);
	void addToDiscard(Card& card);
	Card getTopCardOfDiscard();
	int getPlayerCount();
	bool isGameWon();
};

