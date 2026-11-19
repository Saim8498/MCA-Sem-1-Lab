#include <iostream>
#include <string>
using namespace std;

int main(){
    string str, word;
    int count = 0;
    int pos = 0;

    cout << "Enter a sentence: ";
    getline(cin, str);

    cout << "Enter the word to count: ";
    cin >> word;

    while ((pos = str.find(word, pos)) != string::npos){
        count++;
        pos = pos + word.length();
    }

    cout << "Total occurrences: " << count;

    return 0;
}