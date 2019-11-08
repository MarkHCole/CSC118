// 09 SEP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	string first;
	string mlname;
	string middle;
	string last;

	cout << "Please enter your full name." << endl;
	getline(cin, name);
	
	cout << "The number of characters is "<< name.length()<< endl;

	first = name.substr(0, name.find(" "));
	mlname = name.substr(name.find(" ")+1, name.length());

	
	middle = mlname.substr(0, mlname.find (" "));

	last = mlname.substr(mlname.find (" ")+1, mlname.length());

	cout << first << endl;
	cout << middle << endl;
	cout << last << endl;

	return 0;
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
