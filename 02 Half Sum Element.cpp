#include <iostream>
#include <climits>
using namespace std;


int main()
{
    int n;

    cin >> n;

    int sum = 0;
    int numMax = INT_MIN;
    int num;

    for (int i = 1; i <= n; i++) {
        cin >> num; 

        sum += num;

        if (num > numMax) {
            numMax = num;
        }
    }

    sum -= numMax;

    int diff = abs(sum - numMax);

    if (sum == numMax) {
        cout << "Yes" << endl << "Sum = " << numMax;
    }
    else {
        cout << "No" << endl << "Diff = " << diff;
    }
}

