#include <iostream>
using namespace std;


int main()
{
    double inheritedMoney;
    int year;

    cin >> inheritedMoney >> year;

    int diff = year - 1800;

    int moneySpent = 0;
    int age = 18;

    cout.setf(ios::fixed);
    cout.precision(2);

    for (size_t i = 0; i <= diff; i++)
    {
        if (i % 2 == 0) {
            moneySpent += 12000;
            age += 1;
        }
        else if (i % 2 != 0) {
            moneySpent += 12000+ (50*age);
            age += 1;
        }
    }

    double moneyLeft = inheritedMoney - moneySpent;

    if (moneyLeft >= 0) {
        cout << "Yes! He will live a carefree life and will have " << moneyLeft << " dollars left." << endl;

    }
    else if (moneyLeft < 0) {
        cout << "He will need " << abs(moneyLeft) << " dollars to survive." << endl;

    }


}

