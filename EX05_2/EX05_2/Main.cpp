//
// Program Name: EX05_2, Increase Array Size
// Name: Jacob Martin
// Date: 3.30.2016
// Class and Section: Computer Science I SEC 1
//

/*This program doubles the size of an array, preserving the currently stored values.*/

#include"DoubleCapacity.h"
#include"CreateArray.h"

int main()
{
	int*firstArray = createArray(); //creates an array of 5 numbers

	for (int n = 0; n < 5; n++) //initializes array to be all twos
	{
		firstArray[n] = 2;
	}

	for (int n = 0; n < 5; n++) //outputs contents of array
	{
		cout << firstArray[n] << "  ";
	}

	cout << endl;

	firstArray = doubleCapacity(firstArray, 5);

	for (int n = 0; n < 10; n++) //outputs contents of array
	{
		cout << firstArray[n] << "  ";
	}
}