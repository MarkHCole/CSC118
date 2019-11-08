// This program tests whether or not an initialized value
// is equal to a value input by the user

// MARK COLE

#include <iostream>
using namespace std;

int main()
{
	int num1;	// num1 is not initialized
	int	num2 = 5;	//  initialized number to 5

	cout << "Please enter an integer" << endl;
	cin >> num1;

	cout << "num1 = " << num1 << " and num2 = " << num2 << endl;
	//fixed the conditional error here..........
	if (num2 == num1) {
		cout << "Hey, that's a coincidence!" << endl;
	};

	if (num1 != num2) {
		cout << "The values are not the same" << endl;
	};

	return 0;
}
