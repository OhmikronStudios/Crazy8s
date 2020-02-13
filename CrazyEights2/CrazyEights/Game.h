#pragma once

#include <vector>
#include "Player.h"

class Game
{
private:
	vector<Player> players;

public:
	Game();
	void AddPlayer(string name);


};

