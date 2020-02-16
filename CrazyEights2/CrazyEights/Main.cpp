#include <iostream>
#include "Deck.h"
#include "Card.h"   
#include "Player.h"
#include "Game.h"

using namespace std;

int playerCount = 0;
Deck drawPile;
Card topCard;
Game players;



void setUp(Game& game);
void FirstDeal(Game& Game);
void playerSetUp(Game& game);


int main()
{
    Game activeGame;
    setUp(activeGame);
    playerSetUp(activeGame);
    FirstDeal(activeGame);
    
    Player activePlayer = activeGame.getPlayer(0);
    for (int i = 0; i < activePlayer.getSize(); i++)
    {
        activePlayer.showCard(i);
    }
    cout << "enter a card # from player 1's hand." << endl;
  
    int card;
    cin >> card;
    activePlayer.removeCard(card);
    
    
    

}

void FirstDeal(Game& activeGame)
{
    for (int j = 0; j < playerCount; j++)
    {
        Player activePlayer = activeGame.getPlayer(j);
        string playerName = activePlayer.GetName();
        cout << playerName << "'s hand is:";
        
        for (int i = 0; i < 8; i++)
        {
            topCard = drawPile.getTopCard();
            activePlayer.AddCard(topCard);
            activePlayer.showCard(i);
            drawPile.removeCard();
        }
        cout << endl;


    }
}

void setUp(Game& game)
{
    drawPile.Shuffle();
    cout << "Deck of cards: " << drawPile.toString() << endl; 
}

void playerSetUp(Game& game)
{
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
                game.AddPlayer(playerName);
            }

        }

    }
}
    




    //Deck testDeck;
    ////show deck before shuffle
    //cout << "Deck of cards: " << testDeck.toString() << endl;

    //testDeck.Shuffle();
    //cout << "Deck of cards: " << testDeck.toString() << endl;





