#include "player.h"
#include "card.h"
#include <time.h>
#include <vector>
#include <string>
#include <iostream>

using namespace std;


Player::Player(string playername) //constructor for the player class
{
	name = playername; //intialize hands, intialize number of cards to 5 (1 defuse and 4 ordinary cards)
	numberOfCards = 5;
	vector <card> hand;
	card cardef("defuse");
	hand[0] = cardef;
	for (int i = 1; 1 < numberOfCards; i++)
	{
		hand[i] = pile[i - 1]; //draw function possibly needs to be changed
		pile.pop_back();
	}
}

string Player::lookUp(int num) //you will have to strings as char
// use get function in card class to determine the card type.
{
	string name = hand[num].getType();

	switch () //needs to be fixed
	{
	case "attack":
	{
		cout << "When played, the player to your left will take two turns instead of one. This will force them to draw two cards instead of one." << endl;
		break;
	}
	case "see the future":
	{
		cout << "Look at the top 3 cards in the deck. Don't show them to the other players and replace them in the same order when done." << endl;
		break;
	}
	case "nope":
	{
		cout << "Nope negates the last action card that was played. Oddly enough, it does not negate exploding kittens or defuse cards." << endl;
		break;
	}
	case "shuffle":
	{
			cout << "Shuffles the draw pile." << endl;
			break;
	}
	case "favor":
	{
		cout << "Choose one player to give you a card of their choice." << endl;
		break;
	}
	case "skip":
	{
		cout << "The skip card will cause you to end your turn without drawing a card. After you play this card, your turn is over." << endl;
		break;
	}
	case "cat card":
	{
		cout << "A funny image of a cat is on this card. If you have another cat card, you could pair them up and play them like an action card. Playing a pair allows you to steal another player's card from their hand without looking." << endl;
			break;
	}
	case "defuse":
	{
		cout << "You can successfully defuse an exploding kitten." << endl;
		break;
	}
	default:
		cout << "Error. No such card." << endl;
		break;
	}
}

void Player::shuffle()
{
	srand(time(NULL));
	for (int i = 0; i < numberOfCards; i++)
	{
		int n = i + rand() % (numoberOfCards - i);
		swap(pile[i], pile[n]);
	}
}

void Player::seeFuture(vector <card> pile)
{
	cout << "Other players should turn away!" << endl;
	cout << "Card on top: " << pile.at(0) << "." << endl;
	cout << "Second card: " << pile.at(1) << "." << endl;
	cout << "Third card: " << pile.at(2) << "." << endl;
}
