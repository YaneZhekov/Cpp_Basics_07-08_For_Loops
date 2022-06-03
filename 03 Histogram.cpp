#include <iostream>
using namespace std;


int main()
{
    int n;

    cin >> n;
    
    cout.setf(ios::fixed);
    cout.precision(2);

    int num;

    int p1 = 0;
    int p2 = 0;
    int p3 = 0;
    int p4 = 0;
    int p5 = 0;

    for (int i = 0; i < n; i++) {
        
        cin >> num;

        if (num < 200) {
            p1++;
        }
        else if (num >= 200 && num <= 399) {
            p2++;
        }
        else if (num >= 400 && num <= 599) {
            p3++;
        }
        else if (num >= 600 && num <= 799) {
            p4++;
        }
        else {
            p5++;
        }
    }

    double pp1 = (double)p1 / n * 100.0;
    double pp2 = (double)p2 / n * 100.0;
    double pp3 = (double)p3 / n * 100.0;
    double pp4 = (double)p4 / n * 100.0;
    double pp5 = (double)p5 / n * 100.0;

    cout << pp1 << "%" << endl << pp2 << "%" << endl << pp3
        << "%" << endl << pp4 << "%" << endl << pp5 << "%";
}

