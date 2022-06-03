#include <iostream>
using namespace std;


int main()
{
    int cours;

    cin >> cours;

	int weight;
	int mini = 0;
	int miniWeight = 0;
	int truck = 0;
	int truckWeight = 0;
	int train = 0;
	int trainWeight = 0;

	int totalWeight = 0;

	for (size_t i = 0; i < cours; i++)
	{
		cin >> weight;

		totalWeight += weight;

		if (weight <= 3) {
			mini += weight*200;
			miniWeight += weight;
		}
		else if (weight >= 4 && weight <= 11) {
			truck += weight * 175;
			truckWeight += weight;
		}
		else if (weight >= 12) {
			train += weight * 120;
			trainWeight += weight;
		}
	}

	int totalPrice = train + mini + truck;
	double pricePerTon = (double)totalPrice / totalWeight;
	
	cout.setf(ios::fixed);
	cout.precision(2);
	
	double percMini = (double)miniWeight / totalWeight * 100;
	double percTruck = (double)truckWeight / totalWeight * 100;
	double percTrain = (double)trainWeight / totalWeight * 100;
	
	cout << pricePerTon << endl;
	cout << percMini << "%" << endl;
	cout << percTruck << "%" << endl;
	cout << percTrain << "%";


}
