//Program to calculate the hourly distance covered by a vehicle traveling at a set speed.
//Mark Cole

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float speed, time, distance;  //required variables for calculation
	int loopctrl=1;  //loop control variable

	cout << "What is the average speed the vehicle is traveling?" << endl;
	cin >> speed;
	cout << "How many hours is it going to be traveling?" << endl;
	cin >> time;
	cout << setw(12) << "Hour" << setw(22) << "Distance" << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	while (loopctrl <= time) {

		distance = speed * loopctrl;

		cout << setw(10) << loopctrl  << setw(20) << distance << endl;

		loopctrl++;

	}
}
