#include "functions.h"
#include <time.h>


void shuffleDeck(vector<card>& pile)
{
	int numbercard = pile.size(); //gets the size of the pile at this point
	srand(time(NULL));  //starts a random number generator based on time
	for (int i = 0; i < numbercard; i++) //shuffles the cards by using the vector function swap
	{
		int n = i + rand() % (numbercard - i);
		swap(pile[i], pile[n]);
	}
}