// 30AUG.cpp : This file contains the 'main' function. Program execution begins and 
//Mark Cole

#include <iostream>

using namespace std;

int main()
{
	// Defining variables for temperature conversion

	float Celcius;
	float Fahrenheit;

	//User data input
			
    cout << "What is the temp in C?"<< endl;
	cin >> Celcius;

	//Math to convert Temp from C to F

	Fahrenheit = Celcius * 9 / 5 + 32;

	//Answer

		cout << "After converting C to F, it is " << Fahrenheit << "." << endl;

	return 0;
}

