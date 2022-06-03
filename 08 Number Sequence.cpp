#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int min = INT_MAX;
    int max = INT_MIN;
    int num, n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;

        if (num < min) {
            min = num;
        }
        if (num > max) {
            max = num;
        }
    }

    cout << "Max number: " << max << endl;
    cout << "Min number: " << min;

    return 0;
}
