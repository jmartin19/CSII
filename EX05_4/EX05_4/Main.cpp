//
// Program Name: EX05_4, The Rectangle2D Class
// Name: Jacob Martin
// Date: 4.7.2016
// Class and Section: Computer Science I SEC 1
//

/*This program defines a class of two-dimensional rectangles.*/

#include"Rectangle2D.h"

int main()
{
	//create three custom rectangles for testing
	Rectangle2D r1(2, 2, 5.5, 5.9);
	Rectangle2D r2(4, 5, 10.5, 3.2);
	Rectangle2D r3(3, 5, 2.3, 5.4);

	//test functions of rectangle class
	cout << "Area of r1: " << r1.getArea() << endl;
	cout << "Perimeter of r1: " << r1.getPerimeter() << endl;
	cout << "Coordinate(3,3) within r1 = " << r1.contains(3, 3) << endl;
	cout << "r2 within r1 = " << r1.contains(r2) << endl;
	cout << "r1 overlapping r3 = " << r1.overlaps(r3) << endl;
}