#include <iostream>
#include <string>

using namespace std;

int main()
{
	//If the initial input variables are set up as "int" then the decimal place will be dropped off of the sum.
	//To calculate the average of a set of 5 variables: (A+B+C+D+E)/5

	float A = 28;
	float B = 32;
	float C = 37;
	float D = 24;
	float E = 33;
	float sum;

	sum = (A + B + C + D + E) / 5;

	cout << "The average of " << A << ", " << B << ", " << C << ", " << D << ", and " << E << " is " << sum << "." <<endl;

	return 0;
}