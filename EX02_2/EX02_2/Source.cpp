//
// Program Name: EX02_2: Algebra: Quadratic Equations
// Name: Jacob Martin
// Date: 2.23.2016
// Class and Section: Computer Science II SEC II
//

#include<iostream>
#include<cmath>
#include"Header.h"
using namespace std;

/*This program defines a class for a quadratic equation*/

int main()
{
	//constructs a default quadratic equation with coefficients 1, 2, and 3 for testing
	QuadraticEquation defaultEquation;
	//outputs coefficients of default equation
	cout << "Default coefficients: " << defaultEquation.geta() << "  " << defaultEquation.getb() << "  " << defaultEquation.getc() << endl;
	//determines descriminant of default equation
	double defaultDescriminant = defaultEquation.getDescriminant();
	//outputs descriminant
	cout << "Descriminant = " << defaultDescriminant << endl;
	//if/else sries outputs roots of default equation
	if (defaultDescriminant > 0)
	{
		cout << "Root 1 = " << defaultEquation.getRoot1(defaultDescriminant) << "  Root 2 =	" << defaultEquation.getRoot2(defaultDescriminant) << endl;
	}
	else if (defaultDescriminant == 0)
	{
		cout << "Root = " << defaultEquation.getRoot1(defaultDescriminant) << endl;
	}
	else
		cout << "This equation has no real roots." << endl;
	//initializes coefficients for storage of user input
	double first = 0;
	double second = 0;
	double third = 0;
	//prompts user to input coefficients
	cout << "Enter first coefficient: ";
	cin >> first;
	cout << "\nEnter second coefficient: ";
	cin >> second;
	cout << "\nEnter third coefficient: ";
	cin >> third;
	//constructs quadratic equation based on user input
	QuadraticEquation customEquation(first, second, third);
	//outputs coefficients of custom equation
	cout << "\nDefault coefficients: " << customEquation.geta() << "  " << customEquation.getb() << "  " << customEquation.getc() << endl;
	//determines descriminant of default equation
	double customDescriminant = customEquation.getDescriminant();
	//outputs descriminant
	cout << "Descriminant = " << customDescriminant << endl;
	//if/else sries outputs roots of default equation
	if (customDescriminant > 0)
	{
		cout << "Root 1 = " << customEquation.getRoot1(customDescriminant) << "  Root 2 =	" << customEquation.getRoot2(customDescriminant) << endl;
	}
	else if (customDescriminant == 0)
	{
		cout << "Root = " << customEquation.getRoot1(customDescriminant) << endl;
	}
	else
		cout << "This equation has no real roots." << endl;
	return 0;
}