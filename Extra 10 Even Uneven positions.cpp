#include <iostream>
#include <climits>
using namespace std;


int main()
{
    int n;

    cin >> n;

	cout.setf(ios::fixed);
	cout.precision(2);

	double max = INT_MIN, max2 = INT_MIN;
	double min = INT_MAX, min2 = INT_MAX;
	double numEqual = 0, numNot = 0;
	double equalTotal = 0, notTotal = 0;

	for (int i = 0; i <= n; i++)
	{
		if (i % 2 == 0 && i != 0) {

			cin >> numEqual;

			if (numEqual > max) {
				max = numEqual;
			}
			if (numEqual < min) {
				min = numEqual;
			}

			equalTotal += numEqual;
		}
		else if (i % 2 != 0) {

			cin >> numNot;

			if (numNot > max2) {
				max2 = numNot;
			}
			if (numNot < min2) {
				min2 = numNot;
			}

			notTotal += numNot;
		}

	}

	if (n > 1) {
		cout << "OddSum=" << notTotal << "," << endl;
		cout << "OddMin=" << min2 << "," << endl;
		cout << "OddMax=" << max2 << "," << endl;
		cout << "EvenSum=" << equalTotal << "," << endl;
		cout << "EvenMin=" << min << "," << endl;
		cout << "EvenMax=" << max << endl;
	}
	else if (n == 1) {
		cout << "OddSum=" << notTotal << "," << endl;
		cout << "OddMin=" << min2 << "," << endl;
		cout << "OddMax=" << max2 << "," << endl;
		cout << "EvenSum=" << equalTotal << "," << endl;
		cout << "EvenMin=No" << "," << endl;
		cout << "EvenMax=No" << endl;
	}
	else if (n == 0) {
		cout << "OddSum=" << notTotal << "," << endl;
		cout << "OddMin=No" << "," << endl;
		cout << "OddMax=No" << "," << endl;
		cout << "EvenSum=" << equalTotal << "," << endl;
		cout << "EvenMin=No" << "," << endl;
		cout << "EvenMax=No" << endl;
	}
}

