#include <iostream>
#include <string>

using namespace std;

int main() {
	
	float x;
	float y;
	float sum;
	
	cout << "Please enter number of hours worked." << endl;
	cin >> x;

	cout << "Please enter your pay rate." << endl;
	cin >> y;


	sum = x * y;

	cout << "You should get paid: $" << sum <<"."<< endl;


	return 0;

}