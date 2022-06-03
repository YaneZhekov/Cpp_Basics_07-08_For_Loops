#include <iostream>
using namespace std;

int main() {

	int hours = 0, minutes = 0;

	for (size_t i = 0; i < 24; i++)
	{
		for (int i = 0; i < 60; i++) {
			cout << hours << " : " << minutes << endl;
			minutes++;

			if (i == 59) {
				hours++;
				minutes = 0;
			}
		}
	}
}