//Progam to calculate Area of a circle from the Diameter
//Mark Cole  
#include <iostream>

using namespace std;

int main() {

	float Diameter;  //Defined by User input
	float Radius;  //Intermediary Variable used for calculation
	float Area;  //Used for output
	const float Pi = 3.14159265;  //Pi to 9 Significant Digits

	cout << "Enter the Diameter of the circle." << endl;  //User instructions
	cin >> Diameter;  //Obtaining user input

	Radius = (Diameter / 2) / Pi;  //Diameter equals Radius times 2 Pi.  This solves for Radius.

	Area = (Radius * Radius) * Pi;  //Area equals Radius squared times Pi.  This solves for Area.

	cout << "A circle with a Diameter of " << Diameter << " has an area of " << Area << "." << endl;

	return 0;

}