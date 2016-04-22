#include"DoubleCapacity.h"

//doubles the size of an array
template<typename X>
X* doubleCapacity(X* list, int size)
{
	X*newPointer = new X[size * 2]; //creates an array of twice the size of original array

	for (int n = 0; n < size; n++) //copies over old integers into new array
	{
		newPointer[n] = list[n];
	}

	delete[] list; //deletes old array
	return newPointer;
}