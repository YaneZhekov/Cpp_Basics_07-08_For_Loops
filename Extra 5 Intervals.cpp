#include <iostream>
using namespace std;


int main()
{
	int moves;

	cin >> moves;

	double totalPoints = 0;
	int squad1 = 0;
	int squad2 = 0;
	int squad3 = 0;
	int squad4 = 0;
	int squad5 = 0;
	int invalid = 0;
	for (size_t i = 0; i < moves; i++)
	{
		int num;
		cin >> num;

		if (num >= 0 && num <= 9) {
			totalPoints += num * 0.2;
			squad1++;
		}
		else if (num >= 10 && num <= 19) {
			totalPoints += num * 0.3;
			squad2++;
		}
		else if (num >= 20 && num <= 29) {
			totalPoints += num * 0.4;
			squad3++;
		}
		else if (num >= 30 && num <= 39) {
			totalPoints += 50;
			squad4++;
		}
		else if (num >= 40 && num <= 50) {
			totalPoints += 100;
			squad5++;
		}
		else if (num > 50 || num < 0) {
			totalPoints /= 2;
			invalid++;
		}
	}

	double perc1 = (double)squad1 / moves * 100;
	double perc2 = (double)squad2 / moves * 100;
	double perc3 = (double)squad3 / moves * 100;
	double perc4 = (double)squad4 / moves * 100;
	double perc5 = (double)squad5 / moves * 100;
	double perc6 = (double)invalid / moves * 100;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << totalPoints << endl;
	cout << "From 0 to 9: " << perc1 << "%" << endl;
	cout << "From 10 to 19: " << perc2 << "%" << endl;
	cout << "From 20 to 29: " << perc3 << "%" << endl;
	cout << "From 30 to 39: " << perc4 << "%" << endl;
	cout << "From 40 to 50: " << perc5 << "%" << endl;
	cout << "Invalid numbers: " << perc6 << "%";
}

