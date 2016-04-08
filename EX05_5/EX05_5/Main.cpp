//
// Program Name: EX05_5, The Course Class
// Name: Jacob Martin
// Date: 4.7.2016
// Class and Section: Computer Science I SEC 1
//

/*This program adds array expansion, student dropping, and clearing functions.*/
#include"Course.h"

int main()
{
	Course beanMashing("Bean Mashing", 5); //creates a Bean Mashing course of 5 student capacity
	beanMashing.addStudent("Bennifer"); //adds a student called Bennifer to Bean Mashing
	beanMashing.addStudent("Hamburglar"); //adds a student called Hamburglar to Bean Mashing
	beanMashing.addStudent("Idiot"); //adds a student called Idiot to Bean Mashing
	beanMashing.dropStudent("Idiot"); //drops Idiot from Bean Mashing
	
	for (int n = 0; n < beanMashing.getNumberOfStudents(); n++) //outputs students in Bean Mashing
	{
		cout << beanMashing.getStudents()[n] << endl;
	}

	cout << endl;
}