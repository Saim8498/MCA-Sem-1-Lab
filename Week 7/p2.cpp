#include <iostream>
using namespace std;

int main(){
    char str[100];
    int count=0;
    cout << "Enter string: ";
    cin >> str;
    for (char *ptr = str; *ptr != '\0'; ptr++){
        count++;
    }
    cout << "Count is: " << count;
    return 0;
}