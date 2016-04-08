#include"Course.h"

//doubles the size of an array
string* Course::doubleCapacity()
{
	capacity = capacity * 2; //doubles capacity
	string*newPointer = new string[capacity]; //creates an array of students twice the size of original array

	for (int n = 0; n < capacity; n++) //copies over old names into new array
	{
		newPointer[n] = students[n];
	}
	delete students; //delete old array
	return newPointer;
}

Course::Course(const string&courseName, int capacity) //Course constructor, accepts passed in name and capacity
{
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}

Course::~Course() //deletes array of students
{
	delete[] students;
}

string Course::getCourseName() const //returns name of course
{
	return courseName;
}


void Course::addStudent(const string& name) //adds a student to a course
{
	if (numberOfStudents >= capacity) //expands array if at capacity
	{
		students = doubleCapacity();
	}
	students[numberOfStudents] = name;
	numberOfStudents++;
}

void Course::dropStudent(const string& name) //removes a student from a course
{
	for (int n = 0; n < capacity; n++)
	{
		if (students[n] == name)
		{
			students[n] = students[numberOfStudents]; //replaces student being dropped with student furthest down the list
		}
	}
	numberOfStudents--;
}

string* Course::getStudents() const //returns students
{
	return students;
}

int Course::getNumberOfStudents() const //returns number of students
{
	return numberOfStudents;
}