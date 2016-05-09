#include"Player.h"
#include"card.h"

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