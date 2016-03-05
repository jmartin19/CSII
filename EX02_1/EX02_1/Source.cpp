//
// Program Name: EX02_1: The Fan Class
// Name: Jacob Martin
// Date: 2.18.2016
// Class and Section: Computer Science II SEC II
//

#include<iostream>
#include"Header.h"
using namespace std;

/*This code defines a class called Fan*/

int main()
{
	//constructs a fan based on default values
	Fan defaultFan;
	//outputs respective values of speed, on, and radius for constructed default fan
	cout << defaultFan.getspeed() << "  " << defaultFan.geton() << "  " << defaultFan.getradius() << endl;
	//constructs a fan to test set functions
	Fan customFan(3, true, 8);
	//outputs values of custom fan
	cout << customFan.getspeed() << "  " << customFan.geton() << "  " << customFan.getradius() << endl;
	//changes value of custom fan using setters	
											//Derek - nice job using these setters, they look great well done :)
	customFan.setspeed(2);
	customFan.seton(false);
	customFan.setradius(9);
	//outputs values of custom fan
	cout << customFan.getspeed() << "  " << customFan.geton() << "  " << customFan.getradius() << endl;
	return 0;
}



