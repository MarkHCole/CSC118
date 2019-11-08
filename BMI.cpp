#include <iostream>

using namespace std;

int main() {

	const int BMI_CONSTANT = 703;
	float weight;
	float height;
	float bodyMassIndex;
	bool dataAreOK;


	do {
		cout << "What is your height in inches?" << endl;
		cin >> height;
		cout << "What is your weight in pounds?" << endl;
		cin >> weight;

		if (weight <= 0 || height <= 0) {
			dataAreOK = false;
			cout << "ERROR.  Height and weight must be greater than 0.  Re-enter information." << endl;
		}
		else { dataAreOK = true; }
	} while (dataAreOK == false);

	bodyMassIndex = weight * BMI_CONSTANT / (height * height);

	cout << "Your BMI is " << bodyMassIndex << "." << endl;
	cout << "Interpretation and instructions" << endl;

	if (bodyMassIndex < 20) {
		cout << "Underweight: Eat more food." << endl;
	}
	else if (bodyMassIndex <= 25) {
		cout << "Normal: Keep doing what you're doing." << endl;
	}
	else if (bodyMassIndex <= 30) {
		cout << "Overweight: Diet and exercise." << endl;
		}
	else {
		cout << "Obese: Seek immediate medical advice." << endl;
	}

	return 0;
}