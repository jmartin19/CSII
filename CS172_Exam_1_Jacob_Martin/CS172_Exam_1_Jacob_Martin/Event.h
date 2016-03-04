#ifndef EVENT_H_
#define EVENT_H_

/*I affirm that all code given below was written solely by me, Jacob Martin, and that any help I received adhered to the rules stated for this exam. */

//Events fill time slots in Venues
class Event
{
private:
	int Time; //time at which an event occurs
	string Title; //name of event
public:
	Event(); //constructs a default event named free with time -1
	Event(int time, string name); //constructs an event using passed in time and name
	int getTime() const; //returns time of event
	string getTitle() const; //returns title of event
	void setTime(int t); //sets time of event
	void setTitle(string name); //sets title of event
};

#endif