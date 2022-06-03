#include <iostream>
using namespace std;


int main()
{
    int amount, a;
    cin >> amount;
    int sum = 0; 

    for (int i = 1; amount >= i; i++) {
        cin >> a;
        sum += a;
    }

    cout << sum << endl;
}
