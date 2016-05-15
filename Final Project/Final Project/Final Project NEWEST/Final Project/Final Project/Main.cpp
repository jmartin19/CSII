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

	Player* Players; //pointer to players
	Players = new Player[numPlayers]; //allocate memory for players

	for (int n = 0; n < numPlayers; n++) //create players
	{
		string name;
		cout << "Enter name for P1: ";
		cin >> name;
		Players[n] = Player(name, pile);
	}

	Players[0].shuffle(pile); //use player 1's shuffle function to shuffle deck

	for (int n = 0; n < pile.size(); n++)
	{
		cout << pile[n].getType() << endl;         //	OUTPUT SHUFFLED DECK, FIX THIS... POSSIBLY BECAUSE OF MESSED UP ORDER?
	}

	bool Attack = false; //flag used for attack card
	bool Skip = false; //flag used for skip card

	for (int n = 0; n < numPlayers; n++)
	{
		cout << "Your turn, " << Players[n].getName() << ". Look away, everybody else." << endl; //Output player to take turn
		Players[n].showHand(); //Display player's hand 
		int choice;
		cout << "Which card will you play? Enter card #: "; //prompt player to input card choice
		cin >> choice;
		card playedCard = Players[n].getCard(choice); //temporarily store player's chosen card
		cout << "Card chosen: " << playedCard.getType() << endl; //output card chosen by player

		//The following series of if statements runs the function of the card chosen
		if (playedCard.getType() == "Attack") //protocol if attack card was chosen
		{
			Players[n].attack(Attack);
		}
		
		else if (playedCard.getType() == "Skip") //protocol if skip card  was chosen
		{
			Players[n].skip(Skip);
		}

		else if (playedCard.getType() == "Favor") //protocol if favor card was chosen
		{
			cout << "Who do you want a favor from?"; //prompt player to choose favor victim
			for (int y = 0; y < numPlayers; y++) //output potential victims
			{
				if (y != n) //prevent current player from being a potential victim displayed
				{
					cout << y << ". " << Players[y].getName() << endl;
				}

			}
			int favorChoice; //used to store player's choice of favor victim
			cin >> favorChoice;
			Players[n].favor(Players[favorChoice]); //pass in chosen player to favor function
		}
	} 

	int end = 1;
	while (end != 0)
	{
		cout << endl;
		cout << "End? 0 to end: ";
		cin >> end;
	}

	return 0;
}