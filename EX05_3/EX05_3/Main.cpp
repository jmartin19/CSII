//
// Program Name: EX05_3, Find the smallest element
// Name: Jacob Martin
// Date: 4.7.2016
// Class and Section: Computer Science I SEC 1
//

/*This program uses pointers to find the smallest number in an array*/

#include"smallestNumber.h"

int main()
{
	int* firstArray = makeArray(); //create array

	for (int n = 0; n < 8; n++) //display contents of array
	{
		cout << firstArray[n] << "  ";
	}
	cout << endl;

	cout << "Smallest number in array: " << smallestNumber(firstArray, 8) << endl; //display smallest number in array
}