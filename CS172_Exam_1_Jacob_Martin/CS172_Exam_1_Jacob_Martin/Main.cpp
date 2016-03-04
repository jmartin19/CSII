//
// Program Name: EXAM 1 Venue Organizer
// Name: Jacob Martin
// Date: 3.3.2016
// Class and Section: Computer Science II SEC II
//

/*I affirm that all code given below was written solely by me, Jacob Martin, and that any help I received adhered to the rules stated for this exam. */

/*This program organizes events for a venue.*/

//...Yeah, I know it doesn't work. I've been bashing my head against this crap for 4 hours today, and I haven't made any progress, so here's the best I've got.
//	 It looks nice. It looks like something that might work. But I'm missing something big, and I'm about to headbutt a hole into my laptop screen. 

#include <iostream>
#include <string>
#include "Event.h"
#include "Venue.h"

using namespace std;

int main()
{
	Venue theSpot;
	theSpot.addEvent(10, "Coffee Hour");    //Should work BUT DOESN'T
	theSpot.addEvent(11, "Brunch w/ Bob");  //Should work  BUT DOESN'T
	theSpot.addEvent(11, "Bingo"); //Shouldn't work... Well hey, nailed this one.

	cout << theSpot.findEvent(10).getTitle() << endl; //Should find Coffee Hour... Yeah, it should. But it don't.
	cout << theSpot.findEvent("Brunch w/ Bob").getTime() << endl;  //Should find 11 o'clock
	cout << theSpot.findEvent("Bingo").getTime() << endl; //Should print -1, because Bingo ain't there! I guarantee you Bingo ain't there! That's something, right?

	return 0;
}
