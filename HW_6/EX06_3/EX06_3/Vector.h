#ifndef VECTOR_H_
#define VECTOR_H_

#include<iostream>
using namespace std;

/*I know that this class definition is hard on the eyes, but whenever I'd try and
put the function definitions for the vector class into a separate .cpp, I'd get an
unresolved external error that I just can't figure out. Sorry about that.*/


/*AAAALLLLLLLLLRRRRRRRRIGHTY THEN. Now I'm trying to test this thing and once again,
I'm getting unresolved externals and no other errors. I really, really want to fix
this for you, but I'm just not capable. Have a heart when you grad this, please. <3*/

template<typename T>
class vector //dynamically allocated data storage with added functions
{
private:
	int Size; //size of data
	T* data; //pointer to stored array of data
	int currentLocation; //furthest unused location in array
public: 
	vector<T>() //constructs an empty vector with the specified element type
	{
		Size = 5;
		data = new T[Size]; 
		currentLocation = 0;
	}

	vector<T>(int size) //constructs a vector with the initial size, filled with default values
	{
		Size = size;
		data = new T[Size];
		currentLocation = 0;
	}

	vector<T>(int size, T defaultValue) //create vector with custom default value
	{
		Size = size;
		currentLocation = 0;
		data = new T[Size];
		for (int n = 0; n < Size; n++) //populate allocated memory with passed-in default value
		{
			data[n] = defaultValue;
		}
	}

	void push_back(T element) //appends the element to this vector
	{
		if (currentLocation >= Size) //increase size of array if size is exceeded
		{
			data = doubleCapacity(data, Size);
			Size = Size * 2;
		}
		data[currentLocation] = element; //store data
		currentLocation++; //increment current location for storage
	}

	void pop_back() //removes last element from this vector
	{
		delete data[currentLocation - 1];
		currentLocation--;
	}

	unsigned const size() //return number or elements in the vector
	{
		return Size;
	}

	T const at(int index) //returns the element at the specified index in this vector
	{
		return data[index];
	}

	bool const empty() //returns true if this vector is empty
	{
		if (currentLocation == 0)
			return true;
		else
			return false;
	}

	void clear() //removes all elements from this vector
	{
		for (int n = 0; n < Size; n++)
		{
			delete data[n];
		}
		currentLocation = 0; //reset location indicator
	}

	void swap(vector V2) //swaps the contents of this vector with the specified vector
	{
		for (int n = 0; n < Size; n++)
		{
			data[n] = V2.at[n];
		}
	}
};

#endif