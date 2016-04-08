#include"CreateArray.h"

int* CreateArray(int size)
{
	//creates array and pointer
	int* arrayPointer = new int[size];

	//changes all values in array to 0
	for (int n = 0; n < size; n++)
		arrayPointer[n] = 0;

	return arrayPointer;
}

//calculates average of numbers in an array
double calculateAverage(int Array[], int size)
{
	double total = 0; // stores sum of array
	for (int n = 0; n < size; n++) //sums array
	{
		total += Array[n];
	}

	double average = total / size; //calculates average

	return average;
}

//determines quantity of numbers above average in array
int numberAboveAverage(int Array[], double average, int size)
{
	int count = 0; //stores number of stored figures above average
	//checks numbers in array against average
	for (int n = 0; n < size; n++)
	{
		if (Array[n] > average)
			count++;
	}

	return count;
}