#include <iostream>

using namespace std;

int main() {

	int M, D, Y;

	cout << "To see if a date is magic, enter the two digit month." << endl;
	cin >> M;
	cout << "Now, enter the two digit day." << endl;
	cin >> D;
	cout << "Finally, enter the two digit year." << endl;
	cin >> Y;

	if ((M * D) == Y) {
		cout << "The date you entered is magical!  The Month times the Day equals the Year!" << endl;
	}
	else {
		cout << "The date you entered is not magic." << endl;
	}
	return 0;
}