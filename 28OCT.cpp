#include <fstream>
#include  <iostream>
#include <string>

using namespace std;

int main() {

	ifstream in;
	ofstream out;
	string line;

	out.open("list.txt");

	out << "First line" << endl;
	out << "Second line" << endl;

	in.open("list.txt");

	getline(in, line);

	cout << line << endl;





	out.close();
	in.close();
	return 0;

}