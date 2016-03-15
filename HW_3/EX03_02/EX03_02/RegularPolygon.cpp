#include"RegularPolygon.h"

//Method definitions for RegularPolygon class

//default RegularPolygon constructor, uses default values of n=3, side=1, x=0, and y=0
RegularPolygon::RegularPolygon()
{
	n = 3; //default number of sides
	side = 1; //default side length
	x = 0; //default x-coord
	y = 0; //default y-coord
}

//overloaded RegularPolygon constructor, uses passed-in values for # of sides and side length
RegularPolygon::RegularPolygon(int numSides, double length)
{
	n = numSides; //sets n to passed-in number of sides
	side = length; //sets side to passed-in length value
	x = 0; //default x-coord
	y = 0; //default y-coord
}

//overloaded RegularPolygon constructor, uses passed-in values for all
RegularPolygon::RegularPolygon(int numSides, double length, double xCoord, double yCoord)
{
	n = numSides; //sets n to passed-in number of sides
	side = length; //sets side to passed-in side length
	x = xCoord; //sets x to passed-in x-coord
	y = yCoord; //sets y to passed in y-coord
}

//returns number of sides
int RegularPolygon::getSides() const
{
	return side;
}

//sets the number of sides
void RegularPolygon::setSides(int number)
{
	side = number;
}

//returns side length
double RegularPolygon::getLength() const
{
	return side;
}

//sets side length
void RegularPolygon::setLength(double length)
{
	side = length;
}

//returns x-coordinate
double RegularPolygon::getX() const
{
	return x;
}

//sets x-coordinate
void RegularPolygon::setX(double coord)
{
	x = coord;
}

//returns y-coordinate
double RegularPolygon::getY() const
{
	return y;
}

//sets y-coordinate
void RegularPolygon::setY(double coord)
{
	y = coord;
}

//returns perimeter of RegularPolygon
double RegularPolygon::getPerimeter() const
{
	double perimeter = side*n; //calculates perimeter
	return perimeter;
}

//returns area of RegularPolygon
double RegularPolygon::getArea() const
{
	double area = (n*pow(side,2))/(4*tan(3.14/n)); //calculates area
	return area;
}