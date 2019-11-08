#include <iostream>

using namespace std;

int main()
{
	float Hours;
	float Pay;

	cout << "How many hours did you work this week?" << endl;
	cin >> Hours;

	if (Hours <= 40){
		Pay = Hours * 8.25;
	}
	else{
		Pay = ((Hours - 40) * (8.25 * 1.5)) + 40 * 8.25;
	}

	cout << "Expect to be paid $" << Pay << " for this week's work." << endl;

	return 0;
}