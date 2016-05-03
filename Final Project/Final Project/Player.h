#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Player
{
private:
	int numberOfCards; //number of cards that a player has
	string name; //name of player
	Card* hand; //pointer to array of cards currently held by player
public:
	Player(string name); //constructor
	card endTurn(bool attack); //draw from pile, draw 2 if attacked
	void showHand(); //display cards in hand of player
	void playCard(int num); //plays card designated as passed-in int
	string lookUp(int num); //displays instructions for card of passed-in int
	void nope(); //negates any other card
	void attack(); //force another player to take 2 turns
	void skip(); //don't take a turn at all
	card favor(player p); //force another player to give you a card
	void shuffle(); //mix up the cards in the draw pile
	void seeFuture(vector pile); //look 3 cards into the draw pile
	card pair(player* p); //take a random card from anoter player
};