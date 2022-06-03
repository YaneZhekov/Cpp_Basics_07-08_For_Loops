#include <iostream>
using namespace std;

int main()
{
    int period, patients;

	cin >> period;

	int doctors = 7;
	int diff = 0;
	int takenCare = 0;
	int notTakenCare = 0;
	
	for (size_t i = 1; i <= period; i++)
	{
		cin >> patients;
		
		diff = doctors - patients;

		if (diff >= 0) {
			takenCare += patients;
		}
		else if (diff < 0) {
			takenCare += doctors;
			notTakenCare += abs(diff);
		}
		if (takenCare < notTakenCare && (i+1) % 3 == 0) {
			doctors++;
		}

	}

	cout << "Treated patients: " << takenCare << "." << endl;
	cout << "Untreated patients: " << notTakenCare << ".";
}

