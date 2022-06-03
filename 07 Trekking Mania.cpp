#include <iostream>
using namespace std;


int main()
{
	int groupAmount;

	cin >> groupAmount;

	cout.setf(ios::fixed);
	cout.precision(2);

	int totalPeople = 0;

	int mus = 0;
	int mon = 0;
	int kil = 0;
	int k2 = 0;
	int eve = 0;

	for (size_t i = 0; i < groupAmount; i++)
	{	
		int peoplePerGroup;
		cin >> peoplePerGroup;

		totalPeople += peoplePerGroup;

		if (peoplePerGroup < 6) {
			mus += peoplePerGroup;
		}
		else if (peoplePerGroup > 5 && peoplePerGroup < 13) {
			mon += peoplePerGroup;
		}
		else if (peoplePerGroup > 12 && peoplePerGroup < 26) {
			kil += peoplePerGroup;
		}
		else if (peoplePerGroup > 25 && peoplePerGroup < 41) {
			k2 += peoplePerGroup;
		}
		else if (peoplePerGroup > 40) {
			eve += peoplePerGroup;
		}
	}

	double p1 = (double)mus / totalPeople * 100.00;
	double p2 = (double)mon / totalPeople * 100.00;
	double p3 = (double)kil / totalPeople * 100.00;
	double p4 = (double)k2 / totalPeople * 100.00;
	double p5 = (double)eve / totalPeople * 100.00;

	cout << p1 << "%" << endl;
	cout << p2 << "%" << endl;
	cout << p3 << "%" << endl;
	cout << p4 << "%" << endl;
	cout << p5 << "%" << endl;

}

