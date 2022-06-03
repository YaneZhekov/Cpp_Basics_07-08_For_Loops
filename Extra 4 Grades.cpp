#include <iostream>
using namespace std;


int main()
{
    int students;

    cin >> students;

    double grade;
    int fail = 0;
    int weak = 0;
    int average = 0;
    int topstudent = 0;
    
    double allGrades = 0;


    for (size_t i = 0; i < students; i++)
    {
        cin >> grade;

        allGrades += grade;

        if (grade >= 2 && grade <= 2.99) {
            fail++;
        }
        else if (grade >= 3 && grade <= 3.99) {
            weak++;
        }
        else if (grade >= 4 && grade <= 4.99) {
            average++;
        }
        else if (grade >= 5.00) {
            topstudent++;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    double averageGrades = (double)allGrades / students;

    double percFail = (double)fail / students * 100;
    double percWeak = (double)weak / students * 100;
    double percAverage = (double)average / students * 100;
    double percTop = (double)topstudent / students * 100;

    cout << "Top students: " << percTop << "%" << endl;
    cout << "Between 4.00 and 4.99: " << percAverage << "%" << endl;
    cout << "Between 3.00 and 3.99: " << percWeak << "%" << endl;
    cout << "Fail: " << percFail << "%" << endl;
    cout << "Average: " << averageGrades;
}
