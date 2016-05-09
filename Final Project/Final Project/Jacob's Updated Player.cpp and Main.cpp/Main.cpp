#include"Player.h"
#include"card.h"

int main()
{
	vector<card> pile; //pile of face-down cards to draw from

	for (int n = 0; n < 4; n++) //generate cards in deck that are not player count dependent
	{
		pile.push_back(card("Attack"));
		pile.push_back(card("Skip"));
		pile.push_back(card("Favor"));
		pile.push_back(card("Shuffle"));
		pile.push_back(card("Tacocat"));
		pile.push_back(card("Cattermelon"));
		pile.push_back(card("Hairy Potato Cat"));
		pile.push_back(card("Rainbow-Ralphing Cat"));
		pile.push_back(card("Beard Cat"));
	}

	for (int n = 0; n < 5; n++) //generate cards in deck that are not player count dependent
	{
		pile.push_back(card("Nope"));
		pile.push_back(card("See the Future"));
	}

	int numPlayers = 0; //number of people playing
	cout << "It's time for Exploding Kittens!\nEnter number of players: "; //prompt user to input number of players for card generation
	cin >> numPlayers; //store input number of players
	
	for (int n = 0; n < 6 - numPlayers; n++) //generate defuse cards in draw pile
	{
		pile.push_back(card("Defuse"));
	}

	for (int n = 0; n < numPlayers - 1; n++) //generate exploding kitten cards in draw pile
	{
		pile.push_back(card("Exploding Kitten"));
	}
}