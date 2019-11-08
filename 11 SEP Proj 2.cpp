// Program StrDemo demonstrates string functions.
#include <iostream>
#include <string>
using namespace std;

const string str = "The bananas are not supposed to go in a juicer.";
const string Findme = "not";

int main()
{
	string name = "robin ghosh";
	cout << str << endl;
	cout << str.length() << endl;
	cout << str.capacity() << endl;
	name.resize(5);
	cout << "After execution of the resize function name is now: " << name << endl;
	cout << str.find("The") << endl;
	cout << str.find(Findme) << endl;
	cout << str.substr(17, 6) << endl;
	cout << str.substr(17, 23) << endl;
	cout << str.substr(17, 23).length() << endl;
	cout << "Character in the 4th position of TITLE is "
		<< str.at(4);
	cout << endl;
	return 0;
}
