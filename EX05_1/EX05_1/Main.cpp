//
// Program Name: EX05_1, Analyze Input
// Name: Jacob Martin
// Date: 3.15.2016
// Class and Section: Computer Science I SEC 1
//

/*This program creates an array based on input size, accepts values into the array, computes average,
and then declares how many numbers are above the average.*/
#include"CreateArray.h"

int main()
{
	int size = 0; //variable for storing array size
	cout << "Enter desired size of array: "; //prompt user for array size
	cin >> size; //store array size
	int* firstArray = CreateArray(size); //create array and return pointer

	//populates array with user input
	for (int n = 0; n < size; n++)
	{
		cout << "\nEnter number for location " << n << ": ";
		cin >> firstArray[n];
	}
	
	double average = calculateAverage(firstArray, size); //calculates average of numbers in array, stores as array

	cout << endl << "Average: " << average << endl; //outputs average

	cout << "Number of figures above average: " << numberAboveAverage(firstArray, average, size) << endl << endl; //outputs count of numbers above average

	return 0;
}