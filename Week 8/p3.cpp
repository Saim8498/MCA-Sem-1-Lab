#include <iostream>
#include <string>
using namespace std;

int main(){
    string str, oldStr, newStr;
    int pos;

    cout << "Enter a sentence: ";
    cin>>str;

    cout << "Enter string to find: ";
    cin >> oldStr;

    cout << "Enter replacement string: ";
    cin >> newStr;

    pos = str.find(oldStr);

    if (pos != string::npos){
        str.replace(pos, oldStr.length(), newStr);
        cout << "Updated sentence: " << str;
    }
    else{
        cout << "String not found!";
    }

    return 0;
}