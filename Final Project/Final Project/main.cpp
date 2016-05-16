#include"Player.h"
#include"card.h"
#include"functions.h"

/*This program is a simulation of The Oatmeal's "Exploding Kittens," and follows the original rules as posted
at: http://www.explodingkittens.com/how */
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

	shuffleDeck(pile);//use non-member shuffle function to shuffle generated deck

	Player* Players; //pointer to players
	Players = new Player[numPlayers]; //allocate memory for players

	for (int n = 0; n < numPlayers; n++) //create players
	{
		string name;
		cout << "Enter name for P1: ";
		cin >> name;
		Players[n] = Player(name, pile);
	}


	for (int n = 0; n < numPlayers - 1; n++) //generate exploding kitten cards in draw pile
	{
		pile.push_back(card("Exploding Kitten"));
	}

	shuffleDeck(pile);//shuffle deck again using non-member function once exploding kittens have been added

	bool Attack = false; //flag used for attack card
	bool Skip = false; //flag used for skip card
	int Nope = 0; //flag used for nope card

	for (int n = 0; n < numPlayers; n++)
	{
		int error = 1; //error integer
		do //if there is an error in the card played, then this will loop back
		{
			cout << "Your turn, " << Players[n].getName() << ". Look away, everybody else." << endl; //Output player to take turn
			Players[n].showHand(); //Display player's hand 
			int choice;
			cout << "Which card will you play? Enter card #: "; //prompt player to input card choice
			cin >> choice;
			card playedCard = Players[n].getCard(choice); //temporarily store player's chosen card
			cout << "\nCard chosen: " << playedCard.getType() << endl; //output card chosen by player
			cout << "Anybody gonna nope that? y/n: "; //prompt players to play nope cards
			char nope;
			cin >> nope; //accept nopes

			if (nope == 'y')
			{
				int nopePlayer; //stores name of player who played nope
				cout << "\nAlright, who noped that? Input your number."; //prompts player to own up to nope
				for (int z = 0; z < numPlayers; z++) //output list of players
				{
					cout << z << ". " << Players[z].getName();
				}
				cin >> nopePlayer; //input player who noped
				Players[nopePlayer].nope(Nope, Players, numPlayers); //run appropriate player's nope function
			}

			if (Nope % 2 == 0)
			{
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

				else if (playedCard.getType() == "Shuffle") //protocol if shuffle card was chosen
				{
					Players[n].shuffle(pile);
				}

				else if (playedCard.getType() == "See the Future") //protocol if see the future card was chosen
				{
					Players[n].seeFuture(pile);
				}

				else if (playedCard.getType() == "Tacocat" || playedCard.getType() == "Cattermelon" || playedCard.getType() == "Hairy Potato Cat" || playedCard.getType() == "Rainbow-Ralphing Cat" || playedCard.getType() == "Beard Cat") //protocol if pair card was chosen
				{
					int f = Players[n].linearSearchPair(playedCard.getType(), choice); //checks if there is a pair
					if (f == -1) //if there is no pair
					{
						cout << "No such pair exists." << endl;
						cout << "Try again. It is still your turn." << endl;
						error = 0;
					}
					else
					{
						cout << "Enter the number of the player you want to take from: ";
						cout << "\nn";
						for (int p = 0; p < numPlayers; p++)
						{
							if (p != n)
							{
								cout << p << "." << Players[p].getName() << endl;
								if (Players[p].getDead() == true)
								{
									cout << "Cannot Choose Player " << p << ". They are dead." << endl;
								}
							}
						}
						int check = 1;
						int pairChoice = 0;
						while (check == 1)
						{
							cin >> pairChoice;
							if (pairChoice == n)
							{
								cout << "Cannot choose yourself!" << endl;
							}
							if (Players[pairChoice].getDead() == true)
							{
								cout << "Cannot choose dead players!" << endl;
							}
							else
							{
								Players[n].pair(Players[pairChoice]);
							}
						}
					}
				}
				}
				else //protocol for invalid card input
				{
					cout << "That's not a card. Let's try again.\n";
					error = 0;
				}
			}
		 while (error != 0);

		Players[n].endTurn(Attack, Skip, pile); //player draws, ending turn
												//reset attack, skip, and nope flags
		Attack = false;
		Skip = false;
		Nope = 0;
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