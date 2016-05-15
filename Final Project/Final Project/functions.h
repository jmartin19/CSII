#ifndef _H_FUNCTIONS_
#define _H_FUNCTIONS_

#include "card.h"
#include <vector>
using namespace std;

template<typename T>
void shuffleDeck(vector<T>& pile) //seperate function to shuffle the deck
{
	int numbercard = pile.size(); //gets the size of the pile at this point
	srand(time(NULL));  //starts a random number generator based on time
	for (int i = 0; i < numbercard; i++) //shuffles the cards by using the vector function swap
	{
		int n = i + rand() % (numbercard - i);
		swap(pile[i], pile[n]);
	}
}


template<typename T>
int linearSearch(const T list[], T key, int choice; int arraySize) //enter an array of any type and an "item" of the same type to search in the array
{
	for (int i = 0; i < arraySize; i++)
	{

		if (key == list[i] && i =! choice)
		{
			return i; //returns which number in the array the item was found
		}
	}
	return -1; //returns that nothing was found
}


int error = 1; //error integer
do //if there is an error in the card played, then this will loop back
{
	else if (playedCard.getType() == "Tacocat" || playedCard.getType() == "Cattermelon" || playedCard.getType() == "Hairy Potato Cat" || playedCard.getType() == "Rainbow-Ralphing Cat" || playedCard.getType() == "Beard Cat")
	{
		int f = linearSearch(Players[n].hand, playedCard.getType(), choice, Players[n].hand.size()); //checks if there is a pair
		if (f == -1) //if there is no pair
		{
			cout << "No such pair exists." << endl;
			cout << "Try again. It is still your turn." << endl;
			error = 0;
		}
		else
		{
			card pair(Player p);
		}
	}
} while (error != 0);
}
#endif 
