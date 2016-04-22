#include<iostream>
#include<string>
using namespace std;

/*This program checks to see if elements in an array are sorted in order from smallest to largest.*/


template<typename T>
bool isSorted(const T list[], int size)
{
	bool sorted = true; //flag to be returned

	for (int n = 0; n < size -1; n++) //checks every location in array until size is met
	{
		if (list[n] > list[n + 1])
		{
			sorted = false; //changes flag to false if an element doesn't fall in order
		}
	}

	return sorted;
}

int main()
{
	int orderlyInts[5]{ 1,2,3,4,5 }; //declares an array of numbers in order
	int disorderlyInts[5]{ 4,7,6,5,8 }; //declares an array of numbers NOT in order
	double orderlyDoubles[5]{ 1.1,2.2,3.3,4.4,5.5 }; //declares an array of doubles in order
	double disorderlyDoubles[5]{ 2.3,7.8,5.6,1.2,9.0 }; //declares an array of double NOT in order

	//declare strings to prevent confliction between const char and string types
	string one = "a";
	string two = "b";
	string three = "c";
	string four = "d";
	string five = "e";

	string orderlyStrings[5]{ one, two, three, four, five }; //declares an array of strings in order
	string disorderlyStrings[5]{ five, three, one, two, four };  //declares an array of strings NOT in order

	/*test arrays*/
	cout << "In order?\n" << "--------\n"; //title
	cout << "Orderly ints: " << isSorted(orderlyInts, 5) << endl; //test ints
	cout << "Disorderly ints: " << isSorted(disorderlyInts, 5) << endl; 
	cout << "Orderly doubles: " << isSorted(orderlyDoubles, 5) << endl; //test doubles
	cout << "Disorderly doubles: " << isSorted(disorderlyDoubles, 5) << endl;
	cout << "Orderly strings: " << isSorted(orderlyStrings, 5) << endl; //test strings
	cout << "Disorderly strings: " << isSorted(disorderlyStrings, 5) << endl;

	return 0;
}