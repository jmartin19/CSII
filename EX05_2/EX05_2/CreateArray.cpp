#include"CreateArray.h"

int* createArray() //creates a new array of 5 integers, returns pointer
{
	int* arrayPointer = new int[5];
	return arrayPointer;
}