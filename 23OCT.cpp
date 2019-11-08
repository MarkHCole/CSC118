#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string L1;

	ofstream outfile;
	outfile.open("text.txt");
	outfile << "This is the first line of the text file." << endl;
	outfile << "This is the second line of the text file." << endl;

	ifstream infile;
	infile.open("text.txt");
	if (infile.fail()) {
		cout << "Can not open file." << endl;
		exit(1);
	}
	
	while (!infile.eof()) {
		getline(infile, L1);
				cout << L1<<endl;
	}


	outfile.close();
	infile.close();
	return 0;

}