//
// Program Name: EX03_2
// Name: Jacob Martin
// Date: 3.15.2016
// Class and Section: Computer Science I SEC 1
//

#include"RegularPolygon.h"

int main()
{
	RegularPolygon poly1; //constructs default regular polygon
	RegularPolygon poly2 (6, 4); //constructs regular polygon with custom n and side
	RegularPolygon poly3 (10, 4, 5.6, 7.8); //constructs completely custom polygon

	//display perimeter and area for each polygon
	cout << "Polygon 1: Perimeter = " << poly1.getPerimeter() << " Area = " << poly1.getArea() << endl;
	cout << "Polygon 2: Perimeter = " << poly2.getPerimeter() << " Area = " << poly2.getArea() << endl;
	cout << "Polygon 3: Perimeter =	" << poly3.getPerimeter() << " Area = " << poly3.getArea() << endl;
	
	return 0;
}