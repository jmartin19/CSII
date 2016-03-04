//Function definitions for Venue class

#include<iostream>
#include<string>
#include"Venue.h"
#include"Event.h"

using namespace std;

/*I affirm that all code given below was written solely by me, Jacob Martin, and that any help I received adhered to the rules stated for this exam. */

//constructs a venue
Venue::Venue()
{
	//sets all available slots to be free time with name free and time -1
	for (int n = 0; n <= 11; n++)
	{
		scheduledEvents[n] = Event();
	}

	numEvents = 0; //current number of events always starts at 0
}

//adds an event to a venue
void Venue::addEvent(int time, string name)
{
	if (numEvents >= 12) //returns text if venue is already fully booked
		cout << "\nVenue fully booked. No event added.";

	else if (validTime(time) == false) //returns text if time is already in use
		cout << "\nTime slot already in use. No event added.";

	else //books an event using passed-in time and name
	{
		Event(time, name);
		numEvents++; //increments total number of events to prevent later overbookings
	}
}

//returns availability of time slot
bool Venue::validTime(int time) const
{
	bool result = true; //default return value is true, changes to false if time slot is taken
	
	//checks all extant events to ensure that time slot is not taken
	for (int n = 0; n <= 11; n++)
	{
		if (time == scheduledEvents[n].getTime)
			result = false;
	}
	
	return result;
}

//finds an event based on time slot
Event Venue::findEvent(int time) const
{
	//compares passed-in time value against time values of stored events
	for (int n = 0; n <= 11; n++)
	{
		if (scheduledEvents[n].getTime == time)
		{
			return scheduledEvents[n]; //returns current event if time match is found
		}
	}
	return Event(); //returns default event if no match for time is found
}

//finds an event based on title
Event Venue::findEvent(string name) const
{
	//compares passed-in time value against time values of stored events
	for (int n = 0; n <= 11; n++)
	{
		if (scheduledEvents[n].getTitle == name)
		{
			return scheduledEvents[n];
		}
	}
	return Event(); //returns default event if no match for title is found
}