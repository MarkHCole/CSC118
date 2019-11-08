// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise

// MARK COLE

#include <iostream>
using namespace std;

int main()
{
	float average;	// holds the grade average

	cout << "Input your average:" << endl;
	cin >> average;
	//fill up the condition
	if (average >= 60)
		cout << "You Passed!  Congratulations!" << endl;

	if (average < 60)
		// print out a cout statement that "you fail"
		cout << "You Fail. Better luck next semester!" << endl;

		return 0;
}
