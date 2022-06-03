#include <iostream>
using namespace std;


int main()
{
    int browserAmount, salary;

    cin >> browserAmount >> salary;
	
	string type;

	for (size_t i = 1; i <= browserAmount; i++)
	{
		cin >> type;

		if (type == "Facebook") {
			salary -= 150;
		}
		else if (type == "Instagram") {
			salary -= 100;
		}
		else if (type == "Reddit") {
			salary -= 50;
		}


		if (salary <= 0) {
			cout << "You have lost your salary." << endl;
			return 0;
		}
	}

	cout << salary;
}

