//Definitions of functions for Event object class

#include<iostream>
#include<string>
#include"Event.h"
using namespace std;

/*I affirm that all code given below was written solely by me, Jacob Martin, and that any help I received adhered to the rules stated for this exam. */

//Default Event constructor, used to fill empty array slots in Venue objects to represent free time
Event::Event()
{
	Time = -1; //default time
	Title = "free"; //default title
}

//Custom Event constructor, uses passed-in name and time
Event::Event(int time, string name)
{
	Time = time; //sets time to passed-in value
	Title = name; //sets title to passed-in name
}

//Returns time of event
int Event::getTime() const
{
	return Time;
}

//Returns title of event
string Event::getTitle() const
{
	return Title;
}

//Sets time of event to passed-in value
void Event::setTime(int t)
{
	Time = t;
}

//Sets title of event to passed-in name
void Event::setTitle(string name)
{
	Title = name;
}