#include <iostream>

using namespace std;

int main() {

	int L1, L2, W1, W2;

	cout << "Let's compare some rectangles!  Enter the length of the first rectangle. (Make sure the rectangles have the same units, or else this won't help at all)" << endl;
	cin >> L1;
	cout << "Now the first rectangle's width." << endl;
	cin >> W1;
	cout << "Enter the second rectangle's length." << endl;
	cin >> L2;
	cout << "And the second's width." << endl;
	cin >> W2;

	if ((L1 * W1) > (L2 * W2)) {

		cout << "The first rectangle is bigger." << endl;
	}
	else if ((L1 * W1) == (L2 * W2)) {

		cout << "The rectangles are the same size!" << endl;
	}
	else {

		cout << "The second rectangle is bigger." << endl;
	}

	return 0;
}