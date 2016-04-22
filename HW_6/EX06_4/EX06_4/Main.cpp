#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
using namespace std;


/*Look, vectors can suck it. I can't get this one to run either,
these errors I'm getting don't make any sense to me. I'll get help.*/


//checks if a number is included in an array
template<typename T>
bool isIncluded(const T list[], int size, T element)
{
	for (int n = 0; n < size; n++) //check every slot in array for element
	{
		if (list[n] == element)
			return true; //returns true if element is encountered
	}

	return false;
}

//shuffles the contents of a vector
template<typename T>
void shuffle(vector<T>& v)
{
	srand(time(NULL)); //seed for pseudorandom number generation to be used in shuffling
	vector<T> dummy; //declare temporary vector to hold values in v
	v.swap(dummy); //move contents of v to dummy vector
	v.clear(); //clear out original vector
	int usedNumbers[dummy.size()]; //array for storing locations already storing shuffled elements
	for (int n = 0; n < dummy.size(); n++) //move every element in dummy back into a random location in original vector
	{
		int location = (rand() % (dummy.size() - 1)); //generate random location in vector
		while (isIncluded(usedNumbers, dummy.size, location) == true) //re-roll until unused location is found
			location = (rand() % (dummy.size() - 1));
		usedNumbers[n] = location; //store used number in array
		v.push_back(dummy.at(location)); //add randomly selected element back into original vector
	}
}

int main()
{
	vector<int> numbers; //declare test vector
	//prompt input of numbers
	for (int n = 0; n < 10; n++)
	{
		int number; //used to temporarily store numbers for vector
		cout << "Enter number for location " << n << ": ";
		cin >> number; //store user input
		numbers.push_back(number); //store number before prompting next number
		cout << endl;
	}

	//Display unshuffled vector
	cout << "Original vector contents: ";
	for (int n = 0; n < 10; n++)
	{
		cout << numbers.at(n) << " ";
	}
	cout << endl;

	shuffle(numbers);

	//Display shuffled vector
	cout << "Shuffled vector contents: ";
	for (int n = 0; n < 10; n++)
	{
		cout << numbers.at(n) << " ";
	}
}