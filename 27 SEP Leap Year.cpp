// Leap Year Program
// It does what's printed on the tin
// Mark Cole

#include <iostream>

using namespace std;

bool IsLeapYear(int);

int main()
{
	int year;

	cout << "Enter a year CE, for example, 1997 or 2134." << endl;
	cin >> year;

	if (IsLeapYear(year))
		cout << year << " is a leap year." << endl;
	else
		cout << year << " isn't a leap year." << endl;
	return 0;

}

bool IsLeapYear(int year)
{
	if (year % 4 != 0)
		return false;
	else if (year % 100 != 0)
		return true;
	else if (year % 400 != 0)
		return false;
	else
		return true;


}