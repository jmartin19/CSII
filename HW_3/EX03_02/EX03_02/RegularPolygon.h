#ifndef REGULARPOLYGON_H_
#define REGULARPOLYGON_H_

#include<iostream>
#include<cmath>
using namespace std;

class RegularPolygon //an equilateral polygon defined by number and length of sides and position
{
private:
	int n; //number of sides in the polygon
	double side; //length of one side of polygon
	double x; //x-coord center of polygon
	double y; //y-coord center of polygon
public:
	RegularPolygon(); //default constructor, constructs with n=3, side=1, x=0, and y=0
	RegularPolygon(int numSides, double length); //constructor that accepts input side and length, but uses default coordinates
	RegularPolygon(int numSides, double length, double xCoord, double yCoord); //constructs a regular polygon using only input values
	int getSides() const; //returns number of sides
	void setSides(int number); //sets number of sides
	double getLength() const; //returns side length
	void setLength(double length); //sets side length
	double getX() const; //returns x-coord
	void setX(double coord); //sets x-coord
	double getY() const; //returns y-coord
	void setY(double coord); //sets y-coord
	double getPerimeter() const; //returns perimeter of polygon
	double getArea() const; //returns area of polygon
};

#endif
