#include <iostream>
using namespace std;


int main()
{
    int numbers;

    cin >> numbers;

	int num;
	int equal = 0;
	int aequal = 0;
	
	for (size_t i = 0; i < numbers; i++)
	{
		if (i % 2 != 0) {
			cin >> num;
			aequal += num;
		}
		if (i % 2 == 0) {
			cin >> num;
			equal += num;
		}
	}
	

	if (equal == aequal) {
		cout << "Yes" << endl << "Sum = " << equal << endl;

	}
	else if (equal != aequal) {
		cout << "No" << endl << "Diff = " << abs(equal - aequal) << endl;
	}
}

