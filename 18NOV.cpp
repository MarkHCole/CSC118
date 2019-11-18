#include <iostream>

using namespace std;

int main() {
	for (int c = 2; c >= 1; c--) {
		for (int b = 5; b >= 1; b--) {
			for (int aa = 2; aa >= 1; aa--) {
				for (int a = 5; a >= 1; a--) {

					cout << "* ";

				}
				cout << "  ";
			} 
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}