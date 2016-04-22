#include<iostream>
#include<string>
using namespace std;

template<typename T>
int linearSearch(const T list[], T key, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i])
			return i;
	}
	return -1;
}

int main()
{
	int numbers[5]{ 1, 2, 3, 4, 5 }; //declare a test array of ints
	double doubles[5]{ 1.1, 2.2, 3.3, 4.4, 5.5 }; //declare a test array of doubles
	string bean[5]{ "one", "two", "three", "four", "five" }; //declare a test array of strings
	string S = "one";
	cout << linearSearch(numbers, 4, 5) << endl; //locate 4 in numbers array
	cout << linearSearch(doubles, 5.5, 5) << endl; //locate 5.5 in doubles array
	cout << linearSearch(bean, S, 5) << endl; //locate "one" in strings array
}