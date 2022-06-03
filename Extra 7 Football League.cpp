#include <iostream>
using namespace std;


int main()
{
    int amountStadium, fansAmount;

    cin >> amountStadium >> fansAmount;

	double sectorA = 0;
	double sectorB = 0;
	double sectorV = 0;
	double sectorG = 0;

	for (size_t i = 0; i < fansAmount; i++)
	{
		char group;
		cin >> group;

		if (group == 'A') {
			sectorA++;
		}
		else if (group == 'B') {
			sectorB++;
		}
		else if (group == 'V') {
			sectorV++;
		}
		else if (group == 'G') {
			sectorG++;
		}
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	double percA = sectorA / fansAmount * 100;
	double percB = sectorB / fansAmount * 100;
	double percV = sectorV / fansAmount * 100;
	double percG = sectorG / fansAmount * 100;
	double percStadium = (double)fansAmount / amountStadium * 100;

	cout << percA << "%" << endl;
	cout << percB << "%" << endl;
	cout << percV << "%" << endl;
	cout << percG << "%" << endl;
	cout << percStadium << "%";
}

