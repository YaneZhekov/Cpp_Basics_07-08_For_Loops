#include <iostream>
using namespace std;


int main()
{
    int hours = 0;
    int minutes = 0;
    int seconds = 0;

    for (size_t i = 0; i < 24; i++)
    {
        for (size_t i = 0; i < 60; i++)
        {
            for (size_t i = 0; i < 60; i++)
            {
                cout << hours << " : " << minutes << " : " << seconds << endl;
                seconds++;
                if (seconds == 60) {
                    minutes++;
                    seconds = 0;
                }
                if (minutes == 60) {
                    hours++;
                    minutes = 0;
                }
            }
        }
    }
}

