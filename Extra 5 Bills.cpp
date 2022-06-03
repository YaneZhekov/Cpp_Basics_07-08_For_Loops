#include <iostream>
using namespace std;


int main()
{
    int months;

    cin >> months;

	double electricity = 0;
	double water = 0;
	double wifi = 0;
	double other = 0;
	double average = 0;

	for (size_t i = 0; i < months; i++)
	{
		double perMonth;
		cin >> perMonth;

		electricity += perMonth;
		water += 20;
		wifi += 15;
		other = (electricity + water + wifi) * 1.2;
	}

	double totalPrice = electricity + water + wifi + other;
	average = totalPrice / months;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "Electricity: " << electricity << " lv" << endl;
	cout << "Water: " << water << " lv" << endl;
	cout << "Internet: " << wifi << " lv" << endl;
	cout << "Other: " << other << " lv" << endl;
	cout << "Average: " << average << " lv" << endl;

}

