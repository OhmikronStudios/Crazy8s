#include <iostream>
#include "Deck.h"
#include "Card.h"   
#include "Player.h"
#include "Game.h"

using namespace std;

int playerCount = 0;



int main()
{
    Game::Game();
    
    while (playerCount == 0)
    {
        cout << "Please enter a number of players between 2 and 4" << endl;
        cin >> playerCount;
        if (playerCount < 2 || playerCount > 4)
        {
            cout << "Sorry, that's not the correct number of players, please try again" << endl;
            playerCount = 0;
        }
        else
        {
            cout << "What are the player's names?" << endl;
            for (int i = 0; i < playerCount; i++)
            {
                string playerName;
                cout << "please enter the name of player " << i + 1 << endl;
                cin >> playerName;
                Game::AddPlayer(playerName);
                
              
                

            }
           
        }

        
    }
    




    Deck testDeck;
    //show deck before shuffle
    cout << "Deck of cards: " << testDeck.toString() << endl;

    testDeck.Shuffle();
    cout << "Deck of cards: " << testDeck.toString() << endl;




}
