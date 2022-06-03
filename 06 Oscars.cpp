#include <iostream>
#include <string>
using namespace std;


int main()
{
    string actorName;
    double points;
    int raters;

    getline(cin >> ws, actorName);
    cin >> points >> raters;

    string ratersName;
    double raterPoints;

    cout.setf(ios::fixed);
    cout.precision(1);

    for (int i = 1; i <= raters; i++)
    {
        getline(cin >> ws, ratersName);
        cin >> raterPoints;

        int length = ratersName.length();
        points += (length * raterPoints) / 2.0;

        if (points > 1250.5) {
            cout << "Congratulations, " << actorName << " got a nominee for leading role with " << points << "!";
            return 0;
        }
    }

    double diff = 1250.5 - points;

    cout << "Sorry, " << actorName << " you need " << diff << " more!";
}

