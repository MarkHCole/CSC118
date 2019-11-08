#include <iostream>

using namespace std;

int add(int, int);
int increment(int);

int main() {
	int x = 5;
	cout<<add(3, 8)<<endl;
	cout << increment(x) << endl;
	cout << x << endl;

}

int add(int x, int y) {

	return x + y;

}

int increment(int x) {
	int y;
	x++;
	y=x;
	return y;

}