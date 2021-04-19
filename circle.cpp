#include <iostream>
#include <cmath>
using namespace std;

//This program prompts user to enter circle raduis
//Then the circle area is displayed

int main()
{
	const double TWOPI = 3.14159 * 2;
	double radius;
	cout << "Enter radius: ";
	cin >> radius;

	//Calculate the area of the circle
	double area = TWOPI * pow(radius, 2);
	cout << "The area of a circle with radius " << radius << " is " << area << endl;
	cout << "Finished";
	return 0;
}