#include <iostream>
#include <cmath>
using namespace std;


int main() {

	int pairs;

	cin >> pairs;

	int num;
	int total = 0;

	int leftSum = 0;
	int rightSum = 0;

	for (size_t i = 0; i < pairs; i++)
	{
		cin >> num;
		
		leftSum += num;

	}

	for (size_t i = 0; i < pairs; i++)
	{
		cin >> num;

		rightSum += num;

	}


	if (leftSum == rightSum) {
		cout << "Yes, sum = " << leftSum << endl;

	}
	else if (leftSum != rightSum) {
		cout << "No, diff = " << abs(leftSum - rightSum) << endl;
	}


}