#include <iostream>
#include <string>
using namespace std;


int main()
{
    
    string word; 
    
    getline(cin, word);

    int sum = 0;

    for (int number = 0; number < word.length(); number++) {

        char letter = word[number];
        if (letter == 'a') {
            sum += 1;
        }
        else if (letter == 'e') {
            sum += 2;
        }
        else if (letter == 'i') {
            sum += 3;
        }
        else if (letter == 'o') {
            sum += 4;
        }
        else if (letter == 'u') {
            sum += 5;
        }

    }

    cout << sum << endl;
}

