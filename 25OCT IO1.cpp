// Program IODemo demonstrates how to use files.

#include <iostream>
#include <fstream>

using namespace std;

int main() {

	float val1, val2, val3, val4;		//Declares 4 variables
	ifstream inData;					//Declares input sttream
	ofstream outData;					//Declares output stream

	outData << fixed << noshowpoint;
	outData.precision(0);

	inData.open("InData.txt");
	//Binds program variable inData to file "InData.txt"
	outData.open("OutData.txt");
	//Binds program variable outData to file "OutData.txt"

	inData >> val1 >> val2 >> val3 >> val4; //Inputs 4 values
	outData << val4 << endl;
	outData << val3 << endl;
	outData << val2 << endl;
	outData << val1 << endl; //Outputs 4 values in reverse order
	return 0;

}