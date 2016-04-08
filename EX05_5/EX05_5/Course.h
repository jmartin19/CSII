#ifndef COURSE_H_
#define	COURSE_H_
#include<iostream>
#include<string>
using namespace std;

class Course //school course of specific name and size
{
private:
	int numberOfStudents; //total of students in class
	string courseName; //name of course
	int capacity; //max student capacity of course
	string* students; //names of students in class
public:
	Course(const string&courseName, int capacity); //Course constructor, accepts passed in name and capacity
	~Course(); //deletes array of students
	string getCourseName() const; //returns name of course
	void addStudent(const string& name); //adds a student to a course
	void dropStudent(const string& name); //removes a student from a course
	string* getStudents() const; //returns students
	int getNumberOfStudents() const; //returns number of students
	string* doubleCapacity(); //doubles the size of a class' capacity
};




#endif