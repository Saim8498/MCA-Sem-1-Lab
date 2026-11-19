#include <iostream>
#include <string>
using namespace std;

void chkPalindrome(string str){
    string rev = "";

    for (int i = str.length() - 1; i >= 0; i--){
        rev = rev + str[i];
    }

    if (str == rev)
        cout << "Palindrome.";
    else
        cout << "Not Palindrome.";
}

int main(){
    string str;

    cout << "Enter a string: ";
    cin >> str;

    chkPalindrome(str);

    return 0;
}
