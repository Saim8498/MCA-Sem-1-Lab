#include <iostream>
#include <string>
using namespace std;

int main(){
    string S, T;
    int pos;

    cout << "Enter string S: ";
    cin>>S;

    cout << "Enter string T: ";
    cin>>T;

    pos = S.find(T);

    if (pos != string::npos){
        cout << "Position: " << pos;
    }
    else{
        cout << "1";
    }

    return 0;
}