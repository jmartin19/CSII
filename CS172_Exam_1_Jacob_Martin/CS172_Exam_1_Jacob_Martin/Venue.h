#ifndef VENUE_H_
#define VENUE_H_

/*I affirm that all code given below was written solely by me, Jacob Martin, and that any help I received adhered to the rules stated for this exam. */

//A location at which events can be scheduled
class Venue
{
private:
	Event scheduledEvents[12]; //array of events
	int numEvents; //total number of events currently scheduled
	bool validTime(int time) const; //availability of given time slot, returns true if time slot is empty
public:
	void addEvent(int time, string name); //adds a new event object to venue's schedule
	Venue(); //constructs a venue
	Event findEvent(int time) const; //finds an event based on time slot
	Event findEvent(string name) const; //finds an event based on title
};

#endif
