#include"smallestNumber.h"

int* makeArray() //creates an array, returns pointer
{
	int* arrayPointer = new int[8]{ 1,2,4,5,10,100,2,-22 };
	return arrayPointer;
}

int smallestNumber(int*list, int size) //takes a pointer to an array, returns smallest number in array
{
	int smallestNumber = list[0]; //variable for storing smallest number to be returned, initialized to first number in array
	for (int n = 1; n < size; n++) //checks remaining numbers in array against current smallest number
	{
		if (list[n] < smallestNumber)
			smallestNumber = list[n]; //changes current number under comparison to be smallest number if comparison reveals a smaller value
	}
	return smallestNumber;
}