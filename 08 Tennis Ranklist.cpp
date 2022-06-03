#include <iostream>
using namespace std;


int main()
{
    int tournaments, startingPoints;

    cin >> tournaments >> startingPoints;

	int allTournaments = 0;

	int wonMatches = 0;

	for (size_t i = 0; i < tournaments; i++)
	{	
		string answer;
		cin >> answer;

		if (answer == "W") {
			startingPoints += 2000;
			allTournaments += 2000;
			wonMatches++;
		}
		else if (answer == "F") {
			startingPoints += 1200;
			allTournaments += 1200;
		}
		else if (answer == "SF") {
			startingPoints += 720;
			allTournaments += 720;
		}
	}

	double averagePoints = allTournaments / tournaments;
	double percentWon = (double)wonMatches / tournaments * 100;

	cout << "Final points: " << startingPoints << endl;
	cout << "Average points: " << averagePoints << endl;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << percentWon << "%";
}

