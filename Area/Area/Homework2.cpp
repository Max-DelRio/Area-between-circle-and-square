/*
Max Del Rio
Homework 1
Date Due: Thu, 05 October 2017
Visual Studio 2015
Make a program that calculates the area between the circle and outside edge of a square. Use a while loop to a make sure the circle fits inside of the square.
*/

#include <iostream>


using namespace std;

int main()
{
	double radius = 0;
	double side = 0;
	double AreaSquare = 0;
	double AreaCircle = 0;
	double AreaBetween = 0;
	double diameter = 0;
	char ch = 0;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);


	while ((AreaCircle <= AreaSquare) && (ch !='q'))
	{
		
		//Ask the user for the value of the radius in inches
		cout << "Please enter radius of the circle in inches: ";
		//Read data from console and store it in radius
		cin >> radius;

		//Ask the user for the value of the side of the square
		cout << "Please enter the length of the side of the square in inches: ";
		//Read data from console and store it in side
		cin >> side;

		//If the radius * 2 > side ask the user to input a value for the diameter less than the side.
		if (radius * 2 > side)
		{
			//Ask the user for a diameter that is less than the side of the square in inches
			cout << "Please enter a diameter less than the side of the square in inches: ";
			//Read data from console and store it in diameter
			cin >> diameter;
			
		}

		//Calculates the area of the circle and outputs the value in inches
		AreaCircle = 3.14 * radius * radius;
		cout << "The area of the circle is: " << AreaCircle << " inches" << endl;

		//Calculates the area of the square and outputs the value in inches
		AreaSquare = side * side;
		cout << "The area of the square is: " << AreaSquare << " inches" << endl;

		//Calculates the area between the square and circle and outputs the value in inches
		AreaBetween = AreaSquare - AreaCircle;
		cout << "The area between the square and circle is: " << AreaBetween << " inches" << endl;

		//Ask the user to re-enter the data or to quit the program
		cout << "To re-enter the data press 'y' or press 'q' to quit: ";
		cin.ignore();
		ch = cin.get();
	}

	system("Pause");
	
	return 0;
}