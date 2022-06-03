#include <iostream>
using namespace std;


int main()
{
    int age, toyPrice;
    double dishwasher;

    cin >> age >> dishwasher >> toyPrice;

    double money = 0;
    double birthdayMoney = 10;

    cout.setf(ios::fixed);
    cout.precision(2);

    for (size_t i = 1; i <= age; i++)
    {
        if (i % 2 == 0) {
            money += birthdayMoney;
            birthdayMoney += 10;
            money -= 1;
        }
        else {
            money += toyPrice;
        }
    }

    double difference = money - dishwasher;

    if (difference >= 0) {
        cout << "Yes! " << difference;
    }
    else {
        cout << "No! " << abs(difference);
    }
}

