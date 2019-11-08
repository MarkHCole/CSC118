// 04SEP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	float hours;
	float rate;
	float pay;

	cout << "Please state your name for the record." << endl;
	getline(cin, name);

	cout << "How many hours did you work, " <<name<< "?" << endl;
	cin >> hours;
	
	cout << "What is your payrate, "<< name<< "?" << endl;
	cin >> rate;

	if (hours <= 40) {
		pay = hours * rate;
	}
	else{
		pay = ((hours - 40) * rate * 1.5) + (rate*40);
		cout << "You worked too many hours.  Keep payroll in mind when scheduling." << endl;
	}


	cout << name << ", your pay for this week was $" << pay << endl;

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
