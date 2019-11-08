#include <iostream>
#include <string>
#include <fstream>
int increment(int&);

using namespace std;

int main() {

	int x = 5;
	cout << x << endl;
	cout << increment(x) << endl;
	cout << x << endl;

	return 0;

}

int increment(int &x) {
	x++;
	return x;
}