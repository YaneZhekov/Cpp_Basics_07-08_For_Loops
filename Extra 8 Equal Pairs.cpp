#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int num1, num2;

    int max = 0;

    int diff = 0, prevSum = 0, currSum = 0;

    for (size_t i = 1; i <= n; i++)
    {

        prevSum = currSum;
        currSum = 0;

        cin >> num1 >> num2;     

        currSum = num1 + num2;

        if (i != 1) {

            diff = abs(currSum - prevSum);

            if (diff != 0 && diff > max) {

                max = diff;
            }
       
        }

    }
 
   
    if (currSum == prevSum || n == 1) {

        cout << "Yes, value=" << currSum;

    }
    else {

        cout << "No, maxdiff=" << max;
    }

}

