// Program Dinner prints out a dinner menu            // 1

#include <iostream>
#include <string>

using namespace std;

string SALAD = "Green Salad";                          // 2
string MEAT = "Chicken Marsala";                       // 3
string VEGGIE = "Carrots in lemon butter";           // 4
string STARCH = "Mashed potatoes";                            // 5
string DESSERT = "Banana Pudding";


int main()                                             // 6
{
	string mainCourse;                                  // 7

	cout << "First course: " << SALAD << endl;       // 8
	mainCourse = MEAT + " with " + VEGGIE + " and " + STARCH + ".";         // 9
										   // 10
	cout << "Main course: " << mainCourse << endl;   // 11
	cout << "Dessert: " << DESSERT << endl;

	return 0; // 12
}                                                     // 13
