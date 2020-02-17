#include <iostream>
#include "Deck.h"
#include "Card.h"   
#include "Player.h"
#include "Game.h"

using namespace std;


Deck drawPile; //should these be taken out and put only in their classes? - Yes... some rejigging will be needed here - both drawpile and deck should become members of game.


// Card topDiscard; - will be used to validate the card selected to be played.





void gameSetUp(Game& game);


int main()
{
    Game activeGame;
    int currentPlayer = 0; //should be randomized
    gameSetUp(activeGame);
    while (activeGame.isGameWon() == false)
    {
        
        



        //Player plays a card - to be converted into a function called at the start of each player's turn.

        Player& activePlayer = activeGame.getPlayer(currentPlayer);
        int card;
        do
        {

            cout << activePlayer.GetName() << "'s Hand is:" << endl;
            for (int i = 0; i < activePlayer.getSize(); i++)
            {
                cout << i << ". " << activePlayer.showCard(i) << endl;
            }
            cout << "The top card on the discard pile is: " << activeGame.getTopCardOfDiscard().toString() << endl;
            cout << "enter a card # from player 1's hand." << endl << "if you are done with your turn, enter -1 to end turn" << endl;


            cin >> card;
            if (card >= 0)
            {
                //Validation check to see if the chosen card can be played legally
                // if not legal && not valid, break; to restart the turn. (give false play warning)
                //If it's valid, effect check to see if it's a special card that has a particular effect - 8's, 2's, J's, etc. 

                Card dumbcard = activePlayer.removeCard(card);
                activeGame.addToDiscard(dumbcard);

                // move to next player's turn.
            }
        } while (card != -1);
    

        if (currentPlayer == activeGame.getPlayerCount()-1)
        {
            currentPlayer = 0;
        }
        else
        {
            currentPlayer += 1;
        }

    } 
    //print Winner!
}


void gameSetUp(Game& game)
{
    drawPile.Shuffle();
    cout << "Deck of cards: " << drawPile.toString() << endl; 
    int playerCount = 0;
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

    for (int j = 0; j < playerCount; j++)
    {
        Player& activePlayer = game.getPlayer(j);
        string playerName = activePlayer.GetName();

        Card topCard;
        for (int i = 0; i < 8; i++)
        {
            topCard = drawPile.getTopCard();
            activePlayer.AddCard(topCard);
            drawPile.removeCard();
        }

        topCard = drawPile.getTopCard();
        game.addToDiscard(topCard);
        drawPile.removeCard();

        cout << endl;


    }
}
    







