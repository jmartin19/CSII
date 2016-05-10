#include "player.h"
#include "card.h"
#include <time.h>
#include <vector>
#include <string>
#include <iostream>

using namespace std;


Player::Player(string playername, vector<card> pile) //constructor for the player class
{
	name = playername; //intialize hands, intialize number of cards to 5 (1 defuse and 4 ordinary cards)
	numberOfCards = 5;
	vector <card> hand;
	card cardef("defuse");
	hand[0] = cardef;
	for (int i = 1; 1 < numberOfCards; i++)
	{
		hand[i] = pile[0]; //draw function possibly needs to be changed
		pile.erase(pile.begin());
	}
}

string Player::lookUp(int num) //you will have to strings as char
// use get function in card class to determine the card type.
{
	string name = hand[num].getType();

	
	if (name == "attack")
	{
		cout << "When played, the player to your left will take two turns instead of one. This will force them to draw two cards instead of one." << endl;
		
	}
	if (name == "see the future")
	{
		cout << "Look at the top 3 cards in the deck. Don't show them to the other players and replace them in the same order when done." << endl;
	
	}
	if (name == "nope")
	{
		cout << "Nope negates the last action card that was played. Oddly enough, it does not negate exploding kittens or defuse cards." << endl;
		
	}
	if (name =="shuffle")
	{
			cout << "Shuffles the draw pile." << endl;
			
	}
	if (name == "favor")
	{
		cout << "Choose one player to give you a card of their choice." << endl;
	}
	if (name == "skip")
	{
		cout << "The skip card will cause you to end your turn without drawing a card. After you play this card, your turn is over." << endl;
	
	}
	if (name == "cat card")
	{
		cout << "A funny image of a cat is on this card. If you have another cat card, you could pair them up and play them like an action card. Playing a pair allows you to steal another player's card from their hand without looking." << endl;
			
	}
	if (name == "defuse")
	{
		cout << "You can successfully defuse an exploding kitten." << endl;
		
	}
	else
	{
		cout << "Error. No such card." << endl;
	
	}
}

void Player::shuffle(vector<card> pile)
{
	int numbercard = pile.size();
	srand(time(NULL));
	for (int i = 0; i < numbercard; i++)
	{
		int n = i + rand() % (numbercard - i);
		swap(pile[i], pile[n]);
	}
}

void Player::seeFuture(vector <card> pile)
{
	
	cout << "Other players should turn away!" << endl;
	cout << "Card on top: " << pile[0].getType() << "." << endl;
	cout << "Second card: " << pile[1].getType() << "." << endl;
	cout << "Third card: " << pile[2].getType() << "." << endl;
}

card Player::endTurn(bool& attack, bool& skip)
{
	int turns; //# of times player must draw, determined by attack
	if (attack == true) //declares integer used to force player to take correct number of turns
		turns = 2;
	else if (skip == true) //declares integer used to force player to take correct number of turns
		turns = 0;
	else
		turns = 1;

	while (turns != 0)
	{
		numberOfCards++; //increment total number of cards held by player
		hand.push_back(card); //ADD TOP CARD FROM DECK
							  /*DELETE TOP CARD FROM DECK*/
		turns--; //ends loop if player has taken appropriate number of turns
	}

}


void Player::attack(bool & attack)
{
	attack = true;
}

card Player::favor(Player p)
{
	cout << endl << p.name << ", hand over a card.\n"; //prompts selected player to hand over a card
	p.showHand();
	int choice = 0; //used to store player's choice
	cin >> choice; //store player's choice
	card returnCard = p.hand[choice]; //card to be returned
	return returnCard;
}