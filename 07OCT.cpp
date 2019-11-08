// 07OCT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int Square(int);
int Jasper(int, int);
int Poly(int, int, int);
string Eat(string);

int main()
{
	cout << Square(5) << endl;
	cout << Jasper(5, 6) << endl;
	cout << Poly(5, 8, 7) << endl;
	cout << Eat("Food") << endl;
	return 0;
}

int Square(int x) {
	int y;
	y = x * x;
	return y;
}

int Jasper(int x, int y) {
	int z;
	z = x + y;
	return z;

}

int Poly(int x, int z, int k) {
	int y;
	y = 3 * (x * x) + (4 * z) + (5 * k) + 8;
	return y;

}

string Eat(string) {

	return "Om nom nom nom";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
