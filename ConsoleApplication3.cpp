#include <iostream>
#include <string>

using namespace std;

int main() {
	string first;
	string middle;
	string last;
	string full;

	cout << "Please enter full name (First Middle Last)" << endl;
	getline(cin,full);

	first = full.substr(0, full.find(" "));
	full = full.substr(full.find(" ")+1, full.length());
	middle = full.substr(0, full.find(" "));
	last = full.substr(full.find(" ")+1, full.length());
	cout << first << endl << middle << endl << last << endl;

	return 0;

}