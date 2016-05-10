#ifndef PLAYER_H_
#define PLAYER_H_

#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Player
{
private:
	int numberOfCards; //number of cards that a player has
	string name; //name of player
	vector<card> hand; //pointer to array of cards currently held by player
public:
	Player(string name, vector<card> pile); //constructor
	card endTurn(bool& attack, bool& skip); //draw from pile, draw 2 if attacked
	void showHand(); //display cards in hand of player
	void playCard(int num); //plays card designated as passed-in int
	string lookUp(int num); //displays instructions for card of passed-in int
	void attack(bool & attack); //force another player to take 2 turns
	void skip(); //don't take a turn at all
	card favor(Player p); //force another player to give you a card
	void shuffle(vector<card> pile); //mix up the cards in the draw pile
	void seeFuture(vector<card> pile); //look 3 cards into the draw pile
	card pair(Player* p); //take a random card from anoter player
};

#endif