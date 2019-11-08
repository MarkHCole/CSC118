#include <iostream>

using namespace std;

int main() {

	float F;
	float C;

	cout << "Enter temperature in Fahrenheit." << endl;
	cin >> F;

	C = ((F - 32) * .55555555555);

	cout << "The temperature in Celcius is " << C << endl;

	return 0;

}