//*********************************************************************
//Format Names program
//This program reads in a SSN, First name, Middle name/initial, and a
//last name from file InName.txt.
//The name is written to file OutName.txt in three formats.
//	1. First, Middle, Last, SSN
//	2. Last, First, Middle, SSN
//	3. Last, First, Middle Initial, SSN
//	4. First, Middle, Last
//*********************************************************************

#include <fstream>  //Access file stream function libraries
#include <string>	//Access string function libraries

using namespace std;

int main() {

	//Declare and open files
	ifstream inData;
	ofstream outData;
	inData.open("InName.txt");
	outData.open("OutName.txt");

	//Declare variables
	string SSN, First, Last, Middle, Initial; //String names are self-explanatory

	//Read in data from file InName.txt
	inData >> SSN >> First >> Middle >> Last;

	//Get Middle Initial and add a period to the end
	Initial = Middle.substr(0, 1) + ".";

	//Output information in required format
	outData << First << " " << Middle << " " << Last << " " << SSN << endl;
	outData << Last << ", " << First << " " << Middle << " " << SSN << endl;
	outData << Last << ", " << First << " " << Initial << " " << SSN << endl;
	outData << First << " " << Initial << " " << Last << endl;

	//Close files
	inData.close();
	outData.close();
	return 0;

}