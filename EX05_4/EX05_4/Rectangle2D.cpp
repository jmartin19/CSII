#include"Rectangle2D.h"

double Rectangle2D::getx() const //returns x-coordinate
{
	return x;
}

double Rectangle2D::gety() const //returns y-coordinate
{
	return y;	
}

void Rectangle2D::setx(double X) //sets x-coordinate
{
	x = X;
}

void Rectangle2D::sety(double Y) //sets y-coordinate
{
	y = Y;
}

double Rectangle2D::getwidth() const //returns width
{
	return width;
}

double Rectangle2D::getlength() const //returns length
{
	return length;
}

void Rectangle2D::setwidth(double w) //sets width
{
	width = w;
}

void Rectangle2D::setlength(double l) //sets length
{
	length = l;
}

Rectangle2D::Rectangle2D() //constructs a default rectangle of coordinates (0,0) and w/l (1,1)
{
	x = 0;
	y = 0;
	width = 1;
	length = 1;
}

Rectangle2D::Rectangle2D(double X, double Y, double w, double l) //constructs a rectangle of passed-in values
{
	x = X;
	y = Y;
	width = w;
	length = l;
}

double Rectangle2D::getArea() const //calculates and returns area of rectangle
{
	double area = 0;
	area = length*width;
	return area;
}

double Rectangle2D::getPerimeter() const //calculates and returns perimeter of rectangle
{
	double perimeter = 0;
	perimeter = (length * 2) + (width * 2);
	return perimeter;
}

bool Rectangle2D::contains(double X, double Y) const //checks if a point is within a rectangle
{
	bool isWithin = false; //flag to be returned
	if (((X < x + (width / 2)) && (X > x - (width / 2)) )&&( (Y < y + (length / 2)) && (Y > y - (length / 2)))) //checks point against boundaries of rectangle
		isWithin = true; //changes flag to true if no boundaries are exceeded
	return isWithin;
}

bool Rectangle2D::contains(const Rectangle2D &r) const //returns if a rectangle is within another rectangle
{
	bool isWithin = true; //flag to be returned
	if (r.getx() + (r.getwidth() / 2) > x + (width / 2)) //changes flag to false if width boundary is exceeded in positive direction
		isWithin = false;
	if (r.getx() - (r.getwidth() / 2) < x - (width / 2)) //changes flag to false if width boundary is exceeded in negative direction
		isWithin = false;
	if (r.gety() + (r.getlength() / 2) > y + (length / 2)) //changes flag to false if length boundary is exceeded in positive direction
		isWithin = false;
	if (r.gety() - (r.getlength() / 2) < y - (length / 2)) //changes flag to false if length is exceeded in the negative direction
		isWithin = false;
	return isWithin;
}

bool Rectangle2D::overlaps(const Rectangle2D &r) const //returns if a rectangle overlaps with another rectangle
{
	bool overlaps = false; //flag to be returned
	for (double n = getx()-(getwidth()/2); n <= getx() + (getwidth() / 2); n++) //checks points for overlap
	{
		for (double z = gety() - (getlength() / 2); z <= gety() + (getlength() / 2); z++)
		{
			if (contains(n, z) == true)
			{
				overlaps = true;
			}
		}
	}
	return overlaps;
}