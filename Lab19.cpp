//Brandon Henry
// Lab 14 
// This program  displays a menu and asks the user to select a option from the menu then calculates the area of what shape they picked 
// then displays the code 

#include <iostream>

using namespace std;


int main() {
	cout << " Brandon Henry CS 1361 - Lab 14 " << endl; //id 
														// variables
	double pi = 3.1459;
	short choice;
	short radius;
	short length;
	short width;
	short base;
	short height;

	
	//menu
	cout << "Geometry Calculator " << endl << endl;
	cout << "1. Calculate the Area of a Circle " << endl;
	cout << "2. Calculate the Area of a Rectangle" << endl;
	cout << "3. Calculate the Area of a Triangle " << endl;
	cout << "4. Quit" << endl;

	//input
	cout << "Enter your choice " << endl;
	cin >> choice; //input

				   // statement   
	switch (choice)
	{
		// if () then()
	case 1:
		cout << " What is the radius fo the circle?" << '\n';
		cin >> radius;
		cout << pi*pow(radius, 2) << '\n';
		break;
	case 2:
		cout << "What is the length  ";
		cin >> length;
		cout << "What is the width  ";
		cin >> width;
		cout << length*width << endl;
		break;

	case 3:
		cout << "What is th length of the triangle's base " << '\n';
		cin >> base;
		cout << "What is the height of the triangle  " << endl;
		cin >> height;

		cout << base*height*.5 << endl;

		break;

	case 4:
		// the else statment 
		cout << "Quit" << '\n';
		break;
	default: cout << " Error Data Not Valid" << '\n' << endl;
	}


	system("pause");
	return (0);
}
