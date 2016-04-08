#include"DoubleCapacity.h"

//doubles the size of an array
int* doubleCapacity(const int* list, int size)
{
	int*newPointer = new int[size * 2]; //creates an array of twice the size of original array

	for (int n = 0; n < size; n++) //copies over old integers into new array
	{
		newPointer[n] = list[n];
	}

	delete list; //deletes old array
	return newPointer;
}