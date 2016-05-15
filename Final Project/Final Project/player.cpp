#include"Player.h"
#include"card.h"

Player::Player() //default constructor for the player class
{
	name = "playername"; //intialize hands, intialize number of cards to 5 (1 defuse and 4 ordinary cards)
	numberOfCards = 5;
	hand.push_back(card("Defuse"));
	dead = false;
}

Player::Player(string playername, vector<card> pile) //constructor for the player class
{
	name = playername; //intialize hands, intialize number of cards to 5 (1 defuse and 4 ordinary cards)
	numberOfCards = 5;
	hand.push_back(card("Defuse"));
	for (int i = 1; i < numberOfCards; i++)
	{
		hand.push_back(pile.back()); //draws 4 more cards into player's hand
		pile.pop_back(); //erases the cards that were drawn from the pile
	}
	dead = false;
}

card Player::getCard(int x) //gets a card from a player's hand, delete from player's hand
{
	card returnCard = hand[x]; //card to be returned
	hand.erase(hand.begin() + x); //delete played card from player's hand
	return returnCard;
}

void Player::endTurn(bool & attack, bool & skip, vector<card> & pile)
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
		hand.push_back(pile.back()); //ADD TOP CARD FROM DECK
		pile.pop_back(); //delete card from top of deck
		turns--; //ends loop if player has taken appropriate number of turns
	}

}


void Player::attack(bool & attack) //force the next player to take 2 cards instead of 1
{
	attack = true;
}

void Player::shuffle(vector<card> pile) //shuffles the vector called pile (the deck)
{
	int numbercard = pile.size(); //gets the size of the pile at this point
	srand(time(NULL));  //starts a random number generator based on time
	for (int i = 0; i < numbercard; i++) //shuffles the cards by using the vector function swap
	{
		int n = i + rand() % (numbercard - i);
		swap(pile[i], pile[n]);
	}
}

void Player::lookUp(int num) //looks up a card in the players hand
{
	string name = hand[num].getType(); //gets the card type to compare to


	if (name == "Attack")
	{
		cout << "When played, the player to your left will take two turns instead of one. This will force them to draw two cards instead of one." << endl;

	}
	if (name == "See the Future")
	{
		cout << "Look at the top 3 cards in the deck. Don't show them to the other players and replace them in the same order when done." << endl;

	}
	if (name == "Nope")
	{
		cout << "Nope negates the last action card that was played. Oddly enough, it does not negate exploding kittens or defuse cards." << endl;

	}
	if (name == "Shuffle")
	{
		cout << "Shuffles the draw pile." << endl;

	}
	if (name == "Favor")
	{
		cout << "Choose one player to give you a card of their choice." << endl;
	}
	if (name == "Skip")
	{
		cout << "The skip card will cause you to end your turn without drawing a card. After you play this card, your turn is over." << endl;

	}
	if (name == "Tacocat" || name == "Cattermelon" || name == "Hairy Potato Cat" || name == "Rainbow-Ralphing Cat" || name == "Beard Cat")
	{
		cout << "A funny image of a cat is on this card. If you have another cat card, you could pair them up and play them like an action card. Playing a pair allows you to steal another player's card from their hand without looking." << endl;

	}
	if (name == "Defuse")
	{
		cout << "You can successfully defuse an exploding kitten." << endl;

	}
	else
	{
		cout << "Error. No such card." << endl;

	}
}

void Player::showHand() //display cards in a player's hand
{
	for (int i = 0; i < hand.size(); i++)
	{
		cout << i << ". " << hand[i].getType() << endl;
	}
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

void Player::seeFuture(vector <card> pile) //player looks at the top three cards of the pile (the deck)
{

	cout << "Other players should turn away!" << endl;
	cout << "Card on top: " << pile[0].getType() << "." << endl; //first card
	cout << "Second card: " << pile[1].getType() << "." << endl; //second card
	cout << "Third card: " << pile[2].getType() << "." << endl; //third card
}

void Player::skip(bool & skip)
{
	skip = true;
}

card Player::pair(Player p)
{
	cout << "Enter the name of player you want to take a card from: ";
	cin >> p.name;// prompts the current player to take a random card from from a selected player.
	cout << endl << p.name << ", takes a card from a selected player" << endl;
	int choice = 0; //card selected from player will be stored in this variable.
	cin >> choice; //store player's choice.
	card returnCard = p.hand[choice - 1];
	return returnCard;
}

string Player::getName()
{
	return name;
}

bool Player::getDead()
{
	return dead;
}

//What I would write in the "for loop" for the player turns in main
//if(Player[n].getDead() == true)
// {
//   Player[n].skip(Skip);
// }