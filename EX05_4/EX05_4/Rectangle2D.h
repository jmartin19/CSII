#ifndef RECTANGLE2D_H_
#define RECTANGLE2D_H_

#include<iostream>
using namespace std;

class Rectangle2D //a class of two-dimensional rectangles
{
private:
	double x; //x-coordinate of rectangle
	double y; //y-coordinate of rectangle
	double width; //width of rectangle
	double length; //length of rectangle
public:
	double getx() const; //gets x-coordinate
	double gety() const; //gets y-coordinate
	void setx(double X); //sets x-coordinate
	void sety(double Y); //sets y-coordinate
	double getwidth() const; //gets width
	double getlength() const; //gets length
	void setwidth(double w); //sets width
	void setlength(double l); //sets length
	Rectangle2D(); //default constructor
	Rectangle2D(double X, double Y, double w, double l); //constructs a default rectangle
	double getArea() const; //gets area of rectangle
	double getPerimeter() const; //gets perimeter of rectangle
	bool contains(double x, double y) const; //returns if a point is within a rectangle
	bool contains(const Rectangle2D &r) const; //returns if a rectangle is within a rectangle
	bool overlaps(const Rectangle2D &r) const; //returns if a rectangle overlaps with another rectangle
};

#endif