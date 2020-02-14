#pragma once

#include <vector>
#include "Player.h"

class Game
{
private:
	vector<Player> players;
	vector<Card> discardPile;

public:
	Game();
	void AddPlayer(string name);
	Player getPlayer(int playerNumber);
	void getCard(Card card);

};

