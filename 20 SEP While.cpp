// Mark Cole

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	int number;
	int guess;
	int count=0;

	number = rand() % 10;

	//Do forces the while to be executed once
	do {
		 

			cout << "Guess what the number is." << endl;
			cin >> guess;

			if (guess > number) {

				cout << "Go down" << endl;
			}

			if (guess < number) {

				cout << "Go up" << endl;
			}
			count++;
	}while (guess != number);
	
	
	cout << "You guessed it!  You took " << count << " guesses.";

	return 0;
}