#include <iostream>
#include <string>

using namespace std;

int main()
{
	float total;
	float reading;
	total = 0;
	cout << "Enter meter reading" << endl;
	cin >> reading;

	if (reading < 5000) {
		total = reading * 0.25;
		
	}
	else if (reading < 10000)
	{
		total = (reading - 5000) * 0.5 + (5000 * 0.25);
		
	}
	else if (reading < 20000)
	{
		total = (reading - 10000) + 3750;

	}
	else {
		cout << "Water line requires inspection." << endl;
	}
	cout << total << endl;
	return 0;
}