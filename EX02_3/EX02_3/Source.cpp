//
// Program Name: EX02_3: the EvenNumber Class
// Name: Jacob Martin
// Date: 2.25.2016
// Class and Section: Computer Science II SEC II
//

#include<iostream>
#include"Header.h"
using namespace std;

/*This program creates objects for even numbers and determines the previous and next values.*/
int main()
{
	//creates an even number with value 16
	EvenNumber sixteen(16);
	//outputs current even number
	cout << "Current number: " << sixteen.getValue() << endl;
	//outputs next number
	cout << "Next number: " << sixteen.getNext(sixteen.getValue()).getValue() << endl;
	//outputs previous number
	cout << "Previous number: " << sixteen.getPrevious(sixteen.getValue()).getValue() << endl;
	return 0;
}