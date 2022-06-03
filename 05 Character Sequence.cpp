#include <iostream>
#include <string>
using namespace std;


int main()
{
    string word;
    getline(cin, word);
    
    for (int i = 0; i <= word.length() - 1; i++) {
        cout << word[i] << endl;
    }
}
